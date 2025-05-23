
// -----------
// This file was generated by riscv_ctg (https://github.com/riscv-software-src/riscv-ctg)
// version   : 0.11.0
// timestamp : Sat May  6 11:14:00 2023 GMT
// usage     : riscv_ctg \
//                  -- cgf //                  --cgf /home/riscv/riscv-ctg/sample_cgfs/dataset.cgf \
//                  --cgf /home/riscv/riscv-ctg/sample_cgfs/sample_cgfs_fext/RV32H/rv32h_fmul.cgf \
 \
//                  -- xlen 32  \
// -----------
//
// -----------
// Copyright (c) 2020. RISC-V International. All rights reserved.
// SPDX-License-Identifier: BSD-3-Clause
// -----------
//
// This assembly file tests the fmul.h instruction of the RISC-V RV32F_Zicsr_Zfh,RV64F_Zicsr_Zfh extension for the fmul_b7 covergroup.
// 
#include "model_test.h"
#include "arch_test.h"
RVTEST_ISA("RV32IF_Zicsr_Zfh,RV64IF_Zicsr_Zfh")

.section .text.init
.globl rvtest_entry_point
rvtest_entry_point:
RVMODEL_BOOT
RVTEST_CODE_BEGIN

#ifdef TEST_CASE_1

RVTEST_CASE(0,"//check ISA:=regex(.*I.*F.*Zfh.*);def TEST_CASE_1=True;",fmul_b7)

RVTEST_FP_ENABLE()
RVTEST_VALBASEUPD(x3,test_dataset_0)
RVTEST_SIGBASE(x1,signature_x1_1)

inst_0:
// rs1 != rs2  and rs1 != rd and rs2 != rd, rs1==f30, rs2==f29, rd==f31,fs1 == 0 and fe1 == 0x1e and fm1 == 0x3a5 and fs2 == 0 and fe2 == 0x00 and fm2 == 0x000 and  fcsr == 0x60 and rm_val == 7  and rs1_nan_prefix == 0xffff and rs2_nan_prefix == 0xffff  
/* opcode: fmul.h ; op1:f30; op2:f29; dest:f31; op1val:0x7ba5; op2val:0x0;
   valaddr_reg:x3; val_offset:0*FLEN/8; rmval:dyn; fcsr: 96;
   correctval:??; testreg:x2
*/
TEST_FPRR_OP(fmul.h, f31, f30, f29, dyn, 96, 0, x3, 0*FLEN/8, x4, x1, x2)

inst_1:
// rs2 == rd != rs1, rs1==f31, rs2==f30, rd==f30,fs1 == 0 and fe1 == 0x1a and fm1 == 0x33c and fs2 == 0 and fe2 == 0x00 and fm2 == 0x000 and  fcsr == 0x60 and rm_val == 7  and rs1_nan_prefix == 0xffff and rs2_nan_prefix == 0xffff  
/* opcode: fmul.h ; op1:f31; op2:f30; dest:f30; op1val:0x6b3c; op2val:0x0;
   valaddr_reg:x3; val_offset:2*FLEN/8; rmval:dyn; fcsr: 96;
   correctval:??; testreg:x2
*/
TEST_FPRR_OP(fmul.h, f30, f31, f30, dyn, 96, 0, x3, 2*FLEN/8, x4, x1, x2)

inst_2:
// rs1 == rs2 == rd, rs1==f28, rs2==f28, rd==f28,fs1 == 0 and fe1 == 0x1e and fm1 == 0x2ae and fs2 == 0 and fe2 == 0x00 and fm2 == 0x000 and  fcsr == 0x60 and rm_val == 7  and rs1_nan_prefix == 0xffff and rs2_nan_prefix == 0xffff  
/* opcode: fmul.h ; op1:f28; op2:f28; dest:f28; op1val:0x7aae; op2val:0x7aae;
   valaddr_reg:x3; val_offset:4*FLEN/8; rmval:dyn; fcsr: 96;
   correctval:??; testreg:x2
*/
TEST_FPRR_OP(fmul.h, f28, f28, f28, dyn, 96, 0, x3, 4*FLEN/8, x4, x1, x2)

inst_3:
// rs1 == rs2 != rd, rs1==f27, rs2==f27, rd==f29,fs1 == 0 and fe1 == 0x1e and fm1 == 0x15a and fs2 == 0 and fe2 == 0x00 and fm2 == 0x000 and  fcsr == 0x60 and rm_val == 7  and rs1_nan_prefix == 0xffff and rs2_nan_prefix == 0xffff  
/* opcode: fmul.h ; op1:f27; op2:f27; dest:f29; op1val:0x795a; op2val:0x795a;
   valaddr_reg:x3; val_offset:6*FLEN/8; rmval:dyn; fcsr: 96;
   correctval:??; testreg:x2
*/
TEST_FPRR_OP(fmul.h, f29, f27, f27, dyn, 96, 0, x3, 6*FLEN/8, x4, x1, x2)

inst_4:
// rs1 == rd != rs2, rs1==f26, rs2==f31, rd==f26,fs1 == 0 and fe1 == 0x1e and fm1 == 0x0d8 and fs2 == 0 and fe2 == 0x00 and fm2 == 0x000 and  fcsr == 0x60 and rm_val == 7  and rs1_nan_prefix == 0xffff and rs2_nan_prefix == 0xffff  
/* opcode: fmul.h ; op1:f26; op2:f31; dest:f26; op1val:0x78d8; op2val:0x0;
   valaddr_reg:x3; val_offset:8*FLEN/8; rmval:dyn; fcsr: 96;
   correctval:??; testreg:x2
*/
TEST_FPRR_OP(fmul.h, f26, f26, f31, dyn, 96, 0, x3, 8*FLEN/8, x4, x1, x2)

inst_5:
// rs1==f29, rs2==f26, rd==f27,fs1 == 0 and fe1 == 0x1e and fm1 == 0x0a5 and fs2 == 0 and fe2 == 0x00 and fm2 == 0x000 and  fcsr == 0x60 and rm_val == 7  and rs1_nan_prefix == 0xffff and rs2_nan_prefix == 0xffff  
/* opcode: fmul.h ; op1:f29; op2:f26; dest:f27; op1val:0x78a5; op2val:0x0;
   valaddr_reg:x3; val_offset:10*FLEN/8; rmval:dyn; fcsr: 96;
   correctval:??; testreg:x2
*/
TEST_FPRR_OP(fmul.h, f27, f29, f26, dyn, 96, 0, x3, 10*FLEN/8, x4, x1, x2)

inst_6:
// rs1==f24, rs2==f23, rd==f25,fs1 == 0 and fe1 == 0x1d and fm1 == 0x2e3 and fs2 == 0 and fe2 == 0x00 and fm2 == 0x000 and  fcsr == 0x60 and rm_val == 7  and rs1_nan_prefix == 0xffff and rs2_nan_prefix == 0xffff  
/* opcode: fmul.h ; op1:f24; op2:f23; dest:f25; op1val:0x76e3; op2val:0x0;
   valaddr_reg:x3; val_offset:12*FLEN/8; rmval:dyn; fcsr: 96;
   correctval:??; testreg:x2
*/
TEST_FPRR_OP(fmul.h, f25, f24, f23, dyn, 96, 0, x3, 12*FLEN/8, x4, x1, x2)

inst_7:
// rs1==f23, rs2==f25, rd==f24,fs1 == 0 and fe1 == 0x1e and fm1 == 0x1c8 and fs2 == 0 and fe2 == 0x00 and fm2 == 0x000 and  fcsr == 0x60 and rm_val == 7  and rs1_nan_prefix == 0xffff and rs2_nan_prefix == 0xffff  
/* opcode: fmul.h ; op1:f23; op2:f25; dest:f24; op1val:0x79c8; op2val:0x0;
   valaddr_reg:x3; val_offset:14*FLEN/8; rmval:dyn; fcsr: 96;
   correctval:??; testreg:x2
*/
TEST_FPRR_OP(fmul.h, f24, f23, f25, dyn, 96, 0, x3, 14*FLEN/8, x4, x1, x2)

inst_8:
// rs1==f25, rs2==f24, rd==f23,fs1 == 0 and fe1 == 0x1e and fm1 == 0x397 and fs2 == 0 and fe2 == 0x00 and fm2 == 0x000 and  fcsr == 0x60 and rm_val == 7  and rs1_nan_prefix == 0xffff and rs2_nan_prefix == 0xffff  
/* opcode: fmul.h ; op1:f25; op2:f24; dest:f23; op1val:0x7b97; op2val:0x0;
   valaddr_reg:x3; val_offset:16*FLEN/8; rmval:dyn; fcsr: 96;
   correctval:??; testreg:x2
*/
TEST_FPRR_OP(fmul.h, f23, f25, f24, dyn, 96, 0, x3, 16*FLEN/8, x4, x1, x2)

inst_9:
// rs1==f21, rs2==f20, rd==f22,fs1 == 0 and fe1 == 0x1d and fm1 == 0x31d and fs2 == 0 and fe2 == 0x00 and fm2 == 0x000 and  fcsr == 0x60 and rm_val == 7  and rs1_nan_prefix == 0xffff and rs2_nan_prefix == 0xffff  
/* opcode: fmul.h ; op1:f21; op2:f20; dest:f22; op1val:0x771d; op2val:0x0;
   valaddr_reg:x3; val_offset:18*FLEN/8; rmval:dyn; fcsr: 96;
   correctval:??; testreg:x2
*/
TEST_FPRR_OP(fmul.h, f22, f21, f20, dyn, 96, 0, x3, 18*FLEN/8, x4, x1, x2)

inst_10:
// rs1==f20, rs2==f22, rd==f21,fs1 == 0 and fe1 == 0x1a and fm1 == 0x099 and fs2 == 0 and fe2 == 0x00 and fm2 == 0x000 and  fcsr == 0x60 and rm_val == 7  and rs1_nan_prefix == 0xffff and rs2_nan_prefix == 0xffff  
/* opcode: fmul.h ; op1:f20; op2:f22; dest:f21; op1val:0x6899; op2val:0x0;
   valaddr_reg:x3; val_offset:20*FLEN/8; rmval:dyn; fcsr: 96;
   correctval:??; testreg:x2
*/
TEST_FPRR_OP(fmul.h, f21, f20, f22, dyn, 96, 0, x3, 20*FLEN/8, x4, x1, x2)

inst_11:
// rs1==f22, rs2==f21, rd==f20,fs1 == 0 and fe1 == 0x1d and fm1 == 0x36f and fs2 == 0 and fe2 == 0x00 and fm2 == 0x000 and  fcsr == 0x60 and rm_val == 7  and rs1_nan_prefix == 0xffff and rs2_nan_prefix == 0xffff  
/* opcode: fmul.h ; op1:f22; op2:f21; dest:f20; op1val:0x776f; op2val:0x0;
   valaddr_reg:x3; val_offset:22*FLEN/8; rmval:dyn; fcsr: 96;
   correctval:??; testreg:x2
*/
TEST_FPRR_OP(fmul.h, f20, f22, f21, dyn, 96, 0, x3, 22*FLEN/8, x4, x1, x2)

inst_12:
// rs1==f18, rs2==f17, rd==f19,fs1 == 0 and fe1 == 0x1d and fm1 == 0x213 and fs2 == 0 and fe2 == 0x00 and fm2 == 0x000 and  fcsr == 0x60 and rm_val == 7  and rs1_nan_prefix == 0xffff and rs2_nan_prefix == 0xffff  
/* opcode: fmul.h ; op1:f18; op2:f17; dest:f19; op1val:0x7613; op2val:0x0;
   valaddr_reg:x3; val_offset:24*FLEN/8; rmval:dyn; fcsr: 96;
   correctval:??; testreg:x2
*/
TEST_FPRR_OP(fmul.h, f19, f18, f17, dyn, 96, 0, x3, 24*FLEN/8, x4, x1, x2)

inst_13:
// rs1==f17, rs2==f19, rd==f18,fs1 == 0 and fe1 == 0x1e and fm1 == 0x034 and fs2 == 0 and fe2 == 0x00 and fm2 == 0x000 and  fcsr == 0x60 and rm_val == 7  and rs1_nan_prefix == 0xffff and rs2_nan_prefix == 0xffff  
/* opcode: fmul.h ; op1:f17; op2:f19; dest:f18; op1val:0x7834; op2val:0x0;
   valaddr_reg:x3; val_offset:26*FLEN/8; rmval:dyn; fcsr: 96;
   correctval:??; testreg:x2
*/
TEST_FPRR_OP(fmul.h, f18, f17, f19, dyn, 96, 0, x3, 26*FLEN/8, x4, x1, x2)

inst_14:
// rs1==f19, rs2==f18, rd==f17,fs1 == 0 and fe1 == 0x1c and fm1 == 0x38d and fs2 == 0 and fe2 == 0x00 and fm2 == 0x000 and  fcsr == 0x60 and rm_val == 7  and rs1_nan_prefix == 0xffff and rs2_nan_prefix == 0xffff  
/* opcode: fmul.h ; op1:f19; op2:f18; dest:f17; op1val:0x738d; op2val:0x0;
   valaddr_reg:x3; val_offset:28*FLEN/8; rmval:dyn; fcsr: 96;
   correctval:??; testreg:x2
*/
TEST_FPRR_OP(fmul.h, f17, f19, f18, dyn, 96, 0, x3, 28*FLEN/8, x4, x1, x2)

inst_15:
// rs1==f15, rs2==f14, rd==f16,fs1 == 0 and fe1 == 0x1d and fm1 == 0x133 and fs2 == 0 and fe2 == 0x00 and fm2 == 0x000 and  fcsr == 0x60 and rm_val == 7  and rs1_nan_prefix == 0xffff and rs2_nan_prefix == 0xffff  
/* opcode: fmul.h ; op1:f15; op2:f14; dest:f16; op1val:0x7533; op2val:0x0;
   valaddr_reg:x3; val_offset:30*FLEN/8; rmval:dyn; fcsr: 96;
   correctval:??; testreg:x2
*/
TEST_FPRR_OP(fmul.h, f16, f15, f14, dyn, 96, 0, x3, 30*FLEN/8, x4, x1, x2)

inst_16:
// rs1==f14, rs2==f16, rd==f15,fs1 == 0 and fe1 == 0x1e and fm1 == 0x014 and fs2 == 0 and fe2 == 0x00 and fm2 == 0x000 and  fcsr == 0x60 and rm_val == 7  and rs1_nan_prefix == 0xffff and rs2_nan_prefix == 0xffff  
/* opcode: fmul.h ; op1:f14; op2:f16; dest:f15; op1val:0x7814; op2val:0x0;
   valaddr_reg:x3; val_offset:32*FLEN/8; rmval:dyn; fcsr: 96;
   correctval:??; testreg:x2
*/
TEST_FPRR_OP(fmul.h, f15, f14, f16, dyn, 96, 0, x3, 32*FLEN/8, x4, x1, x2)

inst_17:
// rs1==f16, rs2==f15, rd==f14,fs1 == 0 and fe1 == 0x1e and fm1 == 0x164 and fs2 == 0 and fe2 == 0x00 and fm2 == 0x000 and  fcsr == 0x60 and rm_val == 7  and rs1_nan_prefix == 0xffff and rs2_nan_prefix == 0xffff  
/* opcode: fmul.h ; op1:f16; op2:f15; dest:f14; op1val:0x7964; op2val:0x0;
   valaddr_reg:x3; val_offset:34*FLEN/8; rmval:dyn; fcsr: 96;
   correctval:??; testreg:x2
*/
TEST_FPRR_OP(fmul.h, f14, f16, f15, dyn, 96, 0, x3, 34*FLEN/8, x4, x1, x2)

inst_18:
// rs1==f12, rs2==f11, rd==f13,fs1 == 0 and fe1 == 0x1e and fm1 == 0x325 and fs2 == 0 and fe2 == 0x00 and fm2 == 0x000 and  fcsr == 0x60 and rm_val == 7  and rs1_nan_prefix == 0xffff and rs2_nan_prefix == 0xffff  
/* opcode: fmul.h ; op1:f12; op2:f11; dest:f13; op1val:0x7b25; op2val:0x0;
   valaddr_reg:x3; val_offset:36*FLEN/8; rmval:dyn; fcsr: 96;
   correctval:??; testreg:x2
*/
TEST_FPRR_OP(fmul.h, f13, f12, f11, dyn, 96, 0, x3, 36*FLEN/8, x4, x1, x2)

inst_19:
// rs1==f11, rs2==f13, rd==f12,fs1 == 0 and fe1 == 0x1e and fm1 == 0x1df and fs2 == 0 and fe2 == 0x00 and fm2 == 0x000 and  fcsr == 0x60 and rm_val == 7  and rs1_nan_prefix == 0xffff and rs2_nan_prefix == 0xffff  
/* opcode: fmul.h ; op1:f11; op2:f13; dest:f12; op1val:0x79df; op2val:0x0;
   valaddr_reg:x3; val_offset:38*FLEN/8; rmval:dyn; fcsr: 96;
   correctval:??; testreg:x2
*/
TEST_FPRR_OP(fmul.h, f12, f11, f13, dyn, 96, 0, x3, 38*FLEN/8, x4, x1, x2)

inst_20:
// rs1==f13, rs2==f12, rd==f11,fs1 == 0 and fe1 == 0x1e and fm1 == 0x219 and fs2 == 0 and fe2 == 0x00 and fm2 == 0x000 and  fcsr == 0x60 and rm_val == 7  and rs1_nan_prefix == 0xffff and rs2_nan_prefix == 0xffff  
/* opcode: fmul.h ; op1:f13; op2:f12; dest:f11; op1val:0x7a19; op2val:0x0;
   valaddr_reg:x3; val_offset:40*FLEN/8; rmval:dyn; fcsr: 96;
   correctval:??; testreg:x2
*/
TEST_FPRR_OP(fmul.h, f11, f13, f12, dyn, 96, 0, x3, 40*FLEN/8, x4, x1, x2)

inst_21:
// rs1==f9, rs2==f8, rd==f10,fs1 == 0 and fe1 == 0x1d and fm1 == 0x1a8 and fs2 == 0 and fe2 == 0x00 and fm2 == 0x000 and  fcsr == 0x60 and rm_val == 7  and rs1_nan_prefix == 0xffff and rs2_nan_prefix == 0xffff  
/* opcode: fmul.h ; op1:f9; op2:f8; dest:f10; op1val:0x75a8; op2val:0x0;
   valaddr_reg:x3; val_offset:42*FLEN/8; rmval:dyn; fcsr: 96;
   correctval:??; testreg:x2
*/
TEST_FPRR_OP(fmul.h, f10, f9, f8, dyn, 96, 0, x3, 42*FLEN/8, x4, x1, x2)

inst_22:
// rs1==f8, rs2==f10, rd==f9,fs1 == 0 and fe1 == 0x1e and fm1 == 0x3b1 and fs2 == 0 and fe2 == 0x00 and fm2 == 0x000 and  fcsr == 0x60 and rm_val == 7  and rs1_nan_prefix == 0xffff and rs2_nan_prefix == 0xffff  
/* opcode: fmul.h ; op1:f8; op2:f10; dest:f9; op1val:0x7bb1; op2val:0x0;
   valaddr_reg:x3; val_offset:44*FLEN/8; rmval:dyn; fcsr: 96;
   correctval:??; testreg:x2
*/
TEST_FPRR_OP(fmul.h, f9, f8, f10, dyn, 96, 0, x3, 44*FLEN/8, x4, x1, x2)

inst_23:
// rs1==f10, rs2==f9, rd==f8,fs1 == 0 and fe1 == 0x1e and fm1 == 0x207 and fs2 == 0 and fe2 == 0x00 and fm2 == 0x000 and  fcsr == 0x60 and rm_val == 7  and rs1_nan_prefix == 0xffff and rs2_nan_prefix == 0xffff  
/* opcode: fmul.h ; op1:f10; op2:f9; dest:f8; op1val:0x7a07; op2val:0x0;
   valaddr_reg:x3; val_offset:46*FLEN/8; rmval:dyn; fcsr: 96;
   correctval:??; testreg:x2
*/
TEST_FPRR_OP(fmul.h, f8, f10, f9, dyn, 96, 0, x3, 46*FLEN/8, x4, x1, x2)

inst_24:
// rs1==f6, rs2==f5, rd==f7,fs1 == 0 and fe1 == 0x1d and fm1 == 0x361 and fs2 == 0 and fe2 == 0x00 and fm2 == 0x000 and  fcsr == 0x60 and rm_val == 7  and rs1_nan_prefix == 0xffff and rs2_nan_prefix == 0xffff  
/* opcode: fmul.h ; op1:f6; op2:f5; dest:f7; op1val:0x7761; op2val:0x0;
   valaddr_reg:x3; val_offset:48*FLEN/8; rmval:dyn; fcsr: 96;
   correctval:??; testreg:x2
*/
TEST_FPRR_OP(fmul.h, f7, f6, f5, dyn, 96, 0, x3, 48*FLEN/8, x4, x1, x2)

inst_25:
// rs1==f5, rs2==f7, rd==f6,fs1 == 0 and fe1 == 0x1d and fm1 == 0x3d6 and fs2 == 0 and fe2 == 0x00 and fm2 == 0x000 and  fcsr == 0x60 and rm_val == 7  and rs1_nan_prefix == 0xffff and rs2_nan_prefix == 0xffff  
/* opcode: fmul.h ; op1:f5; op2:f7; dest:f6; op1val:0x77d6; op2val:0x0;
   valaddr_reg:x3; val_offset:50*FLEN/8; rmval:dyn; fcsr: 96;
   correctval:??; testreg:x2
*/
TEST_FPRR_OP(fmul.h, f6, f5, f7, dyn, 96, 0, x3, 50*FLEN/8, x4, x1, x2)

inst_26:
// rs1==f7, rs2==f6, rd==f5,fs1 == 0 and fe1 == 0x1e and fm1 == 0x001 and fs2 == 0 and fe2 == 0x00 and fm2 == 0x000 and  fcsr == 0x60 and rm_val == 7  and rs1_nan_prefix == 0xffff and rs2_nan_prefix == 0xffff  
/* opcode: fmul.h ; op1:f7; op2:f6; dest:f5; op1val:0x7801; op2val:0x0;
   valaddr_reg:x3; val_offset:52*FLEN/8; rmval:dyn; fcsr: 96;
   correctval:??; testreg:x2
*/
TEST_FPRR_OP(fmul.h, f5, f7, f6, dyn, 96, 0, x3, 52*FLEN/8, x4, x1, x2)

inst_27:
// rs1==f3, rs2==f2, rd==f4,fs1 == 0 and fe1 == 0x1d and fm1 == 0x1a9 and fs2 == 0 and fe2 == 0x00 and fm2 == 0x000 and  fcsr == 0x60 and rm_val == 7  and rs1_nan_prefix == 0xffff and rs2_nan_prefix == 0xffff  
/* opcode: fmul.h ; op1:f3; op2:f2; dest:f4; op1val:0x75a9; op2val:0x0;
   valaddr_reg:x3; val_offset:54*FLEN/8; rmval:dyn; fcsr: 96;
   correctval:??; testreg:x2
*/
TEST_FPRR_OP(fmul.h, f4, f3, f2, dyn, 96, 0, x3, 54*FLEN/8, x4, x1, x2)

inst_28:
// rs1==f2, rs2==f4, rd==f3,fs1 == 0 and fe1 == 0x1e and fm1 == 0x331 and fs2 == 0 and fe2 == 0x00 and fm2 == 0x000 and  fcsr == 0x60 and rm_val == 7  and rs1_nan_prefix == 0xffff and rs2_nan_prefix == 0xffff  
/* opcode: fmul.h ; op1:f2; op2:f4; dest:f3; op1val:0x7b31; op2val:0x0;
   valaddr_reg:x3; val_offset:56*FLEN/8; rmval:dyn; fcsr: 96;
   correctval:??; testreg:x2
*/
TEST_FPRR_OP(fmul.h, f3, f2, f4, dyn, 96, 0, x3, 56*FLEN/8, x4, x1, x2)

inst_29:
// rs1==f4, rs2==f3, rd==f2,fs1 == 0 and fe1 == 0x1e and fm1 == 0x08a and fs2 == 0 and fe2 == 0x00 and fm2 == 0x000 and  fcsr == 0x60 and rm_val == 7  and rs1_nan_prefix == 0xffff and rs2_nan_prefix == 0xffff  
/* opcode: fmul.h ; op1:f4; op2:f3; dest:f2; op1val:0x788a; op2val:0x0;
   valaddr_reg:x3; val_offset:58*FLEN/8; rmval:dyn; fcsr: 96;
   correctval:??; testreg:x2
*/
TEST_FPRR_OP(fmul.h, f2, f4, f3, dyn, 96, 0, x3, 58*FLEN/8, x4, x1, x2)

inst_30:
// rs1==f1,fs1 == 0 and fe1 == 0x1e and fm1 == 0x1c9 and fs2 == 0 and fe2 == 0x00 and fm2 == 0x000 and  fcsr == 0x60 and rm_val == 7  and rs1_nan_prefix == 0xffff and rs2_nan_prefix == 0xffff  
/* opcode: fmul.h ; op1:f1; op2:f30; dest:f31; op1val:0x79c9; op2val:0x0;
   valaddr_reg:x3; val_offset:60*FLEN/8; rmval:dyn; fcsr: 96;
   correctval:??; testreg:x2
*/
TEST_FPRR_OP(fmul.h, f31, f1, f30, dyn, 96, 0, x3, 60*FLEN/8, x4, x1, x2)

inst_31:
// rs1==f0,fs1 == 0 and fe1 == 0x1c and fm1 == 0x318 and fs2 == 0 and fe2 == 0x00 and fm2 == 0x000 and  fcsr == 0x60 and rm_val == 7  and rs1_nan_prefix == 0xffff and rs2_nan_prefix == 0xffff  
/* opcode: fmul.h ; op1:f0; op2:f30; dest:f31; op1val:0x7318; op2val:0x0;
   valaddr_reg:x3; val_offset:62*FLEN/8; rmval:dyn; fcsr: 96;
   correctval:??; testreg:x2
*/
TEST_FPRR_OP(fmul.h, f31, f0, f30, dyn, 96, 0, x3, 62*FLEN/8, x4, x1, x2)

inst_32:
// rs2==f1,fs1 == 0 and fe1 == 0x1e and fm1 == 0x198 and fs2 == 0 and fe2 == 0x00 and fm2 == 0x000 and  fcsr == 0x60 and rm_val == 7  and rs1_nan_prefix == 0xffff and rs2_nan_prefix == 0xffff  
/* opcode: fmul.h ; op1:f30; op2:f1; dest:f31; op1val:0x7998; op2val:0x0;
   valaddr_reg:x3; val_offset:64*FLEN/8; rmval:dyn; fcsr: 96;
   correctval:??; testreg:x2
*/
TEST_FPRR_OP(fmul.h, f31, f30, f1, dyn, 96, 0, x3, 64*FLEN/8, x4, x1, x2)

inst_33:
// rs2==f0,fs1 == 0 and fe1 == 0x1e and fm1 == 0x342 and fs2 == 0 and fe2 == 0x00 and fm2 == 0x000 and  fcsr == 0x60 and rm_val == 7  and rs1_nan_prefix == 0xffff and rs2_nan_prefix == 0xffff  
/* opcode: fmul.h ; op1:f30; op2:f0; dest:f31; op1val:0x7b42; op2val:0x0;
   valaddr_reg:x3; val_offset:66*FLEN/8; rmval:dyn; fcsr: 96;
   correctval:??; testreg:x2
*/
TEST_FPRR_OP(fmul.h, f31, f30, f0, dyn, 96, 0, x3, 66*FLEN/8, x4, x1, x2)

inst_34:
// rd==f1,fs1 == 0 and fe1 == 0x1e and fm1 == 0x349 and fs2 == 0 and fe2 == 0x00 and fm2 == 0x000 and  fcsr == 0x60 and rm_val == 7  and rs1_nan_prefix == 0xffff and rs2_nan_prefix == 0xffff  
/* opcode: fmul.h ; op1:f31; op2:f30; dest:f1; op1val:0x7b49; op2val:0x0;
   valaddr_reg:x3; val_offset:68*FLEN/8; rmval:dyn; fcsr: 96;
   correctval:??; testreg:x2
*/
TEST_FPRR_OP(fmul.h, f1, f31, f30, dyn, 96, 0, x3, 68*FLEN/8, x4, x1, x2)

inst_35:
// rd==f0,fs1 == 0 and fe1 == 0x1e and fm1 == 0x3a7 and fs2 == 0 and fe2 == 0x00 and fm2 == 0x000 and  fcsr == 0x60 and rm_val == 7  and rs1_nan_prefix == 0xffff and rs2_nan_prefix == 0xffff  
/* opcode: fmul.h ; op1:f31; op2:f30; dest:f0; op1val:0x7ba7; op2val:0x0;
   valaddr_reg:x3; val_offset:70*FLEN/8; rmval:dyn; fcsr: 96;
   correctval:??; testreg:x2
*/
TEST_FPRR_OP(fmul.h, f0, f31, f30, dyn, 96, 0, x3, 70*FLEN/8, x4, x1, x2)

inst_36:
// fs1 == 0 and fe1 == 0x1e and fm1 == 0x008 and fs2 == 0 and fe2 == 0x00 and fm2 == 0x000 and  fcsr == 0x60 and rm_val == 7  and rs1_nan_prefix == 0xffff and rs2_nan_prefix == 0xffff  
/* opcode: fmul.h ; op1:f30; op2:f29; dest:f31; op1val:0x7808; op2val:0x0;
   valaddr_reg:x3; val_offset:72*FLEN/8; rmval:dyn; fcsr: 96;
   correctval:??; testreg:x2
*/
TEST_FPRR_OP(fmul.h, f31, f30, f29, dyn, 96, 0, x3, 72*FLEN/8, x4, x1, x2)

inst_37:
// fs1 == 0 and fe1 == 0x1e and fm1 == 0x135 and fs2 == 0 and fe2 == 0x00 and fm2 == 0x000 and  fcsr == 0x60 and rm_val == 7  and rs1_nan_prefix == 0xffff and rs2_nan_prefix == 0xffff  
/* opcode: fmul.h ; op1:f30; op2:f29; dest:f31; op1val:0x7935; op2val:0x0;
   valaddr_reg:x3; val_offset:74*FLEN/8; rmval:dyn; fcsr: 96;
   correctval:??; testreg:x2
*/
TEST_FPRR_OP(fmul.h, f31, f30, f29, dyn, 96, 0, x3, 74*FLEN/8, x4, x1, x2)

inst_38:
// fs1 == 0 and fe1 == 0x1d and fm1 == 0x0fc and fs2 == 0 and fe2 == 0x00 and fm2 == 0x000 and  fcsr == 0x60 and rm_val == 7  and rs1_nan_prefix == 0xffff and rs2_nan_prefix == 0xffff  
/* opcode: fmul.h ; op1:f30; op2:f29; dest:f31; op1val:0x74fc; op2val:0x0;
   valaddr_reg:x3; val_offset:76*FLEN/8; rmval:dyn; fcsr: 96;
   correctval:??; testreg:x2
*/
TEST_FPRR_OP(fmul.h, f31, f30, f29, dyn, 96, 0, x3, 76*FLEN/8, x4, x1, x2)

inst_39:
// fs1 == 0 and fe1 == 0x1e and fm1 == 0x017 and fs2 == 0 and fe2 == 0x00 and fm2 == 0x000 and  fcsr == 0x60 and rm_val == 7  and rs1_nan_prefix == 0xffff and rs2_nan_prefix == 0xffff  
/* opcode: fmul.h ; op1:f30; op2:f29; dest:f31; op1val:0x7817; op2val:0x0;
   valaddr_reg:x3; val_offset:78*FLEN/8; rmval:dyn; fcsr: 96;
   correctval:??; testreg:x2
*/
TEST_FPRR_OP(fmul.h, f31, f30, f29, dyn, 96, 0, x3, 78*FLEN/8, x4, x1, x2)

inst_40:
// fs1 == 0 and fe1 == 0x1e and fm1 == 0x0fb and fs2 == 0 and fe2 == 0x00 and fm2 == 0x000 and  fcsr == 0x60 and rm_val == 7  and rs1_nan_prefix == 0xffff and rs2_nan_prefix == 0xffff  
/* opcode: fmul.h ; op1:f30; op2:f29; dest:f31; op1val:0x78fb; op2val:0x0;
   valaddr_reg:x3; val_offset:80*FLEN/8; rmval:dyn; fcsr: 96;
   correctval:??; testreg:x2
*/
TEST_FPRR_OP(fmul.h, f31, f30, f29, dyn, 96, 0, x3, 80*FLEN/8, x4, x1, x2)

inst_41:
// fs1 == 0 and fe1 == 0x1e and fm1 == 0x28f and fs2 == 0 and fe2 == 0x00 and fm2 == 0x000 and  fcsr == 0x60 and rm_val == 7  and rs1_nan_prefix == 0xffff and rs2_nan_prefix == 0xffff  
/* opcode: fmul.h ; op1:f30; op2:f29; dest:f31; op1val:0x7a8f; op2val:0x0;
   valaddr_reg:x3; val_offset:82*FLEN/8; rmval:dyn; fcsr: 96;
   correctval:??; testreg:x2
*/
TEST_FPRR_OP(fmul.h, f31, f30, f29, dyn, 96, 0, x3, 82*FLEN/8, x4, x1, x2)

inst_42:
// fs1 == 0 and fe1 == 0x1e and fm1 == 0x341 and fs2 == 0 and fe2 == 0x05 and fm2 == 0x068 and  fcsr == 0x60 and rm_val == 7  and rs1_nan_prefix == 0xffff and rs2_nan_prefix == 0xffff  
/* opcode: fmul.h ; op1:f30; op2:f29; dest:f31; op1val:0x7b41; op2val:0x1468;
   valaddr_reg:x3; val_offset:84*FLEN/8; rmval:dyn; fcsr: 96;
   correctval:??; testreg:x2
*/
TEST_FPRR_OP(fmul.h, f31, f30, f29, dyn, 96, 0, x3, 84*FLEN/8, x4, x1, x2)

inst_43:
// fs1 == 0 and fe1 == 0x1e and fm1 == 0x1f4 and fs2 == 0 and fe2 == 0x05 and fm2 == 0x15f and  fcsr == 0x60 and rm_val == 7  and rs1_nan_prefix == 0xffff and rs2_nan_prefix == 0xffff  
/* opcode: fmul.h ; op1:f30; op2:f29; dest:f31; op1val:0x79f4; op2val:0x155f;
   valaddr_reg:x3; val_offset:86*FLEN/8; rmval:dyn; fcsr: 96;
   correctval:??; testreg:x2
*/
TEST_FPRR_OP(fmul.h, f31, f30, f29, dyn, 96, 0, x3, 86*FLEN/8, x4, x1, x2)

inst_44:
// fs1 == 0 and fe1 == 0x1e and fm1 == 0x138 and fs2 == 0 and fe2 == 0x05 and fm2 == 0x221 and  fcsr == 0x60 and rm_val == 7  and rs1_nan_prefix == 0xffff and rs2_nan_prefix == 0xffff  
/* opcode: fmul.h ; op1:f30; op2:f29; dest:f31; op1val:0x7938; op2val:0x1621;
   valaddr_reg:x3; val_offset:88*FLEN/8; rmval:dyn; fcsr: 96;
   correctval:??; testreg:x2
*/
TEST_FPRR_OP(fmul.h, f31, f30, f29, dyn, 96, 0, x3, 88*FLEN/8, x4, x1, x2)

inst_45:
// fs1 == 0 and fe1 == 0x1c and fm1 == 0x33f and fs2 == 0 and fe2 == 0x07 and fm2 == 0x06a and  fcsr == 0x60 and rm_val == 7  and rs1_nan_prefix == 0xffff and rs2_nan_prefix == 0xffff  
/* opcode: fmul.h ; op1:f30; op2:f29; dest:f31; op1val:0x733f; op2val:0x1c6a;
   valaddr_reg:x3; val_offset:90*FLEN/8; rmval:dyn; fcsr: 96;
   correctval:??; testreg:x2
*/
TEST_FPRR_OP(fmul.h, f31, f30, f29, dyn, 96, 0, x3, 90*FLEN/8, x4, x1, x2)

inst_46:
// fs1 == 0 and fe1 == 0x1b and fm1 == 0x2cc and fs2 == 0 and fe2 == 0x08 and fm2 == 0x0b4 and  fcsr == 0x60 and rm_val == 7  and rs1_nan_prefix == 0xffff and rs2_nan_prefix == 0xffff  
/* opcode: fmul.h ; op1:f30; op2:f29; dest:f31; op1val:0x6ecc; op2val:0x20b4;
   valaddr_reg:x3; val_offset:92*FLEN/8; rmval:dyn; fcsr: 96;
   correctval:??; testreg:x2
*/
TEST_FPRR_OP(fmul.h, f31, f30, f29, dyn, 96, 0, x3, 92*FLEN/8, x4, x1, x2)

inst_47:
// fs1 == 0 and fe1 == 0x1e and fm1 == 0x2d4 and fs2 == 0 and fe2 == 0x05 and fm2 == 0x0af and  fcsr == 0x60 and rm_val == 7  and rs1_nan_prefix == 0xffff and rs2_nan_prefix == 0xffff  
/* opcode: fmul.h ; op1:f30; op2:f29; dest:f31; op1val:0x7ad4; op2val:0x14af;
   valaddr_reg:x3; val_offset:94*FLEN/8; rmval:dyn; fcsr: 96;
   correctval:??; testreg:x2
*/
TEST_FPRR_OP(fmul.h, f31, f30, f29, dyn, 96, 0, x3, 94*FLEN/8, x4, x1, x2)

inst_48:
// fs1 == 0 and fe1 == 0x1c and fm1 == 0x2bb and fs2 == 0 and fe2 == 0x07 and fm2 == 0x0c0 and  fcsr == 0x60 and rm_val == 7  and rs1_nan_prefix == 0xffff and rs2_nan_prefix == 0xffff  
/* opcode: fmul.h ; op1:f30; op2:f29; dest:f31; op1val:0x72bb; op2val:0x1cc0;
   valaddr_reg:x3; val_offset:96*FLEN/8; rmval:dyn; fcsr: 96;
   correctval:??; testreg:x2
*/
TEST_FPRR_OP(fmul.h, f31, f30, f29, dyn, 96, 0, x3, 96*FLEN/8, x4, x1, x2)

inst_49:
// fs1 == 0 and fe1 == 0x1d and fm1 == 0x2c3 and fs2 == 0 and fe2 == 0x00 and fm2 == 0x012 and  fcsr == 0x60 and rm_val == 7  and rs1_nan_prefix == 0xffff and rs2_nan_prefix == 0xffff  
/* opcode: fmul.h ; op1:f30; op2:f29; dest:f31; op1val:0x76c3; op2val:0x12;
   valaddr_reg:x3; val_offset:98*FLEN/8; rmval:dyn; fcsr: 96;
   correctval:??; testreg:x2
*/
TEST_FPRR_OP(fmul.h, f31, f30, f29, dyn, 96, 0, x3, 98*FLEN/8, x4, x1, x2)

inst_50:
// fs1 == 0 and fe1 == 0x1a and fm1 == 0x014 and fs2 == 0 and fe2 == 0x00 and fm2 == 0x0fb and  fcsr == 0x60 and rm_val == 7  and rs1_nan_prefix == 0xffff and rs2_nan_prefix == 0xffff  
/* opcode: fmul.h ; op1:f30; op2:f29; dest:f31; op1val:0x6814; op2val:0xfb;
   valaddr_reg:x3; val_offset:100*FLEN/8; rmval:dyn; fcsr: 96;
   correctval:??; testreg:x2
*/
TEST_FPRR_OP(fmul.h, f31, f30, f29, dyn, 96, 0, x3, 100*FLEN/8, x4, x1, x2)

inst_51:
// fs1 == 0 and fe1 == 0x1c and fm1 == 0x17f and fs2 == 0 and fe2 == 0x00 and fm2 == 0x02e and  fcsr == 0x60 and rm_val == 7  and rs1_nan_prefix == 0xffff and rs2_nan_prefix == 0xffff  
/* opcode: fmul.h ; op1:f30; op2:f29; dest:f31; op1val:0x717f; op2val:0x2e;
   valaddr_reg:x3; val_offset:102*FLEN/8; rmval:dyn; fcsr: 96;
   correctval:??; testreg:x2
*/
TEST_FPRR_OP(fmul.h, f31, f30, f29, dyn, 96, 0, x3, 102*FLEN/8, x4, x1, x2)

inst_52:
// fs1 == 0 and fe1 == 0x1b and fm1 == 0x14d and fs2 == 0 and fe2 == 0x00 and fm2 == 0x060 and  fcsr == 0x60 and rm_val == 7  and rs1_nan_prefix == 0xffff and rs2_nan_prefix == 0xffff  
/* opcode: fmul.h ; op1:f30; op2:f29; dest:f31; op1val:0x6d4d; op2val:0x60;
   valaddr_reg:x3; val_offset:104*FLEN/8; rmval:dyn; fcsr: 96;
   correctval:??; testreg:x2
*/
TEST_FPRR_OP(fmul.h, f31, f30, f29, dyn, 96, 0, x3, 104*FLEN/8, x4, x1, x2)

inst_53:
// fs1 == 0 and fe1 == 0x19 and fm1 == 0x27d and fs2 == 0 and fe2 == 0x00 and fm2 == 0x13b and  fcsr == 0x60 and rm_val == 7  and rs1_nan_prefix == 0xffff and rs2_nan_prefix == 0xffff  
/* opcode: fmul.h ; op1:f30; op2:f29; dest:f31; op1val:0x667d; op2val:0x13b;
   valaddr_reg:x3; val_offset:106*FLEN/8; rmval:dyn; fcsr: 96;
   correctval:??; testreg:x2
*/
TEST_FPRR_OP(fmul.h, f31, f30, f29, dyn, 96, 0, x3, 106*FLEN/8, x4, x1, x2)

inst_54:
// fs1 == 0 and fe1 == 0x19 and fm1 == 0x16a and fs2 == 0 and fe2 == 0x00 and fm2 == 0x17a and  fcsr == 0x60 and rm_val == 7  and rs1_nan_prefix == 0xffff and rs2_nan_prefix == 0xffff  
/* opcode: fmul.h ; op1:f30; op2:f29; dest:f31; op1val:0x656a; op2val:0x17a;
   valaddr_reg:x3; val_offset:108*FLEN/8; rmval:dyn; fcsr: 96;
   correctval:??; testreg:x2
*/
TEST_FPRR_OP(fmul.h, f31, f30, f29, dyn, 96, 0, x3, 108*FLEN/8, x4, x1, x2)

inst_55:
// fs1 == 0 and fe1 == 0x1e and fm1 == 0x280 and fs2 == 0 and fe2 == 0x00 and fm2 == 0x009 and  fcsr == 0x60 and rm_val == 7  and rs1_nan_prefix == 0xffff and rs2_nan_prefix == 0xffff  
/* opcode: fmul.h ; op1:f30; op2:f29; dest:f31; op1val:0x7a80; op2val:0x9;
   valaddr_reg:x3; val_offset:110*FLEN/8; rmval:dyn; fcsr: 96;
   correctval:??; testreg:x2
*/
TEST_FPRR_OP(fmul.h, f31, f30, f29, dyn, 96, 0, x3, 110*FLEN/8, x4, x1, x2)

inst_56:
// fs1 == 0 and fe1 == 0x1e and fm1 == 0x2ae and fs2 == 0 and fe2 == 0x00 and fm2 == 0x000 and  fcsr == 0x60 and rm_val == 7  and rs1_nan_prefix == 0xffff and rs2_nan_prefix == 0xffff  
/* opcode: fmul.h ; op1:f30; op2:f29; dest:f31; op1val:0x7aae; op2val:0x0;
   valaddr_reg:x3; val_offset:112*FLEN/8; rmval:dyn; fcsr: 96;
   correctval:??; testreg:x2
*/
TEST_FPRR_OP(fmul.h, f31, f30, f29, dyn, 96, 0, x3, 112*FLEN/8, x4, x1, x2)

inst_57:
// fs1 == 0 and fe1 == 0x1e and fm1 == 0x15a and fs2 == 0 and fe2 == 0x00 and fm2 == 0x000 and  fcsr == 0x60 and rm_val == 7  and rs1_nan_prefix == 0xffff and rs2_nan_prefix == 0xffff  
/* opcode: fmul.h ; op1:f30; op2:f29; dest:f31; op1val:0x795a; op2val:0x0;
   valaddr_reg:x3; val_offset:114*FLEN/8; rmval:dyn; fcsr: 96;
   correctval:??; testreg:x2
*/
TEST_FPRR_OP(fmul.h, f31, f30, f29, dyn, 96, 0, x3, 114*FLEN/8, x4, x1, x2)
#endif


RVTEST_CODE_END
RVMODEL_HALT

RVTEST_DATA_BEGIN
.align 4
rvtest_data:
.word 0xbabecafe
.word 0xabecafeb
.word 0xbecafeba
.word 0xecafebab
test_dataset_0:
NAN_BOXED(31653,16,FLEN)
NAN_BOXED(0,16,FLEN)
NAN_BOXED(27452,16,FLEN)
NAN_BOXED(0,16,FLEN)
NAN_BOXED(31406,16,FLEN)
NAN_BOXED(31406,16,FLEN)
NAN_BOXED(31066,16,FLEN)
NAN_BOXED(31066,16,FLEN)
NAN_BOXED(30936,16,FLEN)
NAN_BOXED(0,16,FLEN)
NAN_BOXED(30885,16,FLEN)
NAN_BOXED(0,16,FLEN)
NAN_BOXED(30435,16,FLEN)
NAN_BOXED(0,16,FLEN)
NAN_BOXED(31176,16,FLEN)
NAN_BOXED(0,16,FLEN)
NAN_BOXED(31639,16,FLEN)
NAN_BOXED(0,16,FLEN)
NAN_BOXED(30493,16,FLEN)
NAN_BOXED(0,16,FLEN)
NAN_BOXED(26777,16,FLEN)
NAN_BOXED(0,16,FLEN)
NAN_BOXED(30575,16,FLEN)
NAN_BOXED(0,16,FLEN)
NAN_BOXED(30227,16,FLEN)
NAN_BOXED(0,16,FLEN)
NAN_BOXED(30772,16,FLEN)
NAN_BOXED(0,16,FLEN)
NAN_BOXED(29581,16,FLEN)
NAN_BOXED(0,16,FLEN)
NAN_BOXED(30003,16,FLEN)
NAN_BOXED(0,16,FLEN)
NAN_BOXED(30740,16,FLEN)
NAN_BOXED(0,16,FLEN)
NAN_BOXED(31076,16,FLEN)
NAN_BOXED(0,16,FLEN)
NAN_BOXED(31525,16,FLEN)
NAN_BOXED(0,16,FLEN)
NAN_BOXED(31199,16,FLEN)
NAN_BOXED(0,16,FLEN)
NAN_BOXED(31257,16,FLEN)
NAN_BOXED(0,16,FLEN)
NAN_BOXED(30120,16,FLEN)
NAN_BOXED(0,16,FLEN)
NAN_BOXED(31665,16,FLEN)
NAN_BOXED(0,16,FLEN)
NAN_BOXED(31239,16,FLEN)
NAN_BOXED(0,16,FLEN)
NAN_BOXED(30561,16,FLEN)
NAN_BOXED(0,16,FLEN)
NAN_BOXED(30678,16,FLEN)
NAN_BOXED(0,16,FLEN)
NAN_BOXED(30721,16,FLEN)
NAN_BOXED(0,16,FLEN)
NAN_BOXED(30121,16,FLEN)
NAN_BOXED(0,16,FLEN)
NAN_BOXED(31537,16,FLEN)
NAN_BOXED(0,16,FLEN)
NAN_BOXED(30858,16,FLEN)
NAN_BOXED(0,16,FLEN)
NAN_BOXED(31177,16,FLEN)
NAN_BOXED(0,16,FLEN)
NAN_BOXED(29464,16,FLEN)
NAN_BOXED(0,16,FLEN)
NAN_BOXED(31128,16,FLEN)
NAN_BOXED(0,16,FLEN)
NAN_BOXED(31554,16,FLEN)
NAN_BOXED(0,16,FLEN)
NAN_BOXED(31561,16,FLEN)
NAN_BOXED(0,16,FLEN)
NAN_BOXED(31655,16,FLEN)
NAN_BOXED(0,16,FLEN)
NAN_BOXED(30728,16,FLEN)
NAN_BOXED(0,16,FLEN)
NAN_BOXED(31029,16,FLEN)
NAN_BOXED(0,16,FLEN)
NAN_BOXED(29948,16,FLEN)
NAN_BOXED(0,16,FLEN)
NAN_BOXED(30743,16,FLEN)
NAN_BOXED(0,16,FLEN)
NAN_BOXED(30971,16,FLEN)
NAN_BOXED(0,16,FLEN)
NAN_BOXED(31375,16,FLEN)
NAN_BOXED(0,16,FLEN)
NAN_BOXED(31553,16,FLEN)
NAN_BOXED(5224,16,FLEN)
NAN_BOXED(31220,16,FLEN)
NAN_BOXED(5471,16,FLEN)
NAN_BOXED(31032,16,FLEN)
NAN_BOXED(5665,16,FLEN)
NAN_BOXED(29503,16,FLEN)
NAN_BOXED(7274,16,FLEN)
NAN_BOXED(28364,16,FLEN)
NAN_BOXED(8372,16,FLEN)
NAN_BOXED(31444,16,FLEN)
NAN_BOXED(5295,16,FLEN)
NAN_BOXED(29371,16,FLEN)
NAN_BOXED(7360,16,FLEN)
NAN_BOXED(30403,16,FLEN)
NAN_BOXED(18,16,FLEN)
NAN_BOXED(26644,16,FLEN)
NAN_BOXED(251,16,FLEN)
NAN_BOXED(29055,16,FLEN)
NAN_BOXED(46,16,FLEN)
NAN_BOXED(27981,16,FLEN)
NAN_BOXED(96,16,FLEN)
NAN_BOXED(26237,16,FLEN)
NAN_BOXED(315,16,FLEN)
NAN_BOXED(25962,16,FLEN)
NAN_BOXED(378,16,FLEN)
NAN_BOXED(31360,16,FLEN)
NAN_BOXED(9,16,FLEN)
NAN_BOXED(31406,16,FLEN)
NAN_BOXED(0,16,FLEN)
NAN_BOXED(31066,16,FLEN)
NAN_BOXED(0,16,FLEN)
RVTEST_DATA_END

RVMODEL_DATA_BEGIN
rvtest_sig_begin:
sig_begin_canary:
CANARY;



signature_x1_0:
    .fill 0*((SIGALIGN)/4),4,0xdeadbeef


signature_x1_1:
    .fill 116*((SIGALIGN)/4),4,0xdeadbeef

#ifdef rvtest_mtrap_routine
tsig_begin_canary:
CANARY;

mtrap_sigptr:
    .fill 64*XLEN/32,4,0xdeadbeef

tsig_end_canary:
CANARY;
#endif

#ifdef rvtest_gpr_save

gpr_save:
    .fill 32*XLEN/32,4,0xdeadbeef

#endif


sig_end_canary:
CANARY;
rvtest_sig_end:
RVMODEL_DATA_END
