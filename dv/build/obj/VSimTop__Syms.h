// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VSIMTOP__SYMS_H_
#define VERILATED_VSIMTOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VSimTop.h"

// INCLUDE MODULE CLASSES
#include "VSimTop___024root.h"
#include "VSimTop___024unit.h"
#include "VSimTop_axi4_if.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VSimTop__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VSimTop* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MULTI-THREADING
    VlThreadPool* __Vm_threadPoolp;
    bool __Vm_even_cycle__ico = false;
    bool __Vm_even_cycle__act = false;
    bool __Vm_even_cycle__nba = false;

    // MODULE INSTANCE STATE
    VSimTop___024root              TOP;
    VSimTop_axi4_if                TOP__ysyx_24100029_IFU_tb__DOT__bus;

    // CONSTRUCTORS
    VSimTop__Syms(VerilatedContext* contextp, const char* namep, VSimTop* modelp);
    ~VSimTop__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
