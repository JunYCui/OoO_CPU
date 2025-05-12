// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VSimTop.h for the primary calling header

#ifndef VERILATED_VSIMTOP_AXI4_IF_H_
#define VERILATED_VSIMTOP_AXI4_IF_H_  // guard

#include "verilated.h"
#include "verilated_threads.h"
#include "verilated_timing.h"


class VSimTop__Syms;

class alignas(VL_CACHE_LINE_BYTES) VSimTop_axi4_if final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ arvalid;
    CData/*0:0*/ __Vdly__arvalid;
    CData/*0:0*/ arready;
    CData/*0:0*/ rlast;
    CData/*0:0*/ rvalid;
    CData/*0:0*/ __PVT__awready;
    CData/*0:0*/ __PVT__wready;
    CData/*0:0*/ __PVT__bid;
    CData/*1:0*/ __PVT__bresp;
    CData/*0:0*/ __PVT__bvalid;
    CData/*0:0*/ __PVT__rid;
    CData/*1:0*/ __PVT__rresp;

    // INTERNAL VARIABLES
    VSimTop__Syms* const vlSymsp;

    // CONSTRUCTORS
    VSimTop_axi4_if(VSimTop__Syms* symsp, const char* v__name);
    ~VSimTop_axi4_if();
    VL_UNCOPYABLE(VSimTop_axi4_if);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

std::string VL_TO_STRING(const VSimTop_axi4_if* obj);

#endif  // guard
