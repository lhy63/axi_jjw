// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTopAxiMasterWandRWithSlave.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTopAxiMasterWandRWithSlave_TopAxiMasterWandRWithSlave.h"
#include "VTopAxiMasterWandRWithSlave__Syms.h"

VL_ATTR_COLD void VTopAxiMasterWandRWithSlave_TopAxiMasterWandRWithSlave___settle__TOP__TopAxiMasterWandRWithSlave__3(VTopAxiMasterWandRWithSlave_TopAxiMasterWandRWithSlave* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTopAxiMasterWandRWithSlave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VTopAxiMasterWandRWithSlave_TopAxiMasterWandRWithSlave___settle__TOP__TopAxiMasterWandRWithSlave__3\n"); );
    // Body
    vlSelf->__PVT__axiSlave_apstart = ((IData)(vlSymsp->TOP.io_wapStart) 
                                       | (IData)(vlSymsp->TOP.io_rapStart));
    vlSelf->__PVT__axiMasterRead__DOT___zz_regArAddr 
        = (0xffffffffffULL & ((QData)((IData)(((IData)(1U) 
                                               + vlSelf->__PVT__axiMasterRead__DOT__regArAddr))) 
                              << 8U));
    vlSelf->__PVT__axiMasterWrite__DOT___zz_regAwAddr 
        = (0xffffffffffULL & ((QData)((IData)(((IData)(1U) 
                                               + vlSelf->__PVT__axiMasterWrite__DOT__regAwAddr))) 
                              << 8U));
    vlSelf->__PVT__axiMasterWrite__DOT__buffer_1_io_flush = 0U;
    if (vlSelf->__PVT__axiMasterWrite__DOT__regApDone) {
        vlSelf->__PVT__axiMasterWrite__DOT__buffer_1_io_flush = 1U;
    }
    vlSelf->__PVT__axiMasterWrite__DOT__when_AxiMasterWrite_l197 
        = ((((IData)(vlSelf->__PVT__axiMasterWrite__DOT__regApStart) 
             & (~ (IData)(vlSelf->__PVT__axiMasterWrite__DOT__regConfigFinish))) 
            & (~ (IData)(vlSelf->__PVT__axiMasterWrite__DOT__regWriteFinish))) 
           & ((IData)(vlSelf->__PVT__axiMasterWrite__DOT__firstIn) 
              | (IData)(vlSymsp->TOP__TopAxiMasterWandRWithSlave__axiSlave.__PVT__writeSuccess)));
    vlSelf->__PVT__axiMasterRead__DOT__when_AxiMasterRead_l67 
        = (((IData)(vlSelf->__PVT__axiMasterRead__DOT__regApStart) 
            & (IData)(vlSelf->__PVT__axiMasterRead__DOT__regConfigFinish)) 
           & (~ (IData)(vlSelf->__PVT__axiMasterRead__DOT__regReadFinsh)));
    vlSelf->__PVT__axiMasterWrite__DOT__when_AxiMasterWrite_l218 
        = (((IData)(vlSelf->__PVT__axiMasterWrite__DOT__regApStart) 
            & (~ (IData)(vlSelf->__PVT__axiMasterWrite__DOT__regApDone))) 
           & (IData)(vlSelf->__PVT__axiMasterWrite__DOT__regConfigFinish));
    vlSelf->__PVT__axiMasterRead__DOT__buffer_1__DOT__logic_ptrMatch 
        = ((IData)(vlSelf->__PVT__axiMasterRead__DOT__buffer_1__DOT__logic_pushPtr_value) 
           == (IData)(vlSelf->__PVT__axiMasterRead__DOT__buffer_1__DOT__logic_popPtr_value));
    vlSelf->__PVT__axiMasterWrite__DOT__buffer_1__DOT__logic_ptrMatch 
        = ((IData)(vlSelf->__PVT__axiMasterWrite__DOT__buffer_1__DOT__logic_pushPtr_value) 
           == (IData)(vlSelf->__PVT__axiMasterWrite__DOT__buffer_1__DOT__logic_popPtr_value));
    vlSelf->__PVT__axiMasterRead__DOT__when_AxiMasterRead_l47 
        = (((IData)(vlSelf->__PVT__axiMasterRead__DOT__regApStart) 
            & (~ (IData)(vlSelf->__PVT__axiMasterRead__DOT__regConfigFinish))) 
           & (~ (IData)(vlSelf->__PVT__axiMasterRead__DOT__regReadFinsh)));
    vlSelf->__PVT__axiMasterWrite__DOT__resdata = (vlSelf->__PVT__axiMasterWrite__DOT__regALLWlen 
                                                   - (IData)(vlSelf->__PVT__axiMasterWrite__DOT__dataCounter_value));
    vlSelf->__PVT__axiMasterRead__DOT__resdata = (vlSelf->__PVT__axiMasterRead__DOT__regALLRlen 
                                                  - (IData)(vlSelf->__PVT__axiMasterRead__DOT__dataCounter_value));
    vlSelf->__PVT__axiMasterWrite__DOT__buffer_1__DOT__logic_pushPtr_willClear = 0U;
    if (vlSelf->__PVT__axiMasterWrite__DOT__buffer_1_io_flush) {
        vlSelf->__PVT__axiMasterWrite__DOT__buffer_1__DOT__logic_pushPtr_willClear = 1U;
        vlSelf->__PVT__axiMasterWrite__DOT__buffer_1__DOT__logic_popPtr_willClear = 0U;
        vlSelf->__PVT__axiMasterWrite__DOT__buffer_1__DOT__logic_popPtr_willClear = 1U;
    } else {
        vlSelf->__PVT__axiMasterWrite__DOT__buffer_1__DOT__logic_popPtr_willClear = 0U;
    }
    vlSelf->__PVT__axiMasterRead_io_axiAR_payload_addr 
        = ((IData)(vlSelf->__PVT__axiMasterRead__DOT__when_AxiMasterRead_l67)
            ? vlSelf->__PVT__axiMasterRead__DOT__regArAddr
            : 0U);
    vlSelf->__PVT__axiMasterWrite_io_axiAW_payload_addr 
        = ((IData)(vlSelf->__PVT__axiMasterWrite__DOT__when_AxiMasterWrite_l218)
            ? vlSelf->__PVT__axiMasterWrite__DOT__regAwAddr
            : 0U);
    vlSelf->__PVT__axiMasterRead__DOT__buffer_1_io_occupancy 
        = ((((IData)(vlSelf->__PVT__axiMasterRead__DOT__buffer_1__DOT__logic_risingOccupancy) 
             & (IData)(vlSelf->__PVT__axiMasterRead__DOT__buffer_1__DOT__logic_ptrMatch)) 
            << 5U) | (0x1fU & ((IData)(vlSelf->__PVT__axiMasterRead__DOT__buffer_1__DOT__logic_pushPtr_value) 
                               - (IData)(vlSelf->__PVT__axiMasterRead__DOT__buffer_1__DOT__logic_popPtr_value))));
    vlSelf->__PVT__axiMasterRead__DOT__buffer_1__DOT__logic_full 
        = ((IData)(vlSelf->__PVT__axiMasterRead__DOT__buffer_1__DOT__logic_ptrMatch) 
           & (IData)(vlSelf->__PVT__axiMasterRead__DOT__buffer_1__DOT__logic_risingOccupancy));
    vlSelf->__PVT__axiMasterRead__DOT__buffer_1_io_availability 
        = ((((~ (IData)(vlSelf->__PVT__axiMasterRead__DOT__buffer_1__DOT__logic_risingOccupancy)) 
             & (IData)(vlSelf->__PVT__axiMasterRead__DOT__buffer_1__DOT__logic_ptrMatch)) 
            << 5U) | (0x1fU & ((IData)(vlSelf->__PVT__axiMasterRead__DOT__buffer_1__DOT__logic_popPtr_value) 
                               - (IData)(vlSelf->__PVT__axiMasterRead__DOT__buffer_1__DOT__logic_pushPtr_value))));
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
    vlSelf->__PVT__axiMasterWrite__DOT__when_AxiMasterWrite_l186 
        = ((IData)(vlSymsp->TOP.io_wdata_in_valid) 
           & (IData)(vlSelf->__PVT__axiMasterWrite_io_data_in_ready));
    vlSelf->__PVT__axiMasterWrite__DOT__buffer_1_io_pop_valid 
        = (1U & ((~ ((IData)(vlSelf->__PVT__axiMasterWrite__DOT__buffer_1__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlSelf->__PVT__axiMasterWrite__DOT__buffer_1__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlSelf->__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlSelf->__PVT__axiMasterWrite__DOT__buffer_1__DOT__logic_full))))));
    vlSelf->__PVT__axiMasterRead_io_dataOut_valid = 
        ((0U != (IData)(vlSelf->__PVT__axiMasterRead__DOT__buffer_1_io_occupancy)) 
         & (IData)(vlSelf->__PVT__axiMasterRead__DOT__buffer_1_io_pop_valid));
    vlSelf->__PVT__axiMasterRead__DOT__buffer_1__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__axiMasterRead__DOT__buffer_1_io_pop_valid) 
           & ((0U != (IData)(vlSelf->__PVT__axiMasterRead__DOT__buffer_1_io_occupancy)) 
              & (IData)(vlSymsp->TOP.io_rdataOut_ready)));
    if (vlSelf->__PVT__axiMasterWrite__DOT__when_AxiMasterWrite_l186) {
        vlSelf->__PVT__axiMasterWrite__DOT__buffer_1__DOT__logic_pushing 
            = (1U & (~ (IData)(vlSelf->__PVT__axiMasterWrite__DOT__buffer_1__DOT__logic_full)));
        vlSelf->__PVT__axiMasterWrite__DOT__dataInCounter_willIncrement = 0U;
        vlSelf->__PVT__axiMasterWrite__DOT__dataInCounter_willIncrement = 1U;
    } else {
        vlSelf->__PVT__axiMasterWrite__DOT__buffer_1__DOT__logic_pushing = 0U;
        vlSelf->__PVT__axiMasterWrite__DOT__dataInCounter_willIncrement = 0U;
    }
    vlSelf->__PVT__axiMasterWrite__DOT__when_AxiMasterWrite_l276 
        = ((IData)(vlSelf->__PVT__axiMasterWrite__DOT__regwlast) 
           & ((IData)(vlSelf->__PVT__axiMasterWrite__DOT__buffer_1_io_pop_valid) 
              & (~ (IData)(vlSymsp->TOP__TopAxiMasterWandRWithSlave__axiSlave.__PVT__updataAw))));
    vlSelf->__PVT__axiMasterWrite__DOT__buffer_1__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__axiMasterWrite__DOT__buffer_1_io_pop_valid) 
           & (~ (IData)(vlSymsp->TOP__TopAxiMasterWandRWithSlave__axiSlave.__PVT__updataAw)));
    vlSelf->__PVT__axiMasterRead__DOT__when_AxiMasterRead_l118 
        = (((IData)(vlSelf->__PVT__axiMasterRead__DOT__regReadFinsh) 
            & (1U == (IData)(vlSelf->__PVT__axiMasterRead__DOT__buffer_1_io_occupancy))) 
           & ((IData)(vlSelf->__PVT__axiMasterRead_io_dataOut_valid) 
              & (IData)(vlSymsp->TOP.io_rdataOut_ready)));
    vlSelf->__PVT__axiMasterRead__DOT__buffer_1__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__axiMasterRead__DOT__buffer_1__DOT__logic_popping) {
        vlSelf->__PVT__axiMasterRead__DOT__buffer_1__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__axiMasterWrite__DOT__buffer_1__DOT__logic_pushing) {
        vlSelf->__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_1 = 1U;
        vlSelf->__PVT__axiMasterWrite__DOT__buffer_1__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__axiMasterWrite__DOT__buffer_1__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__axiMasterWrite__DOT__buffer_1__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__axiMasterWrite__DOT__dataInCounter_willOverflow 
        = ((0x12bU == (IData)(vlSelf->__PVT__axiMasterWrite__DOT__dataInCounter_value)) 
           & (IData)(vlSelf->__PVT__axiMasterWrite__DOT__dataInCounter_willIncrement));
    vlSelf->__PVT__axiMasterWrite__DOT__data255flag_willIncrement = 0U;
    if (vlSelf->__PVT__axiMasterWrite__DOT__buffer_1__DOT__logic_popping) {
        vlSelf->__PVT__axiMasterWrite__DOT__data255flag_willIncrement = 1U;
        vlSelf->__PVT__axiMasterWrite__DOT__buffer_1__DOT__logic_popPtr_willIncrement = 0U;
        vlSelf->__PVT__axiMasterWrite__DOT__buffer_1__DOT__logic_popPtr_willIncrement = 1U;
        vlSelf->__PVT__axiMasterWrite__DOT__dataCounter_willIncrement = 0U;
        vlSelf->__PVT__axiMasterWrite__DOT__dataCounter_willIncrement = 1U;
    } else {
        vlSelf->__PVT__axiMasterWrite__DOT__buffer_1__DOT__logic_popPtr_willIncrement = 0U;
        vlSelf->__PVT__axiMasterWrite__DOT__dataCounter_willIncrement = 0U;
    }
    vlSelf->__PVT__axiMasterRead__DOT__buffer_1__DOT__logic_popPtr_valueNext 
        = (0x1fU & ((IData)(vlSelf->__PVT__axiMasterRead__DOT__buffer_1__DOT__logic_popPtr_value) 
                    + (IData)(vlSelf->__PVT__axiMasterRead__DOT__buffer_1__DOT__logic_popPtr_willIncrement)));
    vlSelf->__PVT__axiMasterWrite__DOT__buffer_1__DOT__logic_pushPtr_valueNext 
        = (0x1fU & ((IData)(vlSelf->__PVT__axiMasterWrite__DOT__buffer_1__DOT__logic_pushPtr_value) 
                    + (IData)(vlSelf->__PVT__axiMasterWrite__DOT__buffer_1__DOT__logic_pushPtr_willIncrement)));
    if (vlSelf->__PVT__axiMasterWrite__DOT__buffer_1__DOT__logic_pushPtr_willClear) {
        vlSelf->__PVT__axiMasterWrite__DOT__buffer_1__DOT__logic_pushPtr_valueNext = 0U;
    }
    vlSelf->__PVT__axiMasterWrite__DOT__dataInCounter_willClear = 0U;
    if (vlSelf->__PVT__axiMasterWrite__DOT__dataInCounter_willOverflow) {
        vlSelf->__PVT__axiMasterWrite__DOT__dataInCounter_willClear = 1U;
    }
    vlSelf->__PVT__axiMasterWrite__DOT__buffer_1__DOT__logic_popPtr_valueNext 
        = (0x1fU & ((IData)(vlSelf->__PVT__axiMasterWrite__DOT__buffer_1__DOT__logic_popPtr_value) 
                    + (IData)(vlSelf->__PVT__axiMasterWrite__DOT__buffer_1__DOT__logic_popPtr_willIncrement)));
    if (vlSelf->__PVT__axiMasterWrite__DOT__buffer_1__DOT__logic_popPtr_willClear) {
        vlSelf->__PVT__axiMasterWrite__DOT__buffer_1__DOT__logic_popPtr_valueNext = 0U;
    }
    vlSelf->__PVT__axiMasterWrite__DOT__dataCounter_willOverflow 
        = ((0x12bU == (IData)(vlSelf->__PVT__axiMasterWrite__DOT__dataCounter_value)) 
           & (IData)(vlSelf->__PVT__axiMasterWrite__DOT__dataCounter_willIncrement));
    vlSelf->__PVT__axiMasterWrite__DOT__dataInCounter_valueNext 
        = ((IData)(vlSelf->__PVT__axiMasterWrite__DOT__dataInCounter_willOverflow)
            ? 0U : (0x1ffU & ((IData)(vlSelf->__PVT__axiMasterWrite__DOT__dataInCounter_value) 
                              + (IData)(vlSelf->__PVT__axiMasterWrite__DOT__dataInCounter_willIncrement))));
    if (vlSelf->__PVT__axiMasterWrite__DOT__dataInCounter_willClear) {
        vlSelf->__PVT__axiMasterWrite__DOT__dataInCounter_valueNext = 0U;
    }
    vlSelf->__PVT__axiMasterWrite__DOT__data255flag_willClear = 0U;
    if (vlSelf->__PVT__axiMasterWrite__DOT__dataCounter_willOverflow) {
        vlSelf->__PVT__axiMasterWrite__DOT__data255flag_willClear = 1U;
        vlSelf->__PVT__axiMasterWrite__DOT__dataCounter_willClear = 0U;
        vlSelf->__PVT__axiMasterWrite__DOT__dataCounter_willClear = 1U;
    } else {
        vlSelf->__PVT__axiMasterWrite__DOT__dataCounter_willClear = 0U;
    }
    vlSelf->__PVT__axiMasterWrite__DOT__data255flag_valueNext 
        = (0xffU & ((IData)(vlSelf->__PVT__axiMasterWrite__DOT__data255flag_value) 
                    + (IData)(vlSelf->__PVT__axiMasterWrite__DOT__data255flag_willIncrement)));
    if (vlSelf->__PVT__axiMasterWrite__DOT__data255flag_willClear) {
        vlSelf->__PVT__axiMasterWrite__DOT__data255flag_valueNext = 0U;
    }
    vlSelf->__PVT__axiMasterWrite__DOT__dataCounter_valueNext 
        = ((IData)(vlSelf->__PVT__axiMasterWrite__DOT__dataCounter_willOverflow)
            ? 0U : (0x1ffU & ((IData)(vlSelf->__PVT__axiMasterWrite__DOT__dataCounter_value) 
                              + (IData)(vlSelf->__PVT__axiMasterWrite__DOT__dataCounter_willIncrement))));
    if (vlSelf->__PVT__axiMasterWrite__DOT__dataCounter_willClear) {
        vlSelf->__PVT__axiMasterWrite__DOT__dataCounter_valueNext = 0U;
    }
}

VL_ATTR_COLD void VTopAxiMasterWandRWithSlave_TopAxiMasterWandRWithSlave___settle__TOP__TopAxiMasterWandRWithSlave__4(VTopAxiMasterWandRWithSlave_TopAxiMasterWandRWithSlave* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTopAxiMasterWandRWithSlave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VTopAxiMasterWandRWithSlave_TopAxiMasterWandRWithSlave___settle__TOP__TopAxiMasterWandRWithSlave__4\n"); );
    // Body
    vlSelf->__PVT__axiMasterRead__DOT__when_AxiMasterRead_l97 
        = ((IData)(vlSymsp->TOP__TopAxiMasterWandRWithSlave__axiSlave.__PVT__axiSignal_r_valid) 
           & (0U != (IData)(vlSelf->__PVT__axiMasterRead__DOT__buffer_1_io_availability)));
    if (vlSelf->__PVT__axiMasterRead__DOT__when_AxiMasterRead_l97) {
        vlSelf->__PVT__axiMasterRead__DOT__buffer_1__DOT__logic_pushing 
            = (1U & (~ (IData)(vlSelf->__PVT__axiMasterRead__DOT__buffer_1__DOT__logic_full)));
        vlSelf->__PVT__axiMasterRead__DOT__dataCounter_willIncrement = 0U;
        vlSelf->__PVT__axiMasterRead__DOT__dataCounter_willIncrement = 1U;
    } else {
        vlSelf->__PVT__axiMasterRead__DOT__buffer_1__DOT__logic_pushing = 0U;
        vlSelf->__PVT__axiMasterRead__DOT__dataCounter_willIncrement = 0U;
    }
    vlSelf->__PVT__axiMasterRead__DOT__buffer_1__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__axiMasterRead__DOT__buffer_1__DOT__logic_pushing) {
        vlSelf->__PVT__axiMasterRead__DOT__buffer_1__DOT___zz_1 = 1U;
        vlSelf->__PVT__axiMasterRead__DOT__buffer_1__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__axiMasterRead__DOT__buffer_1__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__axiMasterRead__DOT__buffer_1__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__axiMasterRead__DOT__dataCounter_willOverflow 
        = ((0x12bU == (IData)(vlSelf->__PVT__axiMasterRead__DOT__dataCounter_value)) 
           & (IData)(vlSelf->__PVT__axiMasterRead__DOT__dataCounter_willIncrement));
    vlSelf->__PVT__axiMasterRead__DOT__buffer_1__DOT__logic_pushPtr_valueNext 
        = (0x1fU & ((IData)(vlSelf->__PVT__axiMasterRead__DOT__buffer_1__DOT__logic_pushPtr_value) 
                    + (IData)(vlSelf->__PVT__axiMasterRead__DOT__buffer_1__DOT__logic_pushPtr_willIncrement)));
    vlSelf->__PVT__axiMasterRead__DOT__dataCounter_valueNext 
        = ((IData)(vlSelf->__PVT__axiMasterRead__DOT__dataCounter_willOverflow)
            ? 0U : (0x1ffU & ((IData)(vlSelf->__PVT__axiMasterRead__DOT__dataCounter_value) 
                              + (IData)(vlSelf->__PVT__axiMasterRead__DOT__dataCounter_willIncrement))));
}
