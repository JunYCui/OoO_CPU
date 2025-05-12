// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSimTop.h for the primary calling header

#include "VSimTop__pch.h"
#include "VSimTop___024root.h"

VL_ATTR_COLD void VSimTop___024root___eval_static(VSimTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___eval_static\n"); );
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__ysyx_24100029_IFU_tb__DOT__clock__0 
        = vlSelfRef.ysyx_24100029_IFU_tb__DOT__clock;
}

VL_ATTR_COLD void VSimTop___024root___eval_initial__TOP(VSimTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___eval_initial__TOP\n"); );
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e686578U;
    __Vtemp_1[1U] = 0x2f726f6dU;
    __Vtemp_1[2U] = 0x64617461U;
    VL_READMEM_N(true, 32, 256, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_1)
                 ,  &(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_mem__DOT__rom)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void VSimTop___024root___eval_final(VSimTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___eval_final\n"); );
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VSimTop___024root___dump_triggers__stl(VSimTop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VSimTop___024root___eval_phase__stl(VSimTop___024root* vlSelf);

VL_ATTR_COLD void VSimTop___024root___eval_settle(VSimTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___eval_settle\n"); );
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            VSimTop___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/home/cjy/ysyx-workbench/dv/vsrc/ysyx_24100029_IFU_tb.sv", 29, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VSimTop___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VSimTop___024root___dump_triggers__stl(VSimTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___dump_triggers__stl\n"); );
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VSimTop___024root___stl_sequent__TOP__0(VSimTop___024root* vlSelf);
VL_ATTR_COLD void VSimTop___024root____Vm_traceActivitySetAll(VSimTop___024root* vlSelf);

VL_ATTR_COLD void VSimTop___024root___eval_stl(VSimTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___eval_stl\n"); );
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VSimTop___024root___stl_sequent__TOP__0(vlSelf);
        VSimTop___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD void VSimTop___024root___eval_triggers__stl(VSimTop___024root* vlSelf);

VL_ATTR_COLD bool VSimTop___024root___eval_phase__stl(VSimTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___eval_phase__stl\n"); );
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VSimTop___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        VSimTop___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VSimTop___024root___dump_triggers__act(VSimTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___dump_triggers__act\n"); );
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge ysyx_24100029_IFU_tb.clock)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VSimTop___024root___dump_triggers__nba(VSimTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___dump_triggers__nba\n"); );
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge ysyx_24100029_IFU_tb.clock)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VSimTop___024root____Vm_traceActivitySetAll(VSimTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root____Vm_traceActivitySetAll\n"); );
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
    vlSelfRef.__Vm_traceActivity[5U] = 1U;
    vlSelfRef.__Vm_traceActivity[6U] = 1U;
    vlSelfRef.__Vm_traceActivity[7U] = 1U;
    vlSelfRef.__Vm_traceActivity[8U] = 1U;
    vlSelfRef.__Vm_traceActivity[9U] = 1U;
    vlSelfRef.__Vm_traceActivity[0xaU] = 1U;
    vlSelfRef.__Vm_traceActivity[0xbU] = 1U;
    vlSelfRef.__Vm_traceActivity[0xcU] = 1U;
    vlSelfRef.__Vm_traceActivity[0xdU] = 1U;
    vlSelfRef.__Vm_traceActivity[0xeU] = 1U;
    vlSelfRef.__Vm_traceActivity[0xfU] = 1U;
    vlSelfRef.__Vm_traceActivity[0x10U] = 1U;
    vlSelfRef.__Vm_traceActivity[0x11U] = 1U;
    vlSelfRef.__Vm_traceActivity[0x12U] = 1U;
}

VL_ATTR_COLD void VSimTop___024root___ctor_var_reset(VSimTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___ctor_var_reset\n"); );
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->ysyx_24100029_IFU_tb__DOT__clock = 0;
    vlSelf->ysyx_24100029_IFU_tb__DOT__reset = 0;
    vlSelf->ysyx_24100029_IFU_tb__DOT__dnpc = 0;
    vlSelf->ysyx_24100029_IFU_tb__DOT__dnpc_valid = 0;
    vlSelf->ysyx_24100029_IFU_tb__DOT__inst_ren = 0;
    vlSelf->ysyx_24100029_IFU_tb__DOT__clr = 0;
    vlSelf->ysyx_24100029_IFU_tb__DOT__inst_count = 0;
    vlSelf->ysyx_24100029_IFU_tb__DOT__pc2_o = 0;
    vlSelf->ysyx_24100029_IFU_tb__DOT__ready = 0;
    vlSelf->ysyx_24100029_IFU_tb__DOT__count = 0;
    vlSelf->ysyx_24100029_IFU_tb__DOT__commit_ready = 0;
    vlSelf->ysyx_24100029_IFU_tb__DOT__commit_valid = 0;
    vlSelf->ysyx_24100029_IFU_tb__DOT__commit_is_taken = 0;
    vlSelf->ysyx_24100029_IFU_tb__DOT__commit_pc = 0;
    vlSelf->ysyx_24100029_IFU_tb__DOT__commit_pc_type = 0;
    vlSelf->ysyx_24100029_IFU_tb__DOT__commit_npc = 0;
    vlSelf->ysyx_24100029_IFU_tb__DOT__commit_error = 0;
    vlSelf->ysyx_24100029_IFU_tb__DOT__u_mem__DOT__state = 0;
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->ysyx_24100029_IFU_tb__DOT__u_mem__DOT__rom[__Vi0] = 0;
    }
    vlSelf->ysyx_24100029_IFU_tb__DOT__u_mem__DOT__len = 0;
    vlSelf->ysyx_24100029_IFU_tb__DOT__u_mem__DOT__size = 0;
    vlSelf->ysyx_24100029_IFU_tb__DOT__u_mem__DOT__addr = 0;
    vlSelf->ysyx_24100029_IFU_tb__DOT__u_mem__DOT__burst = 0;
    vlSelf->ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__pc = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__pc_i[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__inst_i[__Vi0] = 0;
    }
    vlSelf->ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__inst_wen = 0;
    vlSelf->ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__inst_wen_count = 0;
    vlSelf->ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__icache_arvalid = 0;
    vlSelf->ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__icache_arready = 0;
    vlSelf->ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__icache_rready = 0;
    VL_ZERO_RESET_W(128, vlSelf->ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__icache_inst);
    vlSelf->ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__icache_rvalid = 0;
    vlSelf->ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__inst_buffer_clr = 0;
    vlSelf->ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__inst_count = 0;
    vlSelf->ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__inst_ren = 0;
    vlSelf->ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__inst_keilled = 0;
    vlSelf->ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__bhr_w_en = 0;
    vlSelf->ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__bhr_index_w = 0;
    vlSelf->ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__bhr_index_r0 = 0;
    vlSelf->ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__pht_state = 0;
    vlSelf->ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__pht_index_r = 0;
    vlSelf->ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__ras_waddr = 0;
    vlSelf->ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__ras_w_en = 0;
    vlSelf->ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__ras_r_en = 0;
    vlSelf->ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__btb_r_en = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__btb_npc[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__btb_br_type[__Vi0] = 0;
    }
    vlSelf->ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__btb_is_hit = 0;
    vlSelf->ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT____Vcellout__u_First_One_Search__position = 0;
    vlSelf->ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT____VdfgRegularize_hf130cb56_2_0 = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__cache_tag[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            VL_ZERO_RESET_W(162, vlSelf->ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache[__Vi0][__Vi1]);
        }
    }
    vlSelf->ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__state = 0;
    vlSelf->ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_RAS__DOT__empty = 0;
    vlSelf->ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_RAS__DOT__w_ptr = 0;
    vlSelf->ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_RAS__DOT__count = 0;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_RAS__DOT__LIFO[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BHR__DOT__LSR_REG[__Vi0] = 0;
    }
    vlSelf->ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BHR__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_PHT__DOT__ram[__Vi0][__Vi1] = 0;
        }
    }
    vlSelf->ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_PHT__DOT__ram_index_w = 0;
    vlSelf->ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__w_ptr = 0;
    vlSelf->ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__r_ptr = 0;
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__fifo[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__pc_fifo[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__pred_fifo[__Vi0] = 0;
    }
    vlSelf->ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__count_input = 0;
    vlSelf->ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__count_output = 0;
    vlSelf->ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__u_count_ones__DOT____Vcellinp__recursive__DOT__low__data_in = 0;
    vlSelf->ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__u_count_ones__DOT__recursive__DOT__low__DOT__recursive__DOT__count_low = 0;
    vlSelf->ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__u_count_ones__DOT__recursive__DOT__high__DOT__recursive__DOT__count_low = 0;
    vlSelf->ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__u_count_ones__DOT__recursive__DOT__high__DOT__recursive__DOT__count_high = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_ZERO_RESET_W(155, vlSelf->ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT__icache[__Vi0]);
    }
    vlSelf->ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT__state = 0;
    vlSelf->ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT__count = 0;
    vlSelf->ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT__hit_r = 0;
    vlSelf->ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT__index_r = 0;
    vlSelf->ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT__i = 0;
    vlSelf->ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT____Vlvbound_he9ca4af7__0 = 0;
    vlSelf->__VdfgRegularize_hd87f99a1_0_0 = 0;
    vlSelf->__Vintraval_h5bb54a40__0 = 0;
    vlSelf->__Vintraval_hccf7d6cc__0 = 0;
    vlSelf->__Vintraval_hd0c4e517__0 = 0;
    vlSelf->__Vintraval_ha605b9ab__0 = 0;
    vlSelf->__Vintraval_h70958f0f__0 = 0;
    vlSelf->__Vdly__ysyx_24100029_IFU_tb__DOT__commit_valid = 0;
    vlSelf->__Vdly__ysyx_24100029_IFU_tb__DOT__u_mem__DOT__state = 0;
    vlSelf->__Vdly__ysyx_24100029_IFU_tb__DOT__u_mem__DOT__len = 0;
    vlSelf->__Vdly__ysyx_24100029_IFU_tb__DOT__u_mem__DOT__addr = 0;
    vlSelf->__Vdly__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__icache_arvalid = 0;
    vlSelf->__Vdly__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__state = 0;
    vlSelf->__Vdly__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__r_ptr = 0;
    vlSelf->__Vdly__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT__count = 0;
    vlSelf->__VdlyVal__ysyx_24100029_IFU_tb__DOT__clock__v0 = 0;
    vlSelf->__VdlySet__ysyx_24100029_IFU_tb__DOT__clock__v0 = 0;
    vlSelf->__VdlyVal__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache__v0 = 0;
    vlSelf->__VdlyDim1__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache__v0 = 0;
    vlSelf->__VdlySet__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache__v0 = 0;
    vlSelf->__VdlyVal__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache__v1 = 0;
    vlSelf->__VdlyDim1__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache__v1 = 0;
    vlSelf->__VdlySet__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache__v1 = 0;
    vlSelf->__VdlyVal__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache__v2 = 0;
    vlSelf->__VdlyDim1__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache__v2 = 0;
    vlSelf->__VdlyVal__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache__v3 = 0;
    vlSelf->__VdlyDim1__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache__v3 = 0;
    vlSelf->__VdlySet__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache__v3 = 0;
    vlSelf->__VdlyVal__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache__v4 = 0;
    vlSelf->__VdlyDim1__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache__v4 = 0;
    vlSelf->__VdlyVal__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache__v5 = 0;
    vlSelf->__VdlyDim1__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache__v5 = 0;
    vlSelf->__VdlySet__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache__v5 = 0;
    vlSelf->__VdlyVal__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache__v6 = 0;
    vlSelf->__VdlyDim1__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache__v6 = 0;
    vlSelf->__VdlyVal__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache__v7 = 0;
    vlSelf->__VdlyDim1__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache__v7 = 0;
    vlSelf->__VdlySet__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache__v7 = 0;
    vlSelf->__VdlyVal__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache__v8 = 0;
    vlSelf->__VdlyDim1__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache__v8 = 0;
    vlSelf->__VdlyVal__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache__v9 = 0;
    vlSelf->__VdlyDim1__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache__v9 = 0;
    vlSelf->__VdlySet__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache__v9 = 0;
    vlSelf->__VdlyVal__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache__v10 = 0;
    vlSelf->__VdlyDim1__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache__v10 = 0;
    vlSelf->__VdlySet__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache__v10 = 0;
    vlSelf->__VdlyVal__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache__v11 = 0;
    vlSelf->__VdlyDim1__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache__v11 = 0;
    vlSelf->__VdlyVal__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache__v12 = 0;
    vlSelf->__VdlyDim1__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache__v12 = 0;
    vlSelf->__VdlySet__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache__v12 = 0;
    vlSelf->__VdlyVal__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache__v13 = 0;
    vlSelf->__VdlyDim1__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache__v13 = 0;
    vlSelf->__VdlyVal__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache__v14 = 0;
    vlSelf->__VdlyDim1__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache__v14 = 0;
    vlSelf->__VdlySet__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache__v14 = 0;
    vlSelf->__VdlyVal__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache__v15 = 0;
    vlSelf->__VdlyDim1__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache__v15 = 0;
    vlSelf->__VdlyVal__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache__v16 = 0;
    vlSelf->__VdlyDim1__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache__v16 = 0;
    vlSelf->__VdlySet__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache__v16 = 0;
    vlSelf->__VdlyVal__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache__v17 = 0;
    vlSelf->__VdlyDim1__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache__v17 = 0;
    vlSelf->__VdlyVal__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__fifo__v0 = 0;
    vlSelf->__VdlyDim0__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__fifo__v0 = 0;
    vlSelf->__VdlySet__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__fifo__v0 = 0;
    vlSelf->__VdlyVal__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__pc_fifo__v0 = 0;
    vlSelf->__VdlyDim0__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__pc_fifo__v0 = 0;
    vlSelf->__VdlySet__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__pc_fifo__v0 = 0;
    vlSelf->__VdlyVal__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__pred_fifo__v0 = 0;
    vlSelf->__VdlyDim0__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__pred_fifo__v0 = 0;
    vlSelf->__VdlySet__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__pred_fifo__v0 = 0;
    vlSelf->__VdlyVal__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__fifo__v1 = 0;
    vlSelf->__VdlyDim0__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__fifo__v1 = 0;
    vlSelf->__VdlySet__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__fifo__v1 = 0;
    vlSelf->__VdlyVal__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__pc_fifo__v1 = 0;
    vlSelf->__VdlyDim0__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__pc_fifo__v1 = 0;
    vlSelf->__VdlySet__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__pc_fifo__v1 = 0;
    vlSelf->__VdlyVal__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__pred_fifo__v1 = 0;
    vlSelf->__VdlyDim0__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__pred_fifo__v1 = 0;
    vlSelf->__VdlySet__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__pred_fifo__v1 = 0;
    vlSelf->__VdlyVal__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__fifo__v2 = 0;
    vlSelf->__VdlyDim0__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__fifo__v2 = 0;
    vlSelf->__VdlySet__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__fifo__v2 = 0;
    vlSelf->__VdlyVal__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__pc_fifo__v2 = 0;
    vlSelf->__VdlyDim0__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__pc_fifo__v2 = 0;
    vlSelf->__VdlySet__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__pc_fifo__v2 = 0;
    vlSelf->__VdlyVal__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__pred_fifo__v2 = 0;
    vlSelf->__VdlyDim0__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__pred_fifo__v2 = 0;
    vlSelf->__VdlySet__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__pred_fifo__v2 = 0;
    vlSelf->__VdlyVal__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__fifo__v3 = 0;
    vlSelf->__VdlyDim0__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__fifo__v3 = 0;
    vlSelf->__VdlySet__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__fifo__v3 = 0;
    vlSelf->__VdlyVal__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__pc_fifo__v3 = 0;
    vlSelf->__VdlyDim0__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__pc_fifo__v3 = 0;
    vlSelf->__VdlySet__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__pc_fifo__v3 = 0;
    vlSelf->__VdlyVal__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__pred_fifo__v3 = 0;
    vlSelf->__VdlyDim0__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__pred_fifo__v3 = 0;
    vlSelf->__VdlySet__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__pred_fifo__v3 = 0;
    vlSelf->__VdlySet__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT__icache__v0 = 0;
    vlSelf->__VdlyVal__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT__icache__v4 = 0;
    vlSelf->__VdlyDim0__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT__icache__v4 = 0;
    vlSelf->__VdlySet__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT__icache__v4 = 0;
    vlSelf->__VdlyVal__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT__icache__v5 = 0;
    vlSelf->__VdlyLsb__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT__icache__v5 = 0;
    vlSelf->__VdlyDim0__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT__icache__v5 = 0;
    vlSelf->__VdlySet__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT__icache__v5 = 0;
    vlSelf->__VdlySet__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT__state__v0 = 0;
    vlSelf->__VdlyVal__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT__state__v1 = 0;
    vlSelf->__VdlySet__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT__state__v1 = 0;
    vlSelf->__VdlyVal__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT__state__v2 = 0;
    vlSelf->__VdlySet__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT__state__v2 = 0;
    vlSelf->__VdlyVal__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT__state__v3 = 0;
    vlSelf->__VdlySet__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT__state__v3 = 0;
    vlSelf->__VdlySet__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT__index_r__v0 = 0;
    vlSelf->__VdlyVal__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT__index_r__v1 = 0;
    vlSelf->__VdlySet__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT__index_r__v1 = 0;
    vlSelf->__VdlySet__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT__hit_r__v0 = 0;
    vlSelf->__VdlyVal__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT__hit_r__v1 = 0;
    vlSelf->__VdlySet__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT__hit_r__v1 = 0;
    vlSelf->__Vtrigprevexpr___TOP__ysyx_24100029_IFU_tb__DOT__clock__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 19; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
