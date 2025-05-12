// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VSimTop__pch.h"
#include "VSimTop.h"
#include "VSimTop___024root.h"
#include "VSimTop___024unit.h"
#include "VSimTop_axi4_if.h"

// FUNCTIONS
VSimTop__Syms::~VSimTop__Syms()
{
}

VSimTop__Syms::VSimTop__Syms(VerilatedContext* contextp, const char* namep, VSimTop* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    , __Vm_threadPoolp{static_cast<VlThreadPool*>(contextp->threadPoolp())}
    // Setup module instances
    , TOP{this, namep}
    , TOP__ysyx_24100029_IFU_tb__DOT__bus{this, Verilated::catName(namep, "ysyx_24100029_IFU_tb.bus")}
{
        // Check resources
        Verilated::stackCheck(71);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-10);
    // Setup each module's pointers to their submodules
    TOP.__PVT__ysyx_24100029_IFU_tb__DOT__bus = &TOP__ysyx_24100029_IFU_tb__DOT__bus;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__ysyx_24100029_IFU_tb__DOT__bus.__Vconfigure(true);
}
