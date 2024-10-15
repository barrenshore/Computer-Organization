// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Valu_tb.h"
#include "Valu_tb__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Valu_tb::Valu_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Valu_tb__Syms(_vcontextp__, _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , finish{vlSymsp->TOP.finish}
    , rootp{&(vlSymsp->TOP)}
{
}

Valu_tb::Valu_tb(const char* _vcname__)
    : Valu_tb(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Valu_tb::~Valu_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Valu_tb___024root___eval_initial(Valu_tb___024root* vlSelf);
void Valu_tb___024root___eval_settle(Valu_tb___024root* vlSelf);
void Valu_tb___024root___eval(Valu_tb___024root* vlSelf);
#ifdef VL_DEBUG
void Valu_tb___024root___eval_debug_assertions(Valu_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Valu_tb___024root___final(Valu_tb___024root* vlSelf);

static void _eval_initial_loop(Valu_tb__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Valu_tb___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Valu_tb___024root___eval_settle(&(vlSymsp->TOP));
        Valu_tb___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Valu_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Valu_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Valu_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Valu_tb___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* Valu_tb::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Valu_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Valu_tb::final() {
    Valu_tb___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void Valu_tb___024root__trace_init_top(Valu_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Valu_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Valu_tb___024root*>(voidSelf);
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Valu_tb___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Valu_tb___024root__trace_register(Valu_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Valu_tb::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Valu_tb___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
