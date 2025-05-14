module top_tb();
    reg clock;
    initial begin
        clock = 1'b0;
        #100
        $finish();
    end

    always #1 clock <= ~clock;

endmodule //top_tb
