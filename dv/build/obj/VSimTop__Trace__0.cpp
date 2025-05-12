// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSimTop__Syms.h"


void VSimTop___024root__trace_chg_0_sub_0(VSimTop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VSimTop___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root__trace_chg_0\n"); );
    // Init
    VSimTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSimTop___024root*>(voidSelf);
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VSimTop___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VSimTop___024root__trace_chg_0_sub_0(VSimTop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root__trace_chg_0_sub_0\n"); );
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgBit(oldp+0,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__reset));
        bufp->chgIData(oldp+1,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__dnpc),32);
        bufp->chgBit(oldp+2,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__dnpc_valid));
        bufp->chgBit(oldp+3,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__clr));
        bufp->chgCData(oldp+4,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__ready),4);
        bufp->chgCData(oldp+5,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__count),8);
    }
    if (VL_UNLIKELY((((vlSelfRef.__Vm_traceActivity
                       [1U] | vlSelfRef.__Vm_traceActivity
                       [2U]) | vlSelfRef.__Vm_traceActivity
                      [0xbU])))) {
        bufp->chgBit(oldp+6,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__commit_is_taken));
        bufp->chgIData(oldp+7,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__commit_pc),32);
        bufp->chgCData(oldp+8,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__commit_pc_type),2);
        bufp->chgIData(oldp+9,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__commit_npc),32);
        bufp->chgBit(oldp+10,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__commit_error));
        bufp->chgIData(oldp+11,((0xfffffff0U & vlSelfRef.ysyx_24100029_IFU_tb__DOT__commit_pc)),32);
        bufp->chgCData(oldp+12,((7U & (vlSelfRef.ysyx_24100029_IFU_tb__DOT__commit_pc 
                                       >> 4U))),3);
        bufp->chgIData(oldp+13,((vlSelfRef.ysyx_24100029_IFU_tb__DOT__commit_pc 
                                 >> 7U)),25);
        bufp->chgCData(oldp+14,((3U & (vlSelfRef.ysyx_24100029_IFU_tb__DOT__commit_pc 
                                       >> 2U))),2);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[3U] 
                      | vlSelfRef.__Vm_traceActivity
                      [6U])))) {
        bufp->chgCData(oldp+15,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__inst_ren),4);
        bufp->chgCData(oldp+16,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__count_output),3);
        bufp->chgCData(oldp+17,((3U & ((1U & (IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__inst_ren)) 
                                       + VL_SHIFTR_III(2,2,32, 
                                                       (3U 
                                                        & (IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__inst_ren)), 1U)))),2);
        bufp->chgCData(oldp+18,((3U & ((1U & ((IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__inst_ren) 
                                              >> 2U)) 
                                       + VL_SHIFTR_III(2,2,32, 
                                                       (3U 
                                                        & ((IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__inst_ren) 
                                                           >> 2U)), 1U)))),2);
        bufp->chgCData(oldp+19,((3U & ((IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__inst_ren) 
                                       >> 2U))),2);
        bufp->chgBit(oldp+20,((1U & ((IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__inst_ren) 
                                     >> 2U))));
        bufp->chgBit(oldp+21,((1U & ((IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__inst_ren) 
                                     >> 3U))));
        bufp->chgCData(oldp+22,((3U & (IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__inst_ren))),2);
        bufp->chgBit(oldp+23,((1U & (IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__inst_ren))));
        bufp->chgBit(oldp+24,((1U & ((IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__inst_ren) 
                                     >> 1U))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgCData(oldp+25,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BHR__DOT__LSR_REG[0]),3);
        bufp->chgCData(oldp+26,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BHR__DOT__LSR_REG[1]),3);
        bufp->chgCData(oldp+27,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BHR__DOT__LSR_REG[2]),3);
        bufp->chgCData(oldp+28,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BHR__DOT__LSR_REG[3]),3);
        bufp->chgCData(oldp+29,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BHR__DOT__LSR_REG[4]),3);
        bufp->chgCData(oldp+30,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BHR__DOT__LSR_REG[5]),3);
        bufp->chgCData(oldp+31,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BHR__DOT__LSR_REG[6]),3);
        bufp->chgCData(oldp+32,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BHR__DOT__LSR_REG[7]),3);
        bufp->chgCData(oldp+33,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_PHT__DOT__ram
                                [0U][0U]),2);
        bufp->chgCData(oldp+34,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_PHT__DOT__ram
                                [0U][1U]),2);
        bufp->chgCData(oldp+35,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_PHT__DOT__ram
                                [0U][2U]),2);
        bufp->chgCData(oldp+36,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_PHT__DOT__ram
                                [0U][3U]),2);
        bufp->chgCData(oldp+37,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_PHT__DOT__ram
                                [1U][0U]),2);
        bufp->chgCData(oldp+38,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_PHT__DOT__ram
                                [1U][1U]),2);
        bufp->chgCData(oldp+39,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_PHT__DOT__ram
                                [1U][2U]),2);
        bufp->chgCData(oldp+40,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_PHT__DOT__ram
                                [1U][3U]),2);
        bufp->chgCData(oldp+41,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_PHT__DOT__ram
                                [2U][0U]),2);
        bufp->chgCData(oldp+42,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_PHT__DOT__ram
                                [2U][1U]),2);
        bufp->chgCData(oldp+43,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_PHT__DOT__ram
                                [2U][2U]),2);
        bufp->chgCData(oldp+44,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_PHT__DOT__ram
                                [2U][3U]),2);
        bufp->chgCData(oldp+45,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_PHT__DOT__ram
                                [3U][0U]),2);
        bufp->chgCData(oldp+46,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_PHT__DOT__ram
                                [3U][1U]),2);
        bufp->chgCData(oldp+47,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_PHT__DOT__ram
                                [3U][2U]),2);
        bufp->chgCData(oldp+48,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_PHT__DOT__ram
                                [3U][3U]),2);
        bufp->chgCData(oldp+49,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_PHT__DOT__ram
                                [4U][0U]),2);
        bufp->chgCData(oldp+50,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_PHT__DOT__ram
                                [4U][1U]),2);
        bufp->chgCData(oldp+51,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_PHT__DOT__ram
                                [4U][2U]),2);
        bufp->chgCData(oldp+52,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_PHT__DOT__ram
                                [4U][3U]),2);
        bufp->chgCData(oldp+53,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_PHT__DOT__ram
                                [5U][0U]),2);
        bufp->chgCData(oldp+54,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_PHT__DOT__ram
                                [5U][1U]),2);
        bufp->chgCData(oldp+55,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_PHT__DOT__ram
                                [5U][2U]),2);
        bufp->chgCData(oldp+56,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_PHT__DOT__ram
                                [5U][3U]),2);
        bufp->chgCData(oldp+57,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_PHT__DOT__ram
                                [6U][0U]),2);
        bufp->chgCData(oldp+58,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_PHT__DOT__ram
                                [6U][1U]),2);
        bufp->chgCData(oldp+59,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_PHT__DOT__ram
                                [6U][2U]),2);
        bufp->chgCData(oldp+60,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_PHT__DOT__ram
                                [6U][3U]),2);
        bufp->chgCData(oldp+61,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_PHT__DOT__ram
                                [7U][0U]),2);
        bufp->chgCData(oldp+62,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_PHT__DOT__ram
                                [7U][1U]),2);
        bufp->chgCData(oldp+63,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_PHT__DOT__ram
                                [7U][2U]),2);
        bufp->chgCData(oldp+64,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_PHT__DOT__ram
                                [7U][3U]),2);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[5U]))) {
        bufp->chgIData(oldp+65,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__pc),32);
        bufp->chgCData(oldp+66,((0xfU & ((IData)(4U) 
                                         - (3U & (vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__pc 
                                                  >> 2U))))),4);
        bufp->chgIData(oldp+67,(((0U == (3U & (vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__pc 
                                               >> 2U)))
                                  ? 0x10U : ((1U == 
                                              (3U & 
                                               (vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__pc 
                                                >> 2U)))
                                              ? 0xcU
                                              : ((2U 
                                                  == 
                                                  (3U 
                                                   & (vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__pc 
                                                      >> 2U)))
                                                  ? 8U
                                                  : 4U)))),32);
        bufp->chgIData(oldp+68,((0xfffffff0U & vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__pc)),32);
        bufp->chgCData(oldp+69,((7U & (vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__pc 
                                       >> 4U))),3);
        bufp->chgIData(oldp+70,((vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__pc 
                                 >> 7U)),25);
        bufp->chgCData(oldp+71,((3U & (vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__pc 
                                       >> 4U))),2);
        bufp->chgIData(oldp+72,((0xfffffff0U & vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__pc)),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[7U]))) {
        bufp->chgCData(oldp+73,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_mem__DOT__state),2);
        bufp->chgCData(oldp+74,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_mem__DOT__len),8);
        bufp->chgBit(oldp+75,((0U == (IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_mem__DOT__state))));
        bufp->chgBit(oldp+76,(vlSymsp->TOP__ysyx_24100029_IFU_tb__DOT__bus.rlast));
        bufp->chgBit(oldp+77,(vlSymsp->TOP__ysyx_24100029_IFU_tb__DOT__bus.rvalid));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[8U]))) {
        bufp->chgBit(oldp+78,((0U == (IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT__state))));
        bufp->chgBit(oldp+79,((3U == (IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT__state))));
        bufp->chgCData(oldp+80,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT__state),2);
        bufp->chgBit(oldp+81,((2U == (IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT__state))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[9U]))) {
        bufp->chgIData(oldp+82,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__fifo[0]),32);
        bufp->chgIData(oldp+83,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__fifo[1]),32);
        bufp->chgIData(oldp+84,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__fifo[2]),32);
        bufp->chgIData(oldp+85,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__fifo[3]),32);
        bufp->chgIData(oldp+86,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__fifo[4]),32);
        bufp->chgIData(oldp+87,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__fifo[5]),32);
        bufp->chgIData(oldp+88,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__fifo[6]),32);
        bufp->chgIData(oldp+89,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__fifo[7]),32);
        bufp->chgIData(oldp+90,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__fifo[8]),32);
        bufp->chgIData(oldp+91,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__fifo[9]),32);
        bufp->chgIData(oldp+92,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__fifo[10]),32);
        bufp->chgIData(oldp+93,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__fifo[11]),32);
        bufp->chgIData(oldp+94,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__fifo[12]),32);
        bufp->chgIData(oldp+95,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__fifo[13]),32);
        bufp->chgIData(oldp+96,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__fifo[14]),32);
        bufp->chgIData(oldp+97,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__fifo[15]),32);
    }
}

void VSimTop___024root__trace_chg_1_sub_0(VSimTop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VSimTop___024root__trace_chg_1(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root__trace_chg_1\n"); );
    // Init
    VSimTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSimTop___024root*>(voidSelf);
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VSimTop___024root__trace_chg_1_sub_0((&vlSymsp->TOP), bufp);
}

void VSimTop___024root__trace_chg_1_sub_0(VSimTop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root__trace_chg_1_sub_0\n"); );
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 99);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[9U]))) {
        bufp->chgWData(oldp+0,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT__icache[0]),155);
        bufp->chgWData(oldp+5,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT__icache[1]),155);
        bufp->chgWData(oldp+10,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT__icache[2]),155);
        bufp->chgWData(oldp+15,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT__icache[3]),155);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0xaU]))) {
        bufp->chgIData(oldp+20,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__inst_i[0]),32);
        bufp->chgIData(oldp+21,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__inst_i[1]),32);
        bufp->chgIData(oldp+22,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__inst_i[2]),32);
        bufp->chgIData(oldp+23,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__inst_i[3]),32);
        bufp->chgWData(oldp+24,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__icache_inst),128);
        bufp->chgCData(oldp+28,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT__index_r),2);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0xcU]))) {
        bufp->chgCData(oldp+29,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__pht_state),4);
        bufp->chgCData(oldp+30,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__pht_index_r),3);
        bufp->chgBit(oldp+31,((IData)((0U != (IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__pht_state)))));
        bufp->chgCData(oldp+32,((3U & ((IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__pht_state) 
                                       >> 2U))),2);
        bufp->chgCData(oldp+33,((3U & (IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__pht_state))),2);
        bufp->chgCData(oldp+34,(((1U & (IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__pht_state))
                                  ? 0U : 1U)),3);
        bufp->chgCData(oldp+35,(((4U & (IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__pht_state))
                                  ? 2U : 3U)),3);
        bufp->chgBit(oldp+36,((0U != (3U & ((IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__pht_state) 
                                            >> 2U)))));
        bufp->chgBit(oldp+37,((0U != (3U & (IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__pht_state)))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0xdU]))) {
        bufp->chgBit(oldp+38,(vlSymsp->TOP__ysyx_24100029_IFU_tb__DOT__bus.arvalid));
        bufp->chgIData(oldp+39,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_mem__DOT__addr),32);
        bufp->chgBit(oldp+40,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__icache_arvalid));
        bufp->chgIData(oldp+41,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__ras_waddr),32);
        bufp->chgIData(oldp+42,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_RAS__DOT__LIFO
                                [(7U & ((IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_RAS__DOT__w_ptr) 
                                        - (IData)(1U)))]),32);
        bufp->chgBit(oldp+43,((0U == (IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_RAS__DOT__count))));
        bufp->chgCData(oldp+44,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_RAS__DOT__w_ptr),3);
        bufp->chgCData(oldp+45,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_RAS__DOT__count),4);
        bufp->chgIData(oldp+46,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_RAS__DOT__LIFO[0]),32);
        bufp->chgIData(oldp+47,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_RAS__DOT__LIFO[1]),32);
        bufp->chgIData(oldp+48,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_RAS__DOT__LIFO[2]),32);
        bufp->chgIData(oldp+49,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_RAS__DOT__LIFO[3]),32);
        bufp->chgIData(oldp+50,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_RAS__DOT__LIFO[4]),32);
        bufp->chgIData(oldp+51,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_RAS__DOT__LIFO[5]),32);
        bufp->chgIData(oldp+52,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_RAS__DOT__LIFO[6]),32);
        bufp->chgIData(oldp+53,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_RAS__DOT__LIFO[7]),32);
        bufp->chgCData(oldp+54,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT__count),8);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0xeU]))) {
        bufp->chgBit(oldp+55,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__state));
        bufp->chgCData(oldp+56,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__w_ptr),4);
        bufp->chgIData(oldp+57,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__pc_fifo[0]),32);
        bufp->chgIData(oldp+58,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__pc_fifo[1]),32);
        bufp->chgIData(oldp+59,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__pc_fifo[2]),32);
        bufp->chgIData(oldp+60,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__pc_fifo[3]),32);
        bufp->chgIData(oldp+61,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__pc_fifo[4]),32);
        bufp->chgIData(oldp+62,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__pc_fifo[5]),32);
        bufp->chgIData(oldp+63,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__pc_fifo[6]),32);
        bufp->chgIData(oldp+64,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__pc_fifo[7]),32);
        bufp->chgIData(oldp+65,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__pc_fifo[8]),32);
        bufp->chgIData(oldp+66,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__pc_fifo[9]),32);
        bufp->chgIData(oldp+67,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__pc_fifo[10]),32);
        bufp->chgIData(oldp+68,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__pc_fifo[11]),32);
        bufp->chgIData(oldp+69,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__pc_fifo[12]),32);
        bufp->chgIData(oldp+70,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__pc_fifo[13]),32);
        bufp->chgIData(oldp+71,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__pc_fifo[14]),32);
        bufp->chgIData(oldp+72,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__pc_fifo[15]),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0xfU]))) {
        bufp->chgIData(oldp+73,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__cache_tag[0]),25);
        bufp->chgIData(oldp+74,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__cache_tag[1]),25);
        bufp->chgWData(oldp+75,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache
                                [0U][0U]),162);
        bufp->chgWData(oldp+81,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache
                                [0U][1U]),162);
        bufp->chgWData(oldp+87,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache
                                [1U][0U]),162);
    }
}

void VSimTop___024root__trace_chg_2_sub_0(VSimTop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VSimTop___024root__trace_chg_2(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root__trace_chg_2\n"); );
    // Init
    VSimTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSimTop___024root*>(voidSelf);
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VSimTop___024root__trace_chg_2_sub_0((&vlSymsp->TOP), bufp);
}

void VSimTop___024root__trace_chg_2_sub_0(VSimTop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root__trace_chg_2_sub_0\n"); );
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 192);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0xfU]))) {
        bufp->chgWData(oldp+0,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache
                               [1U][1U]),162);
        bufp->chgWData(oldp+6,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache
                               [2U][0U]),162);
        bufp->chgWData(oldp+12,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache
                                [2U][1U]),162);
        bufp->chgWData(oldp+18,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache
                                [3U][0U]),162);
        bufp->chgWData(oldp+24,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache
                                [3U][1U]),162);
        bufp->chgWData(oldp+30,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache
                                [4U][0U]),162);
        bufp->chgWData(oldp+36,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache
                                [4U][1U]),162);
        bufp->chgWData(oldp+42,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache
                                [5U][0U]),162);
        bufp->chgWData(oldp+48,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache
                                [5U][1U]),162);
        bufp->chgWData(oldp+54,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache
                                [6U][0U]),162);
        bufp->chgWData(oldp+60,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache
                                [6U][1U]),162);
        bufp->chgWData(oldp+66,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache
                                [7U][0U]),162);
        bufp->chgWData(oldp+72,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BTB__DOT__Cache
                                [7U][1U]),162);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x10U]))) {
        bufp->chgIData(oldp+78,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__btb_npc[0]),32);
        bufp->chgIData(oldp+79,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__btb_npc[1]),32);
        bufp->chgIData(oldp+80,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__btb_npc[2]),32);
        bufp->chgIData(oldp+81,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__btb_npc[3]),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x11U]))) {
        bufp->chgIData(oldp+82,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__pc2_o),32);
        bufp->chgBit(oldp+83,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__pred_fifo
                              [vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__r_ptr]));
        bufp->chgBit(oldp+84,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__pred_fifo
                              [(0xfU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__r_ptr)))]));
        bufp->chgBit(oldp+85,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__pred_fifo
                              [(0xfU & ((IData)(2U) 
                                        + (IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__r_ptr)))]));
        bufp->chgBit(oldp+86,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__pred_fifo
                              [(0xfU & ((IData)(3U) 
                                        + (IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__r_ptr)))]));
        bufp->chgIData(oldp+87,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__pc_i[0]),32);
        bufp->chgIData(oldp+88,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__pc_i[1]),32);
        bufp->chgIData(oldp+89,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__pc_i[2]),32);
        bufp->chgIData(oldp+90,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__pc_i[3]),32);
    }
}

void VSimTop___024root__trace_chg_3_sub_0(VSimTop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VSimTop___024root__trace_chg_3(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root__trace_chg_3\n"); );
    // Init
    VSimTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSimTop___024root*>(voidSelf);
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VSimTop___024root__trace_chg_3_sub_0((&vlSymsp->TOP), bufp);
}

void VSimTop___024root__trace_chg_3_sub_0(VSimTop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root__trace_chg_3_sub_0\n"); );
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 283);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x11U]))) {
        bufp->chgCData(oldp+0,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__r_ptr),4);
        bufp->chgBit(oldp+1,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__pred_fifo[0]));
        bufp->chgBit(oldp+2,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__pred_fifo[1]));
        bufp->chgBit(oldp+3,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__pred_fifo[2]));
        bufp->chgBit(oldp+4,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__pred_fifo[3]));
        bufp->chgBit(oldp+5,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__pred_fifo[4]));
        bufp->chgBit(oldp+6,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__pred_fifo[5]));
        bufp->chgBit(oldp+7,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__pred_fifo[6]));
        bufp->chgBit(oldp+8,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__pred_fifo[7]));
        bufp->chgBit(oldp+9,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__pred_fifo[8]));
        bufp->chgBit(oldp+10,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__pred_fifo[9]));
        bufp->chgBit(oldp+11,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__pred_fifo[10]));
        bufp->chgBit(oldp+12,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__pred_fifo[11]));
        bufp->chgBit(oldp+13,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__pred_fifo[12]));
        bufp->chgBit(oldp+14,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__pred_fifo[13]));
        bufp->chgBit(oldp+15,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__pred_fifo[14]));
        bufp->chgBit(oldp+16,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__pred_fifo[15]));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x12U]))) {
        bufp->chgCData(oldp+17,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__btb_br_type[0]),2);
        bufp->chgCData(oldp+18,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__btb_br_type[1]),2);
        bufp->chgCData(oldp+19,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__btb_br_type[2]),2);
        bufp->chgCData(oldp+20,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__btb_br_type[3]),2);
    }
    bufp->chgBit(oldp+21,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__clock));
    bufp->chgIData(oldp+22,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__fifo
                            [vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__r_ptr]),32);
    bufp->chgIData(oldp+23,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__pc_fifo
                            [vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__r_ptr]),32);
    bufp->chgIData(oldp+24,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__fifo
                            [(0xfU & ((IData)(1U) + (IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__r_ptr)))]),32);
    bufp->chgIData(oldp+25,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__fifo
                            [(0xfU & ((IData)(2U) + (IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__r_ptr)))]),32);
    bufp->chgIData(oldp+26,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__pc_fifo
                            [(0xfU & ((IData)(2U) + (IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__r_ptr)))]),32);
    bufp->chgIData(oldp+27,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__fifo
                            [(0xfU & ((IData)(3U) + (IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__r_ptr)))]),32);
    bufp->chgIData(oldp+28,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__pc_fifo
                            [(0xfU & ((IData)(3U) + (IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__r_ptr)))]),32);
    bufp->chgCData(oldp+29,(((((3U < (IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__inst_count)) 
                               << 3U) | ((2U < (IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__inst_count)) 
                                         << 2U)) | 
                             (((1U < (IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__inst_count)) 
                               << 1U) | (0U < (IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__inst_count))))),4);
    bufp->chgBit(oldp+30,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__commit_ready));
    bufp->chgBit(oldp+31,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__commit_valid));
    bufp->chgCData(oldp+32,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_mem__DOT__size),3);
    bufp->chgCData(oldp+33,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_mem__DOT__burst),2);
    bufp->chgCData(oldp+34,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__inst_wen),4);
    bufp->chgBit(oldp+35,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__icache_rready));
    bufp->chgBit(oldp+36,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__inst_buffer_clr));
    bufp->chgCData(oldp+37,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__inst_count),4);
    bufp->chgIData(oldp+38,(((IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__btb_r_en)
                              ? ((IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT____VdfgRegularize_hf130cb56_2_0)
                                  ? vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_RAS__DOT__LIFO
                                 [(7U & ((IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_RAS__DOT__w_ptr) 
                                         - (IData)(1U)))]
                                  : vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__btb_npc
                                 [(3U & (IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT____Vcellout__u_First_One_Search__position))])
                              : vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__ras_waddr)),32);
    bufp->chgBit(oldp+39,((1U & ((~ (IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__btb_r_en)) 
                                 | (IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__btb_is_hit)))));
    bufp->chgCData(oldp+40,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__inst_keilled),4);
    bufp->chgCData(oldp+41,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BHR__DOT__LSR_REG
                            [vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__bhr_index_r0]),3);
    bufp->chgCData(oldp+42,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BHR__DOT__LSR_REG
                            [vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__bhr_index_w]),3);
    bufp->chgBit(oldp+43,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__bhr_w_en));
    bufp->chgCData(oldp+44,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__bhr_index_w),3);
    bufp->chgCData(oldp+45,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__bhr_index_r0),3);
    bufp->chgCData(oldp+46,(((vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BHR__DOT__LSR_REG
                              [vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__bhr_index_w] 
                              << 2U) | (3U & (vlSelfRef.ysyx_24100029_IFU_tb__DOT__commit_pc 
                                              >> 2U)))),5);
    bufp->chgBit(oldp+47,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__ras_w_en));
    bufp->chgBit(oldp+48,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__ras_r_en));
    bufp->chgBit(oldp+49,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__btb_r_en));
    bufp->chgBit(oldp+50,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__btb_is_hit));
    bufp->chgCData(oldp+51,((3U & (IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT____Vcellout__u_First_One_Search__position))),2);
    bufp->chgIData(oldp+52,(((IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT____VdfgRegularize_hf130cb56_2_0)
                              ? vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_RAS__DOT__LIFO
                             [(7U & ((IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_RAS__DOT__w_ptr) 
                                     - (IData)(1U)))]
                              : vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__btb_npc
                             [(3U & (IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT____Vcellout__u_First_One_Search__position))])),32);
    bufp->chgIData(oldp+53,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_BHR__DOT__i),32);
    bufp->chgCData(oldp+54,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT____Vcellout__u_First_One_Search__position),3);
    bufp->chgCData(oldp+55,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Br_Pred__DOT__u_PHT__DOT__ram_index_w),3);
    bufp->chgCData(oldp+56,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__count_input),3);
    bufp->chgCData(oldp+57,((3U & ((IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__u_count_ones__DOT__recursive__DOT__low__DOT__recursive__DOT__count_low) 
                                   + VL_SHIFTR_III(2,2,32, (IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__u_count_ones__DOT____Vcellinp__recursive__DOT__low__data_in), 1U)))),2);
    bufp->chgCData(oldp+58,((3U & ((IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__u_count_ones__DOT__recursive__DOT__high__DOT__recursive__DOT__count_low) 
                                   + VL_SHIFTR_III(2,2,32, 
                                                   (((IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__u_count_ones__DOT__recursive__DOT__high__DOT__recursive__DOT__count_high) 
                                                     << 1U) 
                                                    | (IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__u_count_ones__DOT__recursive__DOT__high__DOT__recursive__DOT__count_low)), 1U)))),2);
    bufp->chgCData(oldp+59,((((IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__u_count_ones__DOT__recursive__DOT__high__DOT__recursive__DOT__count_high) 
                              << 1U) | (IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__u_count_ones__DOT__recursive__DOT__high__DOT__recursive__DOT__count_low))),2);
    bufp->chgBit(oldp+60,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__u_count_ones__DOT__recursive__DOT__high__DOT__recursive__DOT__count_low));
    bufp->chgBit(oldp+61,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__u_count_ones__DOT__recursive__DOT__high__DOT__recursive__DOT__count_high));
    bufp->chgCData(oldp+62,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__u_count_ones__DOT____Vcellinp__recursive__DOT__low__data_in),2);
    bufp->chgBit(oldp+63,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_Inst_Buffer__DOT__u_count_ones__DOT__recursive__DOT__low__DOT__recursive__DOT__count_low));
    bufp->chgBit(oldp+64,(((IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__commit_ready) 
                           & ((~ ((IData)(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__inst_keilled) 
                                  >> 1U)) & (1U < (0xfU 
                                                   & ((IData)(4U) 
                                                      - 
                                                      (3U 
                                                       & (vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__pc 
                                                          >> 2U)))))))));
    bufp->chgBit(oldp+65,((1U & vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT__icache
                           [(3U & (vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__pc 
                                   >> 4U))][0U])));
    bufp->chgIData(oldp+66,((0x3ffffffU & (vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT__icache
                                           [(3U & (vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__pc 
                                                   >> 4U))][0U] 
                                           >> 1U))),26);
    bufp->chgBit(oldp+67,(((vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__pc 
                            >> 6U) == (0x3ffffffU & 
                                       (vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT__icache
                                        [(3U & (vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__pc 
                                                >> 4U))][0U] 
                                        >> 1U)))));
    bufp->chgBit(oldp+68,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT__hit_r));
    bufp->chgIData(oldp+69,(vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_ysyx_24100029_IFU__DOT__u_ysyx_24100029_icache__DOT__i),32);
    bufp->chgIData(oldp+70,(((8U == (vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_mem__DOT__addr 
                                     >> 0x1cU)) ? vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_mem__DOT__rom
                             [(0xffU & (vlSelfRef.ysyx_24100029_IFU_tb__DOT__u_mem__DOT__addr 
                                        >> 2U))] : 0U)),32);
}

void VSimTop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root__trace_cleanup\n"); );
    // Init
    VSimTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSimTop___024root*>(voidSelf);
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[7U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[8U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[9U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xaU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xbU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xcU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xeU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xfU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x10U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x11U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x12U] = 0U;
}
