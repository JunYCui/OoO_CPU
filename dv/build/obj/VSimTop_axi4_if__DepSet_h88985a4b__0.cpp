// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSimTop.h for the primary calling header

#include "VSimTop__pch.h"
#include "VSimTop_axi4_if.h"

VL_INLINE_OPT void VSimTop_axi4_if___nba_sequent__TOP__ysyx_24100029_IFU_tb__DOT__bus__0(VSimTop_axi4_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VSimTop_axi4_if___nba_sequent__TOP__ysyx_24100029_IFU_tb__DOT__bus__0\n"); );
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__arvalid = vlSelfRef.arvalid;
}

VL_INLINE_OPT void VSimTop_axi4_if___nba_sequent__TOP__ysyx_24100029_IFU_tb__DOT__bus__1(VSimTop_axi4_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VSimTop_axi4_if___nba_sequent__TOP__ysyx_24100029_IFU_tb__DOT__bus__1\n"); );
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.arvalid = vlSelfRef.__Vdly__arvalid;
}

std::string VL_TO_STRING(const VSimTop_axi4_if* obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VSimTop_axi4_if::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->name() : "null");
}
