// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdecode_tb.h for the primary calling header

#ifndef VERILATED_VDECODE_TB___024ROOT_H_
#define VERILATED_VDECODE_TB___024ROOT_H_  // guard

#include "verilated.h"

class Vdecode_tb__Syms;
VL_MODULE(Vdecode_tb___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_OUT8(finish,0,0);
    CData/*3:0*/ decode_tb__DOT__op;
    CData/*0:0*/ decode_tb__DOT__ssel;
    CData/*4:0*/ decode_tb__DOT__rs1_id;
    CData/*4:0*/ decode_tb__DOT__rs2_id;
    CData/*4:0*/ decode_tb__DOT__rdst_id;
    CData/*0:0*/ decode_tb__DOT__zero;
    CData/*0:0*/ decode_tb__DOT__overflow;
    CData/*3:0*/ decode_tb__DOT__golden_op;
    CData/*0:0*/ decode_tb__DOT__golden_ssel;
    CData/*4:0*/ decode_tb__DOT__golden_rs1_id;
    CData/*4:0*/ decode_tb__DOT__golden_rs2_id;
    CData/*4:0*/ decode_tb__DOT__golden_rdst_id;
    CData/*0:0*/ __Vclklast__TOP__clk;
    IData/*31:0*/ decode_tb__DOT__instr;
    IData/*31:0*/ decode_tb__DOT__imm;
    IData/*31:0*/ decode_tb__DOT__rd;
    IData/*31:0*/ decode_tb__DOT__rs1;
    IData/*31:0*/ decode_tb__DOT__rs2;
    IData/*31:0*/ decode_tb__DOT__golden_imm;
    IData/*31:0*/ decode_tb__DOT__golden_reg;
    IData/*31:0*/ decode_tb__DOT__i;
    IData/*31:0*/ decode_tb__DOT__pat_num;
    IData/*31:0*/ decode_tb__DOT__pattern;
    IData/*31:0*/ decode_tb__DOT__tmp;
    IData/*31:0*/ decode_tb__DOT__reg_pattern;
    IData/*31:0*/ decode_tb__DOT__reg_file_inst__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ decode_tb__DOT__reg_file_inst__DOT__unnamedblk2__DOT__i;
    VlUnpacked<IData/*31:0*/, 32> decode_tb__DOT__golden_R;
    VlUnpacked<IData/*31:0*/, 32> decode_tb__DOT__reg_file_inst__DOT__R;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vdecode_tb__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    Vdecode_tb___024root(const char* name);
    ~Vdecode_tb___024root();
    VL_UNCOPYABLE(Vdecode_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(Vdecode_tb__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
