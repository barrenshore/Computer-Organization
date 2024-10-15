// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VDECODE_TB__SYMS_H_
#define VERILATED_VDECODE_TB__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vdecode_tb.h"

// INCLUDE MODULE CLASSES
#include "Vdecode_tb___024root.h"

// SYMS CLASS (contains all model state)
class Vdecode_tb__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vdecode_tb* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vdecode_tb___024root           TOP;

    // CONSTRUCTORS
    Vdecode_tb__Syms(VerilatedContext* contextp, const char* namep, Vdecode_tb* modelp);
    ~Vdecode_tb__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
