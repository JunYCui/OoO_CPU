`timescale  1ns/100ps
`include "uvm_macros.svh" // 
import uvm_pkg::*;


`include "my_driver.sv"
module top_tb;

localparam DATA_WIDTH = 8;
localparam ADDR_WIDTH = 8;
localparam Depth = 32;
localparam Fetch_NUM = 4;
// output declaration of module Inst_Buffer
logic [DATA_WIDTH-1:0] inst1_o;
logic [DATA_WIDTH-1:0] inst2_o;
logic [DATA_WIDTH-1:0] inst3_o;
logic [DATA_WIDTH-1:0] inst4_o;
logic [ADDR_WIDTH-1:0] pc1_o;
logic [ADDR_WIDTH-1:0] pc2_o;
logic [ADDR_WIDTH-1:0] pc3_o;
logic [ADDR_WIDTH-1:0] pc4_o;
logic pred_res1_o;
logic pred_res2_o;
logic pred_res3_o;
logic pred_res4_o;
logic [$clog2(Depth)-1:0] inst_count;
logic clk;
logic rst;
logic clr;
logic [DATA_WIDTH-1:0] inst_i[Fetch_NUM-1:0];
logic [DATA_WIDTH-1:0] pc_i[Fetch_NUM-1:0];
logic [Fetch_NUM-1:0]inst_wen;
logic [Fetch_NUM-1:0]inst_ren;
logic [Fetch_NUM-1:0]pred_res_i;


    initial begin
        my_driver drv;
        drv = new("drv",null);
        drv.main_phase(null);
        $finish();
    end

    initial begin
        clk = 0;
        forever begin
          #25  clk = ~clk;
        end
    end    

    initial begin
        rst = 1'b1;
        #50
        rst = 1'b0;
    end

Inst_Buffer #(
    .DATA_WIDTH 	(DATA_WIDTH  ),
    .ADDR_WIDTH 	(ADDR_WIDTH  ),
    .Depth      	(Depth  ),
    .Fetch_NUM  	(Fetch_NUM   ))
u_Inst_Buffer(
    .clk         	(clk          ),
    .rst         	(rst          ),
    .clr         	(clr          ),
    .inst_i      	(inst_i       ),
    .pc_i        	(pc_i         ),
    .pred_res_i  	(pred_res_i   ),
    .inst_wen    	(inst_wen     ),
    .inst_ren    	(inst_ren     ),
    .inst1_o     	(inst1_o      ),
    .inst2_o     	(inst2_o      ),
    .inst3_o     	(inst3_o      ),
    .inst4_o     	(inst4_o      ),
    .pc1_o       	(pc1_o        ),
    .pc2_o       	(pc2_o        ),
    .pc3_o       	(pc3_o        ),
    .pc4_o       	(pc4_o        ),
    .pred_res1_o 	(pred_res1_o  ),
    .pred_res2_o 	(pred_res2_o  ),
    .pred_res3_o 	(pred_res3_o  ),
    .pred_res4_o 	(pred_res4_o  ),
    .inst_count  	(inst_count   )
);



endmodule //top_tb
