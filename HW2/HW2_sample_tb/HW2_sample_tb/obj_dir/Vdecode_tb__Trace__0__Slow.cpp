// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vdecode_tb__Syms.h"


VL_ATTR_COLD void Vdecode_tb___024root__trace_init_sub__TOP__0(Vdecode_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecode_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode_tb___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+92,"clk", false,-1);
    tracep->declBit(c+93,"rst", false,-1);
    tracep->declBit(c+94,"finish", false,-1);
    tracep->pushNamePrefix("decode_tb ");
    tracep->declBit(c+92,"clk", false,-1);
    tracep->declBit(c+93,"rst", false,-1);
    tracep->declBit(c+94,"finish", false,-1);
    tracep->declBus(c+96,"DWIDTH", false,-1, 31,0);
    tracep->declBus(c+2,"instr", false,-1, 31,0);
    tracep->declBus(c+3,"op", false,-1, 3,0);
    tracep->declBit(c+4,"ssel", false,-1);
    tracep->declBus(c+5,"imm", false,-1, 31,0);
    tracep->declBus(c+6,"rs1_id", false,-1, 4,0);
    tracep->declBus(c+7,"rs2_id", false,-1, 4,0);
    tracep->declBus(c+8,"rdst_id", false,-1, 4,0);
    tracep->declBit(c+97,"we", false,-1);
    tracep->declBus(c+9,"rs2_reg_file_out", false,-1, 31,0);
    tracep->declBus(c+10,"rd", false,-1, 31,0);
    tracep->declBus(c+11,"rs1", false,-1, 31,0);
    tracep->declBus(c+12,"rs2", false,-1, 31,0);
    tracep->declBit(c+13,"zero", false,-1);
    tracep->declBit(c+14,"overflow", false,-1);
    tracep->declBus(c+15,"golden_op", false,-1, 3,0);
    tracep->declBit(c+16,"golden_ssel", false,-1);
    tracep->declBus(c+17,"golden_imm", false,-1, 31,0);
    tracep->declBus(c+18,"golden_rs1_id", false,-1, 4,0);
    tracep->declBus(c+19,"golden_rs2_id", false,-1, 4,0);
    tracep->declBus(c+20,"golden_rdst_id", false,-1, 4,0);
    tracep->declBit(c+21,"rt_dont_care", false,-1);
    tracep->declBit(c+16,"imm_dont_care", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+56+i*1,"golden_R", true,(i+0), 31,0);
    }
    tracep->declBus(c+88,"golden_reg", false,-1, 31,0);
    tracep->declBus(c+89,"i", false,-1, 31,0);
    tracep->declBus(c+90,"pat_num", false,-1, 31,0);
    tracep->declBus(c+22,"pattern", false,-1, 31,0);
    tracep->declBus(c+95,"tmp", false,-1, 31,0);
    tracep->declBus(c+91,"reg_pattern", false,-1, 31,0);
    tracep->pushNamePrefix("alu_inst ");
    tracep->declBus(c+96,"DWIDTH", false,-1, 31,0);
    tracep->declBus(c+3,"op", false,-1, 3,0);
    tracep->declBus(c+11,"rs1", false,-1, 31,0);
    tracep->declBus(c+12,"rs2", false,-1, 31,0);
    tracep->declBus(c+10,"rd", false,-1, 31,0);
    tracep->declBit(c+13,"zero", false,-1);
    tracep->declBit(c+14,"overflow", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("decode_inst ");
    tracep->declBus(c+96,"DWIDTH", false,-1, 31,0);
    tracep->declBus(c+2,"instr", false,-1, 31,0);
    tracep->declBus(c+3,"op", false,-1, 3,0);
    tracep->declBit(c+4,"ssel", false,-1);
    tracep->declBus(c+5,"imm", false,-1, 31,0);
    tracep->declBus(c+6,"rs1_id", false,-1, 4,0);
    tracep->declBus(c+7,"rs2_id", false,-1, 4,0);
    tracep->declBus(c+8,"rdst_id", false,-1, 4,0);
    tracep->declBus(c+98,"OP_AND", false,-1, 3,0);
    tracep->declBus(c+99,"OP_OR", false,-1, 3,0);
    tracep->declBus(c+100,"OP_ADD", false,-1, 3,0);
    tracep->declBus(c+101,"OP_SUB", false,-1, 3,0);
    tracep->declBus(c+102,"OP_NOR", false,-1, 3,0);
    tracep->declBus(c+103,"OP_SLT", false,-1, 3,0);
    tracep->declBus(c+104,"OP_NOT_DEFINED", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reg_file_inst ");
    tracep->declBus(c+96,"DWIDTH", false,-1, 31,0);
    tracep->declBit(c+92,"clk", false,-1);
    tracep->declBit(c+93,"rst", false,-1);
    tracep->declBus(c+6,"rs1_id", false,-1, 4,0);
    tracep->declBus(c+7,"rs2_id", false,-1, 4,0);
    tracep->declBit(c+97,"we", false,-1);
    tracep->declBus(c+8,"rdst_id", false,-1, 4,0);
    tracep->declBus(c+10,"rdst", false,-1, 31,0);
    tracep->declBus(c+11,"rs1", false,-1, 31,0);
    tracep->declBus(c+9,"rs2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+23+i*1,"R", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+55,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vdecode_tb___024root__trace_init_top(Vdecode_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecode_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode_tb___024root__trace_init_top\n"); );
    // Body
    Vdecode_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vdecode_tb___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void Vdecode_tb___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void Vdecode_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vdecode_tb___024root__trace_register(Vdecode_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecode_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode_tb___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vdecode_tb___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vdecode_tb___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vdecode_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vdecode_tb___024root__trace_full_sub_0(Vdecode_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vdecode_tb___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode_tb___024root__trace_full_top_0\n"); );
    // Init
    Vdecode_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdecode_tb___024root*>(voidSelf);
    Vdecode_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vdecode_tb___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void Vdecode_tb___024root__trace_full_sub_0(Vdecode_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecode_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode_tb___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullIData(oldp+1,(vlSelf->decode_tb__DOT__reg_file_inst__DOT__unnamedblk1__DOT__i),32);
    tracep->fullIData(oldp+2,(vlSelf->decode_tb__DOT__instr),32);
    tracep->fullCData(oldp+3,(vlSelf->decode_tb__DOT__op),4);
    tracep->fullBit(oldp+4,(vlSelf->decode_tb__DOT__ssel));
    tracep->fullIData(oldp+5,(vlSelf->decode_tb__DOT__imm),32);
    tracep->fullCData(oldp+6,(vlSelf->decode_tb__DOT__rs1_id),5);
    tracep->fullCData(oldp+7,(vlSelf->decode_tb__DOT__rs2_id),5);
    tracep->fullCData(oldp+8,(vlSelf->decode_tb__DOT__rdst_id),5);
    tracep->fullIData(oldp+9,(vlSelf->decode_tb__DOT__reg_file_inst__DOT__R
                              [vlSelf->decode_tb__DOT__rs2_id]),32);
    tracep->fullIData(oldp+10,(vlSelf->decode_tb__DOT__rd),32);
    tracep->fullIData(oldp+11,(vlSelf->decode_tb__DOT__rs1),32);
    tracep->fullIData(oldp+12,(vlSelf->decode_tb__DOT__rs2),32);
    tracep->fullBit(oldp+13,(vlSelf->decode_tb__DOT__zero));
    tracep->fullBit(oldp+14,(vlSelf->decode_tb__DOT__overflow));
    tracep->fullCData(oldp+15,(vlSelf->decode_tb__DOT__golden_op),4);
    tracep->fullBit(oldp+16,(vlSelf->decode_tb__DOT__golden_ssel));
    tracep->fullIData(oldp+17,(vlSelf->decode_tb__DOT__golden_imm),32);
    tracep->fullCData(oldp+18,(vlSelf->decode_tb__DOT__golden_rs1_id),5);
    tracep->fullCData(oldp+19,(vlSelf->decode_tb__DOT__golden_rs2_id),5);
    tracep->fullCData(oldp+20,(vlSelf->decode_tb__DOT__golden_rdst_id),5);
    tracep->fullBit(oldp+21,((1U & (~ (IData)(vlSelf->decode_tb__DOT__golden_ssel)))));
    tracep->fullIData(oldp+22,(vlSelf->decode_tb__DOT__pattern),32);
    tracep->fullIData(oldp+23,(vlSelf->decode_tb__DOT__reg_file_inst__DOT__R[0]),32);
    tracep->fullIData(oldp+24,(vlSelf->decode_tb__DOT__reg_file_inst__DOT__R[1]),32);
    tracep->fullIData(oldp+25,(vlSelf->decode_tb__DOT__reg_file_inst__DOT__R[2]),32);
    tracep->fullIData(oldp+26,(vlSelf->decode_tb__DOT__reg_file_inst__DOT__R[3]),32);
    tracep->fullIData(oldp+27,(vlSelf->decode_tb__DOT__reg_file_inst__DOT__R[4]),32);
    tracep->fullIData(oldp+28,(vlSelf->decode_tb__DOT__reg_file_inst__DOT__R[5]),32);
    tracep->fullIData(oldp+29,(vlSelf->decode_tb__DOT__reg_file_inst__DOT__R[6]),32);
    tracep->fullIData(oldp+30,(vlSelf->decode_tb__DOT__reg_file_inst__DOT__R[7]),32);
    tracep->fullIData(oldp+31,(vlSelf->decode_tb__DOT__reg_file_inst__DOT__R[8]),32);
    tracep->fullIData(oldp+32,(vlSelf->decode_tb__DOT__reg_file_inst__DOT__R[9]),32);
    tracep->fullIData(oldp+33,(vlSelf->decode_tb__DOT__reg_file_inst__DOT__R[10]),32);
    tracep->fullIData(oldp+34,(vlSelf->decode_tb__DOT__reg_file_inst__DOT__R[11]),32);
    tracep->fullIData(oldp+35,(vlSelf->decode_tb__DOT__reg_file_inst__DOT__R[12]),32);
    tracep->fullIData(oldp+36,(vlSelf->decode_tb__DOT__reg_file_inst__DOT__R[13]),32);
    tracep->fullIData(oldp+37,(vlSelf->decode_tb__DOT__reg_file_inst__DOT__R[14]),32);
    tracep->fullIData(oldp+38,(vlSelf->decode_tb__DOT__reg_file_inst__DOT__R[15]),32);
    tracep->fullIData(oldp+39,(vlSelf->decode_tb__DOT__reg_file_inst__DOT__R[16]),32);
    tracep->fullIData(oldp+40,(vlSelf->decode_tb__DOT__reg_file_inst__DOT__R[17]),32);
    tracep->fullIData(oldp+41,(vlSelf->decode_tb__DOT__reg_file_inst__DOT__R[18]),32);
    tracep->fullIData(oldp+42,(vlSelf->decode_tb__DOT__reg_file_inst__DOT__R[19]),32);
    tracep->fullIData(oldp+43,(vlSelf->decode_tb__DOT__reg_file_inst__DOT__R[20]),32);
    tracep->fullIData(oldp+44,(vlSelf->decode_tb__DOT__reg_file_inst__DOT__R[21]),32);
    tracep->fullIData(oldp+45,(vlSelf->decode_tb__DOT__reg_file_inst__DOT__R[22]),32);
    tracep->fullIData(oldp+46,(vlSelf->decode_tb__DOT__reg_file_inst__DOT__R[23]),32);
    tracep->fullIData(oldp+47,(vlSelf->decode_tb__DOT__reg_file_inst__DOT__R[24]),32);
    tracep->fullIData(oldp+48,(vlSelf->decode_tb__DOT__reg_file_inst__DOT__R[25]),32);
    tracep->fullIData(oldp+49,(vlSelf->decode_tb__DOT__reg_file_inst__DOT__R[26]),32);
    tracep->fullIData(oldp+50,(vlSelf->decode_tb__DOT__reg_file_inst__DOT__R[27]),32);
    tracep->fullIData(oldp+51,(vlSelf->decode_tb__DOT__reg_file_inst__DOT__R[28]),32);
    tracep->fullIData(oldp+52,(vlSelf->decode_tb__DOT__reg_file_inst__DOT__R[29]),32);
    tracep->fullIData(oldp+53,(vlSelf->decode_tb__DOT__reg_file_inst__DOT__R[30]),32);
    tracep->fullIData(oldp+54,(vlSelf->decode_tb__DOT__reg_file_inst__DOT__R[31]),32);
    tracep->fullIData(oldp+55,(vlSelf->decode_tb__DOT__reg_file_inst__DOT__unnamedblk2__DOT__i),32);
    tracep->fullIData(oldp+56,(vlSelf->decode_tb__DOT__golden_R[0]),32);
    tracep->fullIData(oldp+57,(vlSelf->decode_tb__DOT__golden_R[1]),32);
    tracep->fullIData(oldp+58,(vlSelf->decode_tb__DOT__golden_R[2]),32);
    tracep->fullIData(oldp+59,(vlSelf->decode_tb__DOT__golden_R[3]),32);
    tracep->fullIData(oldp+60,(vlSelf->decode_tb__DOT__golden_R[4]),32);
    tracep->fullIData(oldp+61,(vlSelf->decode_tb__DOT__golden_R[5]),32);
    tracep->fullIData(oldp+62,(vlSelf->decode_tb__DOT__golden_R[6]),32);
    tracep->fullIData(oldp+63,(vlSelf->decode_tb__DOT__golden_R[7]),32);
    tracep->fullIData(oldp+64,(vlSelf->decode_tb__DOT__golden_R[8]),32);
    tracep->fullIData(oldp+65,(vlSelf->decode_tb__DOT__golden_R[9]),32);
    tracep->fullIData(oldp+66,(vlSelf->decode_tb__DOT__golden_R[10]),32);
    tracep->fullIData(oldp+67,(vlSelf->decode_tb__DOT__golden_R[11]),32);
    tracep->fullIData(oldp+68,(vlSelf->decode_tb__DOT__golden_R[12]),32);
    tracep->fullIData(oldp+69,(vlSelf->decode_tb__DOT__golden_R[13]),32);
    tracep->fullIData(oldp+70,(vlSelf->decode_tb__DOT__golden_R[14]),32);
    tracep->fullIData(oldp+71,(vlSelf->decode_tb__DOT__golden_R[15]),32);
    tracep->fullIData(oldp+72,(vlSelf->decode_tb__DOT__golden_R[16]),32);
    tracep->fullIData(oldp+73,(vlSelf->decode_tb__DOT__golden_R[17]),32);
    tracep->fullIData(oldp+74,(vlSelf->decode_tb__DOT__golden_R[18]),32);
    tracep->fullIData(oldp+75,(vlSelf->decode_tb__DOT__golden_R[19]),32);
    tracep->fullIData(oldp+76,(vlSelf->decode_tb__DOT__golden_R[20]),32);
    tracep->fullIData(oldp+77,(vlSelf->decode_tb__DOT__golden_R[21]),32);
    tracep->fullIData(oldp+78,(vlSelf->decode_tb__DOT__golden_R[22]),32);
    tracep->fullIData(oldp+79,(vlSelf->decode_tb__DOT__golden_R[23]),32);
    tracep->fullIData(oldp+80,(vlSelf->decode_tb__DOT__golden_R[24]),32);
    tracep->fullIData(oldp+81,(vlSelf->decode_tb__DOT__golden_R[25]),32);
    tracep->fullIData(oldp+82,(vlSelf->decode_tb__DOT__golden_R[26]),32);
    tracep->fullIData(oldp+83,(vlSelf->decode_tb__DOT__golden_R[27]),32);
    tracep->fullIData(oldp+84,(vlSelf->decode_tb__DOT__golden_R[28]),32);
    tracep->fullIData(oldp+85,(vlSelf->decode_tb__DOT__golden_R[29]),32);
    tracep->fullIData(oldp+86,(vlSelf->decode_tb__DOT__golden_R[30]),32);
    tracep->fullIData(oldp+87,(vlSelf->decode_tb__DOT__golden_R[31]),32);
    tracep->fullIData(oldp+88,(vlSelf->decode_tb__DOT__golden_reg),32);
    tracep->fullIData(oldp+89,(vlSelf->decode_tb__DOT__i),32);
    tracep->fullIData(oldp+90,(vlSelf->decode_tb__DOT__pat_num),32);
    tracep->fullIData(oldp+91,(vlSelf->decode_tb__DOT__reg_pattern),32);
    tracep->fullBit(oldp+92,(vlSelf->clk));
    tracep->fullBit(oldp+93,(vlSelf->rst));
    tracep->fullBit(oldp+94,(vlSelf->finish));
    tracep->fullIData(oldp+95,(vlSelf->decode_tb__DOT__tmp),32);
    tracep->fullIData(oldp+96,(0x20U),32);
    tracep->fullBit(oldp+97,(1U));
    tracep->fullCData(oldp+98,(0U),4);
    tracep->fullCData(oldp+99,(1U),4);
    tracep->fullCData(oldp+100,(2U),4);
    tracep->fullCData(oldp+101,(6U),4);
    tracep->fullCData(oldp+102,(0xcU),4);
    tracep->fullCData(oldp+103,(7U),4);
    tracep->fullCData(oldp+104,(0xfU),4);
}
