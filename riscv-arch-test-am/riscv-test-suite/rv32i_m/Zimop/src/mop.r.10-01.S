
// -----------
// This file was generated by riscv_ctg (https://github.com/riscv-software-src/riscv-ctg)
// version   : 0.11.1
// timestamp : Sun Sep 17 19:42:00 2023 GMT
// usage     : riscv_ctg \
//                  -- cgf //                  --cgf  /riscv-ctg/sample_cgfs/dataset.cgf \
//                  --cgf  /riscv-ctg/sample_cgfs/zimop.cgf \
 \
//                  -- xlen 32  \
//                  --randomize \
// -----------
//
// -----------
// Copyright (c) 2020. RISC-V International. All rights reserved.
// SPDX-License-Identifier: BSD-3-Clause
// -----------
//
// This assembly file tests the mop.r.10 instruction of the RISC-V RV32Zimop extension for the mop.r.10 covergroup.
// 
#include "model_test.h"
#include "arch_test.h"
RVTEST_ISA("RV32IZimop")

.section .text.init
.globl rvtest_entry_point
rvtest_entry_point:
RVMODEL_BOOT
RVTEST_CODE_BEGIN

#ifdef TEST_CASE_1

RVTEST_CASE(0,"//check ISA:=regex(.*Zimop.*);def TEST_CASE_1=True;",mop.r.10)

RVTEST_SIGBASE(x1,signature_x1_1)

inst_0:
// rs1 == rd, rs1==x25, rd==x25, imm_val == (-2**(12-1)), rs1_val != imm_val, rs1_val < 0 and imm_val < 0
// opcode: mop.r.10 ; op1:x25; dest:x25; op1val:-0x401;  immval:-0x800
TEST_R_OP( mop.r.10, x25, x25, 0, -0x401, x1, 0*XLEN/8, x4)

inst_1:
// rs1 != rd, rs1==x28, rd==x9, imm_val == (2**(12-1)-1), rs1_val < 0 and imm_val > 0
// opcode: mop.r.10 ; op1:x28; dest:x9; op1val:-0x6;  immval:0x7ff
TEST_R_OP( mop.r.10, x9, x28, 0, -0x6, x1, 1*XLEN/8, x4)

inst_2:
// rs1==x30, rd==x16, imm_val == 0, 
// opcode: mop.r.10 ; op1:x30; dest:x16; op1val:-0x1000001;  immval:0x0
TEST_R_OP( mop.r.10, x16, x30, 0, -0x1000001, x1, 2*XLEN/8, x4)

inst_3:
// rs1==x15, rd==x13, imm_val == 1, 
// opcode: mop.r.10 ; op1:x15; dest:x13; op1val:-0x800001;  immval:0x1
TEST_R_OP( mop.r.10, x13, x15, 0, -0x800001, x1, 3*XLEN/8, x4)

inst_4:
// rs1==x12, rd==x5, rs1_val == (-2**(xlen-1)), 
// opcode: mop.r.10 ; op1:x12; dest:x5; op1val:-0x80000000;  immval:0x10
TEST_R_OP( mop.r.10, x5, x12, 0, -0x80000000, x1, 4*XLEN/8, x4)

inst_5:
// rs1==x23, rd==x19, rs1_val == (2**(xlen-1)-1), rs1_val > 0 and imm_val < 0
// opcode: mop.r.10 ; op1:x23; dest:x19; op1val:0x7fffffff;  immval:-0x400
TEST_R_OP( mop.r.10, x19, x23, 0, 0x7fffffff, x1, 5*XLEN/8, x4)

inst_6:
// rs1==x2, rd==x30, rs1_val == 0, 
// opcode: mop.r.10 ; op1:x2; dest:x30; op1val:0x0;  immval:0x2
TEST_R_OP( mop.r.10, x30, x2, 0, 0x0, x1, 6*XLEN/8, x4)

inst_7:
// rs1==x18, rd==x3, rs1_val == 1, rs1_val > 0 and imm_val > 0
// opcode: mop.r.10 ; op1:x18; dest:x3; op1val:0x1;  immval:0x7ff
TEST_R_OP( mop.r.10, x3, x18, 0, 0x1, x1, 7*XLEN/8, x4)

inst_8:
// rs1==x31, rd==x10, rs1_val == imm_val, 
// opcode: mop.r.10 ; op1:x31; dest:x10; op1val:0x1;  immval:0x1
TEST_R_OP( mop.r.10, x10, x31, 0, 0x1, x1, 8*XLEN/8, x4)

inst_9:
// rs1==x8, rd==x22, 
// opcode: mop.r.10 ; op1:x8; dest:x22; op1val:-0x80000000;  immval:-0x800
TEST_R_OP( mop.r.10, x22, x8, 0, -0x80000000, x1, 9*XLEN/8, x4)

inst_10:
// rs1==x14, rd==x12, 
// opcode: mop.r.10 ; op1:x14; dest:x12; op1val:-0x80000000;  immval:-0x800
TEST_R_OP( mop.r.10, x12, x14, 0, -0x80000000, x1, 10*XLEN/8, x4)

inst_11:
// rs1==x3, rd==x15, 
// opcode: mop.r.10 ; op1:x3; dest:x15; op1val:-0x80000000;  immval:-0x800
TEST_R_OP( mop.r.10, x15, x3, 0, -0x80000000, x1, 11*XLEN/8, x4)

inst_12:
// rs1==x24, rd==x6, 
// opcode: mop.r.10 ; op1:x24; dest:x6; op1val:-0x80000000;  immval:-0x800
TEST_R_OP( mop.r.10, x6, x24, 0, -0x80000000, x1, 12*XLEN/8, x4)

inst_13:
// rs1==x5, rd==x28, 
// opcode: mop.r.10 ; op1:x5; dest:x28; op1val:-0x80000000;  immval:-0x800
TEST_R_OP( mop.r.10, x28, x5, 0, -0x80000000, x1, 13*XLEN/8, x4)

inst_14:
// rs1==x16, rd==x21, 
// opcode: mop.r.10 ; op1:x16; dest:x21; op1val:-0x80000000;  immval:-0x800
TEST_R_OP( mop.r.10, x21, x16, 0, -0x80000000, x1, 14*XLEN/8, x4)

inst_15:
// rs1==x19, rd==x26, 
// opcode: mop.r.10 ; op1:x19; dest:x26; op1val:-0x80000000;  immval:-0x800
TEST_R_OP( mop.r.10, x26, x19, 0, -0x80000000, x1, 15*XLEN/8, x4)

inst_16:
// rs1==x13, rd==x29, 
// opcode: mop.r.10 ; op1:x13; dest:x29; op1val:-0x80000000;  immval:-0x800
TEST_R_OP( mop.r.10, x29, x13, 0, -0x80000000, x1, 16*XLEN/8, x4)

inst_17:
// rs1==x21, rd==x0, 
// opcode: mop.r.10 ; op1:x21; dest:x0; op1val:-0x80000000;  immval:-0x800
TEST_R_OP( mop.r.10, x0, x21, 0, -0x80000000, x1, 17*XLEN/8, x4)

inst_18:
// rs1==x11, rd==x14, 
// opcode: mop.r.10 ; op1:x11; dest:x14; op1val:-0x80000000;  immval:-0x800
TEST_R_OP( mop.r.10, x14, x11, 0, -0x80000000, x1, 18*XLEN/8, x4)

inst_19:
// rs1==x9, rd==x27, 
// opcode: mop.r.10 ; op1:x9; dest:x27; op1val:-0x80000000;  immval:-0x800
TEST_R_OP( mop.r.10, x27, x9, 0, -0x80000000, x1, 19*XLEN/8, x4)

inst_20:
// rs1==x29, rd==x7, 
// opcode: mop.r.10 ; op1:x29; dest:x7; op1val:-0x80000000;  immval:-0x800
TEST_R_OP( mop.r.10, x7, x29, 0, -0x80000000, x1, 20*XLEN/8, x5)
RVTEST_SIGBASE(x3,signature_x3_0)

inst_21:
// rs1==x6, rd==x20, 
// opcode: mop.r.10 ; op1:x6; dest:x20; op1val:-0x80000000;  immval:-0x800
TEST_R_OP( mop.r.10, x20, x6, 0, -0x80000000, x3, 0*XLEN/8, x5)

inst_22:
// rs1==x4, rd==x23, 
// opcode: mop.r.10 ; op1:x4; dest:x23; op1val:-0x80000000;  immval:-0x800
TEST_R_OP( mop.r.10, x23, x4, 0, -0x80000000, x3, 1*XLEN/8, x5)

inst_23:
// rs1==x22, rd==x24, 
// opcode: mop.r.10 ; op1:x22; dest:x24; op1val:-0x80000000;  immval:-0x800
TEST_R_OP( mop.r.10, x24, x22, 0, -0x80000000, x3, 2*XLEN/8, x5)

inst_24:
// rs1==x7, rd==x1, 
// opcode: mop.r.10 ; op1:x7; dest:x1; op1val:-0x80000000;  immval:-0x800
TEST_R_OP( mop.r.10, x1, x7, 0, -0x80000000, x3, 3*XLEN/8, x5)

inst_25:
// rs1==x17, rd==x31, 
// opcode: mop.r.10 ; op1:x17; dest:x31; op1val:-0x80000000;  immval:-0x800
TEST_R_OP( mop.r.10, x31, x17, 0, -0x80000000, x3, 4*XLEN/8, x5)

inst_26:
// rs1==x26, rd==x17, 
// opcode: mop.r.10 ; op1:x26; dest:x17; op1val:-0x80000000;  immval:-0x800
TEST_R_OP( mop.r.10, x17, x26, 0, -0x80000000, x3, 5*XLEN/8, x5)

inst_27:
// rs1==x20, rd==x2, 
// opcode: mop.r.10 ; op1:x20; dest:x2; op1val:-0x80000000;  immval:-0x800
TEST_R_OP( mop.r.10, x2, x20, 0, -0x80000000, x3, 6*XLEN/8, x5)

inst_28:
// rs1==x0, rd==x8, 
// opcode: mop.r.10 ; op1:x0; dest:x8; op1val:0x0;  immval:-0x800
TEST_R_OP( mop.r.10, x8, x0, 0, 0x0, x3, 7*XLEN/8, x5)

inst_29:
// rs1==x10, rd==x11, 
// opcode: mop.r.10 ; op1:x10; dest:x11; op1val:-0x80000000;  immval:-0x800
TEST_R_OP( mop.r.10, x11, x10, 0, -0x80000000, x3, 8*XLEN/8, x5)

inst_30:
// rs1==x27, rd==x4, 
// opcode: mop.r.10 ; op1:x27; dest:x4; op1val:-0x80000000;  immval:-0x800
TEST_R_OP( mop.r.10, x4, x27, 0, -0x80000000, x3, 9*XLEN/8, x5)

inst_31:
// rs1==x1, rd==x18, 
// opcode: mop.r.10 ; op1:x1; dest:x18; op1val:-0x80000000;  immval:-0x800
TEST_R_OP( mop.r.10, x18, x1, 0, -0x80000000, x3, 10*XLEN/8, x5)
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
RVTEST_DATA_END

RVMODEL_DATA_BEGIN
rvtest_sig_begin:
sig_begin_canary:
CANARY;



signature_x1_0:
    .fill 0*((XLEN/8)/4),4,0xdeadbeef


signature_x1_1:
    .fill 21*((XLEN/8)/4),4,0xdeadbeef


signature_x3_0:
    .fill 11*((XLEN/8)/4),4,0xdeadbeef

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
