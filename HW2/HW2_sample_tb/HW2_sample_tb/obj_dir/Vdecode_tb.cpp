// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vdecode_tb.h"
#include "Vdecode_tb__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vdecode_tb::Vdecode_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vdecode_tb__Syms(_vcontextp__, _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , finish{vlSymsp->TOP.finish}
    , rootp{&(vlSymsp->TOP)}
{
}

Vdecode_tb::Vdecode_tb(const char* _vcname__)
    : Vdecode_tb(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vdecode_tb::~Vdecode_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vdecode_tb___024root___eval_initial(Vdecode_tb___024root* vlSelf);
void Vdecode_tb___024root___eval_settle(Vdecode_tb___024root* vlSelf);
void Vdecode_tb___024root___eval(Vdecode_tb___024root* vlSelf);
#ifdef VL_DEBUG
void Vdecode_tb___024root___eval_debug_assertions(Vdecode_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vdecode_tb___024root___final(Vdecode_tb___024root* vlSelf);

static void _eval_initial_loop(Vdecode_tb__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vdecode_tb___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vdecode_tb___024root___eval_settle(&(vlSymsp->TOP));
        Vdecode_tb___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vdecode_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vdecode_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vdecode_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vdecode_tb___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* Vdecode_tb::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vdecode_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vdecode_tb::final() {
    Vdecode_tb___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void Vdecode_tb___024root__trace_init_top(Vdecode_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vdecode_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdecode_tb___024root*>(voidSelf);
    Vdecode_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vdecode_tb___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vdecode_tb___024root__trace_register(Vdecode_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vdecode_tb::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vdecode_tb___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
