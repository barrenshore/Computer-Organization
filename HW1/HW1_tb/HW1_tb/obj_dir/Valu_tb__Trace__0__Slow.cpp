// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Valu_tb__Syms.h"


VL_ATTR_COLD void Valu_tb___024root__trace_init_sub__TOP__0(Valu_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+12,"clk", false,-1);
    tracep->declBit(c+13,"finish", false,-1);
    tracep->pushNamePrefix("alu_tb ");
    tracep->declBit(c+12,"clk", false,-1);
    tracep->declBit(c+13,"finish", false,-1);
    tracep->declBus(c+15,"DWIDTH", false,-1, 31,0);
    tracep->declBus(c+1,"op", false,-1, 3,0);
    tracep->declBus(c+2,"rs1", false,-1, 31,0);
    tracep->declBus(c+3,"rs2", false,-1, 31,0);
    tracep->declBus(c+4,"rd", false,-1, 31,0);
    tracep->declBus(c+5,"ans_rd", false,-1, 31,0);
    tracep->declBit(c+6,"zero", false,-1);
    tracep->declBit(c+7,"ans_zero", false,-1);
    tracep->declBit(c+8,"overflow", false,-1);
    tracep->declBit(c+9,"ans_overflow", false,-1);
    tracep->declBus(c+14,"i", false,-1, 31,0);
    tracep->declBus(c+10,"pattern", false,-1, 31,0);
    tracep->declBus(c+11,"temp", false,-1, 31,0);
    tracep->pushNamePrefix("alu ");
    tracep->declBus(c+15,"DWIDTH", false,-1, 31,0);
    tracep->declBus(c+1,"op", false,-1, 3,0);
    tracep->declBus(c+2,"rs1", false,-1, 31,0);
    tracep->declBus(c+3,"rs2", false,-1, 31,0);
    tracep->declBus(c+4,"rd", false,-1, 31,0);
    tracep->declBit(c+6,"zero", false,-1);
    tracep->declBit(c+8,"overflow", false,-1);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Valu_tb___024root__trace_init_top(Valu_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root__trace_init_top\n"); );
    // Body
    Valu_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Valu_tb___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void Valu_tb___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void Valu_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Valu_tb___024root__trace_register(Valu_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Valu_tb___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Valu_tb___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Valu_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Valu_tb___024root__trace_full_sub_0(Valu_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Valu_tb___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root__trace_full_top_0\n"); );
    // Init
    Valu_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Valu_tb___024root*>(voidSelf);
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Valu_tb___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void Valu_tb___024root__trace_full_sub_0(Valu_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullCData(oldp+1,(vlSelf->alu_tb__DOT__op),4);
    tracep->fullIData(oldp+2,(vlSelf->alu_tb__DOT__rs1),32);
    tracep->fullIData(oldp+3,(vlSelf->alu_tb__DOT__rs2),32);
    tracep->fullIData(oldp+4,(vlSelf->alu_tb__DOT__rd),32);
    tracep->fullIData(oldp+5,(vlSelf->alu_tb__DOT__ans_rd),32);
    tracep->fullBit(oldp+6,(vlSelf->alu_tb__DOT__zero));
    tracep->fullBit(oldp+7,(vlSelf->alu_tb__DOT__ans_zero));
    tracep->fullBit(oldp+8,(vlSelf->alu_tb__DOT__overflow));
    tracep->fullBit(oldp+9,(vlSelf->alu_tb__DOT__ans_overflow));
    tracep->fullIData(oldp+10,(vlSelf->alu_tb__DOT__pattern),32);
    tracep->fullIData(oldp+11,(vlSelf->alu_tb__DOT__temp),32);
    tracep->fullBit(oldp+12,(vlSelf->clk));
    tracep->fullBit(oldp+13,(vlSelf->finish));
    tracep->fullIData(oldp+14,(vlSelf->alu_tb__DOT__i),32);
    tracep->fullIData(oldp+15,(0x20U),32);
}
