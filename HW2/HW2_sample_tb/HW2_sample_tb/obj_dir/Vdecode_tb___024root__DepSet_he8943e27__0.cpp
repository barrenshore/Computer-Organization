// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdecode_tb.h for the primary calling header

#include "verilated.h"

#include "Vdecode_tb___024root.h"

VL_INLINE_OPT void Vdecode_tb___024root___sequent__TOP__1(Vdecode_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecode_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode_tb___024root___sequent__TOP__1\n"); );
    // Init
    CData/*0:0*/ __Vdlyvset__decode_tb__DOT__reg_file_inst__DOT__R__v0;
    CData/*4:0*/ __Vdlyvdim0__decode_tb__DOT__reg_file_inst__DOT__R__v32;
    IData/*31:0*/ __Vdlyvval__decode_tb__DOT__reg_file_inst__DOT__R__v32;
    CData/*0:0*/ __Vdlyvset__decode_tb__DOT__reg_file_inst__DOT__R__v32;
    // Body
    if (vlSelf->rst) {
        vlSelf->decode_tb__DOT__reg_file_inst__DOT__unnamedblk2__DOT__i = 0x20U;
    }
    __Vdlyvset__decode_tb__DOT__reg_file_inst__DOT__R__v0 = 0U;
    __Vdlyvset__decode_tb__DOT__reg_file_inst__DOT__R__v32 = 0U;
    if ((vlSelf->decode_tb__DOT__pattern ? feof(VL_CVT_I_FP(vlSelf->decode_tb__DOT__pattern)) : true)) {
        vlSelf->finish = 1U;
    } else if ((1U & (~ (IData)(vlSelf->rst)))) {
        vlSelf->decode_tb__DOT__tmp = VL_FSCANF_IX(vlSelf->decode_tb__DOT__pattern,"%# %# %# %# %# %# %#\n",
                                                   32,
                                                   &(vlSelf->decode_tb__DOT__instr),
                                                   4,
                                                   &(vlSelf->decode_tb__DOT__golden_op),
                                                   1,
                                                   &(vlSelf->decode_tb__DOT__golden_ssel),
                                                   32,
                                                   &(vlSelf->decode_tb__DOT__golden_imm),
                                                   5,
                                                   &(vlSelf->decode_tb__DOT__golden_rs1_id),
                                                   5,
                                                   &(vlSelf->decode_tb__DOT__golden_rs2_id),
                                                   5,
                                                   &(vlSelf->decode_tb__DOT__golden_rdst_id)) ;
    }
    if (vlSelf->rst) {
        __Vdlyvset__decode_tb__DOT__reg_file_inst__DOT__R__v0 = 1U;
    } else {
        __Vdlyvval__decode_tb__DOT__reg_file_inst__DOT__R__v32 
            = vlSelf->decode_tb__DOT__rd;
        __Vdlyvset__decode_tb__DOT__reg_file_inst__DOT__R__v32 = 1U;
        __Vdlyvdim0__decode_tb__DOT__reg_file_inst__DOT__R__v32 
            = vlSelf->decode_tb__DOT__rdst_id;
    }
    if ((0U == (vlSelf->decode_tb__DOT__instr >> 0x1aU))) {
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
        vlSelf->decode_tb__DOT__op = 2U;
        vlSelf->decode_tb__DOT__rs1_id = (0x1fU & (vlSelf->decode_tb__DOT__instr 
                                                   >> 0x15U));
        vlSelf->decode_tb__DOT__ssel = 0U;
    } else if ((0xaU == (vlSelf->decode_tb__DOT__instr 
                         >> 0x1aU))) {
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
        vlSelf->decode_tb__DOT__rdst_id = (0x1fU & 
                                           (vlSelf->decode_tb__DOT__instr 
                                            >> 0xbU));
    } else if ((8U == (vlSelf->decode_tb__DOT__instr 
                       >> 0x1aU))) {
        vlSelf->decode_tb__DOT__rs2_id = (0x1fU & (vlSelf->decode_tb__DOT__instr 
                                                   >> 0x10U));
        vlSelf->decode_tb__DOT__rdst_id = (0x1fU & 
                                           (vlSelf->decode_tb__DOT__instr 
                                            >> 0x10U));
    } else if ((0xaU == (vlSelf->decode_tb__DOT__instr 
                         >> 0x1aU))) {
        vlSelf->decode_tb__DOT__rs2_id = (0x1fU & (vlSelf->decode_tb__DOT__instr 
                                                   >> 0x10U));
        vlSelf->decode_tb__DOT__rdst_id = (0x1fU & 
                                           (vlSelf->decode_tb__DOT__instr 
                                            >> 0x10U));
    }
    if (__Vdlyvset__decode_tb__DOT__reg_file_inst__DOT__R__v0) {
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
    }
    if (__Vdlyvset__decode_tb__DOT__reg_file_inst__DOT__R__v32) {
        vlSelf->decode_tb__DOT__reg_file_inst__DOT__R[__Vdlyvdim0__decode_tb__DOT__reg_file_inst__DOT__R__v32] 
            = __Vdlyvval__decode_tb__DOT__reg_file_inst__DOT__R__v32;
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

VL_INLINE_OPT void Vdecode_tb___024root___sequent__TOP__2(Vdecode_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecode_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode_tb___024root___sequent__TOP__2\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->rst)))) {
        if (VL_UNLIKELY((((((((IData)(vlSelf->decode_tb__DOT__op) 
                              != (IData)(vlSelf->decode_tb__DOT__golden_op)) 
                             | ((IData)(vlSelf->decode_tb__DOT__ssel) 
                                != (IData)(vlSelf->decode_tb__DOT__golden_ssel))) 
                            | ((vlSelf->decode_tb__DOT__imm 
                                != vlSelf->decode_tb__DOT__golden_imm) 
                               & (~ (IData)(vlSelf->decode_tb__DOT__golden_ssel)))) 
                           | ((IData)(vlSelf->decode_tb__DOT__rs1_id) 
                              != (IData)(vlSelf->decode_tb__DOT__golden_rs1_id))) 
                          | (((IData)(vlSelf->decode_tb__DOT__rs2_id) 
                              != (IData)(vlSelf->decode_tb__DOT__golden_rs2_id)) 
                             & (IData)(vlSelf->decode_tb__DOT__golden_ssel))) 
                         | ((IData)(vlSelf->decode_tb__DOT__rdst_id) 
                            != (IData)(vlSelf->decode_tb__DOT__golden_rdst_id))))) {
            VL_WRITEF("Fail Pattern %11d\nYour op      : %10#,  Golden op      : %10#\nYour ssel    : %10#,  Golden ssel    : %10#\nYour imm     : %10d,  Golden imm     : %10d\nYour rs1_id  : %10#,  Golden rs1_id  : %10#\nYour rs2_id  : %10#,  Golden rs2_id  : %10#\nYour rdst_id : %10#,  Golden rdst_id : %10#\n",
                      32,vlSelf->decode_tb__DOT__pat_num,
                      4,(IData)(vlSelf->decode_tb__DOT__op),
                      4,vlSelf->decode_tb__DOT__golden_op,
                      1,(IData)(vlSelf->decode_tb__DOT__ssel),
                      1,vlSelf->decode_tb__DOT__golden_ssel,
                      32,vlSelf->decode_tb__DOT__imm,
                      32,vlSelf->decode_tb__DOT__golden_imm,
                      5,(IData)(vlSelf->decode_tb__DOT__rs1_id),
                      5,vlSelf->decode_tb__DOT__golden_rs1_id,
                      5,(IData)(vlSelf->decode_tb__DOT__rs2_id),
                      5,vlSelf->decode_tb__DOT__golden_rs2_id,
                      5,(IData)(vlSelf->decode_tb__DOT__rdst_id),
                      5,vlSelf->decode_tb__DOT__golden_rdst_id);
            VL_FINISH_MT("decode_tb.v", 127, "");
            VL_FINISH_MT("decode_tb.v", 128, "");
        } else {
            VL_WRITEF("Pass Pattern %11d\n",32,vlSelf->decode_tb__DOT__pat_num);
        }
        vlSelf->decode_tb__DOT__pat_num = ((IData)(1U) 
                                           + vlSelf->decode_tb__DOT__pat_num);
    }
    if (VL_UNLIKELY(vlSelf->finish)) {
        vlSelf->decode_tb__DOT__tmp = VL_FSCANF_IX(vlSelf->decode_tb__DOT__reg_pattern,"%#",
                                                   32,
                                                   &(vlSelf->decode_tb__DOT__golden_reg)) ;
        vlSelf->decode_tb__DOT__i = 0x20U;
        vlSelf->decode_tb__DOT__golden_R[0U] = vlSelf->decode_tb__DOT__golden_reg;
        VL_WRITEF("Check reg[ 0] : ");
        if ((vlSelf->decode_tb__DOT__golden_R[0U] != 
             vlSelf->decode_tb__DOT__reg_file_inst__DOT__R
             [0U])) {
            VL_WRITEF("Failed\nYour reg : %10d, Golden reg : %10d\n",
                      32,vlSelf->decode_tb__DOT__reg_file_inst__DOT__R
                      [0U],32,vlSelf->decode_tb__DOT__golden_R
                      [0U]);
        } else {
            VL_WRITEF("Pass\n");
        }
        vlSelf->decode_tb__DOT__tmp = VL_FSCANF_IX(vlSelf->decode_tb__DOT__reg_pattern,"%#",
                                                   32,
                                                   &(vlSelf->decode_tb__DOT__golden_reg)) ;
        vlSelf->decode_tb__DOT__golden_R[1U] = vlSelf->decode_tb__DOT__golden_reg;
        VL_WRITEF("Check reg[ 1] : ");
        if ((vlSelf->decode_tb__DOT__golden_R[1U] != 
             vlSelf->decode_tb__DOT__reg_file_inst__DOT__R
             [1U])) {
            VL_WRITEF("Failed\nYour reg : %10d, Golden reg : %10d\n",
                      32,vlSelf->decode_tb__DOT__reg_file_inst__DOT__R
                      [1U],32,vlSelf->decode_tb__DOT__golden_R
                      [1U]);
        } else {
            VL_WRITEF("Pass\n");
        }
        vlSelf->decode_tb__DOT__tmp = VL_FSCANF_IX(vlSelf->decode_tb__DOT__reg_pattern,"%#",
                                                   32,
                                                   &(vlSelf->decode_tb__DOT__golden_reg)) ;
        vlSelf->decode_tb__DOT__golden_R[2U] = vlSelf->decode_tb__DOT__golden_reg;
        VL_WRITEF("Check reg[ 2] : ");
        if ((vlSelf->decode_tb__DOT__golden_R[2U] != 
             vlSelf->decode_tb__DOT__reg_file_inst__DOT__R
             [2U])) {
            VL_WRITEF("Failed\nYour reg : %10d, Golden reg : %10d\n",
                      32,vlSelf->decode_tb__DOT__reg_file_inst__DOT__R
                      [2U],32,vlSelf->decode_tb__DOT__golden_R
                      [2U]);
        } else {
            VL_WRITEF("Pass\n");
        }
        vlSelf->decode_tb__DOT__tmp = VL_FSCANF_IX(vlSelf->decode_tb__DOT__reg_pattern,"%#",
                                                   32,
                                                   &(vlSelf->decode_tb__DOT__golden_reg)) ;
        vlSelf->decode_tb__DOT__golden_R[3U] = vlSelf->decode_tb__DOT__golden_reg;
        VL_WRITEF("Check reg[ 3] : ");
        if ((vlSelf->decode_tb__DOT__golden_R[3U] != 
             vlSelf->decode_tb__DOT__reg_file_inst__DOT__R
             [3U])) {
            VL_WRITEF("Failed\nYour reg : %10d, Golden reg : %10d\n",
                      32,vlSelf->decode_tb__DOT__reg_file_inst__DOT__R
                      [3U],32,vlSelf->decode_tb__DOT__golden_R
                      [3U]);
        } else {
            VL_WRITEF("Pass\n");
        }
        vlSelf->decode_tb__DOT__tmp = VL_FSCANF_IX(vlSelf->decode_tb__DOT__reg_pattern,"%#",
                                                   32,
                                                   &(vlSelf->decode_tb__DOT__golden_reg)) ;
        vlSelf->decode_tb__DOT__golden_R[4U] = vlSelf->decode_tb__DOT__golden_reg;
        VL_WRITEF("Check reg[ 4] : ");
        if ((vlSelf->decode_tb__DOT__golden_R[4U] != 
             vlSelf->decode_tb__DOT__reg_file_inst__DOT__R
             [4U])) {
            VL_WRITEF("Failed\nYour reg : %10d, Golden reg : %10d\n",
                      32,vlSelf->decode_tb__DOT__reg_file_inst__DOT__R
                      [4U],32,vlSelf->decode_tb__DOT__golden_R
                      [4U]);
        } else {
            VL_WRITEF("Pass\n");
        }
        vlSelf->decode_tb__DOT__tmp = VL_FSCANF_IX(vlSelf->decode_tb__DOT__reg_pattern,"%#",
                                                   32,
                                                   &(vlSelf->decode_tb__DOT__golden_reg)) ;
        vlSelf->decode_tb__DOT__golden_R[5U] = vlSelf->decode_tb__DOT__golden_reg;
        VL_WRITEF("Check reg[ 5] : ");
        if ((vlSelf->decode_tb__DOT__golden_R[5U] != 
             vlSelf->decode_tb__DOT__reg_file_inst__DOT__R
             [5U])) {
            VL_WRITEF("Failed\nYour reg : %10d, Golden reg : %10d\n",
                      32,vlSelf->decode_tb__DOT__reg_file_inst__DOT__R
                      [5U],32,vlSelf->decode_tb__DOT__golden_R
                      [5U]);
        } else {
            VL_WRITEF("Pass\n");
        }
        vlSelf->decode_tb__DOT__tmp = VL_FSCANF_IX(vlSelf->decode_tb__DOT__reg_pattern,"%#",
                                                   32,
                                                   &(vlSelf->decode_tb__DOT__golden_reg)) ;
        vlSelf->decode_tb__DOT__golden_R[6U] = vlSelf->decode_tb__DOT__golden_reg;
        VL_WRITEF("Check reg[ 6] : ");
        if ((vlSelf->decode_tb__DOT__golden_R[6U] != 
             vlSelf->decode_tb__DOT__reg_file_inst__DOT__R
             [6U])) {
            VL_WRITEF("Failed\nYour reg : %10d, Golden reg : %10d\n",
                      32,vlSelf->decode_tb__DOT__reg_file_inst__DOT__R
                      [6U],32,vlSelf->decode_tb__DOT__golden_R
                      [6U]);
        } else {
            VL_WRITEF("Pass\n");
        }
        vlSelf->decode_tb__DOT__tmp = VL_FSCANF_IX(vlSelf->decode_tb__DOT__reg_pattern,"%#",
                                                   32,
                                                   &(vlSelf->decode_tb__DOT__golden_reg)) ;
        vlSelf->decode_tb__DOT__golden_R[7U] = vlSelf->decode_tb__DOT__golden_reg;
        VL_WRITEF("Check reg[ 7] : ");
        if ((vlSelf->decode_tb__DOT__golden_R[7U] != 
             vlSelf->decode_tb__DOT__reg_file_inst__DOT__R
             [7U])) {
            VL_WRITEF("Failed\nYour reg : %10d, Golden reg : %10d\n",
                      32,vlSelf->decode_tb__DOT__reg_file_inst__DOT__R
                      [7U],32,vlSelf->decode_tb__DOT__golden_R
                      [7U]);
        } else {
            VL_WRITEF("Pass\n");
        }
        vlSelf->decode_tb__DOT__tmp = VL_FSCANF_IX(vlSelf->decode_tb__DOT__reg_pattern,"%#",
                                                   32,
                                                   &(vlSelf->decode_tb__DOT__golden_reg)) ;
        vlSelf->decode_tb__DOT__golden_R[8U] = vlSelf->decode_tb__DOT__golden_reg;
        VL_WRITEF("Check reg[ 8] : ");
        if ((vlSelf->decode_tb__DOT__golden_R[8U] != 
             vlSelf->decode_tb__DOT__reg_file_inst__DOT__R
             [8U])) {
            VL_WRITEF("Failed\nYour reg : %10d, Golden reg : %10d\n",
                      32,vlSelf->decode_tb__DOT__reg_file_inst__DOT__R
                      [8U],32,vlSelf->decode_tb__DOT__golden_R
                      [8U]);
        } else {
            VL_WRITEF("Pass\n");
        }
        vlSelf->decode_tb__DOT__tmp = VL_FSCANF_IX(vlSelf->decode_tb__DOT__reg_pattern,"%#",
                                                   32,
                                                   &(vlSelf->decode_tb__DOT__golden_reg)) ;
        vlSelf->decode_tb__DOT__golden_R[9U] = vlSelf->decode_tb__DOT__golden_reg;
        VL_WRITEF("Check reg[ 9] : ");
        if ((vlSelf->decode_tb__DOT__golden_R[9U] != 
             vlSelf->decode_tb__DOT__reg_file_inst__DOT__R
             [9U])) {
            VL_WRITEF("Failed\nYour reg : %10d, Golden reg : %10d\n",
                      32,vlSelf->decode_tb__DOT__reg_file_inst__DOT__R
                      [9U],32,vlSelf->decode_tb__DOT__golden_R
                      [9U]);
        } else {
            VL_WRITEF("Pass\n");
        }
        vlSelf->decode_tb__DOT__tmp = VL_FSCANF_IX(vlSelf->decode_tb__DOT__reg_pattern,"%#",
                                                   32,
                                                   &(vlSelf->decode_tb__DOT__golden_reg)) ;
        vlSelf->decode_tb__DOT__golden_R[0xaU] = vlSelf->decode_tb__DOT__golden_reg;
        VL_WRITEF("Check reg[10] : ");
        if ((vlSelf->decode_tb__DOT__golden_R[0xaU] 
             != vlSelf->decode_tb__DOT__reg_file_inst__DOT__R
             [0xaU])) {
            VL_WRITEF("Failed\nYour reg : %10d, Golden reg : %10d\n",
                      32,vlSelf->decode_tb__DOT__reg_file_inst__DOT__R
                      [0xaU],32,vlSelf->decode_tb__DOT__golden_R
                      [0xaU]);
        } else {
            VL_WRITEF("Pass\n");
        }
        vlSelf->decode_tb__DOT__tmp = VL_FSCANF_IX(vlSelf->decode_tb__DOT__reg_pattern,"%#",
                                                   32,
                                                   &(vlSelf->decode_tb__DOT__golden_reg)) ;
        vlSelf->decode_tb__DOT__golden_R[0xbU] = vlSelf->decode_tb__DOT__golden_reg;
        VL_WRITEF("Check reg[11] : ");
        if ((vlSelf->decode_tb__DOT__golden_R[0xbU] 
             != vlSelf->decode_tb__DOT__reg_file_inst__DOT__R
             [0xbU])) {
            VL_WRITEF("Failed\nYour reg : %10d, Golden reg : %10d\n",
                      32,vlSelf->decode_tb__DOT__reg_file_inst__DOT__R
                      [0xbU],32,vlSelf->decode_tb__DOT__golden_R
                      [0xbU]);
        } else {
            VL_WRITEF("Pass\n");
        }
        vlSelf->decode_tb__DOT__tmp = VL_FSCANF_IX(vlSelf->decode_tb__DOT__reg_pattern,"%#",
                                                   32,
                                                   &(vlSelf->decode_tb__DOT__golden_reg)) ;
        vlSelf->decode_tb__DOT__golden_R[0xcU] = vlSelf->decode_tb__DOT__golden_reg;
        VL_WRITEF("Check reg[12] : ");
        if ((vlSelf->decode_tb__DOT__golden_R[0xcU] 
             != vlSelf->decode_tb__DOT__reg_file_inst__DOT__R
             [0xcU])) {
            VL_WRITEF("Failed\nYour reg : %10d, Golden reg : %10d\n",
                      32,vlSelf->decode_tb__DOT__reg_file_inst__DOT__R
                      [0xcU],32,vlSelf->decode_tb__DOT__golden_R
                      [0xcU]);
        } else {
            VL_WRITEF("Pass\n");
        }
        vlSelf->decode_tb__DOT__tmp = VL_FSCANF_IX(vlSelf->decode_tb__DOT__reg_pattern,"%#",
                                                   32,
                                                   &(vlSelf->decode_tb__DOT__golden_reg)) ;
        vlSelf->decode_tb__DOT__golden_R[0xdU] = vlSelf->decode_tb__DOT__golden_reg;
        VL_WRITEF("Check reg[13] : ");
        if ((vlSelf->decode_tb__DOT__golden_R[0xdU] 
             != vlSelf->decode_tb__DOT__reg_file_inst__DOT__R
             [0xdU])) {
            VL_WRITEF("Failed\nYour reg : %10d, Golden reg : %10d\n",
                      32,vlSelf->decode_tb__DOT__reg_file_inst__DOT__R
                      [0xdU],32,vlSelf->decode_tb__DOT__golden_R
                      [0xdU]);
        } else {
            VL_WRITEF("Pass\n");
        }
        vlSelf->decode_tb__DOT__tmp = VL_FSCANF_IX(vlSelf->decode_tb__DOT__reg_pattern,"%#",
                                                   32,
                                                   &(vlSelf->decode_tb__DOT__golden_reg)) ;
        vlSelf->decode_tb__DOT__golden_R[0xeU] = vlSelf->decode_tb__DOT__golden_reg;
        VL_WRITEF("Check reg[14] : ");
        if ((vlSelf->decode_tb__DOT__golden_R[0xeU] 
             != vlSelf->decode_tb__DOT__reg_file_inst__DOT__R
             [0xeU])) {
            VL_WRITEF("Failed\nYour reg : %10d, Golden reg : %10d\n",
                      32,vlSelf->decode_tb__DOT__reg_file_inst__DOT__R
                      [0xeU],32,vlSelf->decode_tb__DOT__golden_R
                      [0xeU]);
        } else {
            VL_WRITEF("Pass\n");
        }
        vlSelf->decode_tb__DOT__tmp = VL_FSCANF_IX(vlSelf->decode_tb__DOT__reg_pattern,"%#",
                                                   32,
                                                   &(vlSelf->decode_tb__DOT__golden_reg)) ;
        vlSelf->decode_tb__DOT__golden_R[0xfU] = vlSelf->decode_tb__DOT__golden_reg;
        VL_WRITEF("Check reg[15] : ");
        if ((vlSelf->decode_tb__DOT__golden_R[0xfU] 
             != vlSelf->decode_tb__DOT__reg_file_inst__DOT__R
             [0xfU])) {
            VL_WRITEF("Failed\nYour reg : %10d, Golden reg : %10d\n",
                      32,vlSelf->decode_tb__DOT__reg_file_inst__DOT__R
                      [0xfU],32,vlSelf->decode_tb__DOT__golden_R
                      [0xfU]);
        } else {
            VL_WRITEF("Pass\n");
        }
        vlSelf->decode_tb__DOT__tmp = VL_FSCANF_IX(vlSelf->decode_tb__DOT__reg_pattern,"%#",
                                                   32,
                                                   &(vlSelf->decode_tb__DOT__golden_reg)) ;
        vlSelf->decode_tb__DOT__golden_R[0x10U] = vlSelf->decode_tb__DOT__golden_reg;
        VL_WRITEF("Check reg[16] : ");
        if ((vlSelf->decode_tb__DOT__golden_R[0x10U] 
             != vlSelf->decode_tb__DOT__reg_file_inst__DOT__R
             [0x10U])) {
            VL_WRITEF("Failed\nYour reg : %10d, Golden reg : %10d\n",
                      32,vlSelf->decode_tb__DOT__reg_file_inst__DOT__R
                      [0x10U],32,vlSelf->decode_tb__DOT__golden_R
                      [0x10U]);
        } else {
            VL_WRITEF("Pass\n");
        }
        vlSelf->decode_tb__DOT__tmp = VL_FSCANF_IX(vlSelf->decode_tb__DOT__reg_pattern,"%#",
                                                   32,
                                                   &(vlSelf->decode_tb__DOT__golden_reg)) ;
        vlSelf->decode_tb__DOT__golden_R[0x11U] = vlSelf->decode_tb__DOT__golden_reg;
        VL_WRITEF("Check reg[17] : ");
        if ((vlSelf->decode_tb__DOT__golden_R[0x11U] 
             != vlSelf->decode_tb__DOT__reg_file_inst__DOT__R
             [0x11U])) {
            VL_WRITEF("Failed\nYour reg : %10d, Golden reg : %10d\n",
                      32,vlSelf->decode_tb__DOT__reg_file_inst__DOT__R
                      [0x11U],32,vlSelf->decode_tb__DOT__golden_R
                      [0x11U]);
        } else {
            VL_WRITEF("Pass\n");
        }
        vlSelf->decode_tb__DOT__tmp = VL_FSCANF_IX(vlSelf->decode_tb__DOT__reg_pattern,"%#",
                                                   32,
                                                   &(vlSelf->decode_tb__DOT__golden_reg)) ;
        vlSelf->decode_tb__DOT__golden_R[0x12U] = vlSelf->decode_tb__DOT__golden_reg;
        VL_WRITEF("Check reg[18] : ");
        if ((vlSelf->decode_tb__DOT__golden_R[0x12U] 
             != vlSelf->decode_tb__DOT__reg_file_inst__DOT__R
             [0x12U])) {
            VL_WRITEF("Failed\nYour reg : %10d, Golden reg : %10d\n",
                      32,vlSelf->decode_tb__DOT__reg_file_inst__DOT__R
                      [0x12U],32,vlSelf->decode_tb__DOT__golden_R
                      [0x12U]);
        } else {
            VL_WRITEF("Pass\n");
        }
        vlSelf->decode_tb__DOT__tmp = VL_FSCANF_IX(vlSelf->decode_tb__DOT__reg_pattern,"%#",
                                                   32,
                                                   &(vlSelf->decode_tb__DOT__golden_reg)) ;
        vlSelf->decode_tb__DOT__golden_R[0x13U] = vlSelf->decode_tb__DOT__golden_reg;
        VL_WRITEF("Check reg[19] : ");
        if ((vlSelf->decode_tb__DOT__golden_R[0x13U] 
             != vlSelf->decode_tb__DOT__reg_file_inst__DOT__R
             [0x13U])) {
            VL_WRITEF("Failed\nYour reg : %10d, Golden reg : %10d\n",
                      32,vlSelf->decode_tb__DOT__reg_file_inst__DOT__R
                      [0x13U],32,vlSelf->decode_tb__DOT__golden_R
                      [0x13U]);
        } else {
            VL_WRITEF("Pass\n");
        }
        vlSelf->decode_tb__DOT__tmp = VL_FSCANF_IX(vlSelf->decode_tb__DOT__reg_pattern,"%#",
                                                   32,
                                                   &(vlSelf->decode_tb__DOT__golden_reg)) ;
        vlSelf->decode_tb__DOT__golden_R[0x14U] = vlSelf->decode_tb__DOT__golden_reg;
        VL_WRITEF("Check reg[20] : ");
        if ((vlSelf->decode_tb__DOT__golden_R[0x14U] 
             != vlSelf->decode_tb__DOT__reg_file_inst__DOT__R
             [0x14U])) {
            VL_WRITEF("Failed\nYour reg : %10d, Golden reg : %10d\n",
                      32,vlSelf->decode_tb__DOT__reg_file_inst__DOT__R
                      [0x14U],32,vlSelf->decode_tb__DOT__golden_R
                      [0x14U]);
        } else {
            VL_WRITEF("Pass\n");
        }
        vlSelf->decode_tb__DOT__tmp = VL_FSCANF_IX(vlSelf->decode_tb__DOT__reg_pattern,"%#",
                                                   32,
                                                   &(vlSelf->decode_tb__DOT__golden_reg)) ;
        vlSelf->decode_tb__DOT__golden_R[0x15U] = vlSelf->decode_tb__DOT__golden_reg;
        VL_WRITEF("Check reg[21] : ");
        if ((vlSelf->decode_tb__DOT__golden_R[0x15U] 
             != vlSelf->decode_tb__DOT__reg_file_inst__DOT__R
             [0x15U])) {
            VL_WRITEF("Failed\nYour reg : %10d, Golden reg : %10d\n",
                      32,vlSelf->decode_tb__DOT__reg_file_inst__DOT__R
                      [0x15U],32,vlSelf->decode_tb__DOT__golden_R
                      [0x15U]);
        } else {
            VL_WRITEF("Pass\n");
        }
        vlSelf->decode_tb__DOT__tmp = VL_FSCANF_IX(vlSelf->decode_tb__DOT__reg_pattern,"%#",
                                                   32,
                                                   &(vlSelf->decode_tb__DOT__golden_reg)) ;
        vlSelf->decode_tb__DOT__golden_R[0x16U] = vlSelf->decode_tb__DOT__golden_reg;
        VL_WRITEF("Check reg[22] : ");
        if ((vlSelf->decode_tb__DOT__golden_R[0x16U] 
             != vlSelf->decode_tb__DOT__reg_file_inst__DOT__R
             [0x16U])) {
            VL_WRITEF("Failed\nYour reg : %10d, Golden reg : %10d\n",
                      32,vlSelf->decode_tb__DOT__reg_file_inst__DOT__R
                      [0x16U],32,vlSelf->decode_tb__DOT__golden_R
                      [0x16U]);
        } else {
            VL_WRITEF("Pass\n");
        }
        vlSelf->decode_tb__DOT__tmp = VL_FSCANF_IX(vlSelf->decode_tb__DOT__reg_pattern,"%#",
                                                   32,
                                                   &(vlSelf->decode_tb__DOT__golden_reg)) ;
        vlSelf->decode_tb__DOT__golden_R[0x17U] = vlSelf->decode_tb__DOT__golden_reg;
        VL_WRITEF("Check reg[23] : ");
        if ((vlSelf->decode_tb__DOT__golden_R[0x17U] 
             != vlSelf->decode_tb__DOT__reg_file_inst__DOT__R
             [0x17U])) {
            VL_WRITEF("Failed\nYour reg : %10d, Golden reg : %10d\n",
                      32,vlSelf->decode_tb__DOT__reg_file_inst__DOT__R
                      [0x17U],32,vlSelf->decode_tb__DOT__golden_R
                      [0x17U]);
        } else {
            VL_WRITEF("Pass\n");
        }
        vlSelf->decode_tb__DOT__tmp = VL_FSCANF_IX(vlSelf->decode_tb__DOT__reg_pattern,"%#",
                                                   32,
                                                   &(vlSelf->decode_tb__DOT__golden_reg)) ;
        vlSelf->decode_tb__DOT__golden_R[0x18U] = vlSelf->decode_tb__DOT__golden_reg;
        VL_WRITEF("Check reg[24] : ");
        if ((vlSelf->decode_tb__DOT__golden_R[0x18U] 
             != vlSelf->decode_tb__DOT__reg_file_inst__DOT__R
             [0x18U])) {
            VL_WRITEF("Failed\nYour reg : %10d, Golden reg : %10d\n",
                      32,vlSelf->decode_tb__DOT__reg_file_inst__DOT__R
                      [0x18U],32,vlSelf->decode_tb__DOT__golden_R
                      [0x18U]);
        } else {
            VL_WRITEF("Pass\n");
        }
        vlSelf->decode_tb__DOT__tmp = VL_FSCANF_IX(vlSelf->decode_tb__DOT__reg_pattern,"%#",
                                                   32,
                                                   &(vlSelf->decode_tb__DOT__golden_reg)) ;
        vlSelf->decode_tb__DOT__golden_R[0x19U] = vlSelf->decode_tb__DOT__golden_reg;
        VL_WRITEF("Check reg[25] : ");
        if ((vlSelf->decode_tb__DOT__golden_R[0x19U] 
             != vlSelf->decode_tb__DOT__reg_file_inst__DOT__R
             [0x19U])) {
            VL_WRITEF("Failed\nYour reg : %10d, Golden reg : %10d\n",
                      32,vlSelf->decode_tb__DOT__reg_file_inst__DOT__R
                      [0x19U],32,vlSelf->decode_tb__DOT__golden_R
                      [0x19U]);
        } else {
            VL_WRITEF("Pass\n");
        }
        vlSelf->decode_tb__DOT__tmp = VL_FSCANF_IX(vlSelf->decode_tb__DOT__reg_pattern,"%#",
                                                   32,
                                                   &(vlSelf->decode_tb__DOT__golden_reg)) ;
        vlSelf->decode_tb__DOT__golden_R[0x1aU] = vlSelf->decode_tb__DOT__golden_reg;
        VL_WRITEF("Check reg[26] : ");
        if ((vlSelf->decode_tb__DOT__golden_R[0x1aU] 
             != vlSelf->decode_tb__DOT__reg_file_inst__DOT__R
             [0x1aU])) {
            VL_WRITEF("Failed\nYour reg : %10d, Golden reg : %10d\n",
                      32,vlSelf->decode_tb__DOT__reg_file_inst__DOT__R
                      [0x1aU],32,vlSelf->decode_tb__DOT__golden_R
                      [0x1aU]);
        } else {
            VL_WRITEF("Pass\n");
        }
        vlSelf->decode_tb__DOT__tmp = VL_FSCANF_IX(vlSelf->decode_tb__DOT__reg_pattern,"%#",
                                                   32,
                                                   &(vlSelf->decode_tb__DOT__golden_reg)) ;
        vlSelf->decode_tb__DOT__golden_R[0x1bU] = vlSelf->decode_tb__DOT__golden_reg;
        VL_WRITEF("Check reg[27] : ");
        if ((vlSelf->decode_tb__DOT__golden_R[0x1bU] 
             != vlSelf->decode_tb__DOT__reg_file_inst__DOT__R
             [0x1bU])) {
            VL_WRITEF("Failed\nYour reg : %10d, Golden reg : %10d\n",
                      32,vlSelf->decode_tb__DOT__reg_file_inst__DOT__R
                      [0x1bU],32,vlSelf->decode_tb__DOT__golden_R
                      [0x1bU]);
        } else {
            VL_WRITEF("Pass\n");
        }
        vlSelf->decode_tb__DOT__tmp = VL_FSCANF_IX(vlSelf->decode_tb__DOT__reg_pattern,"%#",
                                                   32,
                                                   &(vlSelf->decode_tb__DOT__golden_reg)) ;
        vlSelf->decode_tb__DOT__golden_R[0x1cU] = vlSelf->decode_tb__DOT__golden_reg;
        VL_WRITEF("Check reg[28] : ");
        if ((vlSelf->decode_tb__DOT__golden_R[0x1cU] 
             != vlSelf->decode_tb__DOT__reg_file_inst__DOT__R
             [0x1cU])) {
            VL_WRITEF("Failed\nYour reg : %10d, Golden reg : %10d\n",
                      32,vlSelf->decode_tb__DOT__reg_file_inst__DOT__R
                      [0x1cU],32,vlSelf->decode_tb__DOT__golden_R
                      [0x1cU]);
        } else {
            VL_WRITEF("Pass\n");
        }
        vlSelf->decode_tb__DOT__tmp = VL_FSCANF_IX(vlSelf->decode_tb__DOT__reg_pattern,"%#",
                                                   32,
                                                   &(vlSelf->decode_tb__DOT__golden_reg)) ;
        vlSelf->decode_tb__DOT__golden_R[0x1dU] = vlSelf->decode_tb__DOT__golden_reg;
        VL_WRITEF("Check reg[29] : ");
        if ((vlSelf->decode_tb__DOT__golden_R[0x1dU] 
             != vlSelf->decode_tb__DOT__reg_file_inst__DOT__R
             [0x1dU])) {
            VL_WRITEF("Failed\nYour reg : %10d, Golden reg : %10d\n",
                      32,vlSelf->decode_tb__DOT__reg_file_inst__DOT__R
                      [0x1dU],32,vlSelf->decode_tb__DOT__golden_R
                      [0x1dU]);
        } else {
            VL_WRITEF("Pass\n");
        }
        vlSelf->decode_tb__DOT__tmp = VL_FSCANF_IX(vlSelf->decode_tb__DOT__reg_pattern,"%#",
                                                   32,
                                                   &(vlSelf->decode_tb__DOT__golden_reg)) ;
        vlSelf->decode_tb__DOT__golden_R[0x1eU] = vlSelf->decode_tb__DOT__golden_reg;
        VL_WRITEF("Check reg[30] : ");
        if ((vlSelf->decode_tb__DOT__golden_R[0x1eU] 
             != vlSelf->decode_tb__DOT__reg_file_inst__DOT__R
             [0x1eU])) {
            VL_WRITEF("Failed\nYour reg : %10d, Golden reg : %10d\n",
                      32,vlSelf->decode_tb__DOT__reg_file_inst__DOT__R
                      [0x1eU],32,vlSelf->decode_tb__DOT__golden_R
                      [0x1eU]);
        } else {
            VL_WRITEF("Pass\n");
        }
        vlSelf->decode_tb__DOT__tmp = VL_FSCANF_IX(vlSelf->decode_tb__DOT__reg_pattern,"%#",
                                                   32,
                                                   &(vlSelf->decode_tb__DOT__golden_reg)) ;
        vlSelf->decode_tb__DOT__golden_R[0x1fU] = vlSelf->decode_tb__DOT__golden_reg;
        VL_WRITEF("Check reg[31] : ");
        if ((vlSelf->decode_tb__DOT__golden_R[0x1fU] 
             != vlSelf->decode_tb__DOT__reg_file_inst__DOT__R
             [0x1fU])) {
            VL_WRITEF("Failed\nYour reg : %10d, Golden reg : %10d\n",
                      32,vlSelf->decode_tb__DOT__reg_file_inst__DOT__R
                      [0x1fU],32,vlSelf->decode_tb__DOT__golden_R
                      [0x1fU]);
        } else {
            VL_WRITEF("Pass\n");
        }
    }
}

void Vdecode_tb___024root___eval(Vdecode_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecode_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode_tb___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vdecode_tb___024root___sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if (((~ (IData)(vlSelf->clk)) & (IData)(vlSelf->__Vclklast__TOP__clk))) {
        Vdecode_tb___024root___sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void Vdecode_tb___024root___eval_debug_assertions(Vdecode_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecode_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode_tb___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
