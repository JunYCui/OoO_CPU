module First_One_Search #(
    parameter DATA_WIDTH = 4,
    parameter POS_WIDTH = 2,
    parameter CURRENT_POS = 4
)
(
    input [DATA_WIDTH-1:0]data,
    output valid,
    output [POS_WIDTH-1:0]position
);

generate
    if(DATA_WIDTH==2)begin:finish
        assign position = data[0]? (CURRENT_POS-1)/2 : (CURRENT_POS+1)/2;
        assign valid = |data;
    end
    else begin:recursive
        logic [DATA_WIDTH/2-1:0]high_half_data;
        logic [DATA_WIDTH/2-1:0]low_half_data;
        logic [POS_WIDTH-1:0]position_low;
        logic [POS_WIDTH-1:0]position_high;
        logic valid_high;
        logic valid_low;
        First_One_Search #(
            .DATA_WIDTH (DATA_WIDTH/2),
            .POS_WIDTH(POS_WIDTH),
            .CURRENT_POS(CURRENT_POS+DATA_WIDTH/2)
        ) high(
            .data(high_half_data),
            .valid(valid_high),
            .position(position_high)
        ) ;
        First_One_Search #(
            .DATA_WIDTH (DATA_WIDTH/2),
            .POS_WIDTH(POS_WIDTH),
            .CURRENT_POS(CURRENT_POS-DATA_WIDTH/2)
        ) low(
            .data(low_half_data),
            .valid(valid_low),
            .position(position_low)
        ) ;
        assign high_half_data = data[DATA_WIDTH-1:DATA_WIDTH/2];
        assign low_half_data = data[DATA_WIDTH/2-1:0];
        assign valid = valid_high | valid_low;
        assign position = valid_low ? position_low:position_high;
    end
endgenerate

endmodule //First_One_Search
