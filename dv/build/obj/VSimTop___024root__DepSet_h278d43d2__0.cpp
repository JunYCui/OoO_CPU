// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSimTop.h for the primary calling header

#include "VSimTop__pch.h"
#include "VSimTop__Syms.h"
#include "VSimTop___024root.h"

VlCoroutine VSimTop___024root___eval_initial__TOP__Vtiming__2____Vfork_3__1(VSimTop___024root* vlSelf);
VlCoroutine VSimTop___024root___eval_initial__TOP__Vtiming__2____Vfork_4__1(VSimTop___024root* vlSelf);
VlCoroutine VSimTop___024root___eval_initial__TOP__Vtiming__2____Vfork_5__1(VSimTop___024root* vlSelf);

VL_INLINE_OPT VlCoroutine VSimTop___024root___eval_initial__TOP__Vtiming__2(VSimTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___eval_initial__TOP__Vtiming__2\n"); );
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VtrigSched_h4530d8dd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge ysyx_24100029_IFU_tb.clock)", 
                                                             "/home/cjy/ysyx-workbench/npc/vsrc/CPU/Reg/ysyx_24100029_icache.sv", 
                                                             119);
        if (vlSelfRef.ysyx_24100029_IFU_tb__DOT__reset) {
            vlSelfRef.__VdlySet__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT__state__v0 = 1U;
        } else if ((2U & (IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT__state))) {
                if (((IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__icache_rready) 
                     & (IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__icache_rvalid))) {
                    vlSelfRef.__Vintraval_hd0c4e517__0 = 0U;
                    VSimTop___024root___eval_initial__TOP__Vtiming__2____Vfork_3__1(vlSelf);
                }
            } else {
                vlSelfRef.__Vintraval_ha605b9ab__0 
                    = (((IData)(vlSymsp->TOP__ysyx_24100029_IFU_tb__DOT__bus.rlast) 
                        & (IData)(vlSymsp->TOP__ysyx_24100029_IFU_tb__DOT__bus.rvalid))
                        ? 3U : 2U);
                VSimTop___024root___eval_initial__TOP__Vtiming__2____Vfork_4__1(vlSelf);
            }
        } else {
            vlSelfRef.__Vintraval_h70958f0f__0 = ((1U 
                                                   & (IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT__state))
                                                   ? 
                                                  ((IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT__hit_r)
                                                    ? 3U
                                                    : 2U)
                                                   : 
                                                  (((IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__icache_arvalid) 
                                                    & (IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__icache_arready))
                                                    ? 1U
                                                    : 0U));
            VSimTop___024root___eval_initial__TOP__Vtiming__2____Vfork_5__1(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VSimTop___024root___dump_triggers__act(VSimTop___024root* vlSelf);
#endif  // VL_DEBUG

void VSimTop___024root___eval_triggers__act(VSimTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___eval_triggers__act\n"); );
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__clock) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ysyx_24100029_IFU_tb__DOT__clock__0))));
    vlSelfRef.__VactTriggered.setBit(1U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__ysyx_24100029_IFU_tb__DOT__clock__0 
        = vlSelfRef.ysyx_24100029_IFU_tb__DOT__clock;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VSimTop___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void VSimTop___024root____Vthread__nba__t0__s0(void* voidSelf, bool even_cycle);
void VSimTop___024root____Vthread__nba__t1__s0(void* voidSelf, bool even_cycle);
void VSimTop___024root____Vthread__nba__t2__s0(void* voidSelf, bool even_cycle);
void VSimTop___024root____Vthread__nba__t3__s0(void* voidSelf, bool even_cycle);

void VSimTop___024root___eval_nba(VSimTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___eval_nba\n"); );
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->__Vm_even_cycle__nba = !vlSymsp->__Vm_even_cycle__nba;
    vlSymsp->__Vm_threadPoolp->workerp(0)->addTask(&VSimTop___024root____Vthread__nba__t0__s0, vlSelf, vlSymsp->__Vm_even_cycle__nba);
    vlSymsp->__Vm_threadPoolp->workerp(1)->addTask(&VSimTop___024root____Vthread__nba__t1__s0, vlSelf, vlSymsp->__Vm_even_cycle__nba);
    vlSymsp->__Vm_threadPoolp->workerp(2)->addTask(&VSimTop___024root____Vthread__nba__t2__s0, vlSelf, vlSymsp->__Vm_even_cycle__nba);
    VSimTop___024root____Vthread__nba__t3__s0(vlSelf, vlSymsp->__Vm_even_cycle__nba);
    vlSelf->__Vm_mtaskstate_final__0nba.waitUntilUpstreamDone(vlSymsp->__Vm_even_cycle__nba);
    Verilated::mtaskId(0);
}

extern const VlUnpacked<CData/*1:0*/, 256> VSimTop__ConstPool__TABLE_h1c5fe291_0;

VL_INLINE_OPT void VSimTop___024root___nba_sequent__TOP__6(VSimTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___nba_sequent__TOP__6\n"); );
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.__Vdly__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT__count 
        = vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT__count;
    vlSelfRef.__Vdly__ysyx_24100029_IFU_tb__DOT__u_mem__DOT__len 
        = vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_mem__DOT__len;
    vlSelfRef.__Vdly__ysyx_24100029_IFU_tb__DOT__u_mem__DOT__state 
        = vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_mem__DOT__state;
    vlSelfRef.__Vdly__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__icache_arvalid 
        = vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__icache_arvalid;
    if (vlSelfRef.ysyx_24100029_IFU_tb__DOT__reset) {
        vlSelfRef.__Vdly__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT__count = 0U;
        vlSelfRef.__Vdly__ysyx_24100029_IFU_tb__DOT__u_mem__DOT__len = 0U;
        vlSelfRef.__Vdly__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__icache_arvalid = 1U;
    } else {
        if (((1U == (IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT__state)) 
             & (~ (IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT__hit_r)))) {
            vlSelfRef.__Vdly__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT__count = 0U;
        } else if (vlSymsp->TOP__ysyx_24100029_IFU_tb__DOT__bus.rvalid) {
            vlSelfRef.__Vdly__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT__count 
                = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT__count)));
        }
        if (((((0U != (IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_mem__DOT__state)) 
               & (IData)(vlSymsp->TOP__ysyx_24100029_IFU_tb__DOT__bus.rvalid)) 
              & (2U == (IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT__state))) 
             & (~ (IData)(vlSymsp->TOP__ysyx_24100029_IFU_tb__DOT__bus.rlast)))) {
            vlSelfRef.__Vdly__ysyx_24100029_IFU_tb__DOT__u_mem__DOT__len 
                = (0xffU & ((IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_mem__DOT__len) 
                            - (IData)(1U)));
        } else if (((IData)((0U == (IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_mem__DOT__state))) 
                    & (IData)(vlSymsp->TOP__ysyx_24100029_IFU_tb__DOT__bus.arvalid))) {
            vlSelfRef.__Vdly__ysyx_24100029_IFU_tb__DOT__u_mem__DOT__len = 3U;
        }
        if (((IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__icache_arvalid) 
             & (0U == (IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT__state)))) {
            vlSelfRef.__Vdly__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__icache_arvalid = 0U;
        } else if (vlSelfRef.ysyx_24100029_IFU_tb__DOT__commit_ready) {
            vlSelfRef.__Vdly__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__icache_arvalid = 1U;
        }
    }
    __Vtableidx1 = (((((IData)(vlSymsp->TOP__ysyx_24100029_IFU_tb__DOT__bus.rlast) 
                       << 7U) | ((IData)(vlSymsp->TOP__ysyx_24100029_IFU_tb__DOT__bus.rvalid) 
                                 << 6U)) | (((2U == (IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT__state)) 
                                             << 5U) 
                                            | ((IData)(vlSymsp->TOP__ysyx_24100029_IFU_tb__DOT__bus.arvalid) 
                                               << 4U))) 
                    | (((IData)(vlSymsp->TOP__ysyx_24100029_IFU_tb__DOT__bus.arready) 
                        << 3U) | (((IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_mem__DOT__state) 
                                   << 1U) | (IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__reset))));
    vlSelfRef.__Vdly__ysyx_24100029_IFU_tb__DOT__u_mem__DOT__state 
        = VSimTop__ConstPool__TABLE_h1c5fe291_0[__Vtableidx1];
}

VL_INLINE_OPT void VSimTop___024root___nba_sequent__TOP__7(VSimTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___nba_sequent__TOP__7\n"); );
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.ysyx_24100029_IFU_tb__DOT__reset) {
        vlSymsp->TOP__ysyx_24100029_IFU_tb__DOT__bus.__Vdly__arvalid = 0U;
    } else if (((1U == (IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT__state)) 
                & (~ (IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT__hit_r)))) {
        vlSymsp->TOP__ysyx_24100029_IFU_tb__DOT__bus.__Vdly__arvalid = 1U;
    } else if (((IData)(vlSymsp->TOP__ysyx_24100029_IFU_tb__DOT__bus.arvalid) 
                & (0U == (IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_mem__DOT__state)))) {
        vlSymsp->TOP__ysyx_24100029_IFU_tb__DOT__bus.__Vdly__arvalid = 0U;
    }
}

VL_INLINE_OPT void VSimTop___024root___nba_sequent__TOP__8(VSimTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___nba_sequent__TOP__8\n"); );
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.ysyx_24100029_IFU_tb__DOT__clr) {
        vlSelfRef.__VdlySet__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT__icache__v0 = 1U;
    } else if (((IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__icache_arvalid) 
                & (0U == (IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT__state)))) {
        vlSelfRef.__VdlyVal__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT__icache__v4 
            = (1U | (0x7fffffeU & (vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__pc 
                                   >> 5U)));
        vlSelfRef.__VdlyDim0__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT__icache__v4 
            = (3U & (vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__pc 
                     >> 4U));
        vlSelfRef.__VdlySet__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT__icache__v4 = 1U;
    } else if (vlSymsp->TOP__ysyx_24100029_IFU_tb__DOT__bus.rvalid) {
        vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT____Vlvbound_he9ca4af7__0 
            = ((8U == (vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_mem__DOT__addr 
                       >> 0x1cU)) ? vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_mem__DOT__rom
               [(0xffU & (vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_mem__DOT__addr 
                          >> 2U))] : 0U);
        if ((0x9aU >= (0xffU & ((IData)(0x1bU) + VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT__count), 5U))))) {
            vlSelfRef.__VdlyVal__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT__icache__v5 
                = vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT____Vlvbound_he9ca4af7__0;
            vlSelfRef.__VdlyLsb__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT__icache__v5 
                = (0xffU & ((IData)(0x1bU) + VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT__count), 5U)));
            vlSelfRef.__VdlyDim0__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT__icache__v5 
                = vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT__index_r;
            vlSelfRef.__VdlySet__ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT__icache__v5 = 1U;
        }
    }
}

VL_INLINE_OPT void VSimTop___024root___nba_sequent__TOP__9(VSimTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___nba_sequent__TOP__9\n"); );
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ysyx_24100029_IFU_tb__DOT__u_mem__DOT__addr 
        = vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_mem__DOT__addr;
    if (vlSelfRef.ysyx_24100029_IFU_tb__DOT__reset) {
        vlSelfRef.__Vdly__ysyx_24100029_IFU_tb__DOT__u_mem__DOT__addr = 0U;
    } else if (((((1U == (IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_mem__DOT__burst)) 
                  & (0U != (IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_mem__DOT__state))) 
                 & (IData)(vlSymsp->TOP__ysyx_24100029_IFU_tb__DOT__bus.rvalid)) 
                & (2U == (IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT__state)))) {
        vlSelfRef.__Vdly__ysyx_24100029_IFU_tb__DOT__u_mem__DOT__addr 
            = (vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_mem__DOT__addr 
               + VL_POWSS_III(32,32,3, (IData)(2U), (IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_mem__DOT__size), 1,0));
    } else if (((IData)((0U == (IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_mem__DOT__state))) 
                & (IData)(vlSymsp->TOP__ysyx_24100029_IFU_tb__DOT__bus.arvalid))) {
        vlSelfRef.__Vdly__ysyx_24100029_IFU_tb__DOT__u_mem__DOT__addr 
            = (0xfffffff0U & vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__pc);
    }
}

VL_INLINE_OPT void VSimTop___024root___nba_sequent__TOP__13(VSimTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___nba_sequent__TOP__13\n"); );
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.ysyx_24100029_IFU_tb__DOT__reset) {
        vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_mem__DOT__size = 0U;
        vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_mem__DOT__burst = 0U;
    } else if ((1U & (~ ((((0U != (IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_mem__DOT__state)) 
                           & (IData)(vlSymsp->TOP__ysyx_24100029_IFU_tb__DOT__bus.rvalid)) 
                          & (2U == (IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT__state))) 
                         & (~ (IData)(vlSymsp->TOP__ysyx_24100029_IFU_tb__DOT__bus.rlast)))))) {
        if (((IData)((0U == (IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_mem__DOT__state))) 
             & (IData)(vlSymsp->TOP__ysyx_24100029_IFU_tb__DOT__bus.arvalid))) {
            vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_mem__DOT__size = 2U;
            vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_mem__DOT__burst = 1U;
        }
    }
}

VL_INLINE_OPT void VSimTop___024root___nba_sequent__TOP__17(VSimTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___nba_sequent__TOP__17\n"); );
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_mem__DOT__len 
        = vlSelfRef.__Vdly__ysyx_24100029_IFU_tb__DOT__u_mem__DOT__len;
    vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_mem__DOT__state 
        = vlSelfRef.__Vdly__ysyx_24100029_IFU_tb__DOT__u_mem__DOT__state;
    vlSymsp->TOP__ysyx_24100029_IFU_tb__DOT__bus.arready 
        = (0U == (IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_mem__DOT__state));
    vlSymsp->TOP__ysyx_24100029_IFU_tb__DOT__bus.rvalid 
        = ((1U == (IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_mem__DOT__state)) 
           | (2U == (IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_mem__DOT__state)));
    vlSymsp->TOP__ysyx_24100029_IFU_tb__DOT__bus.rlast 
        = (((1U == (IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_mem__DOT__state)) 
            | (2U == (IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_mem__DOT__state))) 
           & (0U == (IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_mem__DOT__len)));
}

void VSimTop___024root___nba_sequent__TOP__0(VSimTop___024root* vlSelf);

void VSimTop___024root__nba_mtask0(VSimTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root__nba_mtask0\n"); );
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    static constexpr unsigned taskId = 0;
    Verilated::mtaskId(taskId);
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VSimTop___024root___nba_sequent__TOP__0(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void VSimTop___024root___nba_sequent__TOP__1(VSimTop___024root* vlSelf);

void VSimTop___024root__nba_mtask1(VSimTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root__nba_mtask1\n"); );
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    static constexpr unsigned taskId = 1;
    Verilated::mtaskId(taskId);
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VSimTop___024root___nba_sequent__TOP__1(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void VSimTop___024root___nba_sequent__TOP__2(VSimTop___024root* vlSelf);

void VSimTop___024root__nba_mtask2(VSimTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root__nba_mtask2\n"); );
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    static constexpr unsigned taskId = 2;
    Verilated::mtaskId(taskId);
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VSimTop___024root___nba_sequent__TOP__2(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void VSimTop___024root___nba_sequent__TOP__3(VSimTop___024root* vlSelf);

void VSimTop___024root__nba_mtask3(VSimTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root__nba_mtask3\n"); );
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    static constexpr unsigned taskId = 3;
    Verilated::mtaskId(taskId);
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VSimTop___024root___nba_sequent__TOP__3(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void VSimTop___024root___nba_sequent__TOP__4(VSimTop___024root* vlSelf);

void VSimTop___024root__nba_mtask4(VSimTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root__nba_mtask4\n"); );
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    static constexpr unsigned taskId = 4;
    Verilated::mtaskId(taskId);
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VSimTop___024root___nba_sequent__TOP__4(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void VSimTop___024root___nba_sequent__TOP__5(VSimTop___024root* vlSelf);

void VSimTop___024root__nba_mtask5(VSimTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root__nba_mtask5\n"); );
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    static constexpr unsigned taskId = 5;
    Verilated::mtaskId(taskId);
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VSimTop___024root___nba_sequent__TOP__5(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void VSimTop_axi4_if___nba_sequent__TOP__ysyx_24100029_IFU_tb__DOT__bus__0(VSimTop_axi4_if* vlSelf);

void VSimTop___024root__nba_mtask6(VSimTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root__nba_mtask6\n"); );
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    static constexpr unsigned taskId = 6;
    Verilated::mtaskId(taskId);
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VSimTop___024root___nba_sequent__TOP__6(vlSelf);
        VSimTop_axi4_if___nba_sequent__TOP__ysyx_24100029_IFU_tb__DOT__bus__0((&vlSymsp->TOP__ysyx_24100029_IFU_tb__DOT__bus));
        VSimTop___024root___nba_sequent__TOP__7(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void VSimTop___024root__nba_mtask7(VSimTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root__nba_mtask7\n"); );
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    static constexpr unsigned taskId = 7;
    Verilated::mtaskId(taskId);
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VSimTop___024root___nba_sequent__TOP__8(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void VSimTop___024root__nba_mtask8(VSimTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root__nba_mtask8\n"); );
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    static constexpr unsigned taskId = 8;
    Verilated::mtaskId(taskId);
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VSimTop___024root___nba_sequent__TOP__9(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void VSimTop___024root___nba_sequent__TOP__10(VSimTop___024root* vlSelf);

void VSimTop___024root__nba_mtask9(VSimTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root__nba_mtask9\n"); );
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    static constexpr unsigned taskId = 9;
    Verilated::mtaskId(taskId);
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VSimTop___024root___nba_sequent__TOP__10(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void VSimTop___024root___nba_sequent__TOP__11(VSimTop___024root* vlSelf);

void VSimTop___024root__nba_mtask10(VSimTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root__nba_mtask10\n"); );
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    static constexpr unsigned taskId = 10;
    Verilated::mtaskId(taskId);
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VSimTop___024root___nba_sequent__TOP__11(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void VSimTop___024root__nba_mtask12(VSimTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root__nba_mtask12\n"); );
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    static constexpr unsigned taskId = 12;
    Verilated::mtaskId(taskId);
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VSimTop___024root___nba_sequent__TOP__13(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void VSimTop___024root___nba_sequent__TOP__14(VSimTop___024root* vlSelf);

void VSimTop___024root__nba_mtask13(VSimTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root__nba_mtask13\n"); );
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    static constexpr unsigned taskId = 13;
    Verilated::mtaskId(taskId);
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VSimTop___024root___nba_sequent__TOP__14(vlSelf);
        vlSelfRef.__Vm_traceActivity[5U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void VSimTop___024root___nba_sequent__TOP__15(VSimTop___024root* vlSelf);
void VSimTop___024root___nba_comb__TOP__0(VSimTop___024root* vlSelf);

void VSimTop___024root__nba_mtask14(VSimTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root__nba_mtask14\n"); );
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    static constexpr unsigned taskId = 14;
    Verilated::mtaskId(taskId);
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VSimTop___024root___nba_sequent__TOP__15(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VSimTop___024root___nba_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[6U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void VSimTop___024root___nba_sequent__TOP__16(VSimTop___024root* vlSelf);
void VSimTop___024root___nba_sequent__TOP__18(VSimTop___024root* vlSelf);

void VSimTop___024root__nba_mtask15(VSimTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root__nba_mtask15\n"); );
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    static constexpr unsigned taskId = 15;
    Verilated::mtaskId(taskId);
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VSimTop___024root___nba_sequent__TOP__16(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VSimTop___024root___nba_sequent__TOP__17(vlSelf);
        vlSelfRef.__Vm_traceActivity[7U] = 1U;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VSimTop___024root___nba_sequent__TOP__18(vlSelf);
        vlSelfRef.__Vm_traceActivity[8U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void VSimTop___024root___nba_sequent__TOP__20(VSimTop___024root* vlSelf);
void VSimTop___024root___nba_sequent__TOP__21(VSimTop___024root* vlSelf);
void VSimTop___024root___nba_comb__TOP__1(VSimTop___024root* vlSelf);

void VSimTop___024root__nba_mtask17(VSimTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root__nba_mtask17\n"); );
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    static constexpr unsigned taskId = 17;
    Verilated::mtaskId(taskId);
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VSimTop___024root___nba_sequent__TOP__20(vlSelf);
        vlSelfRef.__Vm_traceActivity[9U] = 1U;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VSimTop___024root___nba_sequent__TOP__21(vlSelf);
        vlSelfRef.__Vm_traceActivity[0xaU] = 1U;
        VSimTop___024root___nba_comb__TOP__1(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void VSimTop___024root___nba_sequent__TOP__22(VSimTop___024root* vlSelf);

void VSimTop___024root__nba_mtask18(VSimTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root__nba_mtask18\n"); );
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    static constexpr unsigned taskId = 18;
    Verilated::mtaskId(taskId);
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VSimTop___024root___nba_sequent__TOP__22(vlSelf);
        vlSelfRef.__Vm_traceActivity[0xbU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void VSimTop___024root___nba_sequent__TOP__23(VSimTop___024root* vlSelf);

void VSimTop___024root__nba_mtask19(VSimTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root__nba_mtask19\n"); );
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    static constexpr unsigned taskId = 19;
    Verilated::mtaskId(taskId);
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VSimTop___024root___nba_sequent__TOP__23(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void VSimTop___024root___nba_comb__TOP__2(VSimTop___024root* vlSelf);

void VSimTop___024root__nba_mtask20(VSimTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root__nba_mtask20\n"); );
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    static constexpr unsigned taskId = 20;
    Verilated::mtaskId(taskId);
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VSimTop___024root___nba_comb__TOP__2(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void VSimTop___024root___nba_sequent__TOP__25(VSimTop___024root* vlSelf);

void VSimTop___024root__nba_mtask21(VSimTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root__nba_mtask21\n"); );
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    static constexpr unsigned taskId = 21;
    Verilated::mtaskId(taskId);
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VSimTop___024root___nba_sequent__TOP__25(vlSelf);
        vlSelfRef.__Vm_traceActivity[0xcU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void VSimTop___024root___nba_sequent__TOP__26(VSimTop___024root* vlSelf);

void VSimTop___024root__nba_mtask22(VSimTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root__nba_mtask22\n"); );
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    static constexpr unsigned taskId = 22;
    Verilated::mtaskId(taskId);
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VSimTop___024root___nba_sequent__TOP__26(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void VSimTop___024root___nba_sequent__TOP__27(VSimTop___024root* vlSelf);

void VSimTop___024root__nba_mtask23(VSimTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root__nba_mtask23\n"); );
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    static constexpr unsigned taskId = 23;
    Verilated::mtaskId(taskId);
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VSimTop___024root___nba_sequent__TOP__27(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void VSimTop___024root___nba_sequent__TOP__28(VSimTop___024root* vlSelf);
void VSimTop_axi4_if___nba_sequent__TOP__ysyx_24100029_IFU_tb__DOT__bus__1(VSimTop_axi4_if* vlSelf);
void VSimTop___024root___nba_sequent__TOP__29(VSimTop___024root* vlSelf);

void VSimTop___024root__nba_mtask24(VSimTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root__nba_mtask24\n"); );
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    static constexpr unsigned taskId = 24;
    Verilated::mtaskId(taskId);
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VSimTop___024root___nba_sequent__TOP__28(vlSelf);
        vlSelfRef.__Vm_traceActivity[0xdU] = 1U;
        VSimTop_axi4_if___nba_sequent__TOP__ysyx_24100029_IFU_tb__DOT__bus__1((&vlSymsp->TOP__ysyx_24100029_IFU_tb__DOT__bus));
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VSimTop___024root___nba_sequent__TOP__29(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void VSimTop___024root___nba_sequent__TOP__30(VSimTop___024root* vlSelf);

void VSimTop___024root__nba_mtask25(VSimTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root__nba_mtask25\n"); );
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    static constexpr unsigned taskId = 25;
    Verilated::mtaskId(taskId);
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VSimTop___024root___nba_sequent__TOP__30(vlSelf);
        vlSelfRef.__Vm_traceActivity[0xeU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void VSimTop___024root___nba_sequent__TOP__31(VSimTop___024root* vlSelf);

void VSimTop___024root__nba_mtask26(VSimTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root__nba_mtask26\n"); );
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    static constexpr unsigned taskId = 26;
    Verilated::mtaskId(taskId);
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VSimTop___024root___nba_sequent__TOP__31(vlSelf);
        vlSelfRef.__Vm_traceActivity[0xfU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void VSimTop___024root___nba_sequent__TOP__32(VSimTop___024root* vlSelf);
void VSimTop___024root___nba_comb__TOP__3(VSimTop___024root* vlSelf);

void VSimTop___024root__nba_mtask27(VSimTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root__nba_mtask27\n"); );
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    static constexpr unsigned taskId = 27;
    Verilated::mtaskId(taskId);
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VSimTop___024root___nba_sequent__TOP__32(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VSimTop___024root___nba_comb__TOP__3(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void VSimTop___024root___nba_sequent__TOP__33(VSimTop___024root* vlSelf);

void VSimTop___024root__nba_mtask28(VSimTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root__nba_mtask28\n"); );
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    static constexpr unsigned taskId = 28;
    Verilated::mtaskId(taskId);
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VSimTop___024root___nba_sequent__TOP__33(vlSelf);
        vlSelfRef.__Vm_traceActivity[0x10U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void VSimTop___024root___nba_sequent__TOP__34(VSimTop___024root* vlSelf);

void VSimTop___024root__nba_mtask29(VSimTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root__nba_mtask29\n"); );
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    static constexpr unsigned taskId = 29;
    Verilated::mtaskId(taskId);
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VSimTop___024root___nba_sequent__TOP__34(vlSelf);
        vlSelfRef.__Vm_traceActivity[0x11U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void VSimTop___024root___nba_sequent__TOP__35(VSimTop___024root* vlSelf);
void VSimTop___024root___nba_comb__TOP__4(VSimTop___024root* vlSelf);

void VSimTop___024root__nba_mtask30(VSimTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root__nba_mtask30\n"); );
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    static constexpr unsigned taskId = 30;
    Verilated::mtaskId(taskId);
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VSimTop___024root___nba_sequent__TOP__35(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VSimTop___024root___nba_comb__TOP__4(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void VSimTop___024root___nba_sequent__TOP__36(VSimTop___024root* vlSelf);

void VSimTop___024root__nba_mtask31(VSimTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root__nba_mtask31\n"); );
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    static constexpr unsigned taskId = 31;
    Verilated::mtaskId(taskId);
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VSimTop___024root___nba_sequent__TOP__36(vlSelf);
        vlSelfRef.__Vm_traceActivity[0x12U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void VSimTop___024root___nba_sequent__TOP__37(VSimTop___024root* vlSelf);
void VSimTop___024root___nba_comb__TOP__5(VSimTop___024root* vlSelf);

void VSimTop___024root__nba_mtask32(VSimTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root__nba_mtask32\n"); );
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    static constexpr unsigned taskId = 32;
    Verilated::mtaskId(taskId);
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VSimTop___024root___nba_sequent__TOP__37(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VSimTop___024root___nba_comb__TOP__5(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void VSimTop___024root___nba_sequent__TOP__38(VSimTop___024root* vlSelf);
void VSimTop___024root___nba_comb__TOP__6(VSimTop___024root* vlSelf);

void VSimTop___024root__nba_mtask33(VSimTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root__nba_mtask33\n"); );
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    static constexpr unsigned taskId = 33;
    Verilated::mtaskId(taskId);
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VSimTop___024root___nba_sequent__TOP__38(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VSimTop___024root___nba_comb__TOP__6(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void VSimTop___024root___nba_comb__TOP__7(VSimTop___024root* vlSelf);

void VSimTop___024root__nba_mtask34(VSimTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root__nba_mtask34\n"); );
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    static constexpr unsigned taskId = 34;
    Verilated::mtaskId(taskId);
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VSimTop___024root___nba_comb__TOP__7(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void VSimTop___024root___nba_comb__TOP__8(VSimTop___024root* vlSelf);

void VSimTop___024root__nba_mtask35(VSimTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root__nba_mtask35\n"); );
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    static constexpr unsigned taskId = 35;
    Verilated::mtaskId(taskId);
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VSimTop___024root___nba_comb__TOP__8(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void VSimTop___024root___nba_comb__TOP__9(VSimTop___024root* vlSelf);

void VSimTop___024root__nba_mtask36(VSimTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root__nba_mtask36\n"); );
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    static constexpr unsigned taskId = 36;
    Verilated::mtaskId(taskId);
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VSimTop___024root___nba_comb__TOP__9(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void VSimTop___024root___nba_comb__TOP__10(VSimTop___024root* vlSelf);

void VSimTop___024root__nba_mtask37(VSimTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root__nba_mtask37\n"); );
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    static constexpr unsigned taskId = 37;
    Verilated::mtaskId(taskId);
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VSimTop___024root___nba_comb__TOP__10(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void VSimTop___024root___nba_comb__TOP__11(VSimTop___024root* vlSelf);

void VSimTop___024root__nba_mtask38(VSimTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root__nba_mtask38\n"); );
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    static constexpr unsigned taskId = 38;
    Verilated::mtaskId(taskId);
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VSimTop___024root___nba_comb__TOP__11(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void VSimTop___024root____Vthread__nba__t0__s0(void* voidSelf, bool even_cycle) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root____Vthread__nba__t0__s0\n"); );
    // Body
    VSimTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSimTop___024root*>(voidSelf);
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VSimTop___024root__nba_mtask6(vlSelf);
    vlSelf->__Vm_mtaskstate_24.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_15.waitUntilUpstreamDone(even_cycle);
    VSimTop___024root__nba_mtask15(vlSelf);
    vlSelf->__Vm_mtaskstate_18.waitUntilUpstreamDone(even_cycle);
    VSimTop___024root__nba_mtask18(vlSelf);
    vlSelf->__Vm_mtaskstate_20.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_29.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_27.waitUntilUpstreamDone(even_cycle);
    VSimTop___024root__nba_mtask27(vlSelf);
    vlSelf->__Vm_mtaskstate_30.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_22.waitUntilUpstreamDone(even_cycle);
    VSimTop___024root__nba_mtask22(vlSelf);
    vlSelf->__Vm_mtaskstate_32.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_33.waitUntilUpstreamDone(even_cycle);
    VSimTop___024root__nba_mtask33(vlSelf);
    vlSelf->__Vm_mtaskstate_34.signalUpstreamDone(even_cycle);
    VSimTop___024root__nba_mtask36(vlSelf);
    vlSelf->__Vm_mtaskstate_37.signalUpstreamDone(even_cycle);
    VSimTop___024root__nba_mtask35(vlSelf);
    vlSelf->__Vm_mtaskstate_37.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_38.waitUntilUpstreamDone(even_cycle);
    VSimTop___024root__nba_mtask38(vlSelf);
    vlSelf->__Vm_mtaskstate_final__0nba.signalUpstreamDone(even_cycle);
}

void VSimTop___024root____Vthread__nba__t1__s0(void* voidSelf, bool even_cycle) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root____Vthread__nba__t1__s0\n"); );
    // Body
    VSimTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSimTop___024root*>(voidSelf);
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VSimTop___024root__nba_mtask8(vlSelf);
    vlSelf->__Vm_mtaskstate_13.signalUpstreamDone(even_cycle);
    VSimTop___024root__nba_mtask12(vlSelf);
    vlSelf->__Vm_mtaskstate_15.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_24.signalUpstreamDone(even_cycle);
    VSimTop___024root__nba_mtask5(vlSelf);
    vlSelf->__Vm_mtaskstate_18.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_21.signalUpstreamDone(even_cycle);
    VSimTop___024root__nba_mtask4(vlSelf);
    vlSelf->__Vm_mtaskstate_25.waitUntilUpstreamDone(even_cycle);
    VSimTop___024root__nba_mtask25(vlSelf);
    vlSelf->__Vm_mtaskstate_27.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_26.waitUntilUpstreamDone(even_cycle);
    VSimTop___024root__nba_mtask26(vlSelf);
    vlSelf->__Vm_mtaskstate_30.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_31.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_23.waitUntilUpstreamDone(even_cycle);
    VSimTop___024root__nba_mtask23(vlSelf);
    vlSelf->__Vm_mtaskstate_30.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_33.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_29.waitUntilUpstreamDone(even_cycle);
    VSimTop___024root__nba_mtask29(vlSelf);
    VSimTop___024root__nba_mtask28(vlSelf);
    vlSelf->__Vm_mtaskstate_20.waitUntilUpstreamDone(even_cycle);
    VSimTop___024root__nba_mtask20(vlSelf);
    vlSelf->__Vm_mtaskstate_34.waitUntilUpstreamDone(even_cycle);
    VSimTop___024root__nba_mtask34(vlSelf);
    vlSelf->__Vm_mtaskstate_38.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_37.waitUntilUpstreamDone(even_cycle);
    VSimTop___024root__nba_mtask37(vlSelf);
    vlSelf->__Vm_mtaskstate_final__0nba.signalUpstreamDone(even_cycle);
}

void VSimTop___024root____Vthread__nba__t2__s0(void* voidSelf, bool even_cycle) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root____Vthread__nba__t2__s0\n"); );
    // Body
    VSimTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSimTop___024root*>(voidSelf);
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VSimTop___024root__nba_mtask0(vlSelf);
    VSimTop___024root__nba_mtask2(vlSelf);
    vlSelf->__Vm_mtaskstate_7.waitUntilUpstreamDone(even_cycle);
    VSimTop___024root__nba_mtask7(vlSelf);
    vlSelf->__Vm_mtaskstate_15.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_13.signalUpstreamDone(even_cycle);
    VSimTop___024root__nba_mtask3(vlSelf);
    vlSelf->__Vm_mtaskstate_17.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_25.signalUpstreamDone(even_cycle);
    VSimTop___024root__nba_mtask9(vlSelf);
    vlSelf->__Vm_mtaskstate_18.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_26.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_24.waitUntilUpstreamDone(even_cycle);
    VSimTop___024root__nba_mtask24(vlSelf);
    vlSelf->__Vm_mtaskstate_31.waitUntilUpstreamDone(even_cycle);
    VSimTop___024root__nba_mtask31(vlSelf);
    vlSelf->__Vm_mtaskstate_30.waitUntilUpstreamDone(even_cycle);
    VSimTop___024root__nba_mtask30(vlSelf);
    vlSelf->__Vm_mtaskstate_32.waitUntilUpstreamDone(even_cycle);
    VSimTop___024root__nba_mtask32(vlSelf);
    vlSelf->__Vm_mtaskstate_final__0nba.signalUpstreamDone(even_cycle);
}

void VSimTop___024root____Vthread__nba__t3__s0(void* voidSelf, bool even_cycle) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root____Vthread__nba__t3__s0\n"); );
    // Body
    VSimTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSimTop___024root*>(voidSelf);
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VSimTop___024root__nba_mtask1(vlSelf);
    vlSelf->__Vm_mtaskstate_7.signalUpstreamDone(even_cycle);
    VSimTop___024root__nba_mtask14(vlSelf);
    vlSelf->__Vm_mtaskstate_25.signalUpstreamDone(even_cycle);
    VSimTop___024root__nba_mtask10(vlSelf);
    vlSelf->__Vm_mtaskstate_18.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_13.waitUntilUpstreamDone(even_cycle);
    VSimTop___024root__nba_mtask13(vlSelf);
    vlSelf->__Vm_mtaskstate_18.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_24.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_26.signalUpstreamDone(even_cycle);
    VSimTop___024root__nba_mtask19(vlSelf);
    vlSelf->__Vm_mtaskstate_21.waitUntilUpstreamDone(even_cycle);
    VSimTop___024root__nba_mtask21(vlSelf);
    vlSelf->__Vm_mtaskstate_22.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_23.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_17.waitUntilUpstreamDone(even_cycle);
    VSimTop___024root__nba_mtask17(vlSelf);
    vlSelf->__Vm_mtaskstate_final__0nba.signalUpstreamDone(even_cycle);
}
