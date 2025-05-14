module First_One_Search_tb();
    
    localparam DATA_WIDTH = 16;
    localparam POS_WIDTH = $clog2(DATA_WIDTH);
    localparam CURRENT_POS = DATA_WIDTH;   

// output declaration of module First_One_Search
wire valid;
wire [POS_WIDTH-1:0] position;
reg [DATA_WIDTH-1:0]data;


initial begin
    data = 16'b1001_0000_0001;
    #10
    $display("position = %d",position);
    $display("valid = %d",valid);
    data = 16'b1000_1000_0010;
    #10
    $display("position = %d",position);
    $display("valid = %d",valid);
    data = 16'b1000_0100_0100;
    #10
    $display("position = %d",position);
    $display("valid = %d",valid);
    data = 16'b1000_0000_0000_1000;
    #10
    $display("position = %d",position);
    $display("valid = %d",valid);
    $finish();
end





First_One_Search #(
    .DATA_WIDTH  	(DATA_WIDTH  ),
    .POS_WIDTH   	(POS_WIDTH  ),
    .CURRENT_POS 	(CURRENT_POS  ))
u_First_One_Search(
    .data     	(data      ),
    .valid    	(valid     ),
    .position 	(position  )
);






endmodule //First_One_Search_tb
