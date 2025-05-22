`include "../define/struct.sv"
module Br_Pred #(
        parameter BHR_WIDTH = 3
    ) (
        input clock,
        input reset,
        // commit
        input br_valid,
        input br_is_taken,
        input [31:0] br_pc,
        input rv_br_type br_pc_type,
        input [31:0] br_npc,
        input br_ready,

        input [31:0] pc,
        input pc_update,
        output [3:0] killed,
        output [31:0] npc,
        output [3:0] pred_res,
        output npc_valid
    );

    localparam BHR_INDEX_WIDTH = 3;
    localparam PC_INDEX_WIDTH = 2;
    localparam PHT_INDEX_WIDTH = PC_INDEX_WIDTH + BHR_WIDTH;



    // declaration of module BHR
    logic [BHR_WIDTH-1:0] bhr_value0;
    logic [BHR_WIDTH-1:0] bhr_value1;
    logic bhr_w_en;
    logic [BHR_INDEX_WIDTH-1:0] bhr_index_w;
    logic [BHR_INDEX_WIDTH-1:0] bhr_index_r0;
    logic [BHR_INDEX_WIDTH-1:0] bhr_index_r1;

    // declaration of module PHT
    logic [3:0] pht_state;

    logic [PHT_INDEX_WIDTH-1:0] pht_index_w;
    logic [PHT_INDEX_WIDTH-3:0] pht_index_r;
    logic pht_w_en;

    // declaration of module RAS
    logic [31:0]ras_waddr;
    logic [31:0]ras_raddr;
    logic ras_w_en;
    logic ras_r_en;

    // declaration of module BTB
    logic [31:0] btb_pc;
    logic btb_r_en;
    logic  [31:0] btb_npc[3:0];
    logic  [1:0]btb_br_type[3:0];
    logic  btb_is_hit;
    logic [31:0]btb_commit_pc;
    logic [1:0]btb_commit_pc_type;
    logic [31:0]btb_commit_npc;
    logic btb_commit;

    // declaration of module First_One_Search
    logic [1:0]pht_state_pos;

    // is_taken
    logic is_taken ;
    logic [31:0]dnpc;
    logic [31:0]snpc;
    logic [31:0] incr;

    // aligned addr
    logic [31:0]pc_align; 
    logic [31:0]br_pc_align;

    // Ras Control
    assign ras_waddr =  snpc;
    assign ras_w_en = (btb_br_type[pht_state_pos] == BR_TYPE_CALL) & pc_update & is_taken & btb_is_hit;
    assign ras_r_en =  (btb_br_type[pht_state_pos] == BR_TYPE_RET) & pc_update & is_taken & btb_is_hit;


    // Pht Control
    assign pht_index_w = {bhr_value1,br_pc[2+:PC_INDEX_WIDTH]};
    assign pht_index_r = {bhr_value0};
    assign pht_w_en = br_valid & br_ready;

    // Bhr Control
    assign bhr_w_en = br_valid & br_ready;

    // BTB Control 
    assign btb_pc = pc;
    assign btb_r_en = is_taken ; 
    assign btb_commit_pc = br_pc;
    assign btb_commit_pc_type = br_pc_type;
    assign btb_commit_npc = br_npc;
    assign btb_commit = br_valid & br_ready ;

    // dnpc generates
    assign dnpc = (btb_br_type[pht_state_pos] == BR_TYPE_RET)?   ras_raddr : btb_npc[pht_state_pos];

    // 判断是否跳转
    assign is_taken = (pc[3:2] == 2'b00)? |pht_state[3:0]:
                      (pc[3:2] == 2'b01)? |pht_state[3:1]:
                      (pc[3:2] == 2'b10)? |pht_state[3:2]:
                      pht_state[3];


    // snpc generates
    assign incr = (pc[3:2] == 2'b00)? 16 :
           (pc[3:2] == 2'b01)? 12 :
           (pc[3:2] == 2'b10)? 8  :
           4 ;
    assign snpc = pc + incr ;

    // npc generators
    assign npc = is_taken? dnpc : snpc;
    assign npc_valid = is_taken ? btb_is_hit:1'b1;

    // killed the inst when taken  
    assign killed = (pht_state_pos == 2'd0)?  {{3{is_taken}},1'd0} :
                    (pht_state_pos == 2'd1)?  {{2{is_taken}},2'd0} :
                    (pht_state_pos == 2'd2)?  {{1{is_taken}},3'd0} :
                    4'd0;
    // every instr jump results
    assign pred_res = pht_state;
    // 16 bytes align
    assign pc_align = {pc[31:4],4'd0};
    assign br_pc_align = {br_pc[31:4],4'd0};


    BTB #(
            .Way(2),
            .BLOCK(4),
            .BLOCK_WIDTH(2),
            .INDEX_WIDTH(3)
        ) u_BTB(
            .clock              	(clock               ),
            .reset              	(reset               ),
            .btb_pc             	(btb_pc              ),
            .btb_r_en           	(btb_r_en            ),
            .btb_npc            	(btb_npc             ),
            .btb_br_type        	(btb_br_type         ),
            .btb_is_hit         	(btb_is_hit          ),
            .btb_commit_pc      	(btb_commit_pc       ),
            .btb_commit_pc_type 	(btb_commit_pc_type  ),
            .btb_commit_npc     	(btb_commit_npc      ),
            .btb_commit         	(btb_commit          )
        );


    RAS u_RAS(
            .clock 	(clock  ),
            .reset 	(reset  ),
            .waddr 	(ras_waddr  ),
            .ras_w_en (ras_w_en   ),
            .ras_r_en (ras_r_en   ),
            .raddr 	(ras_raddr  )
        );




    BHR #(
            .BHR_WIDTH       	(BHR_WIDTH  ),
            .BHR_INDEX_WIDTH 	(BHR_INDEX_WIDTH  ))
        u_BHR(
            .clock       	(clock        ),
            .reset       	(reset        ),

            .is_taken    	(br_is_taken     ),
            .bhr_index_w 	(bhr_index_w  ),
            .bhr_w_en       (bhr_w_en        ),
            .bhr_index_r0 	(bhr_index_r0  ),
            .bhr_index_r1 	(bhr_index_r1  ),

            .bhr_value0   	(bhr_value0    ),
            .bhr_value1     (bhr_value1    )
        );



    PHT #(
            .PHT_INDEX_WIDTH(PHT_INDEX_WIDTH)
        )
        u_PHT(
            .clock       	(clock        ),
            .reset       	(reset        ),

            .pht_index_w 	(pht_index_w  ),
            .is_taken    	(br_is_taken  ),
            .pht_w_en       (pht_w_en     ),
            .pht_index_r 	(pht_index_r  ),

            .pht_state   	(pht_state  )
        );



    hash u_hash (
             .data     (br_pc_align),
             .hash_data(bhr_index_w)
         );

    hash u_hash_1 (
             .data     (pc_align),
             .hash_data(bhr_index_r0)
         );

    hash u_hash_2 (
             .data     (br_pc_align),
             .hash_data(bhr_index_r1)
         );

    First_One_Search #(
                         .DATA_WIDTH  	(4  ),
                         .POS_WIDTH   	(3  ),
                         .CURRENT_POS 	(4  ))
        /* verilator lint_off PINMISSING */
                     u_First_One_Search(
                         .data     	(pht_state      ),
                         .position 	(pht_state_pos  )
                     );



endmodule  //Branch_Predictor
