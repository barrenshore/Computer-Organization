// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vhw3_tb__Syms.h"


VL_ATTR_COLD void Vhw3_tb___024root__trace_init_sub__TOP__0(Vhw3_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vhw3_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhw3_tb___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+130,"clk", false,-1);
    tracep->declBit(c+131,"rst", false,-1);
    tracep->declBit(c+132,"finish", false,-1);
    tracep->pushNamePrefix("hw3_tb ");
    tracep->declBit(c+130,"clk", false,-1);
    tracep->declBit(c+131,"rst", false,-1);
    tracep->declBit(c+132,"finish", false,-1);
    tracep->declBus(c+133,"DWIDTH", false,-1, 31,0);
    tracep->declBus(c+95,"i", false,-1, 31,0);
    tracep->declBus(c+134,"tmp", false,-1, 31,0);
    tracep->declBus(c+96,"cycle_count", false,-1, 31,0);
    tracep->declBus(c+135,"cycle_for_ans", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+97+i*1,"golden_reg", true,(i+0), 31,0);
    }
    tracep->declBit(c+129,"start", false,-1);
    tracep->pushNamePrefix("core_top_inst ");
    tracep->declBus(c+133,"DWIDTH", false,-1, 31,0);
    tracep->declBit(c+130,"clk", false,-1);
    tracep->declBit(c+131,"rst", false,-1);
    tracep->declBus(c+136,"J_TYPE_NOP", false,-1, 2,0);
    tracep->declBus(c+137,"J_TYPE_BEQ", false,-1, 2,0);
    tracep->declBus(c+138,"J_TYPE_JAL", false,-1, 2,0);
    tracep->declBus(c+139,"J_TYPE_JR", false,-1, 2,0);
    tracep->declBus(c+140,"J_TYPE_J", false,-1, 2,0);
    tracep->declBus(c+3,"pc", false,-1, 31,0);
    tracep->declBus(c+4,"ra", false,-1, 31,0);
    tracep->declBus(c+5,"beq_addr", false,-1, 31,0);
    tracep->declBus(c+6,"instr", false,-1, 31,0);
    tracep->declBus(c+7,"jump_type", false,-1, 2,0);
    tracep->declBus(c+8,"jump_addr", false,-1, 31,0);
    tracep->declBit(c+9,"we_regfile", false,-1);
    tracep->declBit(c+10,"we_dmem", false,-1);
    tracep->declBit(c+11,"en_rdata", false,-1);
    tracep->declBus(c+12,"op", false,-1, 3,0);
    tracep->declBus(c+13,"ssel", false,-1, 1,0);
    tracep->declBus(c+14,"imm", false,-1, 31,0);
    tracep->declBus(c+15,"rs1_id", false,-1, 4,0);
    tracep->declBus(c+16,"rs2_id", false,-1, 4,0);
    tracep->declBus(c+17,"rdst_id", false,-1, 4,0);
    tracep->declBus(c+18,"rdst", false,-1, 31,0);
    tracep->declBus(c+19,"rs1_reg_file_out", false,-1, 31,0);
    tracep->declBus(c+20,"rs2_reg_file_out", false,-1, 31,0);
    tracep->declBus(c+21,"rs1", false,-1, 31,0);
    tracep->declBus(c+22,"rs2_tmp", false,-1, 31,0);
    tracep->declBus(c+23,"rs2", false,-1, 31,0);
    tracep->declBus(c+24,"rd", false,-1, 31,0);
    tracep->declBit(c+25,"zero", false,-1);
    tracep->declBit(c+26,"overflow", false,-1);
    tracep->declBus(c+27,"rdata", false,-1, 31,0);
    tracep->declBus(c+28,"R1_pc", false,-1, 31,0);
    tracep->declBus(c+29,"R1_instr", false,-1, 31,0);
    tracep->declBus(c+141,"R2_pc", false,-1, 31,0);
    tracep->declBit(c+30,"R2_we_dmem", false,-1);
    tracep->declBit(c+31,"R2_we_regfile", false,-1);
    tracep->declBus(c+32,"R2_op", false,-1, 3,0);
    tracep->declBus(c+33,"R2_ssel", false,-1, 1,0);
    tracep->declBus(c+34,"R2_imm", false,-1, 31,0);
    tracep->declBus(c+35,"R2_rs1_id", false,-1, 4,0);
    tracep->declBus(c+36,"R2_rs2_id", false,-1, 4,0);
    tracep->declBus(c+37,"R2_rdst_id", false,-1, 4,0);
    tracep->declBit(c+38,"R2_en_rdata", false,-1);
    tracep->declBus(c+39,"R2_rs1_reg_file_out", false,-1, 31,0);
    tracep->declBus(c+40,"R2_rs2_reg_file_out", false,-1, 31,0);
    tracep->declBit(c+41,"R3_we_dmem", false,-1);
    tracep->declBus(c+42,"R3_rd", false,-1, 31,0);
    tracep->declBus(c+43,"R3_rdst_id", false,-1, 4,0);
    tracep->declBus(c+44,"R3_rs2_reg_file_out", false,-1, 31,0);
    tracep->declBit(c+45,"R3_we_regfile", false,-1);
    tracep->declBit(c+46,"R3_en_rdata", false,-1);
    tracep->declBus(c+47,"R4_rdst_id", false,-1, 4,0);
    tracep->declBus(c+48,"R4_rdst", false,-1, 31,0);
    tracep->declBit(c+49,"R4_we_regfile", false,-1);
    tracep->declBit(c+142,"data_harzard", false,-1);
    tracep->declBit(c+143,"branch_harzard", false,-1);
    tracep->declBus(c+50,"Forward_A", false,-1, 1,0);
    tracep->declBus(c+51,"Forward_B", false,-1, 1,0);
    tracep->declBus(c+52,"Forward_rs1", false,-1, 1,0);
    tracep->declBus(c+53,"Forward_rs2", false,-1, 1,0);
    tracep->declBus(c+54,"index", false,-1, 31,0);
    tracep->declBus(c+55,"R1_index", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+56+i*2,"BHT", true,(i+0), 33,0);
    }
    tracep->declBit(c+144,"debug", false,-1);
    tracep->pushNamePrefix("alu_inst ");
    tracep->declBus(c+133,"DWIDTH", false,-1, 31,0);
    tracep->declBus(c+32,"op", false,-1, 3,0);
    tracep->declBus(c+21,"rs1", false,-1, 31,0);
    tracep->declBus(c+23,"rs2", false,-1, 31,0);
    tracep->declBus(c+24,"rd", false,-1, 31,0);
    tracep->declBit(c+25,"zero", false,-1);
    tracep->declBit(c+26,"overflow", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("decode_inst ");
    tracep->declBus(c+133,"DWIDTH", false,-1, 31,0);
    tracep->declBus(c+29,"instr", false,-1, 31,0);
    tracep->declBus(c+12,"op", false,-1, 3,0);
    tracep->declBus(c+13,"ssel", false,-1, 1,0);
    tracep->declBus(c+14,"imm", false,-1, 31,0);
    tracep->declBus(c+15,"rs1_id", false,-1, 4,0);
    tracep->declBus(c+16,"rs2_id", false,-1, 4,0);
    tracep->declBus(c+17,"rdst_id", false,-1, 4,0);
    tracep->declBus(c+7,"jump_type", false,-1, 2,0);
    tracep->declBus(c+8,"jump_addr", false,-1, 31,0);
    tracep->declBit(c+10,"we_dmem", false,-1);
    tracep->declBit(c+9,"we_regfile", false,-1);
    tracep->declBit(c+11,"en_rdata", false,-1);
    tracep->declBus(c+145,"OP_AND", false,-1, 3,0);
    tracep->declBus(c+146,"OP_OR", false,-1, 3,0);
    tracep->declBus(c+147,"OP_ADD", false,-1, 3,0);
    tracep->declBus(c+148,"OP_SUB", false,-1, 3,0);
    tracep->declBus(c+149,"OP_NOR", false,-1, 3,0);
    tracep->declBus(c+150,"OP_SLT", false,-1, 3,0);
    tracep->declBus(c+151,"OP_NOT_DEFINED", false,-1, 3,0);
    tracep->declBus(c+136,"J_TYPE_NOP", false,-1, 2,0);
    tracep->declBus(c+137,"J_TYPE_BEQ", false,-1, 2,0);
    tracep->declBus(c+138,"J_TYPE_JAL", false,-1, 2,0);
    tracep->declBus(c+139,"J_TYPE_JR", false,-1, 2,0);
    tracep->declBus(c+140,"J_TYPE_J", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dmem_inst ");
    tracep->declBit(c+130,"clk", false,-1);
    tracep->declBus(c+60,"addr", false,-1, 5,0);
    tracep->declBit(c+41,"we", false,-1);
    tracep->declBus(c+44,"wdata", false,-1, 31,0);
    tracep->declBus(c+27,"rdata", false,-1, 31,0);
    tracep->declBus(c+1,"idx", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("imem_inst ");
    tracep->declBus(c+61,"addr", false,-1, 5,0);
    tracep->declBus(c+6,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reg_file_inst ");
    tracep->declBus(c+133,"DWIDTH", false,-1, 31,0);
    tracep->declBit(c+130,"clk", false,-1);
    tracep->declBit(c+131,"rst", false,-1);
    tracep->declBus(c+15,"rs1_id", false,-1, 4,0);
    tracep->declBus(c+16,"rs2_id", false,-1, 4,0);
    tracep->declBit(c+49,"we", false,-1);
    tracep->declBus(c+47,"rdst_id", false,-1, 4,0);
    tracep->declBus(c+48,"rdst", false,-1, 31,0);
    tracep->declBus(c+19,"rs1", false,-1, 31,0);
    tracep->declBus(c+20,"rs2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+62+i*1,"R", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+2,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+94,"i", false,-1, 31,0);
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vhw3_tb___024root__trace_init_top(Vhw3_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vhw3_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhw3_tb___024root__trace_init_top\n"); );
    // Body
    Vhw3_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vhw3_tb___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void Vhw3_tb___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void Vhw3_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vhw3_tb___024root__trace_register(Vhw3_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vhw3_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhw3_tb___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vhw3_tb___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vhw3_tb___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vhw3_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vhw3_tb___024root__trace_full_sub_0(Vhw3_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vhw3_tb___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhw3_tb___024root__trace_full_top_0\n"); );
    // Init
    Vhw3_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vhw3_tb___024root*>(voidSelf);
    Vhw3_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vhw3_tb___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void Vhw3_tb___024root__trace_full_sub_0(Vhw3_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vhw3_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhw3_tb___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullIData(oldp+1,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__idx),32);
    tracep->fullIData(oldp+2,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__unnamedblk1__DOT__i),32);
    tracep->fullIData(oldp+3,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__pc),32);
    tracep->fullIData(oldp+4,(((IData)(4U) + vlSelf->hw3_tb__DOT__core_top_inst__DOT__pc)),32);
    tracep->fullIData(oldp+5,((vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_pc 
                               + (vlSelf->hw3_tb__DOT__core_top_inst__DOT__imm 
                                  << 2U))),32);
    tracep->fullIData(oldp+6,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__imem_inst__DOT__RAM
                              [(0xfU & (vlSelf->hw3_tb__DOT__core_top_inst__DOT__pc 
                                        >> 2U))]),32);
    tracep->fullCData(oldp+7,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__jump_type),3);
    tracep->fullIData(oldp+8,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__jump_addr),32);
    tracep->fullBit(oldp+9,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__we_regfile));
    tracep->fullBit(oldp+10,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__we_dmem));
    tracep->fullBit(oldp+11,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__en_rdata));
    tracep->fullCData(oldp+12,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__op),4);
    tracep->fullCData(oldp+13,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__ssel),2);
    tracep->fullIData(oldp+14,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__imm),32);
    tracep->fullCData(oldp+15,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs1_id),5);
    tracep->fullCData(oldp+16,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs2_id),5);
    tracep->fullCData(oldp+17,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__rdst_id),5);
    tracep->fullIData(oldp+18,(((IData)(vlSelf->hw3_tb__DOT__core_top_inst__DOT__R3_en_rdata)
                                 ? vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM
                                [(0xfU & (vlSelf->hw3_tb__DOT__core_top_inst__DOT__R3_rd 
                                          >> 2U))] : vlSelf->hw3_tb__DOT__core_top_inst__DOT__R3_rd)),32);
    tracep->fullIData(oldp+19,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs1_reg_file_out),32);
    tracep->fullIData(oldp+20,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs2_reg_file_out),32);
    tracep->fullIData(oldp+21,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs1),32);
    tracep->fullIData(oldp+22,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs2_tmp),32);
    tracep->fullIData(oldp+23,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs2),32);
    tracep->fullIData(oldp+24,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__rd),32);
    tracep->fullBit(oldp+25,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__zero));
    tracep->fullBit(oldp+26,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__overflow));
    tracep->fullIData(oldp+27,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM
                               [(0xfU & (vlSelf->hw3_tb__DOT__core_top_inst__DOT__R3_rd 
                                         >> 2U))]),32);
    tracep->fullIData(oldp+28,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_pc),32);
    tracep->fullIData(oldp+29,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr),32);
    tracep->fullBit(oldp+30,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__R2_we_dmem));
    tracep->fullBit(oldp+31,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__R2_we_regfile));
    tracep->fullCData(oldp+32,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__R2_op),4);
    tracep->fullCData(oldp+33,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__R2_ssel),2);
    tracep->fullIData(oldp+34,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__R2_imm),32);
    tracep->fullCData(oldp+35,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__R2_rs1_id),5);
    tracep->fullCData(oldp+36,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__R2_rs2_id),5);
    tracep->fullCData(oldp+37,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__R2_rdst_id),5);
    tracep->fullBit(oldp+38,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__R2_en_rdata));
    tracep->fullIData(oldp+39,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__R2_rs1_reg_file_out),32);
    tracep->fullIData(oldp+40,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__R2_rs2_reg_file_out),32);
    tracep->fullBit(oldp+41,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__R3_we_dmem));
    tracep->fullIData(oldp+42,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__R3_rd),32);
    tracep->fullCData(oldp+43,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__R3_rdst_id),5);
    tracep->fullIData(oldp+44,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__R3_rs2_reg_file_out),32);
    tracep->fullBit(oldp+45,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__R3_we_regfile));
    tracep->fullBit(oldp+46,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__R3_en_rdata));
    tracep->fullCData(oldp+47,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__R4_rdst_id),5);
    tracep->fullIData(oldp+48,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__R4_rdst),32);
    tracep->fullBit(oldp+49,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__R4_we_regfile));
    tracep->fullCData(oldp+50,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__Forward_A),2);
    tracep->fullCData(oldp+51,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__Forward_B),2);
    tracep->fullCData(oldp+52,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__Forward_rs1),2);
    tracep->fullCData(oldp+53,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__Forward_rs2),2);
    tracep->fullIData(oldp+54,((1U & vlSelf->hw3_tb__DOT__core_top_inst__DOT__pc)),32);
    tracep->fullIData(oldp+55,((1U & vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_pc)),32);
    tracep->fullQData(oldp+56,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__BHT[0]),34);
    tracep->fullQData(oldp+58,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__BHT[1]),34);
    tracep->fullCData(oldp+60,((0x3fU & vlSelf->hw3_tb__DOT__core_top_inst__DOT__R3_rd)),6);
    tracep->fullCData(oldp+61,((0x3fU & vlSelf->hw3_tb__DOT__core_top_inst__DOT__pc)),6);
    tracep->fullIData(oldp+62,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[0]),32);
    tracep->fullIData(oldp+63,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[1]),32);
    tracep->fullIData(oldp+64,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[2]),32);
    tracep->fullIData(oldp+65,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[3]),32);
    tracep->fullIData(oldp+66,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[4]),32);
    tracep->fullIData(oldp+67,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[5]),32);
    tracep->fullIData(oldp+68,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[6]),32);
    tracep->fullIData(oldp+69,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[7]),32);
    tracep->fullIData(oldp+70,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[8]),32);
    tracep->fullIData(oldp+71,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[9]),32);
    tracep->fullIData(oldp+72,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[10]),32);
    tracep->fullIData(oldp+73,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[11]),32);
    tracep->fullIData(oldp+74,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[12]),32);
    tracep->fullIData(oldp+75,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[13]),32);
    tracep->fullIData(oldp+76,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[14]),32);
    tracep->fullIData(oldp+77,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[15]),32);
    tracep->fullIData(oldp+78,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[16]),32);
    tracep->fullIData(oldp+79,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[17]),32);
    tracep->fullIData(oldp+80,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[18]),32);
    tracep->fullIData(oldp+81,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[19]),32);
    tracep->fullIData(oldp+82,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[20]),32);
    tracep->fullIData(oldp+83,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[21]),32);
    tracep->fullIData(oldp+84,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[22]),32);
    tracep->fullIData(oldp+85,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[23]),32);
    tracep->fullIData(oldp+86,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[24]),32);
    tracep->fullIData(oldp+87,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[25]),32);
    tracep->fullIData(oldp+88,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[26]),32);
    tracep->fullIData(oldp+89,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[27]),32);
    tracep->fullIData(oldp+90,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[28]),32);
    tracep->fullIData(oldp+91,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[29]),32);
    tracep->fullIData(oldp+92,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[30]),32);
    tracep->fullIData(oldp+93,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[31]),32);
    tracep->fullIData(oldp+94,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__unnamedblk2__DOT__i),32);
    tracep->fullIData(oldp+95,(vlSelf->hw3_tb__DOT__i),32);
    tracep->fullIData(oldp+96,(vlSelf->hw3_tb__DOT__cycle_count),32);
    tracep->fullIData(oldp+97,(vlSelf->hw3_tb__DOT__golden_reg[0]),32);
    tracep->fullIData(oldp+98,(vlSelf->hw3_tb__DOT__golden_reg[1]),32);
    tracep->fullIData(oldp+99,(vlSelf->hw3_tb__DOT__golden_reg[2]),32);
    tracep->fullIData(oldp+100,(vlSelf->hw3_tb__DOT__golden_reg[3]),32);
    tracep->fullIData(oldp+101,(vlSelf->hw3_tb__DOT__golden_reg[4]),32);
    tracep->fullIData(oldp+102,(vlSelf->hw3_tb__DOT__golden_reg[5]),32);
    tracep->fullIData(oldp+103,(vlSelf->hw3_tb__DOT__golden_reg[6]),32);
    tracep->fullIData(oldp+104,(vlSelf->hw3_tb__DOT__golden_reg[7]),32);
    tracep->fullIData(oldp+105,(vlSelf->hw3_tb__DOT__golden_reg[8]),32);
    tracep->fullIData(oldp+106,(vlSelf->hw3_tb__DOT__golden_reg[9]),32);
    tracep->fullIData(oldp+107,(vlSelf->hw3_tb__DOT__golden_reg[10]),32);
    tracep->fullIData(oldp+108,(vlSelf->hw3_tb__DOT__golden_reg[11]),32);
    tracep->fullIData(oldp+109,(vlSelf->hw3_tb__DOT__golden_reg[12]),32);
    tracep->fullIData(oldp+110,(vlSelf->hw3_tb__DOT__golden_reg[13]),32);
    tracep->fullIData(oldp+111,(vlSelf->hw3_tb__DOT__golden_reg[14]),32);
    tracep->fullIData(oldp+112,(vlSelf->hw3_tb__DOT__golden_reg[15]),32);
    tracep->fullIData(oldp+113,(vlSelf->hw3_tb__DOT__golden_reg[16]),32);
    tracep->fullIData(oldp+114,(vlSelf->hw3_tb__DOT__golden_reg[17]),32);
    tracep->fullIData(oldp+115,(vlSelf->hw3_tb__DOT__golden_reg[18]),32);
    tracep->fullIData(oldp+116,(vlSelf->hw3_tb__DOT__golden_reg[19]),32);
    tracep->fullIData(oldp+117,(vlSelf->hw3_tb__DOT__golden_reg[20]),32);
    tracep->fullIData(oldp+118,(vlSelf->hw3_tb__DOT__golden_reg[21]),32);
    tracep->fullIData(oldp+119,(vlSelf->hw3_tb__DOT__golden_reg[22]),32);
    tracep->fullIData(oldp+120,(vlSelf->hw3_tb__DOT__golden_reg[23]),32);
    tracep->fullIData(oldp+121,(vlSelf->hw3_tb__DOT__golden_reg[24]),32);
    tracep->fullIData(oldp+122,(vlSelf->hw3_tb__DOT__golden_reg[25]),32);
    tracep->fullIData(oldp+123,(vlSelf->hw3_tb__DOT__golden_reg[26]),32);
    tracep->fullIData(oldp+124,(vlSelf->hw3_tb__DOT__golden_reg[27]),32);
    tracep->fullIData(oldp+125,(vlSelf->hw3_tb__DOT__golden_reg[28]),32);
    tracep->fullIData(oldp+126,(vlSelf->hw3_tb__DOT__golden_reg[29]),32);
    tracep->fullIData(oldp+127,(vlSelf->hw3_tb__DOT__golden_reg[30]),32);
    tracep->fullIData(oldp+128,(vlSelf->hw3_tb__DOT__golden_reg[31]),32);
    tracep->fullBit(oldp+129,(vlSelf->hw3_tb__DOT__start));
    tracep->fullBit(oldp+130,(vlSelf->clk));
    tracep->fullBit(oldp+131,(vlSelf->rst));
    tracep->fullBit(oldp+132,(vlSelf->finish));
    tracep->fullIData(oldp+133,(0x20U),32);
    tracep->fullIData(oldp+134,(vlSelf->hw3_tb__DOT__tmp),32);
    tracep->fullIData(oldp+135,(0x64U),32);
    tracep->fullCData(oldp+136,(0U),3);
    tracep->fullCData(oldp+137,(1U),3);
    tracep->fullCData(oldp+138,(2U),3);
    tracep->fullCData(oldp+139,(3U),3);
    tracep->fullCData(oldp+140,(4U),3);
    tracep->fullIData(oldp+141,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__R2_pc),32);
    tracep->fullBit(oldp+142,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__data_harzard));
    tracep->fullBit(oldp+143,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__branch_harzard));
    tracep->fullBit(oldp+144,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__debug));
    tracep->fullCData(oldp+145,(0U),4);
    tracep->fullCData(oldp+146,(1U),4);
    tracep->fullCData(oldp+147,(2U),4);
    tracep->fullCData(oldp+148,(6U),4);
    tracep->fullCData(oldp+149,(0xcU),4);
    tracep->fullCData(oldp+150,(7U),4);
    tracep->fullCData(oldp+151,(0xfU),4);
}
