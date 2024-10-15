// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdecode_tb.h for the primary calling header

#include "verilated.h"

#include "Vdecode_tb__Syms.h"
#include "Vdecode_tb___024root.h"

void Vdecode_tb___024root___ctor_var_reset(Vdecode_tb___024root* vlSelf);

Vdecode_tb___024root::Vdecode_tb___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vdecode_tb___024root___ctor_var_reset(this);
}

void Vdecode_tb___024root::__Vconfigure(Vdecode_tb__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vdecode_tb___024root::~Vdecode_tb___024root() {
}
