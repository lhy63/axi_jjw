// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTopAxiMasterWandRWithSlave.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTopAxiMasterWandRWithSlave__Syms.h"
#include "VTopAxiMasterWandRWithSlave___024root.h"

VL_ATTR_COLD void VTopAxiMasterWandRWithSlave___024root___settle__TOP__1(VTopAxiMasterWandRWithSlave___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTopAxiMasterWandRWithSlave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopAxiMasterWandRWithSlave___024root___settle__TOP__1\n"); );
    // Body
    vlSelf->io_wapDone = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__regApDone;
    vlSelf->io_rapDone = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterRead__DOT__regApDone;
    vlSelf->io_rdataOut_payload = ((0U != (IData)(vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterRead__DOT__buffer_1_io_occupancy))
                                    ? (IData)(vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterRead__DOT__buffer_1__DOT___zz_logic_ram_port0)
                                    : 0U);
    vlSelf->io_wdata_in_ready = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite_io_data_in_ready;
    vlSelf->io_rdataOut_valid = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterRead_io_dataOut_valid;
}

VL_ATTR_COLD void VTopAxiMasterWandRWithSlave_TopAxiMasterWandRWithSlave___settle__TOP__TopAxiMasterWandRWithSlave__3(VTopAxiMasterWandRWithSlave_TopAxiMasterWandRWithSlave* vlSelf);
VL_ATTR_COLD void VTopAxiMasterWandRWithSlave_Axi4_transmission___settle__TOP__TopAxiMasterWandRWithSlave__axiSlave__1(VTopAxiMasterWandRWithSlave_Axi4_transmission* vlSelf);
VL_ATTR_COLD void VTopAxiMasterWandRWithSlave_Axi4_transmission___settle__TOP__TopAxiMasterWandRWithSlave__axiSlave__2(VTopAxiMasterWandRWithSlave_Axi4_transmission* vlSelf);
VL_ATTR_COLD void VTopAxiMasterWandRWithSlave_TopAxiMasterWandRWithSlave___settle__TOP__TopAxiMasterWandRWithSlave__4(VTopAxiMasterWandRWithSlave_TopAxiMasterWandRWithSlave* vlSelf);

VL_ATTR_COLD void VTopAxiMasterWandRWithSlave___024root___eval_settle(VTopAxiMasterWandRWithSlave___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTopAxiMasterWandRWithSlave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopAxiMasterWandRWithSlave___024root___eval_settle\n"); );
    // Body
    VTopAxiMasterWandRWithSlave_TopAxiMasterWandRWithSlave___settle__TOP__TopAxiMasterWandRWithSlave__3((&vlSymsp->TOP__TopAxiMasterWandRWithSlave));
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    VTopAxiMasterWandRWithSlave___024root___settle__TOP__1(vlSelf);
    VTopAxiMasterWandRWithSlave_Axi4_transmission___settle__TOP__TopAxiMasterWandRWithSlave__axiSlave__1((&vlSymsp->TOP__TopAxiMasterWandRWithSlave__axiSlave));
    VTopAxiMasterWandRWithSlave_Axi4_transmission___settle__TOP__TopAxiMasterWandRWithSlave__axiSlave__2((&vlSymsp->TOP__TopAxiMasterWandRWithSlave__axiSlave));
    VTopAxiMasterWandRWithSlave_TopAxiMasterWandRWithSlave___settle__TOP__TopAxiMasterWandRWithSlave__4((&vlSymsp->TOP__TopAxiMasterWandRWithSlave));
}
