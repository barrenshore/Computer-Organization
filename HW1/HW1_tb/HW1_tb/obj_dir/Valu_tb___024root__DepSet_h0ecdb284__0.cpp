// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Valu_tb.h for the primary calling header

#include "verilated.h"

#include "Valu_tb___024root.h"

VL_INLINE_OPT void Valu_tb___024root___sequent__TOP__1(Valu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root___sequent__TOP__1\n"); );
    // Body
    if (VL_UNLIKELY((((vlSelf->alu_tb__DOT__ans_rd 
                       != vlSelf->alu_tb__DOT__rd) 
                      | ((IData)(vlSelf->alu_tb__DOT__ans_zero) 
                         != (IData)(vlSelf->alu_tb__DOT__zero))) 
                     | ((IData)(vlSelf->alu_tb__DOT__ans_overflow) 
                        != (IData)(vlSelf->alu_tb__DOT__overflow))))) {
        VL_WRITEF("Fail Pattern %11d\n",32,vlSelf->alu_tb__DOT__i);
        VL_FINISH_MT("alu_tb.v", 51, "");
        VL_FINISH_MT("alu_tb.v", 51, "");
    } else {
        VL_WRITEF("Pass Pattern %11d\n",32,vlSelf->alu_tb__DOT__i);
    }
    vlSelf->alu_tb__DOT__i = ((IData)(1U) + vlSelf->alu_tb__DOT__i);
}

VL_INLINE_OPT void Valu_tb___024root___sequent__TOP__2(Valu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root___sequent__TOP__2\n"); );
    // Body
    if ((vlSelf->alu_tb__DOT__pattern ? feof(VL_CVT_I_FP(vlSelf->alu_tb__DOT__pattern)) : true)) {
        vlSelf->finish = 1U;
    } else {
        vlSelf->alu_tb__DOT__temp = VL_FSCANF_IX(vlSelf->alu_tb__DOT__pattern,"%#\n",
                                                 4,
                                                 &(vlSelf->alu_tb__DOT__op)) ;
        vlSelf->alu_tb__DOT__temp = VL_FSCANF_IX(vlSelf->alu_tb__DOT__pattern,"%#\n",
                                                 32,
                                                 &(vlSelf->alu_tb__DOT__rs1)) ;
        vlSelf->alu_tb__DOT__temp = VL_FSCANF_IX(vlSelf->alu_tb__DOT__pattern,"%#\n",
                                                 32,
                                                 &(vlSelf->alu_tb__DOT__rs2)) ;
        vlSelf->alu_tb__DOT__temp = VL_FSCANF_IX(vlSelf->alu_tb__DOT__pattern,"%#\n",
                                                 32,
                                                 &(vlSelf->alu_tb__DOT__ans_rd)) ;
        vlSelf->alu_tb__DOT__temp = VL_FSCANF_IX(vlSelf->alu_tb__DOT__pattern,"%#\n",
                                                 1,
                                                 &(vlSelf->alu_tb__DOT__ans_zero)) ;
        vlSelf->alu_tb__DOT__temp = VL_FSCANF_IX(vlSelf->alu_tb__DOT__pattern,"%#\n",
                                                 1,
                                                 &(vlSelf->alu_tb__DOT__ans_overflow)) ;
    }
    if ((8U & (IData)(vlSelf->alu_tb__DOT__op))) {
        if ((4U & (IData)(vlSelf->alu_tb__DOT__op))) {
            if ((2U & (IData)(vlSelf->alu_tb__DOT__op))) {
                vlSelf->alu_tb__DOT__rd = 0U;
                vlSelf->alu_tb__DOT__zero = 0U;
                vlSelf->alu_tb__DOT__overflow = 0U;
            } else if ((1U & (IData)(vlSelf->alu_tb__DOT__op))) {
                vlSelf->alu_tb__DOT__rd = 0U;
                vlSelf->alu_tb__DOT__zero = 0U;
                vlSelf->alu_tb__DOT__overflow = 0U;
            } else {
                vlSelf->alu_tb__DOT__rd = (~ (vlSelf->alu_tb__DOT__rs1 
                                              | vlSelf->alu_tb__DOT__rs2));
                vlSelf->alu_tb__DOT__zero = (0U == vlSelf->alu_tb__DOT__rd);
                vlSelf->alu_tb__DOT__overflow = 0U;
            }
        } else {
            vlSelf->alu_tb__DOT__rd = 0U;
            vlSelf->alu_tb__DOT__zero = 0U;
            vlSelf->alu_tb__DOT__overflow = 0U;
        }
    } else if ((4U & (IData)(vlSelf->alu_tb__DOT__op))) {
        if ((2U & (IData)(vlSelf->alu_tb__DOT__op))) {
            if ((1U & (IData)(vlSelf->alu_tb__DOT__op))) {
                vlSelf->alu_tb__DOT__rd = (vlSelf->alu_tb__DOT__rs1 
                                           < vlSelf->alu_tb__DOT__rs2);
                vlSelf->alu_tb__DOT__zero = (0U == vlSelf->alu_tb__DOT__rd);
                vlSelf->alu_tb__DOT__overflow = 0U;
            } else {
                vlSelf->alu_tb__DOT__rd = (vlSelf->alu_tb__DOT__rs1 
                                           - vlSelf->alu_tb__DOT__rs2);
                vlSelf->alu_tb__DOT__zero = (0U == vlSelf->alu_tb__DOT__rd);
                vlSelf->alu_tb__DOT__overflow = (((
                                                   VL_LTES_III(32, 0U, vlSelf->alu_tb__DOT__rs1) 
                                                   & VL_GTS_III(32, 0U, vlSelf->alu_tb__DOT__rs2)) 
                                                  & VL_GTS_III(32, 0U, vlSelf->alu_tb__DOT__rd)) 
                                                 | ((VL_GTS_III(32, 0U, vlSelf->alu_tb__DOT__rs1) 
                                                     & VL_LTES_III(32, 0U, vlSelf->alu_tb__DOT__rs2)) 
                                                    & VL_LTES_III(32, 0U, vlSelf->alu_tb__DOT__rd)));
            }
        } else {
            vlSelf->alu_tb__DOT__rd = 0U;
            vlSelf->alu_tb__DOT__zero = 0U;
            vlSelf->alu_tb__DOT__overflow = 0U;
        }
    } else if ((2U & (IData)(vlSelf->alu_tb__DOT__op))) {
        if ((1U & (IData)(vlSelf->alu_tb__DOT__op))) {
            vlSelf->alu_tb__DOT__rd = 0U;
            vlSelf->alu_tb__DOT__zero = 0U;
            vlSelf->alu_tb__DOT__overflow = 0U;
        } else {
            vlSelf->alu_tb__DOT__rd = (vlSelf->alu_tb__DOT__rs1 
                                       + vlSelf->alu_tb__DOT__rs2);
            vlSelf->alu_tb__DOT__zero = (0U == vlSelf->alu_tb__DOT__rd);
            vlSelf->alu_tb__DOT__overflow = (((VL_LTES_III(32, 0U, vlSelf->alu_tb__DOT__rs1) 
                                               & VL_LTES_III(32, 0U, vlSelf->alu_tb__DOT__rs2)) 
                                              & VL_GTS_III(32, 0U, vlSelf->alu_tb__DOT__rd)) 
                                             | ((VL_GTS_III(32, 0U, vlSelf->alu_tb__DOT__rs1) 
                                                 & VL_GTS_III(32, 0U, vlSelf->alu_tb__DOT__rs2)) 
                                                & VL_LTES_III(32, 0U, vlSelf->alu_tb__DOT__rd)));
        }
    } else if ((1U & (IData)(vlSelf->alu_tb__DOT__op))) {
        vlSelf->alu_tb__DOT__rd = (vlSelf->alu_tb__DOT__rs1 
                                   | vlSelf->alu_tb__DOT__rs2);
        vlSelf->alu_tb__DOT__zero = (0U == vlSelf->alu_tb__DOT__rd);
        vlSelf->alu_tb__DOT__overflow = 0U;
    } else {
        vlSelf->alu_tb__DOT__rd = (vlSelf->alu_tb__DOT__rs1 
                                   & vlSelf->alu_tb__DOT__rs2);
        vlSelf->alu_tb__DOT__zero = (0U == vlSelf->alu_tb__DOT__rd);
        vlSelf->alu_tb__DOT__overflow = 0U;
    }
}

void Valu_tb___024root___eval(Valu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root___eval\n"); );
    // Body
    if (((~ (IData)(vlSelf->clk)) & (IData)(vlSelf->__Vclklast__TOP__clk))) {
        Valu_tb___024root___sequent__TOP__1(vlSelf);
    }
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Valu_tb___024root___sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void Valu_tb___024root___eval_debug_assertions(Valu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
}
#endif  // VL_DEBUG
