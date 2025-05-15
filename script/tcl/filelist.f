# 示例 filelist.f
# 1. 先编译 package 和接口
# 2. RTL 代码
rtl/dut/CPU/util/count_ones.sv
rtl/dut/CPU/util/Inst_Buffer.sv
# 3. 最后编译顶层 testbench
rtl/dv/top_tb.sv