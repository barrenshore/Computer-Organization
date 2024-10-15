// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdecode_tb.h for the primary calling header

#include "verilated.h"

#include "Vdecode_tb___024root.h"

VL_ATTR_COLD void Vdecode_tb___024root___initial__TOP__3(Vdecode_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecode_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode_tb___024root___initial__TOP__3\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_he8358fb3__0;
    VlWide<3>/*95:0*/ __Vtemp_h61b88a3a__0;
    // Body
    vlSelf->decode_tb__DOT__reg_file_inst__DOT__R[0U] = 0U;
    vlSelf->decode_tb__DOT__reg_file_inst__DOT__R[1U] = 0U;
    vlSelf->decode_tb__DOT__reg_file_inst__DOT__R[2U] = 0U;
    vlSelf->decode_tb__DOT__reg_file_inst__DOT__R[3U] = 0U;
    vlSelf->decode_tb__DOT__reg_file_inst__DOT__R[4U] = 0U;
    vlSelf->decode_tb__DOT__reg_file_inst__DOT__R[5U] = 0U;
    vlSelf->decode_tb__DOT__reg_file_inst__DOT__R[6U] = 0U;
    vlSelf->decode_tb__DOT__reg_file_inst__DOT__R[7U] = 0U;
    vlSelf->decode_tb__DOT__reg_file_inst__DOT__R[8U] = 0U;
    vlSelf->decode_tb__DOT__reg_file_inst__DOT__R[9U] = 0U;
    vlSelf->decode_tb__DOT__reg_file_inst__DOT__R[0xaU] = 0U;
    vlSelf->decode_tb__DOT__reg_file_inst__DOT__R[0xbU] = 0U;
    vlSelf->decode_tb__DOT__reg_file_inst__DOT__R[0xcU] = 0U;
    vlSelf->decode_tb__DOT__reg_file_inst__DOT__R[0xdU] = 0U;
    vlSelf->decode_tb__DOT__reg_file_inst__DOT__R[0xeU] = 0U;
    vlSelf->decode_tb__DOT__reg_file_inst__DOT__R[0xfU] = 0U;
    vlSelf->decode_tb__DOT__reg_file_inst__DOT__R[0x10U] = 0U;
    vlSelf->decode_tb__DOT__reg_file_inst__DOT__R[0x11U] = 0U;
    vlSelf->decode_tb__DOT__reg_file_inst__DOT__R[0x12U] = 0U;
    vlSelf->decode_tb__DOT__reg_file_inst__DOT__R[0x13U] = 0U;
    vlSelf->decode_tb__DOT__reg_file_inst__DOT__R[0x14U] = 0U;
    vlSelf->decode_tb__DOT__reg_file_inst__DOT__R[0x15U] = 0U;
    vlSelf->decode_tb__DOT__reg_file_inst__DOT__R[0x16U] = 0U;
    vlSelf->decode_tb__DOT__reg_file_inst__DOT__R[0x17U] = 0U;
    vlSelf->decode_tb__DOT__reg_file_inst__DOT__R[0x18U] = 0U;
    vlSelf->decode_tb__DOT__reg_file_inst__DOT__R[0x19U] = 0U;
    vlSelf->decode_tb__DOT__reg_file_inst__DOT__R[0x1aU] = 0U;
    vlSelf->decode_tb__DOT__reg_file_inst__DOT__R[0x1bU] = 0U;
    vlSelf->decode_tb__DOT__reg_file_inst__DOT__R[0x1cU] = 0U;
    vlSelf->decode_tb__DOT__reg_file_inst__DOT__R[0x1dU] = 0U;
    vlSelf->decode_tb__DOT__reg_file_inst__DOT__R[0x1eU] = 0U;
    vlSelf->decode_tb__DOT__reg_file_inst__DOT__R[0x1fU] = 0U;
    vlSelf->decode_tb__DOT__reg_file_inst__DOT__unnamedblk1__DOT__i = 0x20U;
    VL_WRITEF("HIHI I'm testbench of HW2 ^u^ <3\n");
    vlSelf->decode_tb__DOT__pat_num = 0U;
    __Vtemp_he8358fb3__0[0U] = 0x2e747874U;
    __Vtemp_he8358fb3__0[1U] = 0x6e707574U;
    __Vtemp_he8358fb3__0[2U] = 0x69U;
    vlSelf->decode_tb__DOT__pattern = VL_FOPEN_NN(VL_CVT_PACK_STR_NW(3, __Vtemp_he8358fb3__0)
                                                  , 
                                                  std::string("r"));
    __Vtemp_h61b88a3a__0[0U] = 0x2e747874U;
    __Vtemp_h61b88a3a__0[1U] = 0x66696c65U;
    __Vtemp_h61b88a3a__0[2U] = 0x7265675fU;
    vlSelf->decode_tb__DOT__reg_pattern = VL_FOPEN_NN(
                                                      VL_CVT_PACK_STR_NW(3, __Vtemp_h61b88a3a__0)
                                                      , 
                                                      std::string("r"));
    vlSelf->finish = 0U;
}

VL_ATTR_COLD void Vdecode_tb___024root___settle__TOP__4(Vdecode_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecode_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode_tb___024root___settle__TOP__4\n"); );
    // Body
    if ((0U == (vlSelf->decode_tb__DOT__instr >> 0x1aU))) {
        vlSelf->decode_tb__DOT__rdst_id = (0x1fU & 
                                           (vlSelf->decode_tb__DOT__instr 
                                            >> 0xbU));
        vlSelf->decode_tb__DOT__op = ((0x20U & vlSelf->decode_tb__DOT__instr)
                                       ? ((0x10U & vlSelf->decode_tb__DOT__instr)
                                           ? 0xfU : 
                                          ((8U & vlSelf->decode_tb__DOT__instr)
                                            ? ((4U 
                                                & vlSelf->decode_tb__DOT__instr)
                                                ? 0xfU
                                                : (
                                                   (2U 
                                                    & vlSelf->decode_tb__DOT__instr)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->decode_tb__DOT__instr)
                                                     ? 0xfU
                                                     : 7U)
                                                    : 0xfU))
                                            : ((4U 
                                                & vlSelf->decode_tb__DOT__instr)
                                                ? (
                                                   (2U 
                                                    & vlSelf->decode_tb__DOT__instr)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->decode_tb__DOT__instr)
                                                     ? 0xcU
                                                     : 0xfU)
                                                    : 
                                                   ((1U 
                                                     & vlSelf->decode_tb__DOT__instr)
                                                     ? 1U
                                                     : 0U))
                                                : (
                                                   (2U 
                                                    & vlSelf->decode_tb__DOT__instr)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->decode_tb__DOT__instr)
                                                     ? 0xfU
                                                     : 6U)
                                                    : 
                                                   ((1U 
                                                     & vlSelf->decode_tb__DOT__instr)
                                                     ? 0xfU
                                                     : 2U)))))
                                       : 0xfU);
        vlSelf->decode_tb__DOT__rs1_id = (0x1fU & (vlSelf->decode_tb__DOT__instr 
                                                   >> 0x15U));
        vlSelf->decode_tb__DOT__ssel = 1U;
    } else if ((8U == (vlSelf->decode_tb__DOT__instr 
                       >> 0x1aU))) {
        vlSelf->decode_tb__DOT__rdst_id = (0x1fU & 
                                           (vlSelf->decode_tb__DOT__instr 
                                            >> 0x10U));
        vlSelf->decode_tb__DOT__op = 2U;
        vlSelf->decode_tb__DOT__rs1_id = (0x1fU & (vlSelf->decode_tb__DOT__instr 
                                                   >> 0x15U));
        vlSelf->decode_tb__DOT__ssel = 0U;
    } else if ((0xaU == (vlSelf->decode_tb__DOT__instr 
                         >> 0x1aU))) {
        vlSelf->decode_tb__DOT__rdst_id = (0x1fU & 
                                           (vlSelf->decode_tb__DOT__instr 
                                            >> 0x10U));
        vlSelf->decode_tb__DOT__op = 7U;
        vlSelf->decode_tb__DOT__rs1_id = (0x1fU & (vlSelf->decode_tb__DOT__instr 
                                                   >> 0x15U));
        vlSelf->decode_tb__DOT__ssel = 0U;
    } else {
        vlSelf->decode_tb__DOT__op = 0xfU;
    }
    if ((0U != (vlSelf->decode_tb__DOT__instr >> 0x1aU))) {
        if ((8U == (vlSelf->decode_tb__DOT__instr >> 0x1aU))) {
            vlSelf->decode_tb__DOT__imm = (((- (IData)(
                                                       (1U 
                                                        & (vlSelf->decode_tb__DOT__instr 
                                                           >> 0xfU)))) 
                                            << 0x10U) 
                                           | (0xffffU 
                                              & vlSelf->decode_tb__DOT__instr));
        } else if ((0xaU == (vlSelf->decode_tb__DOT__instr 
                             >> 0x1aU))) {
            vlSelf->decode_tb__DOT__imm = (((- (IData)(
                                                       (1U 
                                                        & (vlSelf->decode_tb__DOT__instr 
                                                           >> 0xfU)))) 
                                            << 0x10U) 
                                           | (0xffffU 
                                              & vlSelf->decode_tb__DOT__instr));
        }
    }
    if ((0U == (vlSelf->decode_tb__DOT__instr >> 0x1aU))) {
        vlSelf->decode_tb__DOT__rs2_id = (0x1fU & (vlSelf->decode_tb__DOT__instr 
                                                   >> 0x10U));
    } else if ((8U == (vlSelf->decode_tb__DOT__instr 
                       >> 0x1aU))) {
        vlSelf->decode_tb__DOT__rs2_id = (0x1fU & (vlSelf->decode_tb__DOT__instr 
                                                   >> 0x10U));
    } else if ((0xaU == (vlSelf->decode_tb__DOT__instr 
                         >> 0x1aU))) {
        vlSelf->decode_tb__DOT__rs2_id = (0x1fU & (vlSelf->decode_tb__DOT__instr 
                                                   >> 0x10U));
    }
    vlSelf->decode_tb__DOT__rs1 = vlSelf->decode_tb__DOT__reg_file_inst__DOT__R
        [vlSelf->decode_tb__DOT__rs1_id];
    vlSelf->decode_tb__DOT__rs2 = ((IData)(vlSelf->decode_tb__DOT__ssel)
                                    ? vlSelf->decode_tb__DOT__reg_file_inst__DOT__R
                                   [vlSelf->decode_tb__DOT__rs2_id]
                                    : vlSelf->decode_tb__DOT__imm);
    if ((8U & (IData)(vlSelf->decode_tb__DOT__op))) {
        if ((4U & (IData)(vlSelf->decode_tb__DOT__op))) {
            if ((2U & (IData)(vlSelf->decode_tb__DOT__op))) {
                vlSelf->decode_tb__DOT__rd = 0U;
                vlSelf->decode_tb__DOT__zero = 0U;
                vlSelf->decode_tb__DOT__overflow = 0U;
            } else if ((1U & (IData)(vlSelf->decode_tb__DOT__op))) {
                vlSelf->decode_tb__DOT__rd = 0U;
                vlSelf->decode_tb__DOT__zero = 0U;
                vlSelf->decode_tb__DOT__overflow = 0U;
            } else {
                vlSelf->decode_tb__DOT__rd = (~ (vlSelf->decode_tb__DOT__rs1 
                                                 | vlSelf->decode_tb__DOT__rs2));
                vlSelf->decode_tb__DOT__zero = (0U 
                                                == vlSelf->decode_tb__DOT__rd);
                vlSelf->decode_tb__DOT__overflow = 0U;
            }
        } else {
            vlSelf->decode_tb__DOT__rd = 0U;
            vlSelf->decode_tb__DOT__zero = 0U;
            vlSelf->decode_tb__DOT__overflow = 0U;
        }
    } else if ((4U & (IData)(vlSelf->decode_tb__DOT__op))) {
        if ((2U & (IData)(vlSelf->decode_tb__DOT__op))) {
            if ((1U & (IData)(vlSelf->decode_tb__DOT__op))) {
                vlSelf->decode_tb__DOT__rd = (((vlSelf->decode_tb__DOT__rs1 
                                                >> 0x1fU) 
                                               & (~ 
                                                  (vlSelf->decode_tb__DOT__rs2 
                                                   >> 0x1fU)))
                                               ? 1U
                                               : ((
                                                   (~ 
                                                    (vlSelf->decode_tb__DOT__rs1 
                                                     >> 0x1fU)) 
                                                   & (vlSelf->decode_tb__DOT__rs2 
                                                      >> 0x1fU))
                                                   ? 0U
                                                   : 
                                                  (vlSelf->decode_tb__DOT__rs1 
                                                   < vlSelf->decode_tb__DOT__rs2)));
                vlSelf->decode_tb__DOT__zero = (0U 
                                                == vlSelf->decode_tb__DOT__rd);
                vlSelf->decode_tb__DOT__overflow = 
                    (1U & vlSelf->decode_tb__DOT__rd);
            } else {
                vlSelf->decode_tb__DOT__rd = (vlSelf->decode_tb__DOT__rs1 
                                              - vlSelf->decode_tb__DOT__rs2);
                vlSelf->decode_tb__DOT__zero = (0U 
                                                == vlSelf->decode_tb__DOT__rd);
                vlSelf->decode_tb__DOT__overflow = 
                    (((VL_LTES_III(32, 0U, vlSelf->decode_tb__DOT__rs1) 
                       & VL_GTS_III(32, 0U, vlSelf->decode_tb__DOT__rs2)) 
                      & VL_GTS_III(32, 0U, vlSelf->decode_tb__DOT__rd)) 
                     | ((VL_GTS_III(32, 0U, vlSelf->decode_tb__DOT__rs1) 
                         & VL_LTES_III(32, 0U, vlSelf->decode_tb__DOT__rs2)) 
                        & VL_LTES_III(32, 0U, vlSelf->decode_tb__DOT__rd)));
            }
        } else {
            vlSelf->decode_tb__DOT__rd = 0U;
            vlSelf->decode_tb__DOT__zero = 0U;
            vlSelf->decode_tb__DOT__overflow = 0U;
        }
    } else if ((2U & (IData)(vlSelf->decode_tb__DOT__op))) {
        if ((1U & (IData)(vlSelf->decode_tb__DOT__op))) {
            vlSelf->decode_tb__DOT__rd = 0U;
            vlSelf->decode_tb__DOT__zero = 0U;
            vlSelf->decode_tb__DOT__overflow = 0U;
        } else {
            vlSelf->decode_tb__DOT__rd = (vlSelf->decode_tb__DOT__rs1 
                                          + vlSelf->decode_tb__DOT__rs2);
            vlSelf->decode_tb__DOT__zero = (0U == vlSelf->decode_tb__DOT__rd);
            vlSelf->decode_tb__DOT__overflow = (((VL_LTES_III(32, 0U, vlSelf->decode_tb__DOT__rs1) 
                                                  & VL_LTES_III(32, 0U, vlSelf->decode_tb__DOT__rs2)) 
                                                 & VL_GTS_III(32, 0U, vlSelf->decode_tb__DOT__rd)) 
                                                | ((VL_GTS_III(32, 0U, vlSelf->decode_tb__DOT__rs1) 
                                                    & VL_GTS_III(32, 0U, vlSelf->decode_tb__DOT__rs2)) 
                                                   & VL_LTES_III(32, 0U, vlSelf->decode_tb__DOT__rd)));
        }
    } else if ((1U & (IData)(vlSelf->decode_tb__DOT__op))) {
        vlSelf->decode_tb__DOT__rd = (vlSelf->decode_tb__DOT__rs1 
                                      | vlSelf->decode_tb__DOT__rs2);
        vlSelf->decode_tb__DOT__zero = (0U == vlSelf->decode_tb__DOT__rd);
        vlSelf->decode_tb__DOT__overflow = 0U;
    } else {
        vlSelf->decode_tb__DOT__rd = (vlSelf->decode_tb__DOT__rs1 
                                      & vlSelf->decode_tb__DOT__rs2);
        vlSelf->decode_tb__DOT__zero = (0U == vlSelf->decode_tb__DOT__rd);
        vlSelf->decode_tb__DOT__overflow = 0U;
    }
}

VL_ATTR_COLD void Vdecode_tb___024root___eval_initial(Vdecode_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecode_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode_tb___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    Vdecode_tb___024root___initial__TOP__3(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vdecode_tb___024root___eval_settle(Vdecode_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecode_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode_tb___024root___eval_settle\n"); );
    // Body
    Vdecode_tb___024root___settle__TOP__4(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vdecode_tb___024root___final(Vdecode_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecode_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode_tb___024root___final\n"); );
}

VL_ATTR_COLD void Vdecode_tb___024root___ctor_var_reset(Vdecode_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecode_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode_tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->finish = VL_RAND_RESET_I(1);
    vlSelf->decode_tb__DOT__instr = VL_RAND_RESET_I(32);
    vlSelf->decode_tb__DOT__op = VL_RAND_RESET_I(4);
    vlSelf->decode_tb__DOT__ssel = VL_RAND_RESET_I(1);
    vlSelf->decode_tb__DOT__imm = VL_RAND_RESET_I(32);
    vlSelf->decode_tb__DOT__rs1_id = VL_RAND_RESET_I(5);
    vlSelf->decode_tb__DOT__rs2_id = VL_RAND_RESET_I(5);
    vlSelf->decode_tb__DOT__rdst_id = VL_RAND_RESET_I(5);
    vlSelf->decode_tb__DOT__rd = VL_RAND_RESET_I(32);
    vlSelf->decode_tb__DOT__rs1 = VL_RAND_RESET_I(32);
    vlSelf->decode_tb__DOT__rs2 = VL_RAND_RESET_I(32);
    vlSelf->decode_tb__DOT__zero = VL_RAND_RESET_I(1);
    vlSelf->decode_tb__DOT__overflow = VL_RAND_RESET_I(1);
    vlSelf->decode_tb__DOT__golden_op = VL_RAND_RESET_I(4);
    vlSelf->decode_tb__DOT__golden_ssel = VL_RAND_RESET_I(1);
    vlSelf->decode_tb__DOT__golden_imm = VL_RAND_RESET_I(32);
    vlSelf->decode_tb__DOT__golden_rs1_id = VL_RAND_RESET_I(5);
    vlSelf->decode_tb__DOT__golden_rs2_id = VL_RAND_RESET_I(5);
    vlSelf->decode_tb__DOT__golden_rdst_id = VL_RAND_RESET_I(5);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->decode_tb__DOT__golden_R[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->decode_tb__DOT__golden_reg = VL_RAND_RESET_I(32);
    vlSelf->decode_tb__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->decode_tb__DOT__pat_num = VL_RAND_RESET_I(32);
    vlSelf->decode_tb__DOT__pattern = 0;
    vlSelf->decode_tb__DOT__tmp = VL_RAND_RESET_I(32);
    vlSelf->decode_tb__DOT__reg_pattern = 0;
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->decode_tb__DOT__reg_file_inst__DOT__R[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->decode_tb__DOT__reg_file_inst__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->decode_tb__DOT__reg_file_inst__DOT__unnamedblk2__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
