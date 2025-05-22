module PHT #(
    PHT_INDEX_WIDTH = 8,
    PHT_BANK = 4
)
(
    input  clock,
    input  reset,

    input  [PHT_INDEX_WIDTH-1:0]pht_index_w,
    input  is_taken,
    input  pht_w_en,
    input  [PHT_INDEX_WIDTH-3:0]pht_index_r,

    output [3:0] pht_state       
);

  localparam TAKE_W = 2'b11;
  localparam TAKE_S = 2'b10;
  localparam NOT_TAKE_W = 2'b01;
  localparam NOT_TAKE_S = 2'b00;

 logic [1:0] ram[(2**PHT_INDEX_WIDTH)/PHT_BANK-1:0][PHT_BANK-1:0];
 logic [$clog2(PHT_BANK)-1:0]bank_choice_w; 
 logic [PHT_INDEX_WIDTH-$clog2(PHT_BANK)-1:0]ram_index_w;

  // 2bit counter
  always @(posedge clock) begin
    if (pht_w_en) begin
      case (ram[ram_index_w][bank_choice_w])
        NOT_TAKE_S: ram[ram_index_w][bank_choice_w] <= is_taken ? NOT_TAKE_W : NOT_TAKE_S;
        NOT_TAKE_W: ram[ram_index_w][bank_choice_w] <= is_taken ? TAKE_W : NOT_TAKE_S;
        TAKE_W: ram[ram_index_w][bank_choice_w] <= is_taken ? TAKE_S : NOT_TAKE_W;
        TAKE_S: ram[ram_index_w][bank_choice_w] <= is_taken ? TAKE_S : TAKE_W;
      endcase
    end
  end

    assign ram_index_w = pht_index_w[PHT_INDEX_WIDTH-1:$clog2(PHT_BANK)];
    assign bank_choice_w = pht_index_w[$clog2(PHT_BANK)-1:0];
    assign pht_state[0] = ram[pht_index_r][0][1];
    assign pht_state[1] = ram[pht_index_r][1][1];
    assign pht_state[2] = ram[pht_index_r][2][1];
    assign pht_state[3] = ram[pht_index_r][3][1];


endmodule

