// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VSimTop.h for the primary calling header

#ifndef VERILATED_VSIMTOP___024ROOT_H_
#define VERILATED_VSIMTOP___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_threads.h"
#include "verilated_timing.h"
class VSimTop_axi4_if;


class VSimTop__Syms;

class alignas(VL_CACHE_LINE_BYTES) VSimTop___024root final : public VerilatedModule {
  public:
    // CELLS
    VSimTop_axi4_if* __PVT__ysyx_24100029_IFU_tb__DOT__bus;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        IData/*31:0*/ ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__pc;
        VlUnpacked<IData/*24:0*/, 2> ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__cache_tag;
        VlUnpacked<CData/*0:0*/, 19> __Vm_traceActivity;
        CData/*0:0*/ ysyx_24100029_IFU_tb__DOT__reset;
        VlUnpacked<IData/*31:0*/, 16> ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__pc_fifo;
        CData/*3:0*/ ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__w_ptr;
        CData/*3:0*/ ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__inst_wen;
        VlUnpacked<IData/*31:0*/, 4> ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__pc_i;
        CData/*3:0*/ __Vdly__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__r_ptr;
        CData/*3:0*/ ysyx_24100029_IFU_tb__DOT__ready;
        CData/*3:0*/ ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__inst_ren;
        CData/*2:0*/ ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__count_output;
        CData/*3:0*/ __VdlyDim0__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__pc_fifo__v2;
        CData/*0:0*/ __VdlySet__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__pc_fifo__v2;
        CData/*3:0*/ __VdlyDim0__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__pc_fifo__v3;
        CData/*0:0*/ __VdlySet__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__pc_fifo__v3;
        IData/*31:0*/ __VdlyVal__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__pc_fifo__v2;
        IData/*31:0*/ __VdlyVal__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__pc_fifo__v3;
        CData/*2:0*/ ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__count_input;
        VlUnpacked<VlUnpacked<VlWide<6>/*161:0*/, 2>, 8> ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache;
        CData/*2:0*/ __VdlyDim1__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache__v0;
        CData/*0:0*/ __VdlySet__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache__v0;
        CData/*1:0*/ __VdlyVal__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache__v1;
        CData/*2:0*/ __VdlyDim1__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache__v1;
        CData/*0:0*/ __VdlySet__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache__v1;
        CData/*2:0*/ __VdlyDim1__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache__v2;
        CData/*1:0*/ __VdlyVal__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache__v3;
        CData/*2:0*/ __VdlyDim1__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache__v3;
        CData/*0:0*/ __VdlySet__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache__v3;
        CData/*2:0*/ __VdlyDim1__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache__v4;
        CData/*1:0*/ __VdlyVal__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache__v5;
        CData/*2:0*/ __VdlyDim1__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache__v5;
        CData/*0:0*/ __VdlySet__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache__v5;
        CData/*2:0*/ __VdlyDim1__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache__v6;
        CData/*1:0*/ __VdlyVal__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache__v7;
        CData/*2:0*/ __VdlyDim1__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache__v7;
        CData/*0:0*/ __VdlySet__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache__v7;
        CData/*2:0*/ __VdlyDim1__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache__v8;
        CData/*2:0*/ __VdlyDim1__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache__v9;
        CData/*0:0*/ __VdlySet__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache__v9;
        CData/*1:0*/ __VdlyVal__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache__v10;
        CData/*2:0*/ __VdlyDim1__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache__v10;
        CData/*0:0*/ __VdlySet__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache__v10;
        CData/*2:0*/ __VdlyDim1__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache__v11;
        CData/*1:0*/ __VdlyVal__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache__v12;
        CData/*2:0*/ __VdlyDim1__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache__v12;
        CData/*0:0*/ __VdlySet__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache__v12;
        CData/*2:0*/ __VdlyDim1__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache__v13;
        CData/*1:0*/ __VdlyVal__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache__v14;
        CData/*2:0*/ __VdlyDim1__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache__v14;
        CData/*0:0*/ __VdlySet__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache__v14;
        CData/*2:0*/ __VdlyDim1__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache__v15;
        CData/*1:0*/ __VdlyVal__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache__v16;
        CData/*2:0*/ __VdlyDim1__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache__v16;
        CData/*0:0*/ __VdlySet__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache__v16;
        CData/*2:0*/ __VdlyDim1__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache__v17;
        IData/*25:0*/ __VdlyVal__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache__v0;
        IData/*31:0*/ __VdlyVal__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache__v2;
        IData/*31:0*/ __VdlyVal__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache__v4;
        IData/*31:0*/ __VdlyVal__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache__v6;
        IData/*31:0*/ __VdlyVal__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache__v8;
        IData/*25:0*/ __VdlyVal__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache__v9;
        IData/*31:0*/ __VdlyVal__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache__v11;
        IData/*31:0*/ __VdlyVal__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache__v13;
    };
    struct {
        IData/*31:0*/ __VdlyVal__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache__v15;
        IData/*31:0*/ __VdlyVal__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache__v17;
        CData/*1:0*/ ysyx_24100029_IFU_tb__DOT__commit_pc_type;
        IData/*31:0*/ ysyx_24100029_IFU_tb__DOT__commit_npc;
        IData/*31:0*/ ysyx_24100029_IFU_tb__DOT__pc2_o;
        VlUnpacked<CData/*0:0*/, 16> ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__pred_fifo;
        CData/*0:0*/ __VdlyVal__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__pred_fifo__v0;
        CData/*3:0*/ __VdlyDim0__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__pred_fifo__v0;
        CData/*0:0*/ __VdlySet__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__pred_fifo__v0;
        CData/*0:0*/ __VdlyVal__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__pred_fifo__v1;
        CData/*3:0*/ __VdlyDim0__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__pred_fifo__v1;
        CData/*0:0*/ __VdlySet__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__pred_fifo__v1;
        CData/*0:0*/ __VdlyVal__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__pred_fifo__v2;
        CData/*3:0*/ __VdlyDim0__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__pred_fifo__v2;
        CData/*0:0*/ __VdlySet__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__pred_fifo__v2;
        CData/*0:0*/ __VdlyVal__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__pred_fifo__v3;
        CData/*3:0*/ __VdlyDim0__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__pred_fifo__v3;
        CData/*0:0*/ __VdlySet__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__pred_fifo__v3;
        CData/*3:0*/ ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__r_ptr;
        CData/*0:0*/ __Vdly__ysyx_24100029_IFU_tb__DOT__commit_valid;
        CData/*0:0*/ ysyx_24100029_IFU_tb__DOT__commit_valid;
        CData/*0:0*/ ysyx_24100029_IFU_tb__DOT__commit_error;
        CData/*0:0*/ ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__icache_rready;
        CData/*0:0*/ ysyx_24100029_IFU_tb__DOT__clock;
        CData/*0:0*/ ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__icache_arready;
        CData/*0:0*/ ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__icache_rvalid;
        CData/*0:0*/ __VdlyVal__ysyx_24100029_IFU_tb__DOT__clock__v0;
        CData/*0:0*/ __VdlySet__ysyx_24100029_IFU_tb__DOT__clock__v0;
        CData/*0:0*/ __VdlySet__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT__state__v0;
        CData/*1:0*/ __VdlyVal__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT__state__v1;
        CData/*0:0*/ __VdlySet__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT__state__v1;
        CData/*1:0*/ __VdlyVal__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT__state__v2;
        CData/*0:0*/ __VdlySet__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT__state__v2;
        CData/*1:0*/ __VdlyVal__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT__state__v3;
        CData/*0:0*/ __VdlySet__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT__state__v3;
        CData/*7:0*/ ysyx_24100029_IFU_tb__DOT__u_mem__DOT__len;
        CData/*1:0*/ __Vdly__ysyx_24100029_IFU_tb__DOT__u_mem__DOT__state;
        CData/*7:0*/ __Vdly__ysyx_24100029_IFU_tb__DOT__u_mem__DOT__len;
        CData/*0:0*/ ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__icache_arvalid;
        CData/*7:0*/ ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT__count;
        CData/*0:0*/ ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT__hit_r;
        CData/*0:0*/ __Vdly__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__icache_arvalid;
        CData/*7:0*/ __Vdly__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT__count;
        CData/*0:0*/ ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_RAS__DOT__empty;
        CData/*3:0*/ ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_RAS__DOT__count;
        CData/*0:0*/ __VdlySet__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT__hit_r__v0;
        CData/*0:0*/ __VdlyVal__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT__hit_r__v1;
        CData/*0:0*/ __VdlySet__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT__hit_r__v1;
        CData/*2:0*/ ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_RAS__DOT__w_ptr;
        IData/*31:0*/ ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__ras_waddr;
        VlUnpacked<IData/*31:0*/, 8> ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_RAS__DOT__LIFO;
        IData/*31:0*/ __Vdly__ysyx_24100029_IFU_tb__DOT__u_mem__DOT__addr;
        IData/*31:0*/ ysyx_24100029_IFU_tb__DOT__u_mem__DOT__addr;
        CData/*2:0*/ ysyx_24100029_IFU_tb__DOT__u_mem__DOT__size;
        CData/*1:0*/ ysyx_24100029_IFU_tb__DOT__u_mem__DOT__burst;
        CData/*1:0*/ ysyx_24100029_IFU_tb__DOT__u_mem__DOT__state;
        CData/*1:0*/ ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT__state;
        CData/*0:0*/ ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__bhr_w_en;
        CData/*0:0*/ ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__ras_w_en;
        CData/*0:0*/ ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__ras_r_en;
        VlUnpacked<CData/*1:0*/, 4> ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__btb_br_type;
        CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_0;
        CData/*0:0*/ ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT____VdfgRegularize_hf130cb56_2_0;
        VlUnpacked<IData/*31:0*/, 4> ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__btb_npc;
    };
    struct {
        CData/*2:0*/ ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT____Vcellout__u_First_One_Search__position;
        CData/*0:0*/ ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__btb_r_en;
        CData/*0:0*/ ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__btb_is_hit;
        IData/*31:0*/ ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BHR__DOT__i;
        IData/*31:0*/ ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT__i;
        CData/*0:0*/ ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__state;
        CData/*0:0*/ __Vdly__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__state;
        CData/*3:0*/ __VdlyDim0__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__pc_fifo__v0;
        CData/*0:0*/ __VdlySet__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__pc_fifo__v0;
        CData/*3:0*/ __VdlyDim0__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__pc_fifo__v1;
        CData/*0:0*/ __VdlySet__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__pc_fifo__v1;
        IData/*31:0*/ __VdlyVal__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__pc_fifo__v0;
        IData/*31:0*/ __VdlyVal__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__pc_fifo__v1;
        CData/*0:0*/ ysyx_24100029_IFU_tb__DOT__clr;
        IData/*31:0*/ ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT____Vlvbound_he9ca4af7__0;
        VlUnpacked<IData/*31:0*/, 256> ysyx_24100029_IFU_tb__DOT__u_mem__DOT__rom;
        CData/*1:0*/ ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT__index_r;
        CData/*1:0*/ __VdlyDim0__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT__icache__v4;
        CData/*7:0*/ __VdlyLsb__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT__icache__v5;
        CData/*1:0*/ __VdlyDim0__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT__icache__v5;
        IData/*26:0*/ __VdlyVal__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT__icache__v4;
        IData/*31:0*/ __VdlyVal__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT__icache__v5;
        CData/*0:0*/ __VdlySet__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT__icache__v0;
        CData/*3:0*/ __VdlyDim0__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__fifo__v0;
        CData/*0:0*/ __VdlySet__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__fifo__v0;
        CData/*3:0*/ __VdlyDim0__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__fifo__v1;
        CData/*0:0*/ __VdlySet__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__fifo__v1;
        CData/*3:0*/ __VdlyDim0__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__fifo__v2;
        CData/*0:0*/ __VdlySet__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__fifo__v2;
        CData/*3:0*/ __VdlyDim0__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__fifo__v3;
        CData/*0:0*/ __VdlySet__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__fifo__v3;
        IData/*31:0*/ __VdlyVal__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__fifo__v0;
        IData/*31:0*/ __VdlyVal__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__fifo__v1;
        IData/*31:0*/ __VdlyVal__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__fifo__v2;
        IData/*31:0*/ __VdlyVal__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__fifo__v3;
        VlUnpacked<IData/*31:0*/, 4> ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__inst_i;
        VlUnpacked<IData/*31:0*/, 16> ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__fifo;
        CData/*0:0*/ __VdlySet__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT__index_r__v0;
        CData/*1:0*/ __VdlyVal__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT__index_r__v1;
        CData/*0:0*/ __VdlySet__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT__index_r__v1;
        VlWide<4>/*127:0*/ ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__icache_inst;
        VlUnpacked<VlWide<5>/*154:0*/, 4> ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT__icache;
        CData/*0:0*/ __VdlySet__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT__icache__v5;
        CData/*0:0*/ __VdlySet__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT__icache__v4;
        CData/*2:0*/ ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__pht_index_r;
        CData/*2:0*/ ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__bhr_index_r0;
        CData/*3:0*/ ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__pht_state;
        VlUnpacked<VlUnpacked<CData/*1:0*/, 4>, 8> ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_PHT__DOT__ram;
        VlUnpacked<CData/*2:0*/, 8> ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BHR__DOT__LSR_REG;
        CData/*2:0*/ ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__bhr_index_w;
        CData/*2:0*/ ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_PHT__DOT__ram_index_w;
        IData/*31:0*/ ysyx_24100029_IFU_tb__DOT__commit_pc;
        CData/*0:0*/ ysyx_24100029_IFU_tb__DOT__commit_is_taken;
        CData/*3:0*/ ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__inst_count;
        CData/*0:0*/ ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__inst_buffer_clr;
        CData/*0:0*/ ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__u_count_ones__DOT__recursive__DOT__high__DOT__recursive__DOT__count_high;
        CData/*0:0*/ ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__u_count_ones__DOT__recursive__DOT__high__DOT__recursive__DOT__count_low;
        CData/*1:0*/ ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__u_count_ones__DOT____Vcellinp__recursive__DOT__low__data_in;
        CData/*0:0*/ ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__u_count_ones__DOT__recursive__DOT__low__DOT__recursive__DOT__count_low;
        CData/*3:0*/ ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__inst_keilled;
        CData/*0:0*/ ysyx_24100029_IFU_tb__DOT__commit_ready;
        CData/*0:0*/ ysyx_24100029_IFU_tb__DOT__dnpc_valid;
        CData/*3:0*/ ysyx_24100029_IFU_tb__DOT__inst_ren;
        CData/*3:0*/ ysyx_24100029_IFU_tb__DOT__inst_count;
    };
    struct {
        CData/*7:0*/ ysyx_24100029_IFU_tb__DOT__count;
        CData/*2:0*/ ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__inst_wen_count;
        CData/*0:0*/ __Vintraval_h5bb54a40__0;
        CData/*1:0*/ __Vintraval_hccf7d6cc__0;
        CData/*1:0*/ __Vintraval_hd0c4e517__0;
        CData/*1:0*/ __Vintraval_ha605b9ab__0;
        CData/*1:0*/ __Vintraval_h70958f0f__0;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__ysyx_24100029_IFU_tb__DOT__clock__0;
        CData/*0:0*/ __VactContinue;
        IData/*31:0*/ ysyx_24100029_IFU_tb__DOT__dnpc;
        IData/*31:0*/ __VactIterCount;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h4530d8dd__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;
    VlMTaskVertex __Vm_mtaskstate_15;
    VlMTaskVertex __Vm_mtaskstate_18;
    VlMTaskVertex __Vm_mtaskstate_27;
    VlMTaskVertex __Vm_mtaskstate_22;
    VlMTaskVertex __Vm_mtaskstate_33;
    VlMTaskVertex __Vm_mtaskstate_38;
    VlMTaskVertex __Vm_mtaskstate_25;
    VlMTaskVertex __Vm_mtaskstate_26;
    VlMTaskVertex __Vm_mtaskstate_23;
    VlMTaskVertex __Vm_mtaskstate_29;
    VlMTaskVertex __Vm_mtaskstate_20;
    VlMTaskVertex __Vm_mtaskstate_34;
    VlMTaskVertex __Vm_mtaskstate_37;
    VlMTaskVertex __Vm_mtaskstate_7;
    VlMTaskVertex __Vm_mtaskstate_24;
    VlMTaskVertex __Vm_mtaskstate_31;
    VlMTaskVertex __Vm_mtaskstate_30;
    VlMTaskVertex __Vm_mtaskstate_32;
    VlMTaskVertex __Vm_mtaskstate_13;
    VlMTaskVertex __Vm_mtaskstate_21;
    VlMTaskVertex __Vm_mtaskstate_17;
    VlMTaskVertex __Vm_mtaskstate_final__0nba;

    // INTERNAL VARIABLES
    VSimTop__Syms* const vlSymsp;

    // CONSTRUCTORS
    VSimTop___024root(VSimTop__Syms* symsp, const char* v__name);
    ~VSimTop___024root();
    VL_UNCOPYABLE(VSimTop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
