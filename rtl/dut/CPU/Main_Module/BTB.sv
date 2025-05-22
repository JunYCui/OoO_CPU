module BTB #(
        Way = 2,
        BLOCK = 4,
        BLOCK_WIDTH = 2,
        INDEX_WIDTH = 3
    )
    (
        input clock,
        input reset,
        input [31:0] btb_pc,
        input btb_r_en,
        output [32-1:0] btb_npc[BLOCK-1:0],

        output [2-1:0]btb_br_type[BLOCK-1:0],
        output btb_is_hit,

        input [31:0]btb_commit_pc,
        input [1:0]btb_commit_pc_type,
        input [31:0]btb_commit_npc,
        input btb_commit
    );
    localparam ADDR_WIDTH = 32*BLOCK;
    localparam OFFSET_WIDTH = 2          ;
    localparam TAG_WIDTH = 32 - INDEX_WIDTH - OFFSET_WIDTH - BLOCK_WIDTH;
    localparam BR_TYPE_WIDTH = 2*BLOCK;
    localparam VALID_WIDTH = 1;

    localparam IDLE = 1'b0;
    localparam MISS = 1'b1;

    localparam CACHELINE_WIDTH = ADDR_WIDTH + TAG_WIDTH + VALID_WIDTH + BR_TYPE_WIDTH;

    wire [INDEX_WIDTH-1:0]pc_index;
    wire [TAG_WIDTH-1:0]pc_tag;
    wire [INDEX_WIDTH-1:0]commit_pc_index;
    wire [TAG_WIDTH-1:0]commit_pc_tag;
    wire [TAG_WIDTH-1:0]cache_tag[Way-1:0];
    wire [BLOCK_WIDTH-1:0]block_choice;
    // |0|valid|1:25|Tag|26:33|br_type0 br_type1 br_type2 br_type3|
    // |34:161|btb_npc0 btb_npc1 btb_npc2 btb_npc3 |
    reg [CACHELINE_WIDTH-1:0] Cache[2**INDEX_WIDTH-1:0][Way-1:0];
    reg state;


    always @(posedge clock ) begin
        if(btb_commit) begin
            if(Cache[commit_pc_index][0][0] == 1'b0) begin
                Cache[commit_pc_index][0][TAG_WIDTH + VALID_WIDTH-1:0] <= {commit_pc_tag,1'b1};
                case(block_choice)
                    2'b00: begin
                        Cache[commit_pc_index][0][VALID_WIDTH+2-1:VALID_WIDTH] <= btb_commit_pc_type;
                        Cache[commit_pc_index][0][VALID_WIDTH + BR_TYPE_WIDTH + TAG_WIDTH+32-1:VALID_WIDTH + BR_TYPE_WIDTH + TAG_WIDTH] <= btb_commit_npc;
                    end
                    2'b01: begin
                        Cache[commit_pc_index][0][VALID_WIDTH+4-1:VALID_WIDTH+2] <= btb_commit_pc_type;
                        Cache[commit_pc_index][0][VALID_WIDTH + BR_TYPE_WIDTH + TAG_WIDTH+64-1:VALID_WIDTH + BR_TYPE_WIDTH + TAG_WIDTH + 32] <= btb_commit_npc;
                    end
                    2'b10: begin
                        Cache[commit_pc_index][0][VALID_WIDTH+6-1:VALID_WIDTH+4] <= btb_commit_pc_type;
                        Cache[commit_pc_index][0][VALID_WIDTH + BR_TYPE_WIDTH + TAG_WIDTH+96-1:VALID_WIDTH + BR_TYPE_WIDTH + TAG_WIDTH + 64] <= btb_commit_npc;
                    end
                    2'b11: begin
                        Cache[commit_pc_index][0][VALID_WIDTH+8-1:VALID_WIDTH+6] <= btb_commit_pc_type;
                        Cache[commit_pc_index][0][VALID_WIDTH + BR_TYPE_WIDTH + TAG_WIDTH+128-1:VALID_WIDTH + BR_TYPE_WIDTH + TAG_WIDTH + 96] <= btb_commit_npc;
                    end
                    default:begin
                        Cache[commit_pc_index][0][VALID_WIDTH+2-1:VALID_WIDTH] <= btb_commit_pc_type;
                        Cache[commit_pc_index][0][VALID_WIDTH + BR_TYPE_WIDTH + TAG_WIDTH+32-1:VALID_WIDTH + BR_TYPE_WIDTH + TAG_WIDTH] <= btb_commit_npc;                        
                    end
                endcase
            end
            else begin
                Cache[commit_pc_index][1][TAG_WIDTH + VALID_WIDTH-1:0] <= {commit_pc_tag,1'b1};
                case(block_choice)
                    2'b00: begin
                        Cache[commit_pc_index][1][VALID_WIDTH+2-1:VALID_WIDTH] <= btb_commit_pc_type;
                        Cache[commit_pc_index][1][VALID_WIDTH + BR_TYPE_WIDTH + TAG_WIDTH+32-1:VALID_WIDTH + BR_TYPE_WIDTH + TAG_WIDTH] <= btb_commit_npc;
                    end
                    2'b01: begin
                        Cache[commit_pc_index][1][VALID_WIDTH+4-1:VALID_WIDTH+2] <= btb_commit_pc_type;
                        Cache[commit_pc_index][1][VALID_WIDTH + BR_TYPE_WIDTH + TAG_WIDTH+64-1:VALID_WIDTH + BR_TYPE_WIDTH + TAG_WIDTH + 32] <= btb_commit_npc;
                    end
                    2'b10: begin
                        Cache[commit_pc_index][1][VALID_WIDTH+6-1:VALID_WIDTH+4] <= btb_commit_pc_type;
                        Cache[commit_pc_index][1][VALID_WIDTH + BR_TYPE_WIDTH + TAG_WIDTH+96-1:VALID_WIDTH + BR_TYPE_WIDTH + TAG_WIDTH + 64] <= btb_commit_npc;
                    end
                    2'b11: begin
                        Cache[commit_pc_index][1][VALID_WIDTH+8-1:VALID_WIDTH+6] <= btb_commit_pc_type;
                        Cache[commit_pc_index][1][VALID_WIDTH + BR_TYPE_WIDTH + TAG_WIDTH+128-1:VALID_WIDTH + BR_TYPE_WIDTH + TAG_WIDTH + 96] <= btb_commit_npc;
                    end
                    default:begin
                        Cache[commit_pc_index][1][VALID_WIDTH+2-1:VALID_WIDTH] <= btb_commit_pc_type;
                        Cache[commit_pc_index][1][VALID_WIDTH + BR_TYPE_WIDTH + TAG_WIDTH+32-1:VALID_WIDTH + BR_TYPE_WIDTH + TAG_WIDTH] <= btb_commit_npc;
                    end 
                endcase
            end
        end
    end
    always @(posedge clock) begin
        if(reset)
            state <= IDLE;
        else begin
            case(state)
                IDLE:
                    state <= btb_r_en & ~btb_is_hit? MISS : IDLE;
                MISS:
                    state <= btb_commit?   IDLE:MISS;
            endcase
        end
    end

    assign block_choice = btb_commit_pc[OFFSET_WIDTH+BLOCK_WIDTH-1:OFFSET_WIDTH];
    assign commit_pc_index = btb_commit_pc[OFFSET_WIDTH+BLOCK_WIDTH+INDEX_WIDTH-1:OFFSET_WIDTH+BLOCK_WIDTH];
    assign commit_pc_tag = btb_commit_pc[31:OFFSET_WIDTH+INDEX_WIDTH+BLOCK_WIDTH];
    assign pc_index = btb_pc[OFFSET_WIDTH+INDEX_WIDTH+BLOCK_WIDTH-1:OFFSET_WIDTH+BLOCK_WIDTH];
    assign pc_tag = btb_pc[31:OFFSET_WIDTH+INDEX_WIDTH+BLOCK_WIDTH];

    assign cache_tag[0] = Cache[pc_index][0][VALID_WIDTH+TAG_WIDTH-1:VALID_WIDTH];
    assign cache_tag[1] = Cache[pc_index][1][VALID_WIDTH+TAG_WIDTH-1:VALID_WIDTH];

    assign btb_br_type[0] =  ((pc_tag == cache_tag[0] )& Cache[pc_index][0][VALID_WIDTH])?
           Cache[pc_index][0][VALID_WIDTH+2-1:VALID_WIDTH] : Cache[pc_index][1][VALID_WIDTH+2-1:VALID_WIDTH];
    assign btb_br_type[1] =  ((pc_tag == cache_tag[0] )& Cache[pc_index][0][VALID_WIDTH])?
           Cache[pc_index][0][VALID_WIDTH+4-1:VALID_WIDTH+2] : Cache[pc_index][1][VALID_WIDTH+4-1:VALID_WIDTH+2];
    assign btb_br_type[2] =  ((pc_tag == cache_tag[0] )& Cache[pc_index][0][VALID_WIDTH])?
           Cache[pc_index][0][VALID_WIDTH+6-1:VALID_WIDTH+4] : Cache[pc_index][1][VALID_WIDTH+6-1:VALID_WIDTH+4];
    assign btb_br_type[3] =  ((pc_tag == cache_tag[0] )& Cache[pc_index][0][VALID_WIDTH])?
           Cache[pc_index][0][VALID_WIDTH+8-1:VALID_WIDTH+6] : Cache[pc_index][1][VALID_WIDTH+8-1:VALID_WIDTH+6];

    assign btb_is_hit = ((pc_tag == cache_tag[0])& Cache[pc_index][0][0]) ||
           ((pc_tag == cache_tag[1])& Cache[pc_index][1][0]);

    assign btb_npc[0] = ((pc_tag == cache_tag[0])& Cache[pc_index][0][VALID_WIDTH])?
           Cache[pc_index][0][VALID_WIDTH + BR_TYPE_WIDTH + TAG_WIDTH+32-1:VALID_WIDTH + BR_TYPE_WIDTH + TAG_WIDTH] : Cache[pc_index][1][VALID_WIDTH + BR_TYPE_WIDTH + TAG_WIDTH+32-1:VALID_WIDTH + BR_TYPE_WIDTH + TAG_WIDTH];
    assign btb_npc[1] = ((pc_tag == cache_tag[0])& Cache[pc_index][0][VALID_WIDTH])?
           Cache[pc_index][0][VALID_WIDTH + BR_TYPE_WIDTH + TAG_WIDTH+64-1:VALID_WIDTH + BR_TYPE_WIDTH + TAG_WIDTH + 32] : Cache[pc_index][1][VALID_WIDTH + BR_TYPE_WIDTH + TAG_WIDTH+64-1:VALID_WIDTH + BR_TYPE_WIDTH + TAG_WIDTH + 32];
    assign btb_npc[2] = ((pc_tag == cache_tag[0])& Cache[pc_index][0][VALID_WIDTH])?
           Cache[pc_index][0][VALID_WIDTH + BR_TYPE_WIDTH + TAG_WIDTH+96-1:VALID_WIDTH + BR_TYPE_WIDTH + TAG_WIDTH + 64] : Cache[pc_index][1][VALID_WIDTH + BR_TYPE_WIDTH + TAG_WIDTH+96-1:VALID_WIDTH + BR_TYPE_WIDTH + TAG_WIDTH + 64];
    assign btb_npc[3] = ((pc_tag == cache_tag[0])& Cache[pc_index][0][VALID_WIDTH])?
           Cache[pc_index][0][VALID_WIDTH + BR_TYPE_WIDTH + TAG_WIDTH+128-1:VALID_WIDTH + BR_TYPE_WIDTH + TAG_WIDTH + 96] : Cache[pc_index][1][VALID_WIDTH + BR_TYPE_WIDTH + TAG_WIDTH+128-1:VALID_WIDTH + BR_TYPE_WIDTH + TAG_WIDTH + 96];

endmodule //BTB

