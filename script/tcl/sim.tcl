vlib work

set UVM_HOME D:/software/tool/ModelSim/verilog_src/uvm-1.1d

set UVM_DPI_HOME D:/software/tool/ModelSim/uvm-1.1d/win64

set INC_HOME ./rtl/dut/CPU/define


vlog -f ./script/tcl/filelist.f +incdir+$UVM_HOME/src +incdir+$INC_HOME  -L mtiAvm -L mtiOvm -L mtiUvm -L mtiUPF  

vsim -novopt -c -sv_lib $UVM_DPI_HOME/uvm_dpi  work.top_tb  