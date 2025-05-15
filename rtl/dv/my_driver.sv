`ifndef MY_DRIVER__SV
`define MY_DRIVER__SV 

class my_driver extends uvm_driver;
    function new(string name = "my_driver", uvm_component parent = null);
        super.new(name, parent);
    endfunction
    extern virtual task main_phase(uvm_phase phase);
endclass
task my_driver::main_phase(uvm_phase phase);
    for(int i=0;i<4;i++)begin
        top_tb.inst_i[i] <= 0; 
    end
        top_tb.inst_wen <= 0;
        top_tb.inst_ren <= 0;
    while(top_tb.rst)
    @(posedge top_tb.clk);
    for(int j=0;j<4;j++)begin
        @(posedge top_tb.clk);
        for(int i=0;i<4;i++)begin
            top_tb.inst_i[i] <= $urandom_range(0, 255); 
            top_tb.inst_wen[i] <= 1'b1;
        end        
        `uvm_info("my_driver","data is drivered",UVM_LOW);
    end
        @(posedge top_tb.clk);
     top_tb.inst_wen <= 1'b0; 
endtask


`endif