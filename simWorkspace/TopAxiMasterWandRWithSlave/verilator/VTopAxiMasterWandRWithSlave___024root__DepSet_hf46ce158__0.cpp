// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTopAxiMasterWandRWithSlave.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTopAxiMasterWandRWithSlave___024root.h"

#ifdef VL_DEBUG
void VTopAxiMasterWandRWithSlave___024root___eval_debug_assertions(VTopAxiMasterWandRWithSlave___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTopAxiMasterWandRWithSlave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopAxiMasterWandRWithSlave___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->io_rdataOut_ready & 0xfeU))) {
        Verilated::overWidthError("io_rdataOut_ready");}
    if (VL_UNLIKELY((vlSelf->io_rapStart & 0xfeU))) {
        Verilated::overWidthError("io_rapStart");}
    if (VL_UNLIKELY((vlSelf->io_wapStart & 0xfeU))) {
        Verilated::overWidthError("io_wapStart");}
    if (VL_UNLIKELY((vlSelf->io_wdata_in_valid & 0xfeU))) {
        Verilated::overWidthError("io_wdata_in_valid");}
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
