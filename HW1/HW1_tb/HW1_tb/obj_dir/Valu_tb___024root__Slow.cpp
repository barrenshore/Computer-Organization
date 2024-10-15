// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Valu_tb.h for the primary calling header

#include "verilated.h"

#include "Valu_tb__Syms.h"
#include "Valu_tb___024root.h"

void Valu_tb___024root___ctor_var_reset(Valu_tb___024root* vlSelf);

Valu_tb___024root::Valu_tb___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Valu_tb___024root___ctor_var_reset(this);
}

void Valu_tb___024root::__Vconfigure(Valu_tb__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Valu_tb___024root::~Valu_tb___024root() {
}
