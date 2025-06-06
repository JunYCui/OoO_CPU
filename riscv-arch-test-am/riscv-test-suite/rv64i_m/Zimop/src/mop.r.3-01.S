
// -----------
// This file was generated by riscv_ctg (https://github.com/riscv-software-src/riscv-ctg)
// version   : 0.11.1
// timestamp : Fri Sep 22 00:56:54 2023 GMT
// usage     : riscv_ctg \
//                  -- cgf //                  --cgf  /riscv-ctg/sample_cgfs/dataset.cgf \
//                  --cgf  /riscv-ctg/sample_cgfs/zimop.cgf \
 \
//                  -- xlen 64  \
//                  --randomize \
// -----------
//
// -----------
// Copyright (c) 2020. RISC-V International. All rights reserved.
// SPDX-License-Identifier: BSD-3-Clause
// -----------
//
// This assembly file tests the mop.r.3 instruction of the RISC-V RV64Zimop extension for the mop.r.3 covergroup.
// 
#include "model_test.h"
#include "arch_test.h"
RVTEST_ISA("RV64IZimop")

.section .text.init
.globl rvtest_entry_point
rvtest_entry_point:
RVMODEL_BOOT
RVTEST_CODE_BEGIN

#ifdef TEST_CASE_1

RVTEST_CASE(0,"//check ISA:=regex(.*Zimop.*);def TEST_CASE_1=True;",mop.r.3)

RVTEST_SIGBASE(x8,signature_x8_1)

inst_0:
// rs1 == rd, rs1==x29, rd==x29, imm_val == (-2**(12-1)), rs1_val != imm_val, rs1_val < 0 and imm_val < 0
// opcode: mop.r.3 ; op1:x29; dest:x29; op1val:-0x4000000000000001;  immval:-0x800
TEST_R_OP( mop.r.3, x29, x29, 0, -0x4000000000000001, x8, 0*XLEN/8, x9)

inst_1:
// rs1 != rd, rs1==x6, rd==x21, imm_val == (2**(12-1)-1), rs1_val < 0 and imm_val > 0
// opcode: mop.r.3 ; op1:x6; dest:x21; op1val:-0x1;  immval:0x7ff
TEST_R_OP( mop.r.3, x21, x6, 0, -0x1, x8, 1*XLEN/8, x9)

inst_2:
// rs1==x20, rd==x2, imm_val == 0, 
// opcode: mop.r.3 ; op1:x20; dest:x2; op1val:0x9;  immval:0x0
TEST_R_OP( mop.r.3, x2, x20, 0, 0x9, x8, 2*XLEN/8, x9)

inst_3:
// rs1==x1, rd==x19, imm_val == 1, rs1_val > 0 and imm_val > 0
// opcode: mop.r.3 ; op1:x1; dest:x19; op1val:0xb504f332;  immval:0x1
TEST_R_OP( mop.r.3, x19, x1, 0, 0xb504f332, x8, 3*XLEN/8, x9)

inst_4:
// rs1==x0, rd==x16, rs1_val == (-2**(xlen-1)), 
// opcode: mop.r.3 ; op1:x0; dest:x16; op1val:0x0;  immval:0x9
TEST_R_OP( mop.r.3, x16, x0, 0, 0x0, x8, 4*XLEN/8, x9)

inst_5:
// rs1==x2, rd==x17, rs1_val == (2**(xlen-1)-1), 
// opcode: mop.r.3 ; op1:x2; dest:x17; op1val:0x7fffffffffffffff;  immval:0x556
TEST_R_OP( mop.r.3, x17, x2, 0, 0x7fffffffffffffff, x8, 5*XLEN/8, x9)

inst_6:
// rs1==x27, rd==x14, rs1_val == 0, 
// opcode: mop.r.3 ; op1:x27; dest:x14; op1val:0x0;  immval:-0x2
TEST_R_OP( mop.r.3, x14, x27, 0, 0x0, x8, 6*XLEN/8, x9)

inst_7:
// rs1==x19, rd==x13, rs1_val == 1, 
// opcode: mop.r.3 ; op1:x19; dest:x13; op1val:0x1;  immval:0x4
TEST_R_OP( mop.r.3, x13, x19, 0, 0x1, x8, 7*XLEN/8, x9)

inst_8:
// rs1==x31, rd==x30, rs1_val == imm_val, 
// opcode: mop.r.3 ; op1:x31; dest:x30; op1val:-0x21;  immval:-0x21
TEST_R_OP( mop.r.3, x30, x31, 0, -0x21, x8, 8*XLEN/8, x9)

inst_9:
// rs1==x14, rd==x18, rs1_val > 0 and imm_val < 0, 
// opcode: mop.r.3 ; op1:x14; dest:x18; op1val:0x1000000;  immval:-0x2
TEST_R_OP( mop.r.3, x18, x14, 0, 0x1000000, x8, 9*XLEN/8, x9)

inst_10:
// rs1==x18, rd==x5, 
// opcode: mop.r.3 ; op1:x18; dest:x5; op1val:0x0;  immval:-0x800
TEST_R_OP( mop.r.3, x5, x18, 0, 0x0, x8, 10*XLEN/8, x9)

inst_11:
// rs1==x3, rd==x11, 
// opcode: mop.r.3 ; op1:x3; dest:x11; op1val:0x0;  immval:-0x800
TEST_R_OP( mop.r.3, x11, x3, 0, 0x0, x8, 11*XLEN/8, x9)

inst_12:
// rs1==x15, rd==x10, 
// opcode: mop.r.3 ; op1:x15; dest:x10; op1val:0x0;  immval:-0x800
TEST_R_OP( mop.r.3, x10, x15, 0, 0x0, x8, 12*XLEN/8, x9)

inst_13:
// rs1==x12, rd==x24, 
// opcode: mop.r.3 ; op1:x12; dest:x24; op1val:0x0;  immval:-0x800
TEST_R_OP( mop.r.3, x24, x12, 0, 0x0, x8, 13*XLEN/8, x9)

inst_14:
// rs1==x4, rd==x20, 
// opcode: mop.r.3 ; op1:x4; dest:x20; op1val:0x0;  immval:-0x800
TEST_R_OP( mop.r.3, x20, x4, 0, 0x0, x8, 14*XLEN/8, x9)

inst_15:
// rs1==x16, rd==x7, 
// opcode: mop.r.3 ; op1:x16; dest:x7; op1val:0x0;  immval:-0x800
TEST_R_OP( mop.r.3, x7, x16, 0, 0x0, x8, 15*XLEN/8, x9)

inst_16:
// rs1==x13, rd==x12, 
// opcode: mop.r.3 ; op1:x13; dest:x12; op1val:0x0;  immval:-0x800
TEST_R_OP( mop.r.3, x12, x13, 0, 0x0, x8, 16*XLEN/8, x9)

inst_17:
// rs1==x17, rd==x25, 
// opcode: mop.r.3 ; op1:x17; dest:x25; op1val:0x0;  immval:-0x800
TEST_R_OP( mop.r.3, x25, x17, 0, 0x0, x8, 17*XLEN/8, x9)

inst_18:
// rs1==x23, rd==x26, 
// opcode: mop.r.3 ; op1:x23; dest:x26; op1val:0x0;  immval:-0x800
TEST_R_OP( mop.r.3, x26, x23, 0, 0x0, x8, 18*XLEN/8, x9)
RVTEST_SIGBASE(x2,signature_x2_0)

inst_19:
// rs1==x28, rd==x31, 
// opcode: mop.r.3 ; op1:x28; dest:x31; op1val:0x0;  immval:-0x800
TEST_R_OP( mop.r.3, x31, x28, 0, 0x0, x2, 0*XLEN/8, x12)

inst_20:
// rs1==x21, rd==x0, 
// opcode: mop.r.3 ; op1:x21; dest:x0; op1val:0x0;  immval:-0x800
TEST_R_OP( mop.r.3, x0, x21, 0, 0x0, x2, 1*XLEN/8, x12)

inst_21:
// rs1==x5, rd==x15, 
// opcode: mop.r.3 ; op1:x5; dest:x15; op1val:0x0;  immval:-0x800
TEST_R_OP( mop.r.3, x15, x5, 0, 0x0, x2, 2*XLEN/8, x12)

inst_22:
// rs1==x30, rd==x27, 
// opcode: mop.r.3 ; op1:x30; dest:x27; op1val:0x0;  immval:-0x800
TEST_R_OP( mop.r.3, x27, x30, 0, 0x0, x2, 3*XLEN/8, x12)

inst_23:
// rs1==x24, rd==x9, 
// opcode: mop.r.3 ; op1:x24; dest:x9; op1val:0x0;  immval:-0x800
TEST_R_OP( mop.r.3, x9, x24, 0, 0x0, x2, 4*XLEN/8, x12)

inst_24:
// rs1==x7, rd==x8, 
// opcode: mop.r.3 ; op1:x7; dest:x8; op1val:0x0;  immval:-0x800
TEST_R_OP( mop.r.3, x8, x7, 0, 0x0, x2, 5*XLEN/8, x12)

inst_25:
// rs1==x11, rd==x4, 
// opcode: mop.r.3 ; op1:x11; dest:x4; op1val:0x0;  immval:-0x800
TEST_R_OP( mop.r.3, x4, x11, 0, 0x0, x2, 6*XLEN/8, x12)

inst_26:
// rs1==x8, rd==x22, 
// opcode: mop.r.3 ; op1:x8; dest:x22; op1val:0x0;  immval:-0x800
TEST_R_OP( mop.r.3, x22, x8, 0, 0x0, x2, 7*XLEN/8, x12)

inst_27:
// rs1==x10, rd==x6, 
// opcode: mop.r.3 ; op1:x10; dest:x6; op1val:0x0;  immval:-0x800
TEST_R_OP( mop.r.3, x6, x10, 0, 0x0, x2, 8*XLEN/8, x12)

inst_28:
// rs1==x9, rd==x1, 
// opcode: mop.r.3 ; op1:x9; dest:x1; op1val:0x0;  immval:-0x800
TEST_R_OP( mop.r.3, x1, x9, 0, 0x0, x2, 9*XLEN/8, x12)

inst_29:
// rs1==x22, rd==x3, 
// opcode: mop.r.3 ; op1:x22; dest:x3; op1val:0x0;  immval:-0x800
TEST_R_OP( mop.r.3, x3, x22, 0, 0x0, x2, 10*XLEN/8, x12)

inst_30:
// rs1==x26, rd==x28, 
// opcode: mop.r.3 ; op1:x26; dest:x28; op1val:0x0;  immval:-0x800
TEST_R_OP( mop.r.3, x28, x26, 0, 0x0, x2, 11*XLEN/8, x12)

inst_31:
// rs1==x25, rd==x23, 
// opcode: mop.r.3 ; op1:x25; dest:x23; op1val:0x0;  immval:-0x800
TEST_R_OP( mop.r.3, x23, x25, 0, 0x0, x2, 12*XLEN/8, x12)

inst_32:
// rs1_val == (-2**(xlen-1)), 
// opcode: mop.r.3 ; op1:x30; dest:x31; op1val:-0x8000000000000000;  immval:0x9
TEST_R_OP( mop.r.3, x31, x30, 0, -0x8000000000000000, x2, 13*XLEN/8, x12)
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



signature_x8_0:
    .fill 0*((XLEN/8)/4),4,0xdeadbeef


signature_x8_1:
    .fill 19*((XLEN/8)/4),4,0xdeadbeef


signature_x2_0:
    .fill 14*((XLEN/8)/4),4,0xdeadbeef

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
