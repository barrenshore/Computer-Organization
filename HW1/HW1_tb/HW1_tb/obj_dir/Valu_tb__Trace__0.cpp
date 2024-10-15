// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Valu_tb__Syms.h"


void Valu_tb___024root__trace_chg_sub_0(Valu_tb___024root* vlSelf, VerilatedVcd* tracep);

void Valu_tb___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root__trace_chg_top_0\n"); );
    // Init
    Valu_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Valu_tb___024root*>(voidSelf);
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Valu_tb___024root__trace_chg_sub_0((&vlSymsp->TOP), tracep);
}

void Valu_tb___024root__trace_chg_sub_0(Valu_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root__trace_chg_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgCData(oldp+0,(vlSelf->alu_tb__DOT__op),4);
        tracep->chgIData(oldp+1,(vlSelf->alu_tb__DOT__rs1),32);
        tracep->chgIData(oldp+2,(vlSelf->alu_tb__DOT__rs2),32);
        tracep->chgIData(oldp+3,(vlSelf->alu_tb__DOT__rd),32);
        tracep->chgIData(oldp+4,(vlSelf->alu_tb__DOT__ans_rd),32);
        tracep->chgBit(oldp+5,(vlSelf->alu_tb__DOT__zero));
        tracep->chgBit(oldp+6,(vlSelf->alu_tb__DOT__ans_zero));
        tracep->chgBit(oldp+7,(vlSelf->alu_tb__DOT__overflow));
        tracep->chgBit(oldp+8,(vlSelf->alu_tb__DOT__ans_overflow));
        tracep->chgIData(oldp+9,(vlSelf->alu_tb__DOT__pattern),32);
        tracep->chgIData(oldp+10,(vlSelf->alu_tb__DOT__temp),32);
    }
    tracep->chgBit(oldp+11,(vlSelf->clk));
    tracep->chgBit(oldp+12,(vlSelf->finish));
    tracep->chgIData(oldp+13,(vlSelf->alu_tb__DOT__i),32);
}

void Valu_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root__trace_cleanup\n"); );
    // Init
    Valu_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Valu_tb___024root*>(voidSelf);
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
