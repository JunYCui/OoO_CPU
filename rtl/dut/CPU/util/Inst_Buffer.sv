`timescale 1ns / 1ps
//****************************************VSCODE PLUG-IN**********************************//
//----------------------------------------------------------------------------------------
// IDE :                   VSCODE     
// VSCODE plug-in version: Verilog-Hdl-Format-3.5.20250220
// VSCODE plug-in author : Jiang Percy
//----------------------------------------------------------------------------------------
//****************************************Copyright (c)***********************************//
// Copyright(C)            Please Write Company name
// All rights reserved     
// File name:              
// Last modified Date:     2025/04/21 15:12:45
// Last Version:           V1.0
// Descriptions:           
//----------------------------------------------------------------------------------------
// Created by:             Please Write You Name 
// Created date:           2025/04/21 15:12:45
// mail      :             Please Write mail 
// Version:                V1.0
// TEXT NAME:              Inst_Buffer.v
// PATH:                   ~/ysyx-workbench/npc/vsrc/CPU/util/Inst_Buffer.v
// Descriptions:           
//                         
//----------------------------------------------------------------------------------------
//****************************************************************************************//

module Inst_Buffer #(
    parameter                           DATA_WIDTH                 = 32    ,
    parameter                           ADDR_WIDTH                 = 32    ,
    parameter                           Depth                      = 8     
) (
    input                               clk                        ,
    input                               rst                        ,
    input                               clr                        ,

    input              [DATA_WIDTH-1: 0]        inst_i                     ,
    input              [DATA_WIDTH-1: 0]        pc_i                       ,
    input                               pred_res_i                 ,

    input                               inst_wen                   ,
    input                               inst_ren                   ,

    output             [DATA_WIDTH-1: 0]        inst1_o                    ,
    output             [ADDR_WIDTH-1: 0]        pc1_o                      ,
    output                              pred_res1_o                ,

    output                              empty                      ,
    output                              full                        
);

    reg                [$clog2(Depth)-1: 0]        w_ptr                       ;
    reg                [$clog2(Depth)-1: 0]        r_ptr                       ;

    reg                [DATA_WIDTH-1: 0]        fifo    [Depth-1:0]  ;
    reg                [ADDR_WIDTH-1: 0]        pc_fifo [Depth-1:0]  ;
    reg                                 pred_fifo[Depth-1:0]        ;
    reg                [$clog2(Depth): 0]        inst_count                  ;


      always @(posedge clk) begin
          fifo[w_ptr] <= inst_wen ? inst_i: fifo[w_ptr];
          pc_fifo[w_ptr] <= inst_wen ? pc_i: pc_fifo[w_ptr];
          pred_fifo[w_ptr] <= inst_wen ? pred_res_i: pred_fifo[w_ptr];
        end

  always @(posedge clk) begin
    if (rst | clr) w_ptr <= 0;
    else if (inst_wen) begin
      w_ptr <= w_ptr + 1;
    end
  end

  always @(posedge clk) begin
    if (rst | clr) r_ptr <= 0;
    else if (inst_ren) begin
      r_ptr <= r_ptr + 1;
    end
  end

  always @(posedge clk) begin
    if (rst | clr) inst_count <= 0;
    else begin
      if(inst_ren)
        inst_count <= inst_count - 1;
      if(inst_wen)
        inst_count <= inst_count + 1;
    end
  end

    assign                              empty                       = (inst_count == 0);
    assign                              full                        = (inst_count == Depth);
    assign                              inst1_o                     = fifo[r_ptr];
    assign                              pc1_o                       = pc_fifo[r_ptr];
    assign                              pred_res1_o                 = pred_fifo[r_ptr];





endmodule
