// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTopAxiMasterWandRWithSlave.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTopAxiMasterWandRWithSlave___024root.h"

VL_ATTR_COLD void VTopAxiMasterWandRWithSlave___024root___eval_initial(VTopAxiMasterWandRWithSlave___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTopAxiMasterWandRWithSlave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopAxiMasterWandRWithSlave___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__reset = vlSelf->reset;
}

VL_ATTR_COLD void VTopAxiMasterWandRWithSlave___024root___final(VTopAxiMasterWandRWithSlave___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTopAxiMasterWandRWithSlave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopAxiMasterWandRWithSlave___024root___final\n"); );
}

VL_ATTR_COLD void VTopAxiMasterWandRWithSlave___024root___ctor_var_reset(VTopAxiMasterWandRWithSlave___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTopAxiMasterWandRWithSlave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopAxiMasterWandRWithSlave___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->io_rdataOut_valid = VL_RAND_RESET_I(1);
    vlSelf->io_rdataOut_ready = VL_RAND_RESET_I(1);
    vlSelf->io_rdataOut_payload = VL_RAND_RESET_I(8);
    vlSelf->io_rapStart = VL_RAND_RESET_I(1);
    vlSelf->io_RAddrOffset = VL_RAND_RESET_I(32);
    vlSelf->io_Rlen = VL_RAND_RESET_I(32);
    vlSelf->io_rapDone = VL_RAND_RESET_I(1);
    vlSelf->io_wapStart = VL_RAND_RESET_I(1);
    vlSelf->io_wdata_in_valid = VL_RAND_RESET_I(1);
    vlSelf->io_wdata_in_ready = VL_RAND_RESET_I(1);
    vlSelf->io_wdata_in_payload = VL_RAND_RESET_I(8);
    vlSelf->io_WAddrOffset = VL_RAND_RESET_I(32);
    vlSelf->io_Wlen = VL_RAND_RESET_I(32);
    vlSelf->io_wapDone = VL_RAND_RESET_I(1);
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
