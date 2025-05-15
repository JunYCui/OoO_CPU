`include "../define/para.sv"
`timescale 1ns / 1ps

module ALU #(
    parameter                           BW                         = 32    
)
(
    input                               clock                      ,
    input              [BW-1: 0]        d1                         ,
    input              [BW-1: 0]        d2                         ,
    input              [   3: 0]        choice                     ,
    output reg         [BW-1: 0]        res                         
);

    reg                                 choose_add_sub              ;
    wire               [BW-1: 0]        result                      ;
    wire               [BW-1: 0]        d2_inv                      ;
    wire               [BW-1: 0]        d1_inv                      ;
    assign                              d2_inv                      = ~d2;
    assign                              d1_inv                      = ~d1;

always@(*)
    begin
    res = 0;
    case(choice)
    `alu_signed_comparator:begin                      // 比较大小
            choose_add_sub = 1'b1;
            if(d1[BW-1] != d2[BW-1])
                begin
                    if(d1[BW-1] == 1'b1)
                        res[0] = 1;
                    else
                        res[0] = 0;
                end
            else
                begin
                    if(result[BW-1] == 1'b1)
                        res[0] = 1;
                    else
                        res[0] = 0;
                end
            end
    `alu_unsigned_comparator:begin
                choose_add_sub = 1'b0;
                if(d1 < d2)
                    res[0] = 1;
                else
                    res[0] = 0;
            end
    `alu_add: begin                                   //加法
            choose_add_sub = 1'b0;
            res =result;
            end
    `alu_sub: begin                                   //减法
            choose_add_sub = 1'b1;
            res =result;
            end
    `alu_and: begin                                   //�?
            res = d1 & d2;
            choose_add_sub = 1'b0;
            end
    `alu_or: begin                                    //�?
            res = d1 | d2;
            choose_add_sub = 1'b0;
            end
    `alu_xor: begin                                   //异或
            res = (d1 & d2_inv) | (d1_inv & d2) ;
            choose_add_sub = 1'b0;
            end
    `alu_equal:begin                                  //是否相等
            choose_add_sub = 1'b0;
            if(d1 != d2)
                res[0] =  1;
            else
                res[0] =  0;
            end
    `alu_sll:begin                                    //逻辑左移
            choose_add_sub = 1'b0;
            res = d1<<d2[4:0];
    end
/* verilator lint_off WIDTHTRUNC*/
    `alu_srl:begin                                    //逻辑右移
            choose_add_sub = 1'b0;
            res = {{{BW{1'b0}},d1}>>d2[4:0]};                       //[31:0];
    end
    `alu_sra:begin                                    //算术右移
            choose_add_sub = 1'b0;
            res = {{{BW{d1[BW-1]}},d1}>>d2[4:0]};                   //[31:0];
    end
    default:begin
            choose_add_sub = 1'b0;
            res = 0;
    end
    endcase
    
end

add
#(
    .BW                                 (BW                        ) 
)add_inst0
(
    .choose_add_sub                     (choose_add_sub            ),
    .add_1                              (d1                        ),
    .add_2                              (d2                        ),
    .add_2_inv                          (d2_inv                    ),
    .result                             (result                    ) 
);


endmodule

