// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Valu_tb.h for the primary calling header

#include "verilated.h"

#include "Valu_tb___024root.h"

VL_ATTR_COLD void Valu_tb___024root___initial__TOP__3(Valu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root___initial__TOP__3\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_he8358fb3__0;
    // Body
    vlSelf->alu_tb__DOT__i = 0U;
    VL_WRITEF("[HW1 Testbench]\n---------------\n");
    __Vtemp_he8358fb3__0[0U] = 0x2e747874U;
    __Vtemp_he8358fb3__0[1U] = 0x6e707574U;
    __Vtemp_he8358fb3__0[2U] = 0x69U;
    vlSelf->alu_tb__DOT__pattern = VL_FOPEN_NN(VL_CVT_PACK_STR_NW(3, __Vtemp_he8358fb3__0)
                                               , std::string("r"));
    vlSelf->finish = 0U;
}

VL_ATTR_COLD void Valu_tb___024root___settle__TOP__4(Valu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root___settle__TOP__4\n"); );
    // Body
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

VL_ATTR_COLD void Valu_tb___024root___eval_initial(Valu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    Valu_tb___024root___initial__TOP__3(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Valu_tb___024root___eval_settle(Valu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root___eval_settle\n"); );
    // Body
    Valu_tb___024root___settle__TOP__4(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Valu_tb___024root___final(Valu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root___final\n"); );
}

VL_ATTR_COLD void Valu_tb___024root___ctor_var_reset(Valu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->finish = VL_RAND_RESET_I(1);
    vlSelf->alu_tb__DOT__op = VL_RAND_RESET_I(4);
    vlSelf->alu_tb__DOT__rs1 = VL_RAND_RESET_I(32);
    vlSelf->alu_tb__DOT__rs2 = VL_RAND_RESET_I(32);
    vlSelf->alu_tb__DOT__rd = VL_RAND_RESET_I(32);
    vlSelf->alu_tb__DOT__ans_rd = VL_RAND_RESET_I(32);
    vlSelf->alu_tb__DOT__zero = VL_RAND_RESET_I(1);
    vlSelf->alu_tb__DOT__ans_zero = VL_RAND_RESET_I(1);
    vlSelf->alu_tb__DOT__overflow = VL_RAND_RESET_I(1);
    vlSelf->alu_tb__DOT__ans_overflow = VL_RAND_RESET_I(1);
    vlSelf->alu_tb__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->alu_tb__DOT__pattern = 0;
    vlSelf->alu_tb__DOT__temp = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
