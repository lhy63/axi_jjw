// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTopAxiMasterWandRWithSlave.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTopAxiMasterWandRWithSlave_TopAxiMasterWandRWithSlave.h"

VL_INLINE_OPT void VTopAxiMasterWandRWithSlave_TopAxiMasterWandRWithSlave___sequent__TOP__TopAxiMasterWandRWithSlave__7(VTopAxiMasterWandRWithSlave_TopAxiMasterWandRWithSlave* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTopAxiMasterWandRWithSlave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VTopAxiMasterWandRWithSlave_TopAxiMasterWandRWithSlave___sequent__TOP__TopAxiMasterWandRWithSlave__7\n"); );
    // Body
    vlSelf->__PVT__axiMasterRead__DOT__buffer_1__DOT__logic_full 
        = ((IData)(vlSelf->__PVT__axiMasterRead__DOT__buffer_1__DOT__logic_ptrMatch) 
           & (IData)(vlSelf->__PVT__axiMasterRead__DOT__buffer_1__DOT__logic_risingOccupancy));
    vlSelf->__PVT__axiMasterWrite_io_data_in_ready 
        = (((0U != ((((~ (IData)(vlSelf->__PVT__axiMasterWrite__DOT__buffer_1__DOT__logic_risingOccupancy)) 
                      & (IData)(vlSelf->__PVT__axiMasterWrite__DOT__buffer_1__DOT__logic_ptrMatch)) 
                     << 5U) | (0x1fU & ((IData)(vlSelf->__PVT__axiMasterWrite__DOT__buffer_1__DOT__logic_popPtr_value) 
                                        - (IData)(vlSelf->__PVT__axiMasterWrite__DOT__buffer_1__DOT__logic_pushPtr_value))))) 
            & (~ (IData)(vlSelf->__PVT__axiMasterWrite__DOT__regWriteFinish))) 
           & (IData)(vlSelf->__PVT__axiMasterWrite__DOT__regApStart));
    vlSelf->__PVT__axiMasterWrite__DOT__buffer_1__DOT__logic_full 
        = ((IData)(vlSelf->__PVT__axiMasterWrite__DOT__buffer_1__DOT__logic_ptrMatch) 
           & (IData)(vlSelf->__PVT__axiMasterWrite__DOT__buffer_1__DOT__logic_risingOccupancy));
    vlSelf->__PVT__axiMasterRead__DOT__buffer_1_io_pop_valid 
        = (1U & ((~ ((IData)(vlSelf->__PVT__axiMasterRead__DOT__buffer_1__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlSelf->__PVT__axiMasterRead__DOT__buffer_1__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlSelf->__PVT__axiMasterRead__DOT__buffer_1__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlSelf->__PVT__axiMasterRead__DOT__buffer_1__DOT__logic_full))))));
    vlSelf->__PVT__axiMasterRead_io_dataOut_valid = 
        ((0U != (IData)(vlSelf->__PVT__axiMasterRead__DOT__buffer_1_io_occupancy)) 
         & (IData)(vlSelf->__PVT__axiMasterRead__DOT__buffer_1_io_pop_valid));
}

VL_INLINE_OPT void VTopAxiMasterWandRWithSlave_TopAxiMasterWandRWithSlave___sequent__TOP__TopAxiMasterWandRWithSlave__10(VTopAxiMasterWandRWithSlave_TopAxiMasterWandRWithSlave* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTopAxiMasterWandRWithSlave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VTopAxiMasterWandRWithSlave_TopAxiMasterWandRWithSlave___sequent__TOP__TopAxiMasterWandRWithSlave__10\n"); );
    // Body
    vlSelf->__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0 
        = vlSelf->__PVT__axiMasterWrite__DOT__buffer_1__DOT__logic_ram
        [vlSelf->__PVT__axiMasterWrite__DOT__buffer_1__DOT__logic_popPtr_valueNext];
    if (vlSelf->__Vdlyvset__axiMasterWrite__DOT__buffer_1__DOT__logic_ram__v0) {
        vlSelf->__PVT__axiMasterWrite__DOT__buffer_1__DOT__logic_ram[vlSelf->__Vdlyvdim0__axiMasterWrite__DOT__buffer_1__DOT__logic_ram__v0] 
            = vlSelf->__Vdlyvval__axiMasterWrite__DOT__buffer_1__DOT__logic_ram__v0;
    }
}

VL_INLINE_OPT void VTopAxiMasterWandRWithSlave_TopAxiMasterWandRWithSlave___sequent__TOP__TopAxiMasterWandRWithSlave__11(VTopAxiMasterWandRWithSlave_TopAxiMasterWandRWithSlave* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTopAxiMasterWandRWithSlave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VTopAxiMasterWandRWithSlave_TopAxiMasterWandRWithSlave___sequent__TOP__TopAxiMasterWandRWithSlave__11\n"); );
    // Body
    vlSelf->__PVT__axiMasterWrite__DOT__buffer_1__DOT__logic_popPtr_valueNext 
        = (0x1fU & ((IData)(vlSelf->__PVT__axiMasterWrite__DOT__buffer_1__DOT__logic_popPtr_value) 
                    + (IData)(vlSelf->__PVT__axiMasterWrite__DOT__buffer_1__DOT__logic_popPtr_willIncrement)));
    if (vlSelf->__PVT__axiMasterWrite__DOT__buffer_1__DOT__logic_popPtr_willClear) {
        vlSelf->__PVT__axiMasterWrite__DOT__buffer_1__DOT__logic_popPtr_valueNext = 0U;
    }
}
