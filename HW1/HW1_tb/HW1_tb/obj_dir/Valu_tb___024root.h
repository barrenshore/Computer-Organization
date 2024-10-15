// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Valu_tb.h for the primary calling header

#ifndef VERILATED_VALU_TB___024ROOT_H_
#define VERILATED_VALU_TB___024ROOT_H_  // guard

#include "verilated.h"

class Valu_tb__Syms;
VL_MODULE(Valu_tb___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_OUT8(finish,0,0);
    CData/*3:0*/ alu_tb__DOT__op;
    CData/*0:0*/ alu_tb__DOT__zero;
    CData/*0:0*/ alu_tb__DOT__ans_zero;
    CData/*0:0*/ alu_tb__DOT__overflow;
    CData/*0:0*/ alu_tb__DOT__ans_overflow;
    CData/*0:0*/ __Vclklast__TOP__clk;
    IData/*31:0*/ alu_tb__DOT__rs1;
    IData/*31:0*/ alu_tb__DOT__rs2;
    IData/*31:0*/ alu_tb__DOT__rd;
    IData/*31:0*/ alu_tb__DOT__ans_rd;
    IData/*31:0*/ alu_tb__DOT__i;
    IData/*31:0*/ alu_tb__DOT__pattern;
    IData/*31:0*/ alu_tb__DOT__temp;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Valu_tb__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    Valu_tb___024root(const char* name);
    ~Valu_tb___024root();
    VL_UNCOPYABLE(Valu_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(Valu_tb__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
