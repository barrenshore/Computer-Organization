// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vdecode_tb__Syms.h"


void Vdecode_tb___024root__trace_chg_sub_0(Vdecode_tb___024root* vlSelf, VerilatedVcd* tracep);

void Vdecode_tb___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode_tb___024root__trace_chg_top_0\n"); );
    // Init
    Vdecode_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdecode_tb___024root*>(voidSelf);
    Vdecode_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vdecode_tb___024root__trace_chg_sub_0((&vlSymsp->TOP), tracep);
}

void Vdecode_tb___024root__trace_chg_sub_0(Vdecode_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecode_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode_tb___024root__trace_chg_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        tracep->chgIData(oldp+0,(vlSelf->decode_tb__DOT__reg_file_inst__DOT__unnamedblk1__DOT__i),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgIData(oldp+1,(vlSelf->decode_tb__DOT__instr),32);
        tracep->chgCData(oldp+2,(vlSelf->decode_tb__DOT__op),4);
        tracep->chgBit(oldp+3,(vlSelf->decode_tb__DOT__ssel));
        tracep->chgIData(oldp+4,(vlSelf->decode_tb__DOT__imm),32);
        tracep->chgCData(oldp+5,(vlSelf->decode_tb__DOT__rs1_id),5);
        tracep->chgCData(oldp+6,(vlSelf->decode_tb__DOT__rs2_id),5);
        tracep->chgCData(oldp+7,(vlSelf->decode_tb__DOT__rdst_id),5);
        tracep->chgIData(oldp+8,(vlSelf->decode_tb__DOT__reg_file_inst__DOT__R
                                 [vlSelf->decode_tb__DOT__rs2_id]),32);
        tracep->chgIData(oldp+9,(vlSelf->decode_tb__DOT__rd),32);
        tracep->chgIData(oldp+10,(vlSelf->decode_tb__DOT__rs1),32);
        tracep->chgIData(oldp+11,(vlSelf->decode_tb__DOT__rs2),32);
        tracep->chgBit(oldp+12,(vlSelf->decode_tb__DOT__zero));
        tracep->chgBit(oldp+13,(vlSelf->decode_tb__DOT__overflow));
        tracep->chgCData(oldp+14,(vlSelf->decode_tb__DOT__golden_op),4);
        tracep->chgBit(oldp+15,(vlSelf->decode_tb__DOT__golden_ssel));
        tracep->chgIData(oldp+16,(vlSelf->decode_tb__DOT__golden_imm),32);
        tracep->chgCData(oldp+17,(vlSelf->decode_tb__DOT__golden_rs1_id),5);
        tracep->chgCData(oldp+18,(vlSelf->decode_tb__DOT__golden_rs2_id),5);
        tracep->chgCData(oldp+19,(vlSelf->decode_tb__DOT__golden_rdst_id),5);
        tracep->chgBit(oldp+20,((1U & (~ (IData)(vlSelf->decode_tb__DOT__golden_ssel)))));
        tracep->chgIData(oldp+21,(vlSelf->decode_tb__DOT__pattern),32);
        tracep->chgIData(oldp+22,(vlSelf->decode_tb__DOT__reg_file_inst__DOT__R[0]),32);
        tracep->chgIData(oldp+23,(vlSelf->decode_tb__DOT__reg_file_inst__DOT__R[1]),32);
        tracep->chgIData(oldp+24,(vlSelf->decode_tb__DOT__reg_file_inst__DOT__R[2]),32);
        tracep->chgIData(oldp+25,(vlSelf->decode_tb__DOT__reg_file_inst__DOT__R[3]),32);
        tracep->chgIData(oldp+26,(vlSelf->decode_tb__DOT__reg_file_inst__DOT__R[4]),32);
        tracep->chgIData(oldp+27,(vlSelf->decode_tb__DOT__reg_file_inst__DOT__R[5]),32);
        tracep->chgIData(oldp+28,(vlSelf->decode_tb__DOT__reg_file_inst__DOT__R[6]),32);
        tracep->chgIData(oldp+29,(vlSelf->decode_tb__DOT__reg_file_inst__DOT__R[7]),32);
        tracep->chgIData(oldp+30,(vlSelf->decode_tb__DOT__reg_file_inst__DOT__R[8]),32);
        tracep->chgIData(oldp+31,(vlSelf->decode_tb__DOT__reg_file_inst__DOT__R[9]),32);
        tracep->chgIData(oldp+32,(vlSelf->decode_tb__DOT__reg_file_inst__DOT__R[10]),32);
        tracep->chgIData(oldp+33,(vlSelf->decode_tb__DOT__reg_file_inst__DOT__R[11]),32);
        tracep->chgIData(oldp+34,(vlSelf->decode_tb__DOT__reg_file_inst__DOT__R[12]),32);
        tracep->chgIData(oldp+35,(vlSelf->decode_tb__DOT__reg_file_inst__DOT__R[13]),32);
        tracep->chgIData(oldp+36,(vlSelf->decode_tb__DOT__reg_file_inst__DOT__R[14]),32);
        tracep->chgIData(oldp+37,(vlSelf->decode_tb__DOT__reg_file_inst__DOT__R[15]),32);
        tracep->chgIData(oldp+38,(vlSelf->decode_tb__DOT__reg_file_inst__DOT__R[16]),32);
        tracep->chgIData(oldp+39,(vlSelf->decode_tb__DOT__reg_file_inst__DOT__R[17]),32);
        tracep->chgIData(oldp+40,(vlSelf->decode_tb__DOT__reg_file_inst__DOT__R[18]),32);
        tracep->chgIData(oldp+41,(vlSelf->decode_tb__DOT__reg_file_inst__DOT__R[19]),32);
        tracep->chgIData(oldp+42,(vlSelf->decode_tb__DOT__reg_file_inst__DOT__R[20]),32);
        tracep->chgIData(oldp+43,(vlSelf->decode_tb__DOT__reg_file_inst__DOT__R[21]),32);
        tracep->chgIData(oldp+44,(vlSelf->decode_tb__DOT__reg_file_inst__DOT__R[22]),32);
        tracep->chgIData(oldp+45,(vlSelf->decode_tb__DOT__reg_file_inst__DOT__R[23]),32);
        tracep->chgIData(oldp+46,(vlSelf->decode_tb__DOT__reg_file_inst__DOT__R[24]),32);
        tracep->chgIData(oldp+47,(vlSelf->decode_tb__DOT__reg_file_inst__DOT__R[25]),32);
        tracep->chgIData(oldp+48,(vlSelf->decode_tb__DOT__reg_file_inst__DOT__R[26]),32);
        tracep->chgIData(oldp+49,(vlSelf->decode_tb__DOT__reg_file_inst__DOT__R[27]),32);
        tracep->chgIData(oldp+50,(vlSelf->decode_tb__DOT__reg_file_inst__DOT__R[28]),32);
        tracep->chgIData(oldp+51,(vlSelf->decode_tb__DOT__reg_file_inst__DOT__R[29]),32);
        tracep->chgIData(oldp+52,(vlSelf->decode_tb__DOT__reg_file_inst__DOT__R[30]),32);
        tracep->chgIData(oldp+53,(vlSelf->decode_tb__DOT__reg_file_inst__DOT__R[31]),32);
        tracep->chgIData(oldp+54,(vlSelf->decode_tb__DOT__reg_file_inst__DOT__unnamedblk2__DOT__i),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        tracep->chgIData(oldp+55,(vlSelf->decode_tb__DOT__golden_R[0]),32);
        tracep->chgIData(oldp+56,(vlSelf->decode_tb__DOT__golden_R[1]),32);
        tracep->chgIData(oldp+57,(vlSelf->decode_tb__DOT__golden_R[2]),32);
        tracep->chgIData(oldp+58,(vlSelf->decode_tb__DOT__golden_R[3]),32);
        tracep->chgIData(oldp+59,(vlSelf->decode_tb__DOT__golden_R[4]),32);
        tracep->chgIData(oldp+60,(vlSelf->decode_tb__DOT__golden_R[5]),32);
        tracep->chgIData(oldp+61,(vlSelf->decode_tb__DOT__golden_R[6]),32);
        tracep->chgIData(oldp+62,(vlSelf->decode_tb__DOT__golden_R[7]),32);
        tracep->chgIData(oldp+63,(vlSelf->decode_tb__DOT__golden_R[8]),32);
        tracep->chgIData(oldp+64,(vlSelf->decode_tb__DOT__golden_R[9]),32);
        tracep->chgIData(oldp+65,(vlSelf->decode_tb__DOT__golden_R[10]),32);
        tracep->chgIData(oldp+66,(vlSelf->decode_tb__DOT__golden_R[11]),32);
        tracep->chgIData(oldp+67,(vlSelf->decode_tb__DOT__golden_R[12]),32);
        tracep->chgIData(oldp+68,(vlSelf->decode_tb__DOT__golden_R[13]),32);
        tracep->chgIData(oldp+69,(vlSelf->decode_tb__DOT__golden_R[14]),32);
        tracep->chgIData(oldp+70,(vlSelf->decode_tb__DOT__golden_R[15]),32);
        tracep->chgIData(oldp+71,(vlSelf->decode_tb__DOT__golden_R[16]),32);
        tracep->chgIData(oldp+72,(vlSelf->decode_tb__DOT__golden_R[17]),32);
        tracep->chgIData(oldp+73,(vlSelf->decode_tb__DOT__golden_R[18]),32);
        tracep->chgIData(oldp+74,(vlSelf->decode_tb__DOT__golden_R[19]),32);
        tracep->chgIData(oldp+75,(vlSelf->decode_tb__DOT__golden_R[20]),32);
        tracep->chgIData(oldp+76,(vlSelf->decode_tb__DOT__golden_R[21]),32);
        tracep->chgIData(oldp+77,(vlSelf->decode_tb__DOT__golden_R[22]),32);
        tracep->chgIData(oldp+78,(vlSelf->decode_tb__DOT__golden_R[23]),32);
        tracep->chgIData(oldp+79,(vlSelf->decode_tb__DOT__golden_R[24]),32);
        tracep->chgIData(oldp+80,(vlSelf->decode_tb__DOT__golden_R[25]),32);
        tracep->chgIData(oldp+81,(vlSelf->decode_tb__DOT__golden_R[26]),32);
        tracep->chgIData(oldp+82,(vlSelf->decode_tb__DOT__golden_R[27]),32);
        tracep->chgIData(oldp+83,(vlSelf->decode_tb__DOT__golden_R[28]),32);
        tracep->chgIData(oldp+84,(vlSelf->decode_tb__DOT__golden_R[29]),32);
        tracep->chgIData(oldp+85,(vlSelf->decode_tb__DOT__golden_R[30]),32);
        tracep->chgIData(oldp+86,(vlSelf->decode_tb__DOT__golden_R[31]),32);
        tracep->chgIData(oldp+87,(vlSelf->decode_tb__DOT__golden_reg),32);
        tracep->chgIData(oldp+88,(vlSelf->decode_tb__DOT__i),32);
        tracep->chgIData(oldp+89,(vlSelf->decode_tb__DOT__pat_num),32);
        tracep->chgIData(oldp+90,(vlSelf->decode_tb__DOT__reg_pattern),32);
    }
    tracep->chgBit(oldp+91,(vlSelf->clk));
    tracep->chgBit(oldp+92,(vlSelf->rst));
    tracep->chgBit(oldp+93,(vlSelf->finish));
    tracep->chgIData(oldp+94,(vlSelf->decode_tb__DOT__tmp),32);
}

void Vdecode_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode_tb___024root__trace_cleanup\n"); );
    // Init
    Vdecode_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdecode_tb___024root*>(voidSelf);
    Vdecode_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
