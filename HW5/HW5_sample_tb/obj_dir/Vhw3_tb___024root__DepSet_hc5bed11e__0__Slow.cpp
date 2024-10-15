// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhw3_tb.h for the primary calling header

#include "verilated.h"

#include "Vhw3_tb___024root.h"

VL_ATTR_COLD void Vhw3_tb___024root___initial__TOP__3(Vhw3_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhw3_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhw3_tb___024root___initial__TOP__3\n"); );
    // Init
    IData/*31:0*/ __Vilp;
    // Body
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__imem_inst__DOT__RAM[0U] = 0x20080017U;
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__imem_inst__DOT__RAM[1U] = 0x2109002dU;
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__imem_inst__DOT__RAM[2U] = 0x212affd3U;
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__imem_inst__DOT__RAM[3U] = 0x200b0000U;
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__imem_inst__DOT__RAM[4U] = 0x200c000aU;
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__imem_inst__DOT__RAM[5U] = 0U;
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__imem_inst__DOT__RAM[6U] = 0x110a0001U;
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__imem_inst__DOT__RAM[7U] = 0xac080000U;
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__imem_inst__DOT__RAM[8U] = 0x216b0001U;
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__imem_inst__DOT__RAM[9U] = 0x18b682aU;
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__imem_inst__DOT__RAM[0xaU] = 0U;
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__imem_inst__DOT__RAM[0xbU] = 0x11a0fffcU;
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__imem_inst__DOT__RAM[0xcU] = 0x800000cU;
    __Vilp = 0xdU;
    while ((__Vilp <= 0x3fU)) {
        vlSelf->hw3_tb__DOT__core_top_inst__DOT__imem_inst__DOT__RAM[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__BHT[0U] = 0x100000000ULL;
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__BHT[1U] = 0x100000000ULL;
    vlSelf->hw3_tb__DOT__cycle_count = 0U;
    vlSelf->finish = 0U;
    vlSelf->hw3_tb__DOT__start = 1U;
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[0U] = 0U;
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[1U] = 0U;
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[2U] = 0U;
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[3U] = 0U;
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[4U] = 0U;
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[5U] = 0U;
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[6U] = 0U;
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[7U] = 0U;
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[8U] = 0U;
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[9U] = 0U;
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[0xaU] = 0U;
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[0xbU] = 0U;
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[0xcU] = 0U;
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[0xdU] = 0U;
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[0xeU] = 0U;
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[0xfU] = 0U;
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[0x10U] = 0U;
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[0x11U] = 0U;
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[0x12U] = 0U;
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[0x13U] = 0U;
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[0x14U] = 0U;
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[0x15U] = 0U;
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[0x16U] = 0U;
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[0x17U] = 0U;
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[0x18U] = 0U;
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[0x19U] = 0U;
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[0x1aU] = 0U;
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[0x1bU] = 0U;
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[0x1cU] = 0U;
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[0x1dU] = 0U;
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[0x1eU] = 0U;
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[0x1fU] = 0U;
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__unnamedblk1__DOT__i = 0x20U;
    __Vilp = 0U;
    while ((__Vilp <= 0x3eU)) {
        vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__idx = 0x3fU;
}

VL_ATTR_COLD void Vhw3_tb___024root___settle__TOP__4(Vhw3_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhw3_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhw3_tb___024root___settle__TOP__4\n"); );
    // Body
    if ((vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr 
         >> 0x1fU)) {
        if ((0x40000000U & vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr)) {
            vlSelf->hw3_tb__DOT__core_top_inst__DOT__op = 0xfU;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT__ssel = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs1_id 
                = (0x1fU & 0U);
            vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs2_id 
                = (0x1fU & 0U);
            vlSelf->hw3_tb__DOT__core_top_inst__DOT__imm = 0U;
        } else if ((0x20000000U & vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr)) {
            if ((0x10000000U & vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr)) {
                vlSelf->hw3_tb__DOT__core_top_inst__DOT__op = 0xfU;
                vlSelf->hw3_tb__DOT__core_top_inst__DOT__ssel = 0U;
                vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs1_id 
                    = (0x1fU & 0U);
                vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs2_id 
                    = (0x1fU & 0U);
                vlSelf->hw3_tb__DOT__core_top_inst__DOT__imm = 0U;
            } else if ((0x8000000U & vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr)) {
                if ((0x4000000U & vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr)) {
                    vlSelf->hw3_tb__DOT__core_top_inst__DOT__op = 2U;
                    vlSelf->hw3_tb__DOT__core_top_inst__DOT__ssel = 0U;
                    vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs1_id 
                        = (0x1fU & (vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr 
                                    >> 0x15U));
                    vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs2_id 
                        = (0x1fU & (vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr 
                                    >> 0x10U));
                    vlSelf->hw3_tb__DOT__core_top_inst__DOT__imm 
                        = (((- (IData)((1U & (vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr 
                                              >> 0xfU)))) 
                            << 0x10U) | (0xffffU & vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr));
                } else {
                    vlSelf->hw3_tb__DOT__core_top_inst__DOT__op = 0xfU;
                    vlSelf->hw3_tb__DOT__core_top_inst__DOT__ssel = 0U;
                    vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs1_id 
                        = (0x1fU & 0U);
                    vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs2_id 
                        = (0x1fU & 0U);
                    vlSelf->hw3_tb__DOT__core_top_inst__DOT__imm = 0U;
                }
            } else {
                vlSelf->hw3_tb__DOT__core_top_inst__DOT__op = 0xfU;
                vlSelf->hw3_tb__DOT__core_top_inst__DOT__ssel = 0U;
                vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs1_id 
                    = (0x1fU & 0U);
                vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs2_id 
                    = (0x1fU & 0U);
                vlSelf->hw3_tb__DOT__core_top_inst__DOT__imm = 0U;
            }
        } else if ((0x10000000U & vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr)) {
            vlSelf->hw3_tb__DOT__core_top_inst__DOT__op = 0xfU;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT__ssel = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs1_id 
                = (0x1fU & 0U);
            vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs2_id 
                = (0x1fU & 0U);
            vlSelf->hw3_tb__DOT__core_top_inst__DOT__imm = 0U;
        } else if ((0x8000000U & vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr)) {
            if ((0x4000000U & vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr)) {
                vlSelf->hw3_tb__DOT__core_top_inst__DOT__op = 2U;
                vlSelf->hw3_tb__DOT__core_top_inst__DOT__ssel = 0U;
                vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs1_id 
                    = (0x1fU & (vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr 
                                >> 0x15U));
                vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs2_id 
                    = (0x1fU & (vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr 
                                >> 0x10U));
                vlSelf->hw3_tb__DOT__core_top_inst__DOT__imm 
                    = (((- (IData)((1U & (vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr 
                                          >> 0xfU)))) 
                        << 0x10U) | (0xffffU & vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr));
            } else {
                vlSelf->hw3_tb__DOT__core_top_inst__DOT__op = 0xfU;
                vlSelf->hw3_tb__DOT__core_top_inst__DOT__ssel = 0U;
                vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs1_id 
                    = (0x1fU & 0U);
                vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs2_id 
                    = (0x1fU & 0U);
                vlSelf->hw3_tb__DOT__core_top_inst__DOT__imm = 0U;
            }
        } else {
            vlSelf->hw3_tb__DOT__core_top_inst__DOT__op = 0xfU;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT__ssel = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs1_id 
                = (0x1fU & 0U);
            vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs2_id 
                = (0x1fU & 0U);
            vlSelf->hw3_tb__DOT__core_top_inst__DOT__imm = 0U;
        }
        vlSelf->hw3_tb__DOT__core_top_inst__DOT__jump_addr = 0U;
        vlSelf->hw3_tb__DOT__core_top_inst__DOT__jump_type = 0U;
    } else if ((0x40000000U & vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr)) {
        vlSelf->hw3_tb__DOT__core_top_inst__DOT__op = 0xfU;
        vlSelf->hw3_tb__DOT__core_top_inst__DOT__ssel = 0U;
        vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs1_id 
            = (0x1fU & 0U);
        vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs2_id 
            = (0x1fU & 0U);
        vlSelf->hw3_tb__DOT__core_top_inst__DOT__imm = 0U;
        vlSelf->hw3_tb__DOT__core_top_inst__DOT__jump_addr = 0U;
        vlSelf->hw3_tb__DOT__core_top_inst__DOT__jump_type = 0U;
    } else if ((0x20000000U & vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr)) {
        if ((0x10000000U & vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr)) {
            vlSelf->hw3_tb__DOT__core_top_inst__DOT__op = 0xfU;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT__ssel = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs1_id 
                = (0x1fU & 0U);
            vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs2_id 
                = (0x1fU & 0U);
            vlSelf->hw3_tb__DOT__core_top_inst__DOT__imm = 0U;
        } else if ((0x8000000U & vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr)) {
            if ((0x4000000U & vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr)) {
                vlSelf->hw3_tb__DOT__core_top_inst__DOT__op = 0xfU;
                vlSelf->hw3_tb__DOT__core_top_inst__DOT__ssel = 0U;
                vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs1_id 
                    = (0x1fU & 0U);
                vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs2_id 
                    = (0x1fU & 0U);
                vlSelf->hw3_tb__DOT__core_top_inst__DOT__imm = 0U;
            } else {
                vlSelf->hw3_tb__DOT__core_top_inst__DOT__op = 7U;
                vlSelf->hw3_tb__DOT__core_top_inst__DOT__ssel = 0U;
                vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs1_id 
                    = (0x1fU & (vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr 
                                >> 0x15U));
                vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs2_id 
                    = (0x1fU & (vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr 
                                >> 0x10U));
                vlSelf->hw3_tb__DOT__core_top_inst__DOT__imm 
                    = (((- (IData)((1U & (vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr 
                                          >> 0xfU)))) 
                        << 0x10U) | (0xffffU & vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr));
            }
        } else if ((0x4000000U & vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr)) {
            vlSelf->hw3_tb__DOT__core_top_inst__DOT__op = 0xfU;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT__ssel = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs1_id 
                = (0x1fU & 0U);
            vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs2_id 
                = (0x1fU & 0U);
            vlSelf->hw3_tb__DOT__core_top_inst__DOT__imm = 0U;
        } else {
            vlSelf->hw3_tb__DOT__core_top_inst__DOT__op = 2U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT__ssel = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs1_id 
                = (0x1fU & (vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr 
                            >> 0x15U));
            vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs2_id 
                = (0x1fU & (vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr 
                            >> 0x10U));
            vlSelf->hw3_tb__DOT__core_top_inst__DOT__imm 
                = (((- (IData)((1U & (vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr 
                                      >> 0xfU)))) << 0x10U) 
                   | (0xffffU & vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr));
        }
        vlSelf->hw3_tb__DOT__core_top_inst__DOT__jump_addr = 0U;
        vlSelf->hw3_tb__DOT__core_top_inst__DOT__jump_type = 0U;
    } else if ((0x10000000U & vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr)) {
        vlSelf->hw3_tb__DOT__core_top_inst__DOT__op = 0xfU;
        vlSelf->hw3_tb__DOT__core_top_inst__DOT__ssel = 0U;
        if ((0x8000000U & vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr)) {
            vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs1_id 
                = (0x1fU & 0U);
            vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs2_id 
                = (0x1fU & 0U);
            vlSelf->hw3_tb__DOT__core_top_inst__DOT__imm = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT__jump_addr = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT__jump_type = 0U;
        } else if ((0x4000000U & vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr)) {
            vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs1_id 
                = (0x1fU & 0U);
            vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs2_id 
                = (0x1fU & 0U);
            vlSelf->hw3_tb__DOT__core_top_inst__DOT__imm = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT__jump_addr = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT__jump_type = 0U;
        } else {
            vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs1_id 
                = (0x1fU & (vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr 
                            >> 0x15U));
            vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs2_id 
                = (0x1fU & (vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr 
                            >> 0x10U));
            vlSelf->hw3_tb__DOT__core_top_inst__DOT__imm 
                = (((- (IData)((1U & (vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr 
                                      >> 0xfU)))) << 0x10U) 
                   | (0xffffU & vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr));
            vlSelf->hw3_tb__DOT__core_top_inst__DOT__jump_addr = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT__jump_type = 1U;
        }
    } else if ((0x8000000U & vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr)) {
        if ((0x4000000U & vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr)) {
            vlSelf->hw3_tb__DOT__core_top_inst__DOT__op = 2U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT__ssel = 2U;
        } else {
            vlSelf->hw3_tb__DOT__core_top_inst__DOT__op = 0xfU;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT__ssel = 0U;
        }
        vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs1_id 
            = (0x1fU & 0U);
        vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs2_id 
            = (0x1fU & 0U);
        vlSelf->hw3_tb__DOT__core_top_inst__DOT__imm = 0U;
        if ((0x4000000U & vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr)) {
            vlSelf->hw3_tb__DOT__core_top_inst__DOT__jump_addr 
                = (((- (IData)((1U & (vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr 
                                      >> 0x19U)))) 
                    << 0x1aU) | (0x3ffffffU & vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr));
            vlSelf->hw3_tb__DOT__core_top_inst__DOT__jump_type = 2U;
        } else {
            vlSelf->hw3_tb__DOT__core_top_inst__DOT__jump_addr 
                = (((- (IData)((1U & (vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr 
                                      >> 0x19U)))) 
                    << 0x1aU) | (0x3ffffffU & vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr));
            vlSelf->hw3_tb__DOT__core_top_inst__DOT__jump_type = 4U;
        }
    } else if ((0x4000000U & vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr)) {
        vlSelf->hw3_tb__DOT__core_top_inst__DOT__op = 0xfU;
        vlSelf->hw3_tb__DOT__core_top_inst__DOT__ssel = 0U;
        vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs1_id 
            = (0x1fU & 0U);
        vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs2_id 
            = (0x1fU & 0U);
        vlSelf->hw3_tb__DOT__core_top_inst__DOT__imm = 0U;
        vlSelf->hw3_tb__DOT__core_top_inst__DOT__jump_addr = 0U;
        vlSelf->hw3_tb__DOT__core_top_inst__DOT__jump_type = 0U;
    } else if ((0x20U & vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr)) {
        if ((0x10U & vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr)) {
            vlSelf->hw3_tb__DOT__core_top_inst__DOT__op = 0xfU;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT__ssel = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs1_id 
                = (0x1fU & (vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr 
                            >> 0x15U));
            vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs2_id 
                = (0x1fU & (vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr 
                            >> 0x10U));
        } else if ((8U & vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr)) {
            if ((4U & vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr)) {
                vlSelf->hw3_tb__DOT__core_top_inst__DOT__op = 0xfU;
                vlSelf->hw3_tb__DOT__core_top_inst__DOT__ssel = 0U;
                vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs1_id 
                    = (0x1fU & (vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr 
                                >> 0x15U));
                vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs2_id 
                    = (0x1fU & (vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr 
                                >> 0x10U));
            } else if ((2U & vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr)) {
                if ((1U & vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr)) {
                    vlSelf->hw3_tb__DOT__core_top_inst__DOT__op = 0xfU;
                    vlSelf->hw3_tb__DOT__core_top_inst__DOT__ssel = 0U;
                    vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs1_id 
                        = (0x1fU & (vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr 
                                    >> 0x15U));
                    vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs2_id 
                        = (0x1fU & (vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr 
                                    >> 0x10U));
                } else {
                    vlSelf->hw3_tb__DOT__core_top_inst__DOT__op = 7U;
                    vlSelf->hw3_tb__DOT__core_top_inst__DOT__ssel = 1U;
                    vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs1_id 
                        = (0x1fU & (vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr 
                                    >> 0x15U));
                    vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs2_id 
                        = (0x1fU & (vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr 
                                    >> 0x10U));
                }
            } else {
                vlSelf->hw3_tb__DOT__core_top_inst__DOT__op = 0xfU;
                vlSelf->hw3_tb__DOT__core_top_inst__DOT__ssel = 0U;
                vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs1_id 
                    = (0x1fU & (vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr 
                                >> 0x15U));
                vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs2_id 
                    = (0x1fU & (vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr 
                                >> 0x10U));
            }
        } else if ((4U & vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr)) {
            if ((2U & vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr)) {
                if ((1U & vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr)) {
                    vlSelf->hw3_tb__DOT__core_top_inst__DOT__op = 0xcU;
                    vlSelf->hw3_tb__DOT__core_top_inst__DOT__ssel = 1U;
                    vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs1_id 
                        = (0x1fU & (vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr 
                                    >> 0x15U));
                    vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs2_id 
                        = (0x1fU & (vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr 
                                    >> 0x10U));
                } else {
                    vlSelf->hw3_tb__DOT__core_top_inst__DOT__op = 0xfU;
                    vlSelf->hw3_tb__DOT__core_top_inst__DOT__ssel = 0U;
                    vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs1_id 
                        = (0x1fU & (vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr 
                                    >> 0x15U));
                    vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs2_id 
                        = (0x1fU & (vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr 
                                    >> 0x10U));
                }
            } else if ((1U & vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr)) {
                vlSelf->hw3_tb__DOT__core_top_inst__DOT__op = 1U;
                vlSelf->hw3_tb__DOT__core_top_inst__DOT__ssel = 1U;
                vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs1_id 
                    = (0x1fU & (vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr 
                                >> 0x15U));
                vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs2_id 
                    = (0x1fU & (vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr 
                                >> 0x10U));
            } else {
                vlSelf->hw3_tb__DOT__core_top_inst__DOT__op = 0U;
                vlSelf->hw3_tb__DOT__core_top_inst__DOT__ssel = 1U;
                vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs1_id 
                    = (0x1fU & (vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr 
                                >> 0x15U));
                vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs2_id 
                    = (0x1fU & (vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr 
                                >> 0x10U));
            }
        } else if ((2U & vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr)) {
            if ((1U & vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr)) {
                vlSelf->hw3_tb__DOT__core_top_inst__DOT__op = 0xfU;
                vlSelf->hw3_tb__DOT__core_top_inst__DOT__ssel = 0U;
                vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs1_id 
                    = (0x1fU & (vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr 
                                >> 0x15U));
                vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs2_id 
                    = (0x1fU & (vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr 
                                >> 0x10U));
            } else {
                vlSelf->hw3_tb__DOT__core_top_inst__DOT__op = 6U;
                vlSelf->hw3_tb__DOT__core_top_inst__DOT__ssel = 1U;
                vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs1_id 
                    = (0x1fU & (vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr 
                                >> 0x15U));
                vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs2_id 
                    = (0x1fU & (vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr 
                                >> 0x10U));
            }
        } else if ((1U & vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr)) {
            vlSelf->hw3_tb__DOT__core_top_inst__DOT__op = 0xfU;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT__ssel = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs1_id 
                = (0x1fU & (vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr 
                            >> 0x15U));
            vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs2_id 
                = (0x1fU & (vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr 
                            >> 0x10U));
        } else {
            vlSelf->hw3_tb__DOT__core_top_inst__DOT__op = 2U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT__ssel = 1U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs1_id 
                = (0x1fU & (vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr 
                            >> 0x15U));
            vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs2_id 
                = (0x1fU & (vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr 
                            >> 0x10U));
        }
        vlSelf->hw3_tb__DOT__core_top_inst__DOT__imm = 0U;
        vlSelf->hw3_tb__DOT__core_top_inst__DOT__jump_addr = 0U;
        vlSelf->hw3_tb__DOT__core_top_inst__DOT__jump_type = 0U;
    } else {
        vlSelf->hw3_tb__DOT__core_top_inst__DOT__op = 0xfU;
        if ((0x10U & vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr)) {
            vlSelf->hw3_tb__DOT__core_top_inst__DOT__ssel = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs1_id 
                = (0x1fU & (vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr 
                            >> 0x15U));
            vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs2_id 
                = (0x1fU & (vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr 
                            >> 0x10U));
            vlSelf->hw3_tb__DOT__core_top_inst__DOT__imm = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT__jump_addr = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT__jump_type = 0U;
        } else if ((8U & vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr)) {
            if ((4U & vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr)) {
                vlSelf->hw3_tb__DOT__core_top_inst__DOT__ssel = 0U;
                vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs1_id 
                    = (0x1fU & (vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr 
                                >> 0x15U));
                vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs2_id 
                    = (0x1fU & (vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr 
                                >> 0x10U));
                vlSelf->hw3_tb__DOT__core_top_inst__DOT__imm = 0U;
                vlSelf->hw3_tb__DOT__core_top_inst__DOT__jump_addr = 0U;
                vlSelf->hw3_tb__DOT__core_top_inst__DOT__jump_type = 0U;
            } else if ((2U & vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr)) {
                vlSelf->hw3_tb__DOT__core_top_inst__DOT__ssel = 0U;
                vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs1_id 
                    = (0x1fU & (vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr 
                                >> 0x15U));
                vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs2_id 
                    = (0x1fU & (vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr 
                                >> 0x10U));
                vlSelf->hw3_tb__DOT__core_top_inst__DOT__imm = 0U;
                vlSelf->hw3_tb__DOT__core_top_inst__DOT__jump_addr = 0U;
                vlSelf->hw3_tb__DOT__core_top_inst__DOT__jump_type = 0U;
            } else if ((1U & vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr)) {
                vlSelf->hw3_tb__DOT__core_top_inst__DOT__ssel = 0U;
                vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs1_id 
                    = (0x1fU & (vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr 
                                >> 0x15U));
                vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs2_id 
                    = (0x1fU & (vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr 
                                >> 0x10U));
                vlSelf->hw3_tb__DOT__core_top_inst__DOT__imm = 0U;
                vlSelf->hw3_tb__DOT__core_top_inst__DOT__jump_addr = 0U;
                vlSelf->hw3_tb__DOT__core_top_inst__DOT__jump_type = 0U;
            } else {
                vlSelf->hw3_tb__DOT__core_top_inst__DOT__ssel = 1U;
                vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs1_id 
                    = (0x1fU & (vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr 
                                >> 0x15U));
                vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs2_id 
                    = (0x1fU & (vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr 
                                >> 0x10U));
                vlSelf->hw3_tb__DOT__core_top_inst__DOT__imm = 0U;
                vlSelf->hw3_tb__DOT__core_top_inst__DOT__jump_addr = 0U;
                vlSelf->hw3_tb__DOT__core_top_inst__DOT__jump_type = 3U;
            }
        } else {
            vlSelf->hw3_tb__DOT__core_top_inst__DOT__ssel = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs1_id 
                = (0x1fU & (vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr 
                            >> 0x15U));
            vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs2_id 
                = (0x1fU & (vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr 
                            >> 0x10U));
            vlSelf->hw3_tb__DOT__core_top_inst__DOT__imm = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT__jump_addr = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT__jump_type = 0U;
        }
    }
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__ra = ((IData)(4U) 
                                                   + vlSelf->hw3_tb__DOT__core_top_inst__DOT__pc);
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__we_dmem 
        = (IData)((0xac000000U == (0xfc000000U & vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr)));
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__Forward_A 
        = ((((IData)(vlSelf->hw3_tb__DOT__core_top_inst__DOT__R3_we_regfile) 
             & (0U != (IData)(vlSelf->hw3_tb__DOT__core_top_inst__DOT__R3_rdst_id))) 
            & ((IData)(vlSelf->hw3_tb__DOT__core_top_inst__DOT__R3_rdst_id) 
               == (IData)(vlSelf->hw3_tb__DOT__core_top_inst__DOT__R2_rs1_id)))
            ? 2U : ((((IData)(vlSelf->hw3_tb__DOT__core_top_inst__DOT__R4_we_regfile) 
                      & (0U != (IData)(vlSelf->hw3_tb__DOT__core_top_inst__DOT__R4_rdst_id))) 
                     & ((IData)(vlSelf->hw3_tb__DOT__core_top_inst__DOT__R4_rdst_id) 
                        == (IData)(vlSelf->hw3_tb__DOT__core_top_inst__DOT__R2_rs1_id)))
                     ? 1U : 0U));
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs1 = 
        ((0U == (IData)(vlSelf->hw3_tb__DOT__core_top_inst__DOT__Forward_A))
          ? vlSelf->hw3_tb__DOT__core_top_inst__DOT__R2_rs1_reg_file_out
          : ((1U == (IData)(vlSelf->hw3_tb__DOT__core_top_inst__DOT__Forward_A))
              ? vlSelf->hw3_tb__DOT__core_top_inst__DOT__R4_rdst
              : ((2U == (IData)(vlSelf->hw3_tb__DOT__core_top_inst__DOT__Forward_A))
                  ? vlSelf->hw3_tb__DOT__core_top_inst__DOT__R3_rd
                  : vlSelf->hw3_tb__DOT__core_top_inst__DOT__R2_rs1_reg_file_out)));
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs2_tmp 
        = ((0U == (IData)(vlSelf->hw3_tb__DOT__core_top_inst__DOT__R2_ssel))
            ? vlSelf->hw3_tb__DOT__core_top_inst__DOT__R2_imm
            : ((1U == (IData)(vlSelf->hw3_tb__DOT__core_top_inst__DOT__R2_ssel))
                ? vlSelf->hw3_tb__DOT__core_top_inst__DOT__R2_rs2_reg_file_out
                : ((2U == (IData)(vlSelf->hw3_tb__DOT__core_top_inst__DOT__R2_ssel))
                    ? vlSelf->hw3_tb__DOT__core_top_inst__DOT__R2_pc
                    : vlSelf->hw3_tb__DOT__core_top_inst__DOT__R2_rs2_reg_file_out)));
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__Forward_B 
        = ((((IData)(vlSelf->hw3_tb__DOT__core_top_inst__DOT__R3_we_regfile) 
             & (0U != (IData)(vlSelf->hw3_tb__DOT__core_top_inst__DOT__R3_rdst_id))) 
            & ((IData)(vlSelf->hw3_tb__DOT__core_top_inst__DOT__R3_rdst_id) 
               == (IData)(vlSelf->hw3_tb__DOT__core_top_inst__DOT__R2_rs2_id)))
            ? 2U : ((((IData)(vlSelf->hw3_tb__DOT__core_top_inst__DOT__R4_we_regfile) 
                      & (0U != (IData)(vlSelf->hw3_tb__DOT__core_top_inst__DOT__R4_rdst_id))) 
                     & ((IData)(vlSelf->hw3_tb__DOT__core_top_inst__DOT__R4_rdst_id) 
                        == (IData)(vlSelf->hw3_tb__DOT__core_top_inst__DOT__R2_rs2_id)))
                     ? 1U : 0U));
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs2 = 
        ((0U == (IData)(vlSelf->hw3_tb__DOT__core_top_inst__DOT__Forward_B))
          ? vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs2_tmp
          : ((1U == (IData)(vlSelf->hw3_tb__DOT__core_top_inst__DOT__Forward_B))
              ? vlSelf->hw3_tb__DOT__core_top_inst__DOT__R4_rdst
              : ((2U == (IData)(vlSelf->hw3_tb__DOT__core_top_inst__DOT__Forward_B))
                  ? vlSelf->hw3_tb__DOT__core_top_inst__DOT__R3_rd
                  : vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs2_tmp)));
    if ((vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr 
         >> 0x1fU)) {
        vlSelf->hw3_tb__DOT__core_top_inst__DOT__rdst_id 
            = (0x1fU & ((0x40000000U & vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr)
                         ? 0U : ((0x20000000U & vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr)
                                  ? ((0x10000000U & vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr)
                                      ? 0U : ((0x8000000U 
                                               & vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr)
                                               ? ((0x4000000U 
                                                   & vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr)
                                                   ? 
                                                  (vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr 
                                                   >> 0x10U)
                                                   : 0U)
                                               : 0U))
                                  : ((0x10000000U & vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr)
                                      ? 0U : ((0x8000000U 
                                               & vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr)
                                               ? ((0x4000000U 
                                                   & vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr)
                                                   ? 
                                                  (vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr 
                                                   >> 0x10U)
                                                   : 0U)
                                               : 0U)))));
        vlSelf->hw3_tb__DOT__core_top_inst__DOT__we_regfile 
            = (1U & (IData)((0xc000000U == (0x7c000000U 
                                            & vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr))));
    } else {
        vlSelf->hw3_tb__DOT__core_top_inst__DOT__rdst_id 
            = (0x1fU & ((0x40000000U & vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr)
                         ? 0U : ((0x20000000U & vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr)
                                  ? ((0x10000000U & vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr)
                                      ? 0U : ((0x8000000U 
                                               & vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr)
                                               ? ((0x4000000U 
                                                   & vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr)
                                                   ? 0U
                                                   : 
                                                  (vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr 
                                                   >> 0x10U))
                                               : ((0x4000000U 
                                                   & vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr)
                                                   ? 0U
                                                   : 
                                                  (vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr 
                                                   >> 0x10U))))
                                  : ((0x10000000U & vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr)
                                      ? ((0x8000000U 
                                          & vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr)
                                          ? 0U : ((0x4000000U 
                                                   & vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr)
                                                   ? 0U
                                                   : 
                                                  (vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr 
                                                   >> 0x10U)))
                                      : ((0x8000000U 
                                          & vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr)
                                          ? ((0x4000000U 
                                              & vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr)
                                              ? 0x1fU
                                              : 0U)
                                          : ((0x4000000U 
                                              & vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr)
                                              ? 0U : 
                                             ((0x20U 
                                               & vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr)
                                               ? ((0x10U 
                                                   & vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr)
                                                   ? 
                                                  (vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr 
                                                   >> 0xbU)
                                                   : 
                                                  ((8U 
                                                    & vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr)
                                                    ? 
                                                   ((4U 
                                                     & vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr)
                                                     ? 
                                                    (vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr 
                                                     >> 0xbU)
                                                     : 
                                                    ((2U 
                                                      & vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr)
                                                      ? 
                                                     ((1U 
                                                       & vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr)
                                                       ? 
                                                      (vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr 
                                                       >> 0xbU)
                                                       : 
                                                      (vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr 
                                                       >> 0xbU))
                                                      : 
                                                     (vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr 
                                                      >> 0xbU)))
                                                    : 
                                                   ((4U 
                                                     & vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr)
                                                     ? 
                                                    ((2U 
                                                      & vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr)
                                                      ? 
                                                     ((1U 
                                                       & vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr)
                                                       ? 
                                                      (vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr 
                                                       >> 0xbU)
                                                       : 
                                                      (vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr 
                                                       >> 0xbU))
                                                      : 
                                                     ((1U 
                                                       & vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr)
                                                       ? 
                                                      (vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr 
                                                       >> 0xbU)
                                                       : 
                                                      (vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr 
                                                       >> 0xbU)))
                                                     : 
                                                    ((2U 
                                                      & vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr)
                                                      ? 
                                                     ((1U 
                                                       & vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr)
                                                       ? 
                                                      (vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr 
                                                       >> 0xbU)
                                                       : 
                                                      (vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr 
                                                       >> 0xbU))
                                                      : 
                                                     ((1U 
                                                       & vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr)
                                                       ? 
                                                      (vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr 
                                                       >> 0xbU)
                                                       : 
                                                      (vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr 
                                                       >> 0xbU))))))
                                               : ((0x10U 
                                                   & vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr)
                                                   ? 
                                                  (vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr 
                                                   >> 0xbU)
                                                   : 
                                                  ((8U 
                                                    & vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr)
                                                    ? 
                                                   ((4U 
                                                     & vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr)
                                                     ? 
                                                    (vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr 
                                                     >> 0xbU)
                                                     : 
                                                    ((2U 
                                                      & vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr)
                                                      ? 
                                                     (vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr 
                                                      >> 0xbU)
                                                      : 
                                                     ((1U 
                                                       & vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr)
                                                       ? 
                                                      (vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr 
                                                       >> 0xbU)
                                                       : 
                                                      (vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr 
                                                       >> 0xbU))))
                                                    : 
                                                   (vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr 
                                                    >> 0xbU))))))))));
        vlSelf->hw3_tb__DOT__core_top_inst__DOT__we_regfile 
            = (1U & ((~ (vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr 
                         >> 0x1eU)) & ((0x20000000U 
                                        & vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr)
                                        ? ((~ (vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr 
                                               >> 0x1cU)) 
                                           & ((0x8000000U 
                                               & vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr)
                                               ? (~ 
                                                  (vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr 
                                                   >> 0x1aU))
                                               : (~ 
                                                  (vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr 
                                                   >> 0x1aU))))
                                        : ((~ (vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr 
                                               >> 0x1cU)) 
                                           & ((0x8000000U 
                                               & vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr)
                                               ? (vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr 
                                                  >> 0x1aU)
                                               : ((~ 
                                                   (vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr 
                                                    >> 0x1aU)) 
                                                  & ((0x20U 
                                                      & vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr)
                                                      ? 
                                                     ((~ 
                                                       (vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr 
                                                        >> 4U)) 
                                                      & ((8U 
                                                          & vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr)
                                                          ? (IData)(
                                                                    (2U 
                                                                     == 
                                                                     (7U 
                                                                      & vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr)))
                                                          : 
                                                         ((4U 
                                                           & vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr)
                                                           ? (IData)(
                                                                     (2U 
                                                                      != 
                                                                      (3U 
                                                                       & vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr)))
                                                           : 
                                                          ((2U 
                                                            & vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr)
                                                            ? 
                                                           (~ vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr)
                                                            : 
                                                           (~ vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr)))))
                                                      : (IData)(
                                                                (8U 
                                                                 == 
                                                                 (0x1fU 
                                                                  & vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr))))))))));
    }
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__en_rdata 
        = (IData)((0x8c000000U == (0xfc000000U & vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr)));
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs1_reg_file_out 
        = vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R
        [vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs1_id];
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs2_reg_file_out 
        = vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R
        [vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs2_id];
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__Forward_rs2 
        = ((1U == (IData)(vlSelf->hw3_tb__DOT__core_top_inst__DOT__jump_type))
            ? ((((IData)(vlSelf->hw3_tb__DOT__core_top_inst__DOT__R3_we_regfile) 
                 & (0U != (IData)(vlSelf->hw3_tb__DOT__core_top_inst__DOT__R3_rdst_id))) 
                & ((IData)(vlSelf->hw3_tb__DOT__core_top_inst__DOT__R3_rdst_id) 
                   == (IData)(vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs2_id)))
                ? 2U : ((((IData)(vlSelf->hw3_tb__DOT__core_top_inst__DOT__R4_we_regfile) 
                          & (0U != (IData)(vlSelf->hw3_tb__DOT__core_top_inst__DOT__R4_rdst_id))) 
                         & ((IData)(vlSelf->hw3_tb__DOT__core_top_inst__DOT__R4_rdst_id) 
                            == (IData)(vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs2_id)))
                         ? 1U : 0U)) : 0U);
    if ((0U != (IData)(vlSelf->hw3_tb__DOT__core_top_inst__DOT__Forward_rs2))) {
        if ((1U == (IData)(vlSelf->hw3_tb__DOT__core_top_inst__DOT__Forward_rs2))) {
            vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs2_reg_file_out 
                = vlSelf->hw3_tb__DOT__core_top_inst__DOT__R4_rdst;
        } else if ((2U == (IData)(vlSelf->hw3_tb__DOT__core_top_inst__DOT__Forward_rs2))) {
            vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs2_reg_file_out 
                = vlSelf->hw3_tb__DOT__core_top_inst__DOT__R3_rd;
        }
    }
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__Forward_rs1 
        = ((1U == (IData)(vlSelf->hw3_tb__DOT__core_top_inst__DOT__jump_type))
            ? ((((IData)(vlSelf->hw3_tb__DOT__core_top_inst__DOT__R3_we_regfile) 
                 & (0U != (IData)(vlSelf->hw3_tb__DOT__core_top_inst__DOT__R3_rdst_id))) 
                & ((IData)(vlSelf->hw3_tb__DOT__core_top_inst__DOT__R3_rdst_id) 
                   == (IData)(vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs1_id)))
                ? 2U : ((((IData)(vlSelf->hw3_tb__DOT__core_top_inst__DOT__R4_we_regfile) 
                          & (0U != (IData)(vlSelf->hw3_tb__DOT__core_top_inst__DOT__R4_rdst_id))) 
                         & ((IData)(vlSelf->hw3_tb__DOT__core_top_inst__DOT__R4_rdst_id) 
                            == (IData)(vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs1_id)))
                         ? 1U : 0U)) : 0U);
    if ((0U != (IData)(vlSelf->hw3_tb__DOT__core_top_inst__DOT__Forward_rs1))) {
        if ((1U == (IData)(vlSelf->hw3_tb__DOT__core_top_inst__DOT__Forward_rs1))) {
            vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs1_reg_file_out 
                = vlSelf->hw3_tb__DOT__core_top_inst__DOT__R4_rdst;
        } else if ((2U == (IData)(vlSelf->hw3_tb__DOT__core_top_inst__DOT__Forward_rs1))) {
            vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs1_reg_file_out 
                = vlSelf->hw3_tb__DOT__core_top_inst__DOT__R3_rd;
        }
    }
    if ((8U & (IData)(vlSelf->hw3_tb__DOT__core_top_inst__DOT__R2_op))) {
        if ((4U & (IData)(vlSelf->hw3_tb__DOT__core_top_inst__DOT__R2_op))) {
            if ((2U & (IData)(vlSelf->hw3_tb__DOT__core_top_inst__DOT__R2_op))) {
                vlSelf->hw3_tb__DOT__core_top_inst__DOT__rd = 0U;
                vlSelf->hw3_tb__DOT__core_top_inst__DOT__zero = 0U;
                vlSelf->hw3_tb__DOT__core_top_inst__DOT__overflow = 0U;
            } else if ((1U & (IData)(vlSelf->hw3_tb__DOT__core_top_inst__DOT__R2_op))) {
                vlSelf->hw3_tb__DOT__core_top_inst__DOT__rd = 0U;
                vlSelf->hw3_tb__DOT__core_top_inst__DOT__zero = 0U;
                vlSelf->hw3_tb__DOT__core_top_inst__DOT__overflow = 0U;
            } else {
                vlSelf->hw3_tb__DOT__core_top_inst__DOT__rd 
                    = (~ (vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs1 
                          | vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs2));
                vlSelf->hw3_tb__DOT__core_top_inst__DOT__zero 
                    = (0U == vlSelf->hw3_tb__DOT__core_top_inst__DOT__rd);
                vlSelf->hw3_tb__DOT__core_top_inst__DOT__overflow = 0U;
            }
        } else {
            vlSelf->hw3_tb__DOT__core_top_inst__DOT__rd = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT__zero = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT__overflow = 0U;
        }
    } else if ((4U & (IData)(vlSelf->hw3_tb__DOT__core_top_inst__DOT__R2_op))) {
        if ((2U & (IData)(vlSelf->hw3_tb__DOT__core_top_inst__DOT__R2_op))) {
            if ((1U & (IData)(vlSelf->hw3_tb__DOT__core_top_inst__DOT__R2_op))) {
                vlSelf->hw3_tb__DOT__core_top_inst__DOT__rd 
                    = (((vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs1 
                         >> 0x1fU) & (~ (vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs2 
                                         >> 0x1fU)))
                        ? 1U : (((~ (vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs1 
                                     >> 0x1fU)) & (vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs2 
                                                   >> 0x1fU))
                                 ? 0U : (vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs1 
                                         < vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs2)));
                vlSelf->hw3_tb__DOT__core_top_inst__DOT__zero 
                    = (0U == vlSelf->hw3_tb__DOT__core_top_inst__DOT__rd);
                vlSelf->hw3_tb__DOT__core_top_inst__DOT__overflow 
                    = (1U & vlSelf->hw3_tb__DOT__core_top_inst__DOT__rd);
            } else {
                vlSelf->hw3_tb__DOT__core_top_inst__DOT__rd 
                    = (vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs1 
                       - vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs2);
                vlSelf->hw3_tb__DOT__core_top_inst__DOT__zero 
                    = (0U == vlSelf->hw3_tb__DOT__core_top_inst__DOT__rd);
                vlSelf->hw3_tb__DOT__core_top_inst__DOT__overflow 
                    = (((VL_LTES_III(32, 0U, vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs1) 
                         & VL_GTS_III(32, 0U, vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs2)) 
                        & VL_GTS_III(32, 0U, vlSelf->hw3_tb__DOT__core_top_inst__DOT__rd)) 
                       | ((VL_GTS_III(32, 0U, vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs1) 
                           & VL_LTES_III(32, 0U, vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs2)) 
                          & VL_LTES_III(32, 0U, vlSelf->hw3_tb__DOT__core_top_inst__DOT__rd)));
            }
        } else {
            vlSelf->hw3_tb__DOT__core_top_inst__DOT__rd = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT__zero = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT__overflow = 0U;
        }
    } else if ((2U & (IData)(vlSelf->hw3_tb__DOT__core_top_inst__DOT__R2_op))) {
        if ((1U & (IData)(vlSelf->hw3_tb__DOT__core_top_inst__DOT__R2_op))) {
            vlSelf->hw3_tb__DOT__core_top_inst__DOT__rd = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT__zero = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT__overflow = 0U;
        } else {
            vlSelf->hw3_tb__DOT__core_top_inst__DOT__rd 
                = (vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs1 
                   + vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs2);
            vlSelf->hw3_tb__DOT__core_top_inst__DOT__zero 
                = (0U == vlSelf->hw3_tb__DOT__core_top_inst__DOT__rd);
            vlSelf->hw3_tb__DOT__core_top_inst__DOT__overflow 
                = (((VL_LTES_III(32, 0U, vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs1) 
                     & VL_LTES_III(32, 0U, vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs2)) 
                    & VL_GTS_III(32, 0U, vlSelf->hw3_tb__DOT__core_top_inst__DOT__rd)) 
                   | ((VL_GTS_III(32, 0U, vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs1) 
                       & VL_GTS_III(32, 0U, vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs2)) 
                      & VL_LTES_III(32, 0U, vlSelf->hw3_tb__DOT__core_top_inst__DOT__rd)));
        }
    } else if ((1U & (IData)(vlSelf->hw3_tb__DOT__core_top_inst__DOT__R2_op))) {
        vlSelf->hw3_tb__DOT__core_top_inst__DOT__rd 
            = (vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs1 
               | vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs2);
        vlSelf->hw3_tb__DOT__core_top_inst__DOT__zero 
            = (0U == vlSelf->hw3_tb__DOT__core_top_inst__DOT__rd);
        vlSelf->hw3_tb__DOT__core_top_inst__DOT__overflow = 0U;
    } else {
        vlSelf->hw3_tb__DOT__core_top_inst__DOT__rd 
            = (vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs1 
               & vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs2);
        vlSelf->hw3_tb__DOT__core_top_inst__DOT__zero 
            = (0U == vlSelf->hw3_tb__DOT__core_top_inst__DOT__rd);
        vlSelf->hw3_tb__DOT__core_top_inst__DOT__overflow = 0U;
    }
}

VL_ATTR_COLD void Vhw3_tb___024root___eval_initial(Vhw3_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhw3_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhw3_tb___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    Vhw3_tb___024root___initial__TOP__3(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vhw3_tb___024root___eval_settle(Vhw3_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhw3_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhw3_tb___024root___eval_settle\n"); );
    // Body
    Vhw3_tb___024root___settle__TOP__4(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vhw3_tb___024root___final(Vhw3_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhw3_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhw3_tb___024root___final\n"); );
}

VL_ATTR_COLD void Vhw3_tb___024root___ctor_var_reset(Vhw3_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhw3_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhw3_tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->finish = VL_RAND_RESET_I(1);
    vlSelf->hw3_tb__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->hw3_tb__DOT__tmp = VL_RAND_RESET_I(32);
    vlSelf->hw3_tb__DOT__cycle_count = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->hw3_tb__DOT__golden_reg[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->hw3_tb__DOT__golden_dmem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->hw3_tb__DOT__start = VL_RAND_RESET_I(1);
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__ra = VL_RAND_RESET_I(32);
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__jump_type = VL_RAND_RESET_I(3);
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__jump_addr = VL_RAND_RESET_I(32);
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__we_regfile = VL_RAND_RESET_I(1);
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__we_dmem = VL_RAND_RESET_I(1);
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__en_rdata = VL_RAND_RESET_I(1);
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__op = VL_RAND_RESET_I(4);
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__ssel = VL_RAND_RESET_I(2);
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__imm = VL_RAND_RESET_I(32);
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs1_id = VL_RAND_RESET_I(5);
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs2_id = VL_RAND_RESET_I(5);
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__rdst_id = VL_RAND_RESET_I(5);
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs1_reg_file_out = VL_RAND_RESET_I(32);
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs2_reg_file_out = VL_RAND_RESET_I(32);
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs1 = VL_RAND_RESET_I(32);
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs2_tmp = VL_RAND_RESET_I(32);
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs2 = VL_RAND_RESET_I(32);
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__rd = VL_RAND_RESET_I(32);
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__zero = VL_RAND_RESET_I(1);
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__overflow = VL_RAND_RESET_I(1);
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_pc = VL_RAND_RESET_I(32);
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr = VL_RAND_RESET_I(32);
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__R2_pc = VL_RAND_RESET_I(32);
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__R2_we_dmem = VL_RAND_RESET_I(1);
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__R2_we_regfile = VL_RAND_RESET_I(1);
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__R2_op = VL_RAND_RESET_I(4);
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__R2_ssel = VL_RAND_RESET_I(2);
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__R2_imm = VL_RAND_RESET_I(32);
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__R2_rs1_id = VL_RAND_RESET_I(5);
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__R2_rs2_id = VL_RAND_RESET_I(5);
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__R2_rdst_id = VL_RAND_RESET_I(5);
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__R2_en_rdata = VL_RAND_RESET_I(1);
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__R2_rs1_reg_file_out = VL_RAND_RESET_I(32);
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__R2_rs2_reg_file_out = VL_RAND_RESET_I(32);
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__R3_we_dmem = VL_RAND_RESET_I(1);
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__R3_rd = VL_RAND_RESET_I(32);
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__R3_rdst_id = VL_RAND_RESET_I(5);
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__R3_rs2_reg_file_out = VL_RAND_RESET_I(32);
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__R3_we_regfile = VL_RAND_RESET_I(1);
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__R3_en_rdata = VL_RAND_RESET_I(1);
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__R4_rdst_id = VL_RAND_RESET_I(5);
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__R4_rdst = VL_RAND_RESET_I(32);
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__R4_we_regfile = VL_RAND_RESET_I(1);
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__data_harzard = VL_RAND_RESET_I(1);
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__branch_harzard = VL_RAND_RESET_I(1);
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__Forward_A = VL_RAND_RESET_I(2);
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__Forward_B = VL_RAND_RESET_I(2);
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__Forward_rs1 = VL_RAND_RESET_I(2);
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__Forward_rs2 = VL_RAND_RESET_I(2);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->hw3_tb__DOT__core_top_inst__DOT__BHT[__Vi0] = VL_RAND_RESET_Q(34);
    }
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__debug = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->hw3_tb__DOT__core_top_inst__DOT__imem_inst__DOT__RAM[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__unnamedblk2__DOT__i = 0;
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__idx = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
