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
    tracep->declBit(c+169,"clk", false,-1);
    tracep->declBit(c+170,"rst", false,-1);
    tracep->declBit(c+171,"finish", false,-1);
    tracep->pushNamePrefix("hw3_tb ");
    tracep->declBit(c+169,"clk", false,-1);
    tracep->declBit(c+170,"rst", false,-1);
    tracep->declBit(c+171,"finish", false,-1);
    tracep->declBus(c+172,"DWIDTH", false,-1, 31,0);
    tracep->declBus(c+114,"i", false,-1, 31,0);
    tracep->declBus(c+173,"tmp", false,-1, 31,0);
    tracep->declBus(c+115,"cycle_count", false,-1, 31,0);
    tracep->declBus(c+174,"cycle_for_ans", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+116+i*1,"golden_reg", true,(i+0), 31,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+148+i*1,"golden_dmem", true,(i+0), 31,0);
    }
    tracep->declBit(c+164,"start", false,-1);
    tracep->pushNamePrefix("core_top_inst ");
    tracep->declBus(c+172,"DWIDTH", false,-1, 31,0);
    tracep->declBit(c+169,"clk", false,-1);
    tracep->declBit(c+170,"rst", false,-1);
    tracep->declBus(c+175,"J_TYPE_NOP", false,-1, 2,0);
    tracep->declBus(c+176,"J_TYPE_BEQ", false,-1, 2,0);
    tracep->declBus(c+177,"J_TYPE_JAL", false,-1, 2,0);
    tracep->declBus(c+178,"J_TYPE_JR", false,-1, 2,0);
    tracep->declBus(c+179,"J_TYPE_J", false,-1, 2,0);
    tracep->declBus(c+165,"pc", false,-1, 31,0);
    tracep->declBus(c+180,"ra", false,-1, 31,0);
    tracep->declBus(c+166,"beq_addr", false,-1, 31,0);
    tracep->declBus(c+167,"instr", false,-1, 31,0);
    tracep->declBus(c+19,"jump_type", false,-1, 2,0);
    tracep->declBus(c+20,"jump_addr", false,-1, 31,0);
    tracep->declBit(c+21,"we_regfile", false,-1);
    tracep->declBit(c+22,"we_dmem", false,-1);
    tracep->declBit(c+23,"en_rdata", false,-1);
    tracep->declBus(c+24,"op", false,-1, 3,0);
    tracep->declBus(c+25,"ssel", false,-1, 1,0);
    tracep->declBus(c+26,"imm", false,-1, 31,0);
    tracep->declBus(c+27,"rs1_id", false,-1, 4,0);
    tracep->declBus(c+28,"rs2_id", false,-1, 4,0);
    tracep->declBus(c+29,"rdst_id", false,-1, 4,0);
    tracep->declBus(c+30,"rdst", false,-1, 31,0);
    tracep->declBus(c+31,"rs1_reg_file_out", false,-1, 31,0);
    tracep->declBus(c+32,"rs2_reg_file_out", false,-1, 31,0);
    tracep->declBus(c+33,"rs2", false,-1, 31,0);
    tracep->declBus(c+34,"rd", false,-1, 31,0);
    tracep->declBit(c+35,"zero", false,-1);
    tracep->declBit(c+36,"overflow", false,-1);
    tracep->declBus(c+37,"rdata", false,-1, 31,0);
    tracep->declBus(c+38,"R1_pc", false,-1, 31,0);
    tracep->declBus(c+39,"R1_instr", false,-1, 31,0);
    tracep->declBus(c+40,"R2_pc", false,-1, 31,0);
    tracep->declBus(c+41,"R2_jump_type", false,-1, 2,0);
    tracep->declBus(c+42,"R2_jump_addr", false,-1, 31,0);
    tracep->declBit(c+43,"R2_we_dmem", false,-1);
    tracep->declBit(c+44,"R2_we_regfile", false,-1);
    tracep->declBus(c+45,"R2_op", false,-1, 3,0);
    tracep->declBus(c+46,"R2_ssel", false,-1, 1,0);
    tracep->declBus(c+47,"R2_imm", false,-1, 31,0);
    tracep->declBus(c+48,"R2_rdst_id", false,-1, 4,0);
    tracep->declBit(c+49,"R2_en_rdata", false,-1);
    tracep->declBus(c+50,"R2_rs1_reg_file_out", false,-1, 31,0);
    tracep->declBus(c+51,"R2_rs2_reg_file_out", false,-1, 31,0);
    tracep->declBit(c+52,"R3_we_dmem", false,-1);
    tracep->declBus(c+53,"R3_rd", false,-1, 31,0);
    tracep->declBus(c+54,"R3_rdst_id", false,-1, 4,0);
    tracep->declBus(c+55,"R3_rs2_reg_file_out", false,-1, 31,0);
    tracep->declBit(c+56,"R3_we_regfile", false,-1);
    tracep->declBit(c+57,"R3_en_rdata", false,-1);
    tracep->declBus(c+58,"R4_rdst_id", false,-1, 4,0);
    tracep->declBus(c+59,"R4_rdst", false,-1, 31,0);
    tracep->declBit(c+60,"R4_we_regfile", false,-1);
    tracep->declBit(c+61,"data_harzard", false,-1);
    tracep->declBit(c+62,"branch_harzard", false,-1);
    tracep->declBit(c+63,"debug", false,-1);
    tracep->pushNamePrefix("alu_inst ");
    tracep->declBus(c+172,"DWIDTH", false,-1, 31,0);
    tracep->declBus(c+45,"op", false,-1, 3,0);
    tracep->declBus(c+50,"rs1", false,-1, 31,0);
    tracep->declBus(c+33,"rs2", false,-1, 31,0);
    tracep->declBus(c+34,"rd", false,-1, 31,0);
    tracep->declBit(c+35,"zero", false,-1);
    tracep->declBit(c+36,"overflow", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("decode_inst ");
    tracep->declBus(c+172,"DWIDTH", false,-1, 31,0);
    tracep->declBus(c+39,"instr", false,-1, 31,0);
    tracep->declBus(c+24,"op", false,-1, 3,0);
    tracep->declBus(c+25,"ssel", false,-1, 1,0);
    tracep->declBus(c+26,"imm", false,-1, 31,0);
    tracep->declBus(c+27,"rs1_id", false,-1, 4,0);
    tracep->declBus(c+28,"rs2_id", false,-1, 4,0);
    tracep->declBus(c+29,"rdst_id", false,-1, 4,0);
    tracep->declBus(c+19,"jump_type", false,-1, 2,0);
    tracep->declBus(c+20,"jump_addr", false,-1, 31,0);
    tracep->declBit(c+22,"we_dmem", false,-1);
    tracep->declBit(c+21,"we_regfile", false,-1);
    tracep->declBit(c+23,"en_rdata", false,-1);
    tracep->declBus(c+181,"OP_AND", false,-1, 3,0);
    tracep->declBus(c+182,"OP_OR", false,-1, 3,0);
    tracep->declBus(c+183,"OP_ADD", false,-1, 3,0);
    tracep->declBus(c+184,"OP_SUB", false,-1, 3,0);
    tracep->declBus(c+185,"OP_NOR", false,-1, 3,0);
    tracep->declBus(c+186,"OP_SLT", false,-1, 3,0);
    tracep->declBus(c+187,"OP_NOT_DEFINED", false,-1, 3,0);
    tracep->declBus(c+175,"J_TYPE_NOP", false,-1, 2,0);
    tracep->declBus(c+176,"J_TYPE_BEQ", false,-1, 2,0);
    tracep->declBus(c+177,"J_TYPE_JAL", false,-1, 2,0);
    tracep->declBus(c+178,"J_TYPE_JR", false,-1, 2,0);
    tracep->declBus(c+179,"J_TYPE_J", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dmem_inst ");
    tracep->declBit(c+169,"clk", false,-1);
    tracep->declBus(c+64,"addr", false,-1, 5,0);
    tracep->declBit(c+52,"we", false,-1);
    tracep->declBus(c+55,"wdata", false,-1, 31,0);
    tracep->declBus(c+37,"rdata", false,-1, 31,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+65+i*1,"RAM", true,(i+0), 31,0);
    }
    tracep->declBus(c+1,"idx", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("imem_inst ");
    tracep->declBus(c+168,"addr", false,-1, 5,0);
    tracep->declBus(c+167,"rdata", false,-1, 31,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+2+i*1,"RAM", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reg_file_inst ");
    tracep->declBus(c+172,"DWIDTH", false,-1, 31,0);
    tracep->declBit(c+169,"clk", false,-1);
    tracep->declBit(c+170,"rst", false,-1);
    tracep->declBus(c+27,"rs1_id", false,-1, 4,0);
    tracep->declBus(c+28,"rs2_id", false,-1, 4,0);
    tracep->declBit(c+60,"we", false,-1);
    tracep->declBus(c+58,"rdst_id", false,-1, 4,0);
    tracep->declBus(c+59,"rdst", false,-1, 31,0);
    tracep->declBus(c+31,"rs1", false,-1, 31,0);
    tracep->declBus(c+32,"rs2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+81+i*1,"R", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+18,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+113,"i", false,-1, 31,0);
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
    tracep->fullIData(oldp+2,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__imem_inst__DOT__RAM[0]),32);
    tracep->fullIData(oldp+3,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__imem_inst__DOT__RAM[1]),32);
    tracep->fullIData(oldp+4,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__imem_inst__DOT__RAM[2]),32);
    tracep->fullIData(oldp+5,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__imem_inst__DOT__RAM[3]),32);
    tracep->fullIData(oldp+6,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__imem_inst__DOT__RAM[4]),32);
    tracep->fullIData(oldp+7,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__imem_inst__DOT__RAM[5]),32);
    tracep->fullIData(oldp+8,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__imem_inst__DOT__RAM[6]),32);
    tracep->fullIData(oldp+9,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__imem_inst__DOT__RAM[7]),32);
    tracep->fullIData(oldp+10,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__imem_inst__DOT__RAM[8]),32);
    tracep->fullIData(oldp+11,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__imem_inst__DOT__RAM[9]),32);
    tracep->fullIData(oldp+12,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__imem_inst__DOT__RAM[10]),32);
    tracep->fullIData(oldp+13,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__imem_inst__DOT__RAM[11]),32);
    tracep->fullIData(oldp+14,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__imem_inst__DOT__RAM[12]),32);
    tracep->fullIData(oldp+15,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__imem_inst__DOT__RAM[13]),32);
    tracep->fullIData(oldp+16,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__imem_inst__DOT__RAM[14]),32);
    tracep->fullIData(oldp+17,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__imem_inst__DOT__RAM[15]),32);
    tracep->fullIData(oldp+18,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__unnamedblk1__DOT__i),32);
    tracep->fullCData(oldp+19,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__jump_type),3);
    tracep->fullIData(oldp+20,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__jump_addr),32);
    tracep->fullBit(oldp+21,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__we_regfile));
    tracep->fullBit(oldp+22,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__we_dmem));
    tracep->fullBit(oldp+23,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__en_rdata));
    tracep->fullCData(oldp+24,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__op),4);
    tracep->fullCData(oldp+25,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__ssel),2);
    tracep->fullIData(oldp+26,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__imm),32);
    tracep->fullCData(oldp+27,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs1_id),5);
    tracep->fullCData(oldp+28,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs2_id),5);
    tracep->fullCData(oldp+29,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__rdst_id),5);
    tracep->fullIData(oldp+30,(((IData)(vlSelf->hw3_tb__DOT__core_top_inst__DOT__R3_en_rdata)
                                 ? vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM
                                [(0xfU & (vlSelf->hw3_tb__DOT__core_top_inst__DOT__R3_rd 
                                          >> 2U))] : vlSelf->hw3_tb__DOT__core_top_inst__DOT__R3_rd)),32);
    tracep->fullIData(oldp+31,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R
                               [vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs1_id]),32);
    tracep->fullIData(oldp+32,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R
                               [vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs2_id]),32);
    tracep->fullIData(oldp+33,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__rs2),32);
    tracep->fullIData(oldp+34,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__rd),32);
    tracep->fullBit(oldp+35,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__zero));
    tracep->fullBit(oldp+36,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__overflow));
    tracep->fullIData(oldp+37,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM
                               [(0xfU & (vlSelf->hw3_tb__DOT__core_top_inst__DOT__R3_rd 
                                         >> 2U))]),32);
    tracep->fullIData(oldp+38,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_pc),32);
    tracep->fullIData(oldp+39,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__R1_instr),32);
    tracep->fullIData(oldp+40,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__R2_pc),32);
    tracep->fullCData(oldp+41,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__R2_jump_type),3);
    tracep->fullIData(oldp+42,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__R2_jump_addr),32);
    tracep->fullBit(oldp+43,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__R2_we_dmem));
    tracep->fullBit(oldp+44,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__R2_we_regfile));
    tracep->fullCData(oldp+45,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__R2_op),4);
    tracep->fullCData(oldp+46,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__R2_ssel),2);
    tracep->fullIData(oldp+47,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__R2_imm),32);
    tracep->fullCData(oldp+48,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__R2_rdst_id),5);
    tracep->fullBit(oldp+49,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__R2_en_rdata));
    tracep->fullIData(oldp+50,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__R2_rs1_reg_file_out),32);
    tracep->fullIData(oldp+51,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__R2_rs2_reg_file_out),32);
    tracep->fullBit(oldp+52,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__R3_we_dmem));
    tracep->fullIData(oldp+53,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__R3_rd),32);
    tracep->fullCData(oldp+54,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__R3_rdst_id),5);
    tracep->fullIData(oldp+55,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__R3_rs2_reg_file_out),32);
    tracep->fullBit(oldp+56,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__R3_we_regfile));
    tracep->fullBit(oldp+57,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__R3_en_rdata));
    tracep->fullCData(oldp+58,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__R4_rdst_id),5);
    tracep->fullIData(oldp+59,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__R4_rdst),32);
    tracep->fullBit(oldp+60,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__R4_we_regfile));
    tracep->fullBit(oldp+61,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__data_harzard));
    tracep->fullBit(oldp+62,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__branch_harzard));
    tracep->fullBit(oldp+63,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__debug));
    tracep->fullCData(oldp+64,((0x3fU & vlSelf->hw3_tb__DOT__core_top_inst__DOT__R3_rd)),6);
    tracep->fullIData(oldp+65,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM[0]),32);
    tracep->fullIData(oldp+66,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM[1]),32);
    tracep->fullIData(oldp+67,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM[2]),32);
    tracep->fullIData(oldp+68,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM[3]),32);
    tracep->fullIData(oldp+69,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM[4]),32);
    tracep->fullIData(oldp+70,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM[5]),32);
    tracep->fullIData(oldp+71,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM[6]),32);
    tracep->fullIData(oldp+72,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM[7]),32);
    tracep->fullIData(oldp+73,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM[8]),32);
    tracep->fullIData(oldp+74,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM[9]),32);
    tracep->fullIData(oldp+75,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM[10]),32);
    tracep->fullIData(oldp+76,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM[11]),32);
    tracep->fullIData(oldp+77,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM[12]),32);
    tracep->fullIData(oldp+78,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM[13]),32);
    tracep->fullIData(oldp+79,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM[14]),32);
    tracep->fullIData(oldp+80,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM[15]),32);
    tracep->fullIData(oldp+81,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[0]),32);
    tracep->fullIData(oldp+82,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[1]),32);
    tracep->fullIData(oldp+83,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[2]),32);
    tracep->fullIData(oldp+84,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[3]),32);
    tracep->fullIData(oldp+85,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[4]),32);
    tracep->fullIData(oldp+86,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[5]),32);
    tracep->fullIData(oldp+87,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[6]),32);
    tracep->fullIData(oldp+88,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[7]),32);
    tracep->fullIData(oldp+89,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[8]),32);
    tracep->fullIData(oldp+90,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[9]),32);
    tracep->fullIData(oldp+91,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[10]),32);
    tracep->fullIData(oldp+92,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[11]),32);
    tracep->fullIData(oldp+93,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[12]),32);
    tracep->fullIData(oldp+94,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[13]),32);
    tracep->fullIData(oldp+95,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[14]),32);
    tracep->fullIData(oldp+96,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[15]),32);
    tracep->fullIData(oldp+97,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[16]),32);
    tracep->fullIData(oldp+98,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[17]),32);
    tracep->fullIData(oldp+99,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[18]),32);
    tracep->fullIData(oldp+100,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[19]),32);
    tracep->fullIData(oldp+101,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[20]),32);
    tracep->fullIData(oldp+102,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[21]),32);
    tracep->fullIData(oldp+103,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[22]),32);
    tracep->fullIData(oldp+104,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[23]),32);
    tracep->fullIData(oldp+105,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[24]),32);
    tracep->fullIData(oldp+106,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[25]),32);
    tracep->fullIData(oldp+107,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[26]),32);
    tracep->fullIData(oldp+108,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[27]),32);
    tracep->fullIData(oldp+109,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[28]),32);
    tracep->fullIData(oldp+110,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[29]),32);
    tracep->fullIData(oldp+111,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[30]),32);
    tracep->fullIData(oldp+112,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[31]),32);
    tracep->fullIData(oldp+113,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__unnamedblk2__DOT__i),32);
    tracep->fullIData(oldp+114,(vlSelf->hw3_tb__DOT__i),32);
    tracep->fullIData(oldp+115,(vlSelf->hw3_tb__DOT__cycle_count),32);
    tracep->fullIData(oldp+116,(vlSelf->hw3_tb__DOT__golden_reg[0]),32);
    tracep->fullIData(oldp+117,(vlSelf->hw3_tb__DOT__golden_reg[1]),32);
    tracep->fullIData(oldp+118,(vlSelf->hw3_tb__DOT__golden_reg[2]),32);
    tracep->fullIData(oldp+119,(vlSelf->hw3_tb__DOT__golden_reg[3]),32);
    tracep->fullIData(oldp+120,(vlSelf->hw3_tb__DOT__golden_reg[4]),32);
    tracep->fullIData(oldp+121,(vlSelf->hw3_tb__DOT__golden_reg[5]),32);
    tracep->fullIData(oldp+122,(vlSelf->hw3_tb__DOT__golden_reg[6]),32);
    tracep->fullIData(oldp+123,(vlSelf->hw3_tb__DOT__golden_reg[7]),32);
    tracep->fullIData(oldp+124,(vlSelf->hw3_tb__DOT__golden_reg[8]),32);
    tracep->fullIData(oldp+125,(vlSelf->hw3_tb__DOT__golden_reg[9]),32);
    tracep->fullIData(oldp+126,(vlSelf->hw3_tb__DOT__golden_reg[10]),32);
    tracep->fullIData(oldp+127,(vlSelf->hw3_tb__DOT__golden_reg[11]),32);
    tracep->fullIData(oldp+128,(vlSelf->hw3_tb__DOT__golden_reg[12]),32);
    tracep->fullIData(oldp+129,(vlSelf->hw3_tb__DOT__golden_reg[13]),32);
    tracep->fullIData(oldp+130,(vlSelf->hw3_tb__DOT__golden_reg[14]),32);
    tracep->fullIData(oldp+131,(vlSelf->hw3_tb__DOT__golden_reg[15]),32);
    tracep->fullIData(oldp+132,(vlSelf->hw3_tb__DOT__golden_reg[16]),32);
    tracep->fullIData(oldp+133,(vlSelf->hw3_tb__DOT__golden_reg[17]),32);
    tracep->fullIData(oldp+134,(vlSelf->hw3_tb__DOT__golden_reg[18]),32);
    tracep->fullIData(oldp+135,(vlSelf->hw3_tb__DOT__golden_reg[19]),32);
    tracep->fullIData(oldp+136,(vlSelf->hw3_tb__DOT__golden_reg[20]),32);
    tracep->fullIData(oldp+137,(vlSelf->hw3_tb__DOT__golden_reg[21]),32);
    tracep->fullIData(oldp+138,(vlSelf->hw3_tb__DOT__golden_reg[22]),32);
    tracep->fullIData(oldp+139,(vlSelf->hw3_tb__DOT__golden_reg[23]),32);
    tracep->fullIData(oldp+140,(vlSelf->hw3_tb__DOT__golden_reg[24]),32);
    tracep->fullIData(oldp+141,(vlSelf->hw3_tb__DOT__golden_reg[25]),32);
    tracep->fullIData(oldp+142,(vlSelf->hw3_tb__DOT__golden_reg[26]),32);
    tracep->fullIData(oldp+143,(vlSelf->hw3_tb__DOT__golden_reg[27]),32);
    tracep->fullIData(oldp+144,(vlSelf->hw3_tb__DOT__golden_reg[28]),32);
    tracep->fullIData(oldp+145,(vlSelf->hw3_tb__DOT__golden_reg[29]),32);
    tracep->fullIData(oldp+146,(vlSelf->hw3_tb__DOT__golden_reg[30]),32);
    tracep->fullIData(oldp+147,(vlSelf->hw3_tb__DOT__golden_reg[31]),32);
    tracep->fullIData(oldp+148,(vlSelf->hw3_tb__DOT__golden_dmem[0]),32);
    tracep->fullIData(oldp+149,(vlSelf->hw3_tb__DOT__golden_dmem[1]),32);
    tracep->fullIData(oldp+150,(vlSelf->hw3_tb__DOT__golden_dmem[2]),32);
    tracep->fullIData(oldp+151,(vlSelf->hw3_tb__DOT__golden_dmem[3]),32);
    tracep->fullIData(oldp+152,(vlSelf->hw3_tb__DOT__golden_dmem[4]),32);
    tracep->fullIData(oldp+153,(vlSelf->hw3_tb__DOT__golden_dmem[5]),32);
    tracep->fullIData(oldp+154,(vlSelf->hw3_tb__DOT__golden_dmem[6]),32);
    tracep->fullIData(oldp+155,(vlSelf->hw3_tb__DOT__golden_dmem[7]),32);
    tracep->fullIData(oldp+156,(vlSelf->hw3_tb__DOT__golden_dmem[8]),32);
    tracep->fullIData(oldp+157,(vlSelf->hw3_tb__DOT__golden_dmem[9]),32);
    tracep->fullIData(oldp+158,(vlSelf->hw3_tb__DOT__golden_dmem[10]),32);
    tracep->fullIData(oldp+159,(vlSelf->hw3_tb__DOT__golden_dmem[11]),32);
    tracep->fullIData(oldp+160,(vlSelf->hw3_tb__DOT__golden_dmem[12]),32);
    tracep->fullIData(oldp+161,(vlSelf->hw3_tb__DOT__golden_dmem[13]),32);
    tracep->fullIData(oldp+162,(vlSelf->hw3_tb__DOT__golden_dmem[14]),32);
    tracep->fullIData(oldp+163,(vlSelf->hw3_tb__DOT__golden_dmem[15]),32);
    tracep->fullBit(oldp+164,(vlSelf->hw3_tb__DOT__start));
    tracep->fullIData(oldp+165,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__pc),32);
    tracep->fullIData(oldp+166,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__beq_addr),32);
    tracep->fullIData(oldp+167,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__instr),32);
    tracep->fullCData(oldp+168,((0x3fU & vlSelf->hw3_tb__DOT__core_top_inst__DOT__pc)),6);
    tracep->fullBit(oldp+169,(vlSelf->clk));
    tracep->fullBit(oldp+170,(vlSelf->rst));
    tracep->fullBit(oldp+171,(vlSelf->finish));
    tracep->fullIData(oldp+172,(0x20U),32);
    tracep->fullIData(oldp+173,(vlSelf->hw3_tb__DOT__tmp),32);
    tracep->fullIData(oldp+174,(0x14U),32);
    tracep->fullCData(oldp+175,(0U),3);
    tracep->fullCData(oldp+176,(1U),3);
    tracep->fullCData(oldp+177,(2U),3);
    tracep->fullCData(oldp+178,(3U),3);
    tracep->fullCData(oldp+179,(4U),3);
    tracep->fullIData(oldp+180,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__ra),32);
    tracep->fullCData(oldp+181,(0U),4);
    tracep->fullCData(oldp+182,(1U),4);
    tracep->fullCData(oldp+183,(2U),4);
    tracep->fullCData(oldp+184,(6U),4);
    tracep->fullCData(oldp+185,(0xcU),4);
    tracep->fullCData(oldp+186,(7U),4);
    tracep->fullCData(oldp+187,(0xfU),4);
}
