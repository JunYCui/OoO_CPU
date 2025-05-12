// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSimTop.h for the primary calling header

#include "VSimTop__pch.h"
#include "VSimTop__Syms.h"
#include "VSimTop_axi4_if.h"

void VSimTop_axi4_if___ctor_var_reset(VSimTop_axi4_if* vlSelf);

VSimTop_axi4_if::VSimTop_axi4_if(VSimTop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VSimTop_axi4_if___ctor_var_reset(this);
}

void VSimTop_axi4_if::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VSimTop_axi4_if::~VSimTop_axi4_if() {
}
