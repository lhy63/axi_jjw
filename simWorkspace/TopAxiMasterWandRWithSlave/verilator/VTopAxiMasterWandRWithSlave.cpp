// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VTopAxiMasterWandRWithSlave.h"
#include "VTopAxiMasterWandRWithSlave__Syms.h"
#include "verilated_fst_c.h"
#include "verilated_dpi.h"

//============================================================
// Constructors

VTopAxiMasterWandRWithSlave::VTopAxiMasterWandRWithSlave(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VTopAxiMasterWandRWithSlave__Syms(_vcontextp__, _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset{vlSymsp->TOP.reset}
    , io_rdataOut_valid{vlSymsp->TOP.io_rdataOut_valid}
    , io_rdataOut_ready{vlSymsp->TOP.io_rdataOut_ready}
    , io_rdataOut_payload{vlSymsp->TOP.io_rdataOut_payload}
    , io_rapStart{vlSymsp->TOP.io_rapStart}
    , io_rapDone{vlSymsp->TOP.io_rapDone}
    , io_wapStart{vlSymsp->TOP.io_wapStart}
    , io_wdata_in_valid{vlSymsp->TOP.io_wdata_in_valid}
    , io_wdata_in_ready{vlSymsp->TOP.io_wdata_in_ready}
    , io_wdata_in_payload{vlSymsp->TOP.io_wdata_in_payload}
    , io_wapDone{vlSymsp->TOP.io_wapDone}
    , io_RAddrOffset{vlSymsp->TOP.io_RAddrOffset}
    , io_Rlen{vlSymsp->TOP.io_Rlen}
    , io_WAddrOffset{vlSymsp->TOP.io_WAddrOffset}
    , io_Wlen{vlSymsp->TOP.io_Wlen}
    , TopAxiMasterWandRWithSlave{vlSymsp->TOP.TopAxiMasterWandRWithSlave}
    , rootp{&(vlSymsp->TOP)}
{
}

VTopAxiMasterWandRWithSlave::VTopAxiMasterWandRWithSlave(const char* _vcname__)
    : VTopAxiMasterWandRWithSlave(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VTopAxiMasterWandRWithSlave::~VTopAxiMasterWandRWithSlave() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VTopAxiMasterWandRWithSlave___024root___eval_initial(VTopAxiMasterWandRWithSlave___024root* vlSelf);
void VTopAxiMasterWandRWithSlave___024root___eval_settle(VTopAxiMasterWandRWithSlave___024root* vlSelf);
void VTopAxiMasterWandRWithSlave___024root___eval(VTopAxiMasterWandRWithSlave___024root* vlSelf);
#ifdef VL_DEBUG
void VTopAxiMasterWandRWithSlave___024root___eval_debug_assertions(VTopAxiMasterWandRWithSlave___024root* vlSelf);
#endif  // VL_DEBUG
void VTopAxiMasterWandRWithSlave___024root___final(VTopAxiMasterWandRWithSlave___024root* vlSelf);

static void _eval_initial_loop(VTopAxiMasterWandRWithSlave__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VTopAxiMasterWandRWithSlave___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VTopAxiMasterWandRWithSlave___024root___eval_settle(&(vlSymsp->TOP));
        VTopAxiMasterWandRWithSlave___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VTopAxiMasterWandRWithSlave::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VTopAxiMasterWandRWithSlave::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VTopAxiMasterWandRWithSlave___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VTopAxiMasterWandRWithSlave___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VTopAxiMasterWandRWithSlave::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VTopAxiMasterWandRWithSlave::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VTopAxiMasterWandRWithSlave::final() {
    VTopAxiMasterWandRWithSlave___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VTopAxiMasterWandRWithSlave___024root__trace_init_top(VTopAxiMasterWandRWithSlave___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedFst* tracep, uint32_t code) {
    // Callback from tracep->open()
    VTopAxiMasterWandRWithSlave___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTopAxiMasterWandRWithSlave___024root*>(voidSelf);
    VTopAxiMasterWandRWithSlave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VTopAxiMasterWandRWithSlave___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VTopAxiMasterWandRWithSlave___024root__trace_register(VTopAxiMasterWandRWithSlave___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void VTopAxiMasterWandRWithSlave::trace(VerilatedFstC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VTopAxiMasterWandRWithSlave___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
