// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSimTop.h for the primary calling header

#include "VSimTop__pch.h"
#include "VSimTop__Syms.h"
#include "VSimTop___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VSimTop___024root___dump_triggers__stl(VSimTop___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VSimTop___024root___eval_triggers__stl(VSimTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___eval_triggers__stl\n"); );
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.setBit(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VSimTop___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void VSimTop___024root___stl_sequent__TOP__0(VSimTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___stl_sequent__TOP__0\n"); );
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__ysyx_24100029_IFU_tb__DOT__bus.arready 
        = (0U == (IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_mem__DOT__state));
    vlSymsp->TOP__ysyx_24100029_IFU_tb__DOT__bus.rvalid 
        = ((1U == (IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_mem__DOT__state)) 
           | (2U == (IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_mem__DOT__state)));
    vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__icache_arready 
        = (0U == (IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT__state));
    vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__icache_rvalid 
        = (3U == (IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT__state));
    vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__ras_waddr 
        = (vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__pc 
           + ((0U == (3U & (vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__pc 
                            >> 2U))) ? 0x10U : ((1U 
                                                 == 
                                                 (3U 
                                                  & (vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__pc 
                                                     >> 2U)))
                                                 ? 0xcU
                                                 : 
                                                ((2U 
                                                  == 
                                                  (3U 
                                                   & (vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__pc 
                                                      >> 2U)))
                                                  ? 8U
                                                  : 4U))));
    vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_RAS__DOT__empty 
        = (0U == (IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_RAS__DOT__count));
    vlSymsp->TOP__ysyx_24100029_IFU_tb__DOT__bus.rlast 
        = (((1U == (IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_mem__DOT__state)) 
            | (2U == (IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_mem__DOT__state))) 
           & (0U == (IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_mem__DOT__len)));
    vlSelfRef.ysyx_24100029_IFU_tb__DOT__pc2_o = vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__pc_fifo
        [(0xfU & ((IData)(1U) + (IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__r_ptr)))];
    vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__pc_i[0U] 
        = vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__pc;
    vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__pc_i[1U] 
        = ((IData)(4U) + vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__pc);
    vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__pc_i[2U] 
        = ((IData)(8U) + vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__pc);
    vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__pc_i[3U] 
        = ((IData)(0xcU) + vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__pc);
    vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__inst_ren 
        = ((IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__ready) 
           & ((((3U < (IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__inst_count)) 
                << 3U) | ((2U < (IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__inst_count)) 
                          << 2U)) | (((1U < (IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__inst_count)) 
                                      << 1U) | (0U 
                                                < (IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__inst_count)))));
    vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__bhr_index_w 
        = ((4U & (VL_REDXOR_32((0x49249240U & vlSelfRef.ysyx_24100029_IFU_tb__DOT__commit_pc)) 
                  << 2U)) | ((2U & (VL_REDXOR_32((0x92492490U 
                                                  & vlSelfRef.ysyx_24100029_IFU_tb__DOT__commit_pc)) 
                                    << 1U)) | (1U & 
                                               VL_REDXOR_32(
                                                            (0x24924920U 
                                                             & vlSelfRef.ysyx_24100029_IFU_tb__DOT__commit_pc)))));
    vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__icache_inst[0U] 
        = ((vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT__icache
            [vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT__index_r][1U] 
            << 5U) | (vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT__icache
                      [vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT__index_r][0U] 
                      >> 0x1bU));
    vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__icache_inst[1U] 
        = ((vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT__icache
            [vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT__index_r][2U] 
            << 5U) | (vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT__icache
                      [vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT__index_r][1U] 
                      >> 0x1bU));
    vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__icache_inst[2U] 
        = ((vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT__icache
            [vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT__index_r][3U] 
            << 5U) | (vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT__icache
                      [vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT__index_r][2U] 
                      >> 0x1bU));
    vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__icache_inst[3U] 
        = ((vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT__icache
            [vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT__index_r][4U] 
            << 5U) | (vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT__icache
                      [vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT__index_r][3U] 
                      >> 0x1bU));
    vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__icache_rready 
        = (0x21U > ((IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__inst_count) 
                    + (0xfU & ((IData)(4U) - (3U & 
                                              (vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__pc 
                                               >> 2U))))));
    vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__cache_tag[0U] 
        = (0x1ffffffU & (vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache
                         [(7U & (vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__pc 
                                 >> 4U))][0U][0U] >> 1U));
    vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__cache_tag[1U] 
        = (0x1ffffffU & (vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache
                         [(7U & (vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__pc 
                                 >> 4U))][1U][0U] >> 1U));
    vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__bhr_index_r0 
        = ((4U & (VL_REDXOR_32((0x49249240U & vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__pc)) 
                  << 2U)) | ((2U & (VL_REDXOR_32((0x92492490U 
                                                  & vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__pc)) 
                                    << 1U)) | (1U & 
                                               VL_REDXOR_32(
                                                            (0x24924920U 
                                                             & vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__pc)))));
    vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__count_output 
        = (7U & ((3U & ((1U & (IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__inst_ren)) 
                        + VL_SHIFTR_III(2,2,32, (3U 
                                                 & (IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__inst_ren)), 1U))) 
                 + (3U & ((1U & ((IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__inst_ren) 
                                 >> 2U)) + VL_SHIFTR_III(2,2,32, 
                                                         (3U 
                                                          & ((IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__inst_ren) 
                                                             >> 2U)), 1U)))));
    vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_PHT__DOT__ram_index_w 
        = vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BHR__DOT__LSR_REG
        [vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__bhr_index_w];
    vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__inst_i[0U] 
        = (((0U == (0x1fU & VL_SHIFTL_III(7,7,32, ((IData)(4U) 
                                                   - 
                                                   (0xfU 
                                                    & ((IData)(4U) 
                                                       - 
                                                       (3U 
                                                        & (vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__pc 
                                                           >> 2U))))), 5U)))
             ? 0U : (vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__icache_inst[
                     (((IData)(0x1fU) + (0x7fU & VL_SHIFTL_III(7,7,32, 
                                                               ((IData)(4U) 
                                                                - 
                                                                (0xfU 
                                                                 & ((IData)(4U) 
                                                                    - 
                                                                    (3U 
                                                                     & (vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__pc 
                                                                        >> 2U))))), 5U))) 
                      >> 5U)] << ((IData)(0x20U) - 
                                  (0x1fU & VL_SHIFTL_III(7,7,32, 
                                                         ((IData)(4U) 
                                                          - 
                                                          (0xfU 
                                                           & ((IData)(4U) 
                                                              - 
                                                              (3U 
                                                               & (vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__pc 
                                                                  >> 2U))))), 5U))))) 
           | (vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__icache_inst[
              (3U & (VL_SHIFTL_III(7,7,32, ((IData)(4U) 
                                            - (0xfU 
                                               & ((IData)(4U) 
                                                  - 
                                                  (3U 
                                                   & (vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__pc 
                                                      >> 2U))))), 5U) 
                     >> 5U))] >> (0x1fU & VL_SHIFTL_III(7,7,32, 
                                                        ((IData)(4U) 
                                                         - 
                                                         (0xfU 
                                                          & ((IData)(4U) 
                                                             - 
                                                             (3U 
                                                              & (vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__pc 
                                                                 >> 2U))))), 5U))));
    vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__inst_i[1U] 
        = (((0U == (0x1fU & VL_SHIFTL_III(7,7,32, ((IData)(5U) 
                                                   - 
                                                   (0xfU 
                                                    & ((IData)(4U) 
                                                       - 
                                                       (3U 
                                                        & (vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__pc 
                                                           >> 2U))))), 5U)))
             ? 0U : (vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__icache_inst[
                     (((IData)(0x1fU) + (0x7fU & VL_SHIFTL_III(7,7,32, 
                                                               ((IData)(5U) 
                                                                - 
                                                                (0xfU 
                                                                 & ((IData)(4U) 
                                                                    - 
                                                                    (3U 
                                                                     & (vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__pc 
                                                                        >> 2U))))), 5U))) 
                      >> 5U)] << ((IData)(0x20U) - 
                                  (0x1fU & VL_SHIFTL_III(7,7,32, 
                                                         ((IData)(5U) 
                                                          - 
                                                          (0xfU 
                                                           & ((IData)(4U) 
                                                              - 
                                                              (3U 
                                                               & (vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__pc 
                                                                  >> 2U))))), 5U))))) 
           | (vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__icache_inst[
              (3U & (VL_SHIFTL_III(7,7,32, ((IData)(5U) 
                                            - (0xfU 
                                               & ((IData)(4U) 
                                                  - 
                                                  (3U 
                                                   & (vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__pc 
                                                      >> 2U))))), 5U) 
                     >> 5U))] >> (0x1fU & VL_SHIFTL_III(7,7,32, 
                                                        ((IData)(5U) 
                                                         - 
                                                         (0xfU 
                                                          & ((IData)(4U) 
                                                             - 
                                                             (3U 
                                                              & (vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__pc 
                                                                 >> 2U))))), 5U))));
    vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__inst_i[2U] 
        = (((0U == (0x1fU & VL_SHIFTL_III(7,7,32, ((IData)(6U) 
                                                   - 
                                                   (0xfU 
                                                    & ((IData)(4U) 
                                                       - 
                                                       (3U 
                                                        & (vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__pc 
                                                           >> 2U))))), 5U)))
             ? 0U : (vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__icache_inst[
                     (((IData)(0x1fU) + (0x7fU & VL_SHIFTL_III(7,7,32, 
                                                               ((IData)(6U) 
                                                                - 
                                                                (0xfU 
                                                                 & ((IData)(4U) 
                                                                    - 
                                                                    (3U 
                                                                     & (vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__pc 
                                                                        >> 2U))))), 5U))) 
                      >> 5U)] << ((IData)(0x20U) - 
                                  (0x1fU & VL_SHIFTL_III(7,7,32, 
                                                         ((IData)(6U) 
                                                          - 
                                                          (0xfU 
                                                           & ((IData)(4U) 
                                                              - 
                                                              (3U 
                                                               & (vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__pc 
                                                                  >> 2U))))), 5U))))) 
           | (vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__icache_inst[
              (3U & (VL_SHIFTL_III(7,7,32, ((IData)(6U) 
                                            - (0xfU 
                                               & ((IData)(4U) 
                                                  - 
                                                  (3U 
                                                   & (vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__pc 
                                                      >> 2U))))), 5U) 
                     >> 5U))] >> (0x1fU & VL_SHIFTL_III(7,7,32, 
                                                        ((IData)(6U) 
                                                         - 
                                                         (0xfU 
                                                          & ((IData)(4U) 
                                                             - 
                                                             (3U 
                                                              & (vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__pc 
                                                                 >> 2U))))), 5U))));
    vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__inst_i[3U] 
        = (((0U == (0x1fU & VL_SHIFTL_III(7,7,32, ((IData)(7U) 
                                                   - 
                                                   (0xfU 
                                                    & ((IData)(4U) 
                                                       - 
                                                       (3U 
                                                        & (vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__pc 
                                                           >> 2U))))), 5U)))
             ? 0U : (vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__icache_inst[
                     (((IData)(0x1fU) + (0x7fU & VL_SHIFTL_III(7,7,32, 
                                                               ((IData)(7U) 
                                                                - 
                                                                (0xfU 
                                                                 & ((IData)(4U) 
                                                                    - 
                                                                    (3U 
                                                                     & (vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__pc 
                                                                        >> 2U))))), 5U))) 
                      >> 5U)] << ((IData)(0x20U) - 
                                  (0x1fU & VL_SHIFTL_III(7,7,32, 
                                                         ((IData)(7U) 
                                                          - 
                                                          (0xfU 
                                                           & ((IData)(4U) 
                                                              - 
                                                              (3U 
                                                               & (vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__pc 
                                                                  >> 2U))))), 5U))))) 
           | (vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__icache_inst[
              (3U & (VL_SHIFTL_III(7,7,32, ((IData)(7U) 
                                            - (0xfU 
                                               & ((IData)(4U) 
                                                  - 
                                                  (3U 
                                                   & (vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__pc 
                                                      >> 2U))))), 5U) 
                     >> 5U))] >> (0x1fU & VL_SHIFTL_III(7,7,32, 
                                                        ((IData)(7U) 
                                                         - 
                                                         (0xfU 
                                                          & ((IData)(4U) 
                                                             - 
                                                             (3U 
                                                              & (vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__pc 
                                                                 >> 2U))))), 5U))));
    vlSelfRef.ysyx_24100029_IFU_tb__DOT__commit_ready 
        = ((3U == (IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT__state)) 
           & (IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__icache_rready));
    if ((((vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__pc 
           >> 7U) == vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__cache_tag
          [0U]) & (vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache
                   [(7U & (vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__pc 
                           >> 4U))][0U][0U] >> 1U))) {
        vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__btb_npc[0U] 
            = ((vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache
                [(7U & (vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__pc 
                        >> 4U))][0U][2U] << 0x1eU) 
               | (vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache
                  [(7U & (vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__pc 
                          >> 4U))][0U][1U] >> 2U));
        vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__btb_npc[1U] 
            = ((vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache
                [(7U & (vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__pc 
                        >> 4U))][0U][3U] << 0x1eU) 
               | (vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache
                  [(7U & (vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__pc 
                          >> 4U))][0U][2U] >> 2U));
        vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__btb_npc[2U] 
            = ((vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache
                [(7U & (vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__pc 
                        >> 4U))][0U][4U] << 0x1eU) 
               | (vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache
                  [(7U & (vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__pc 
                          >> 4U))][0U][3U] >> 2U));
        vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__btb_npc[3U] 
            = ((vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache
                [(7U & (vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__pc 
                        >> 4U))][0U][5U] << 0x1eU) 
               | (vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache
                  [(7U & (vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__pc 
                          >> 4U))][0U][4U] >> 2U));
        vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__btb_br_type[0U] 
            = (3U & ((vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache
                      [(7U & (vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__pc 
                              >> 4U))][0U][0U] << 0x1fU) 
                     | (vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache
                        [(7U & (vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__pc 
                                >> 4U))][0U][0U] >> 1U)));
        vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__btb_br_type[1U] 
            = (3U & ((vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache
                      [(7U & (vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__pc 
                              >> 4U))][0U][0U] << 0x1dU) 
                     | (vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache
                        [(7U & (vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__pc 
                                >> 4U))][0U][0U] >> 3U)));
        vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__btb_br_type[2U] 
            = (3U & ((vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache
                      [(7U & (vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__pc 
                              >> 4U))][0U][0U] << 0x1bU) 
                     | (vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache
                        [(7U & (vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__pc 
                                >> 4U))][0U][0U] >> 5U)));
        vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__btb_br_type[3U] 
            = (3U & ((vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache
                      [(7U & (vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__pc 
                              >> 4U))][0U][0U] << 0x19U) 
                     | (vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache
                        [(7U & (vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__pc 
                                >> 4U))][0U][0U] >> 7U)));
    } else {
        vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__btb_npc[0U] 
            = ((vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache
                [(7U & (vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__pc 
                        >> 4U))][1U][2U] << 0x1eU) 
               | (vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache
                  [(7U & (vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__pc 
                          >> 4U))][1U][1U] >> 2U));
        vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__btb_npc[1U] 
            = ((vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache
                [(7U & (vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__pc 
                        >> 4U))][1U][3U] << 0x1eU) 
               | (vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache
                  [(7U & (vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__pc 
                          >> 4U))][1U][2U] >> 2U));
        vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__btb_npc[2U] 
            = ((vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache
                [(7U & (vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__pc 
                        >> 4U))][1U][4U] << 0x1eU) 
               | (vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache
                  [(7U & (vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__pc 
                          >> 4U))][1U][3U] >> 2U));
        vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__btb_npc[3U] 
            = ((vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache
                [(7U & (vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__pc 
                        >> 4U))][1U][5U] << 0x1eU) 
               | (vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache
                  [(7U & (vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__pc 
                          >> 4U))][1U][4U] >> 2U));
        vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__btb_br_type[0U] 
            = (3U & ((vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache
                      [(7U & (vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__pc 
                              >> 4U))][1U][0U] << 0x1fU) 
                     | (vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache
                        [(7U & (vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__pc 
                                >> 4U))][1U][0U] >> 1U)));
        vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__btb_br_type[1U] 
            = (3U & ((vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache
                      [(7U & (vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__pc 
                              >> 4U))][1U][0U] << 0x1dU) 
                     | (vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache
                        [(7U & (vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__pc 
                                >> 4U))][1U][0U] >> 3U)));
        vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__btb_br_type[2U] 
            = (3U & ((vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache
                      [(7U & (vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__pc 
                              >> 4U))][1U][0U] << 0x1bU) 
                     | (vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache
                        [(7U & (vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__pc 
                                >> 4U))][1U][0U] >> 5U)));
        vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__btb_br_type[3U] 
            = (3U & ((vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache
                      [(7U & (vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__pc 
                              >> 4U))][1U][0U] << 0x19U) 
                     | (vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache
                        [(7U & (vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__pc 
                                >> 4U))][1U][0U] >> 7U)));
    }
    vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__btb_is_hit 
        = ((((vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__pc 
              >> 7U) == vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__cache_tag
             [0U]) & vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache
            [(7U & (vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__pc 
                    >> 4U))][0U][0U]) | (((vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__pc 
                                           >> 7U) == 
                                          vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__cache_tag
                                          [1U]) & vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache
                                         [(7U & (vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__pc 
                                                 >> 4U))]
                                         [1U][0U]));
    vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__pht_index_r 
        = vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BHR__DOT__LSR_REG
        [vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__bhr_index_r0];
    vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__bhr_w_en 
        = ((IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__commit_ready) 
           & (IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__commit_valid));
    vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__inst_buffer_clr 
        = ((IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__commit_valid) 
           & ((IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__commit_ready) 
              & (IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__commit_error)));
    vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__pht_state 
        = ((0xeU & (IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__pht_state)) 
           | (1U & (vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_PHT__DOT__ram
                    [vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__pht_index_r]
                    [0U] >> 1U)));
    vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__pht_state 
        = ((0xdU & (IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__pht_state)) 
           | (2U & vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_PHT__DOT__ram
              [vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__pht_index_r]
              [1U]));
    vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__pht_state 
        = ((0xbU & (IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__pht_state)) 
           | (4U & (vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_PHT__DOT__ram
                    [vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__pht_index_r]
                    [2U] << 1U)));
    vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__pht_state 
        = ((7U & (IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__pht_state)) 
           | (8U & (vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_PHT__DOT__ram
                    [vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__pht_index_r]
                    [3U] << 2U)));
    vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT____Vcellout__u_First_One_Search__position 
        = ((0U != (3U & (IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__pht_state)))
            ? ((1U & (IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__pht_state))
                ? 0U : 1U) : ((4U & (IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__pht_state))
                               ? 2U : 3U));
    vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__btb_r_en 
        = (1U & ((0U == (3U & (vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__pc 
                               >> 2U))) ? (0U != (IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__pht_state))
                  : ((1U == (3U & (vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__pc 
                                   >> 2U))) ? (0U != 
                                               (7U 
                                                & ((IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__pht_state) 
                                                   >> 1U)))
                      : ((2U == (3U & (vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__pc 
                                       >> 2U))) ? (0U 
                                                   != 
                                                   (3U 
                                                    & ((IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__pht_state) 
                                                       >> 2U)))
                          : ((IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__pht_state) 
                             >> 3U)))));
    vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT____VdfgRegularize_hf130cb56_2_0 
        = (2U == vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__btb_br_type
           [(3U & (IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT____Vcellout__u_First_One_Search__position))]);
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 = ((IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__commit_ready) 
                                                & ((IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__btb_r_en) 
                                                   & (IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__btb_is_hit)));
    vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__inst_keilled 
        = ((0U == (3U & (IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT____Vcellout__u_First_One_Search__position)))
            ? (0xeU & ((- (IData)((IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__btb_r_en))) 
                       << 1U)) : ((1U == (3U & (IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT____Vcellout__u_First_One_Search__position)))
                                   ? (0xcU & ((- (IData)((IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__btb_r_en))) 
                                              << 2U))
                                   : ((2U == (3U & (IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT____Vcellout__u_First_One_Search__position)))
                                       ? ((IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__btb_r_en) 
                                          << 3U) : 0U)));
    vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__ras_r_en 
        = ((IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT____VdfgRegularize_hf130cb56_2_0) 
           & (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_0));
    vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__ras_w_en 
        = ((1U == vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__btb_br_type
            [(3U & (IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT____Vcellout__u_First_One_Search__position))]) 
           & (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_0));
    vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__u_count_ones__DOT__recursive__DOT__high__DOT__recursive__DOT__count_low 
        = ((IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__commit_ready) 
           & ((~ ((IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__inst_keilled) 
                  >> 2U)) & (2U < (0xfU & ((IData)(4U) 
                                           - (3U & 
                                              (vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__pc 
                                               >> 2U)))))));
    vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__u_count_ones__DOT__recursive__DOT__high__DOT__recursive__DOT__count_high 
        = ((IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__commit_ready) 
           & ((~ ((IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__inst_keilled) 
                  >> 3U)) & (3U < (0xfU & ((IData)(4U) 
                                           - (3U & 
                                              (vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__pc 
                                               >> 2U)))))));
    vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__u_count_ones__DOT__recursive__DOT__low__DOT__recursive__DOT__count_low 
        = ((~ (IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__inst_keilled)) 
           & (IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__commit_ready));
    vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__u_count_ones__DOT____Vcellinp__recursive__DOT__low__data_in 
        = ((((IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__commit_ready) 
             & ((~ ((IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__inst_keilled) 
                    >> 1U)) & (1U < (0xfU & ((IData)(4U) 
                                             - (3U 
                                                & (vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__pc 
                                                   >> 2U))))))) 
            << 1U) | (IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__u_count_ones__DOT__recursive__DOT__low__DOT__recursive__DOT__count_low));
    vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__inst_wen 
        = (((IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__u_count_ones__DOT__recursive__DOT__high__DOT__recursive__DOT__count_high) 
            << 3U) | (((IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__u_count_ones__DOT__recursive__DOT__high__DOT__recursive__DOT__count_low) 
                       << 2U) | (IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__u_count_ones__DOT____Vcellinp__recursive__DOT__low__data_in)));
    vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__count_input 
        = (7U & ((3U & ((IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__u_count_ones__DOT__recursive__DOT__low__DOT__recursive__DOT__count_low) 
                        + VL_SHIFTR_III(2,2,32, (IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__u_count_ones__DOT____Vcellinp__recursive__DOT__low__data_in), 1U))) 
                 + (3U & ((IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__u_count_ones__DOT__recursive__DOT__high__DOT__recursive__DOT__count_low) 
                          + VL_SHIFTR_III(2,2,32, (
                                                   ((IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__u_count_ones__DOT__recursive__DOT__high__DOT__recursive__DOT__count_high) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__u_count_ones__DOT__recursive__DOT__high__DOT__recursive__DOT__count_low)), 1U)))));
}
