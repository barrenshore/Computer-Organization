// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vhw3_tb__Syms.h"


void Vhw3_tb___024root__trace_chg_sub_0(Vhw3_tb___024root* vlSelf, VerilatedVcd* tracep);

void Vhw3_tb___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhw3_tb___024root__trace_chg_top_0\n"); );
    // Init
    Vhw3_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vhw3_tb___024root*>(voidSelf);
    Vhw3_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vhw3_tb___024root__trace_chg_sub_0((&vlSymsp->TOP), tracep);
}

void Vhw3_tb___024root__trace_chg_sub_0(Vhw3_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vhw3_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhw3_tb___024root__trace_chg_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        tracep->chgIData(oldp+0,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__idx),32);
        tracep->chgIData(oldp+1,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__imem_inst__DOT__RAM[0]),32);
        tracep->chgIData(oldp+2,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__imem_inst__DOT__RAM[1]),32);
        tracep->chgIData(oldp+3,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__imem_inst__DOT__RAM[2]),32);
        tracep->chgIData(oldp+4,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__imem_inst__DOT__RAM[3]),32);
        tracep->chgIData(oldp+5,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__imem_inst__DOT__RAM[4]),32);
        tracep->chgIData(oldp+6,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__imem_inst__DOT__RAM[5]),32);
        tracep->chgIData(oldp+7,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__imem_inst__DOT__RAM[6]),32);
        tracep->chgIData(oldp+8,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__imem_inst__DOT__RAM[7]),32);
        tracep->chgIData(oldp+9,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__imem_inst__DOT__RAM[8]),32);
        tracep->chgIData(oldp+10,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__imem_inst__DOT__RAM[9]),32);
        tracep->chgIData(oldp+11,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__imem_inst__DOT__RAM[10]),32);
        tracep->chgIData(oldp+12,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__imem_inst__DOT__RAM[11]),32);
        tracep->chgIData(oldp+13,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__imem_inst__DOT__RAM[12]),32);
        tracep->chgIData(oldp+14,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__imem_inst__DOT__RAM[13]),32);
        tracep->chgIData(oldp+15,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__imem_inst__DOT__RAM[14]),32);
        tracep->chgIData(oldp+16,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__imem_inst__DOT__RAM[15]),32);
        tracep->chgIData(oldp+17,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__unnamedblk1__DOT__i),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgIData(oldp+18,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__pc),32);
        tracep->chgIData(oldp+19,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__ra),32);
        tracep->chgIData(oldp+20,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__beq_addr),32);
        tracep->chgIData(oldp+21,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__instr),32);
        tracep->chgCData(oldp+22,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__jump_type),3);
        tracep->chgIData(oldp+23,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__jump_addr),32);
        tracep->chgBit(oldp+24,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__we_regfile));
        tracep->chgBit(oldp+25,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__we_dmem));
        tracep->chgBit(oldp+26,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__en_rdata));
        tracep->chgCData(oldp+27,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__op),4);
        tracep->chgCData(oldp+28,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__ssel),2);
        tracep->chgIData(oldp+29,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__imm),32);
        tracep->chgCData(oldp+30,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs1_id),5);
        tracep->chgCData(oldp+31,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs2_id),5);
        tracep->chgCData(oldp+32,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__rdst_id),5);
        tracep->chgIData(oldp+33,(((IData)(vlSelf->hw3_tb__DOT__core_top_inst__DOT__en_rdata)
                                    ? vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM
                                   [(0xfU & (vlSelf->hw3_tb__DOT__core_top_inst__DOT__rd 
                                             >> 2U))]
                                    : vlSelf->hw3_tb__DOT__core_top_inst__DOT__rd)),32);
        tracep->chgIData(oldp+34,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs1_reg_file_out),32);
        tracep->chgIData(oldp+35,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs2_reg_file_out),32);
        tracep->chgIData(oldp+36,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs2),32);
        tracep->chgIData(oldp+37,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__rd),32);
        tracep->chgBit(oldp+38,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__zero));
        tracep->chgBit(oldp+39,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__overflow));
        tracep->chgIData(oldp+40,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM
                                  [(0xfU & (vlSelf->hw3_tb__DOT__core_top_inst__DOT__rd 
                                            >> 2U))]),32);
        tracep->chgCData(oldp+41,((0x3fU & vlSelf->hw3_tb__DOT__core_top_inst__DOT__rd)),6);
        tracep->chgIData(oldp+42,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM[0]),32);
        tracep->chgIData(oldp+43,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM[1]),32);
        tracep->chgIData(oldp+44,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM[2]),32);
        tracep->chgIData(oldp+45,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM[3]),32);
        tracep->chgIData(oldp+46,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM[4]),32);
        tracep->chgIData(oldp+47,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM[5]),32);
        tracep->chgIData(oldp+48,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM[6]),32);
        tracep->chgIData(oldp+49,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM[7]),32);
        tracep->chgIData(oldp+50,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM[8]),32);
        tracep->chgIData(oldp+51,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM[9]),32);
        tracep->chgIData(oldp+52,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM[10]),32);
        tracep->chgIData(oldp+53,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM[11]),32);
        tracep->chgIData(oldp+54,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM[12]),32);
        tracep->chgIData(oldp+55,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM[13]),32);
        tracep->chgIData(oldp+56,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM[14]),32);
        tracep->chgIData(oldp+57,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM[15]),32);
        tracep->chgCData(oldp+58,((0x3fU & vlSelf->hw3_tb__DOT__core_top_inst__DOT__pc)),6);
        tracep->chgIData(oldp+59,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[0]),32);
        tracep->chgIData(oldp+60,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[1]),32);
        tracep->chgIData(oldp+61,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[2]),32);
        tracep->chgIData(oldp+62,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[3]),32);
        tracep->chgIData(oldp+63,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[4]),32);
        tracep->chgIData(oldp+64,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[5]),32);
        tracep->chgIData(oldp+65,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[6]),32);
        tracep->chgIData(oldp+66,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[7]),32);
        tracep->chgIData(oldp+67,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[8]),32);
        tracep->chgIData(oldp+68,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[9]),32);
        tracep->chgIData(oldp+69,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[10]),32);
        tracep->chgIData(oldp+70,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[11]),32);
        tracep->chgIData(oldp+71,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[12]),32);
        tracep->chgIData(oldp+72,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[13]),32);
        tracep->chgIData(oldp+73,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[14]),32);
        tracep->chgIData(oldp+74,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[15]),32);
        tracep->chgIData(oldp+75,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[16]),32);
        tracep->chgIData(oldp+76,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[17]),32);
        tracep->chgIData(oldp+77,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[18]),32);
        tracep->chgIData(oldp+78,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[19]),32);
        tracep->chgIData(oldp+79,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[20]),32);
        tracep->chgIData(oldp+80,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[21]),32);
        tracep->chgIData(oldp+81,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[22]),32);
        tracep->chgIData(oldp+82,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[23]),32);
        tracep->chgIData(oldp+83,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[24]),32);
        tracep->chgIData(oldp+84,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[25]),32);
        tracep->chgIData(oldp+85,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[26]),32);
        tracep->chgIData(oldp+86,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[27]),32);
        tracep->chgIData(oldp+87,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[28]),32);
        tracep->chgIData(oldp+88,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[29]),32);
        tracep->chgIData(oldp+89,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[30]),32);
        tracep->chgIData(oldp+90,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[31]),32);
        tracep->chgIData(oldp+91,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__unnamedblk2__DOT__i),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        tracep->chgIData(oldp+92,(vlSelf->hw3_tb__DOT__i),32);
        tracep->chgIData(oldp+93,(vlSelf->hw3_tb__DOT__cycle_count),32);
        tracep->chgIData(oldp+94,(vlSelf->hw3_tb__DOT__golden_reg[0]),32);
        tracep->chgIData(oldp+95,(vlSelf->hw3_tb__DOT__golden_reg[1]),32);
        tracep->chgIData(oldp+96,(vlSelf->hw3_tb__DOT__golden_reg[2]),32);
        tracep->chgIData(oldp+97,(vlSelf->hw3_tb__DOT__golden_reg[3]),32);
        tracep->chgIData(oldp+98,(vlSelf->hw3_tb__DOT__golden_reg[4]),32);
        tracep->chgIData(oldp+99,(vlSelf->hw3_tb__DOT__golden_reg[5]),32);
        tracep->chgIData(oldp+100,(vlSelf->hw3_tb__DOT__golden_reg[6]),32);
        tracep->chgIData(oldp+101,(vlSelf->hw3_tb__DOT__golden_reg[7]),32);
        tracep->chgIData(oldp+102,(vlSelf->hw3_tb__DOT__golden_reg[8]),32);
        tracep->chgIData(oldp+103,(vlSelf->hw3_tb__DOT__golden_reg[9]),32);
        tracep->chgIData(oldp+104,(vlSelf->hw3_tb__DOT__golden_reg[10]),32);
        tracep->chgIData(oldp+105,(vlSelf->hw3_tb__DOT__golden_reg[11]),32);
        tracep->chgIData(oldp+106,(vlSelf->hw3_tb__DOT__golden_reg[12]),32);
        tracep->chgIData(oldp+107,(vlSelf->hw3_tb__DOT__golden_reg[13]),32);
        tracep->chgIData(oldp+108,(vlSelf->hw3_tb__DOT__golden_reg[14]),32);
        tracep->chgIData(oldp+109,(vlSelf->hw3_tb__DOT__golden_reg[15]),32);
        tracep->chgIData(oldp+110,(vlSelf->hw3_tb__DOT__golden_reg[16]),32);
        tracep->chgIData(oldp+111,(vlSelf->hw3_tb__DOT__golden_reg[17]),32);
        tracep->chgIData(oldp+112,(vlSelf->hw3_tb__DOT__golden_reg[18]),32);
        tracep->chgIData(oldp+113,(vlSelf->hw3_tb__DOT__golden_reg[19]),32);
        tracep->chgIData(oldp+114,(vlSelf->hw3_tb__DOT__golden_reg[20]),32);
        tracep->chgIData(oldp+115,(vlSelf->hw3_tb__DOT__golden_reg[21]),32);
        tracep->chgIData(oldp+116,(vlSelf->hw3_tb__DOT__golden_reg[22]),32);
        tracep->chgIData(oldp+117,(vlSelf->hw3_tb__DOT__golden_reg[23]),32);
        tracep->chgIData(oldp+118,(vlSelf->hw3_tb__DOT__golden_reg[24]),32);
        tracep->chgIData(oldp+119,(vlSelf->hw3_tb__DOT__golden_reg[25]),32);
        tracep->chgIData(oldp+120,(vlSelf->hw3_tb__DOT__golden_reg[26]),32);
        tracep->chgIData(oldp+121,(vlSelf->hw3_tb__DOT__golden_reg[27]),32);
        tracep->chgIData(oldp+122,(vlSelf->hw3_tb__DOT__golden_reg[28]),32);
        tracep->chgIData(oldp+123,(vlSelf->hw3_tb__DOT__golden_reg[29]),32);
        tracep->chgIData(oldp+124,(vlSelf->hw3_tb__DOT__golden_reg[30]),32);
        tracep->chgIData(oldp+125,(vlSelf->hw3_tb__DOT__golden_reg[31]),32);
        tracep->chgIData(oldp+126,(vlSelf->hw3_tb__DOT__golden_dmem[0]),32);
        tracep->chgIData(oldp+127,(vlSelf->hw3_tb__DOT__golden_dmem[1]),32);
        tracep->chgIData(oldp+128,(vlSelf->hw3_tb__DOT__golden_dmem[2]),32);
        tracep->chgIData(oldp+129,(vlSelf->hw3_tb__DOT__golden_dmem[3]),32);
        tracep->chgIData(oldp+130,(vlSelf->hw3_tb__DOT__golden_dmem[4]),32);
        tracep->chgIData(oldp+131,(vlSelf->hw3_tb__DOT__golden_dmem[5]),32);
        tracep->chgIData(oldp+132,(vlSelf->hw3_tb__DOT__golden_dmem[6]),32);
        tracep->chgIData(oldp+133,(vlSelf->hw3_tb__DOT__golden_dmem[7]),32);
        tracep->chgIData(oldp+134,(vlSelf->hw3_tb__DOT__golden_dmem[8]),32);
        tracep->chgIData(oldp+135,(vlSelf->hw3_tb__DOT__golden_dmem[9]),32);
        tracep->chgIData(oldp+136,(vlSelf->hw3_tb__DOT__golden_dmem[10]),32);
        tracep->chgIData(oldp+137,(vlSelf->hw3_tb__DOT__golden_dmem[11]),32);
        tracep->chgIData(oldp+138,(vlSelf->hw3_tb__DOT__golden_dmem[12]),32);
        tracep->chgIData(oldp+139,(vlSelf->hw3_tb__DOT__golden_dmem[13]),32);
        tracep->chgIData(oldp+140,(vlSelf->hw3_tb__DOT__golden_dmem[14]),32);
        tracep->chgIData(oldp+141,(vlSelf->hw3_tb__DOT__golden_dmem[15]),32);
        tracep->chgBit(oldp+142,(vlSelf->hw3_tb__DOT__start));
    }
    tracep->chgBit(oldp+143,(vlSelf->clk));
    tracep->chgBit(oldp+144,(vlSelf->rst));
    tracep->chgBit(oldp+145,(vlSelf->finish));
}

void Vhw3_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhw3_tb___024root__trace_cleanup\n"); );
    // Init
    Vhw3_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vhw3_tb___024root*>(voidSelf);
    Vhw3_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
