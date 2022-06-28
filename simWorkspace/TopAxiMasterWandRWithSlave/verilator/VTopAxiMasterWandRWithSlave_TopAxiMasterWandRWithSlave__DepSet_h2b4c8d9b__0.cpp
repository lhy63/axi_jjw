// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTopAxiMasterWandRWithSlave.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTopAxiMasterWandRWithSlave_TopAxiMasterWandRWithSlave.h"
#include "VTopAxiMasterWandRWithSlave__Syms.h"

VL_INLINE_OPT void VTopAxiMasterWandRWithSlave_TopAxiMasterWandRWithSlave___sequent__TOP__TopAxiMasterWandRWithSlave__1(VTopAxiMasterWandRWithSlave_TopAxiMasterWandRWithSlave* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTopAxiMasterWandRWithSlave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VTopAxiMasterWandRWithSlave_TopAxiMasterWandRWithSlave___sequent__TOP__TopAxiMasterWandRWithSlave__1\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__axiMasterRead__DOT__buffer_1__DOT__logic_ram__v0;
    CData/*7:0*/ __Vdlyvval__axiMasterRead__DOT__buffer_1__DOT__logic_ram__v0;
    CData/*0:0*/ __Vdlyvset__axiMasterRead__DOT__buffer_1__DOT__logic_ram__v0;
    // Body
    __Vdlyvset__axiMasterRead__DOT__buffer_1__DOT__logic_ram__v0 = 0U;
    vlSelf->__Vdlyvset__axiMasterWrite__DOT__buffer_1__DOT__logic_ram__v0 = 0U;
    vlSelf->__PVT__axiMasterRead__DOT__buffer_1__DOT___zz_logic_ram_port0 
        = vlSelf->__PVT__axiMasterRead__DOT__buffer_1__DOT__logic_ram
        [vlSelf->__PVT__axiMasterRead__DOT__buffer_1__DOT__logic_popPtr_valueNext];
    if (vlSelf->__PVT__axiMasterRead__DOT__buffer_1__DOT___zz_1) {
        __Vdlyvval__axiMasterRead__DOT__buffer_1__DOT__logic_ram__v0 
            = ((IData)(vlSelf->__PVT__axiMasterRead__DOT__when_AxiMasterRead_l97)
                ? (IData)(vlSymsp->TOP__TopAxiMasterWandRWithSlave__axiSlave.__PVT___zz_axiSignal_r_payload_data)
                : 0U);
        __Vdlyvset__axiMasterRead__DOT__buffer_1__DOT__logic_ram__v0 = 1U;
        __Vdlyvdim0__axiMasterRead__DOT__buffer_1__DOT__logic_ram__v0 
            = vlSelf->__PVT__axiMasterRead__DOT__buffer_1__DOT__logic_pushPtr_value;
    }
    if (vlSelf->__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_1) {
        vlSelf->__Vdlyvval__axiMasterWrite__DOT__buffer_1__DOT__logic_ram__v0 
            = ((IData)(vlSelf->__PVT__axiMasterWrite__DOT__when_AxiMasterWrite_l186)
                ? (IData)(vlSymsp->TOP.io_wdata_in_payload)
                : 0U);
        vlSelf->__Vdlyvset__axiMasterWrite__DOT__buffer_1__DOT__logic_ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__axiMasterWrite__DOT__buffer_1__DOT__logic_ram__v0 
            = vlSelf->__PVT__axiMasterWrite__DOT__buffer_1__DOT__logic_pushPtr_value;
    }
    if (__Vdlyvset__axiMasterRead__DOT__buffer_1__DOT__logic_ram__v0) {
        vlSelf->__PVT__axiMasterRead__DOT__buffer_1__DOT__logic_ram[__Vdlyvdim0__axiMasterRead__DOT__buffer_1__DOT__logic_ram__v0] 
            = __Vdlyvval__axiMasterRead__DOT__buffer_1__DOT__logic_ram__v0;
    }
}

VL_INLINE_OPT void VTopAxiMasterWandRWithSlave_TopAxiMasterWandRWithSlave___combo__TOP__TopAxiMasterWandRWithSlave__2(VTopAxiMasterWandRWithSlave_TopAxiMasterWandRWithSlave* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTopAxiMasterWandRWithSlave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VTopAxiMasterWandRWithSlave_TopAxiMasterWandRWithSlave___combo__TOP__TopAxiMasterWandRWithSlave__2\n"); );
    // Body
    vlSelf->__PVT__axiSlave_apstart = ((IData)(vlSymsp->TOP.io_wapStart) 
                                       | (IData)(vlSymsp->TOP.io_rapStart));
}

VL_INLINE_OPT void VTopAxiMasterWandRWithSlave_TopAxiMasterWandRWithSlave___sequent__TOP__TopAxiMasterWandRWithSlave__6(VTopAxiMasterWandRWithSlave_TopAxiMasterWandRWithSlave* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTopAxiMasterWandRWithSlave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VTopAxiMasterWandRWithSlave_TopAxiMasterWandRWithSlave___sequent__TOP__TopAxiMasterWandRWithSlave__6\n"); );
    // Init
    CData/*0:0*/ __Vdly__axiMasterRead__DOT__regApDone;
    CData/*0:0*/ __Vdly__axiMasterRead__DOT__firstIn;
    CData/*0:0*/ __Vdly__axiMasterWrite__DOT__regApDone;
    CData/*0:0*/ __Vdly__axiMasterWrite__DOT__firstIn;
    // Body
    __Vdly__axiMasterRead__DOT__firstIn = vlSelf->__PVT__axiMasterRead__DOT__firstIn;
    __Vdly__axiMasterRead__DOT__regApDone = vlSelf->__PVT__axiMasterRead__DOT__regApDone;
    __Vdly__axiMasterWrite__DOT__firstIn = vlSelf->__PVT__axiMasterWrite__DOT__firstIn;
    __Vdly__axiMasterWrite__DOT__regApDone = vlSelf->__PVT__axiMasterWrite__DOT__regApDone;
    vlSelf->__PVT__axiMasterRead__DOT__dataCounter_value 
        = ((IData)(vlSymsp->TOP.reset) ? 0U : (IData)(vlSelf->__PVT__axiMasterRead__DOT__dataCounter_valueNext));
    vlSelf->__PVT__axiMasterRead__DOT__regApStart = 
        ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSymsp->TOP.io_rapStart));
    vlSelf->__PVT__axiMasterWrite__DOT__dataInCounter_value 
        = ((IData)(vlSymsp->TOP.reset) ? 0U : (IData)(vlSelf->__PVT__axiMasterWrite__DOT__dataInCounter_valueNext));
    vlSelf->__PVT__axiMasterWrite__DOT__regApStart 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSymsp->TOP.io_wapStart));
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__axiMasterRead__DOT__buffer_1__DOT__logic_risingOccupancy = 0U;
        vlSelf->__PVT__axiMasterRead__DOT__buffer_1__DOT__logic_popPtr_value = 0U;
        vlSelf->__PVT__axiMasterRead__DOT__regArAddr 
            = vlSymsp->TOP.io_RAddrOffset;
        vlSelf->__PVT__axiMasterRead__DOT__regConfigFinish = 0U;
        __Vdly__axiMasterRead__DOT__regApDone = 0U;
        __Vdly__axiMasterRead__DOT__firstIn = 1U;
        vlSelf->__PVT__axiMasterRead__DOT__regReadFinsh = 0U;
        vlSelf->__PVT__axiMasterWrite__DOT__buffer_1__DOT__logic_risingOccupancy = 0U;
    } else {
        if (((IData)(vlSelf->__PVT__axiMasterRead__DOT__buffer_1__DOT__logic_pushing) 
             != (IData)(vlSelf->__PVT__axiMasterRead__DOT__buffer_1__DOT__logic_popping))) {
            vlSelf->__PVT__axiMasterRead__DOT__buffer_1__DOT__logic_risingOccupancy 
                = vlSelf->__PVT__axiMasterRead__DOT__buffer_1__DOT__logic_pushing;
        }
        vlSelf->__PVT__axiMasterRead__DOT__buffer_1__DOT__logic_popPtr_value 
            = vlSelf->__PVT__axiMasterRead__DOT__buffer_1__DOT__logic_popPtr_valueNext;
        if (vlSelf->__PVT__axiMasterRead__DOT__when_AxiMasterRead_l47) {
            if ((0x100U > vlSelf->__PVT__axiMasterRead__DOT__regALLRlen)) {
                vlSelf->__PVT__axiMasterRead__DOT__regArAddr 
                    = vlSelf->__PVT__axiMasterRead__DOT__regRAO;
                __Vdly__axiMasterRead__DOT__firstIn = 0U;
            } else if (vlSelf->__PVT__axiMasterRead__DOT__firstIn) {
                vlSelf->__PVT__axiMasterRead__DOT__regArAddr 
                    = vlSelf->__PVT__axiMasterRead__DOT__regRAO;
                __Vdly__axiMasterRead__DOT__firstIn = 0U;
            } else {
                vlSelf->__PVT__axiMasterRead__DOT__regArAddr 
                    = (IData)(vlSelf->__PVT__axiMasterRead__DOT___zz_regArAddr);
            }
            vlSelf->__PVT__axiMasterRead__DOT__regConfigFinish = 1U;
        }
        if (vlSymsp->TOP__TopAxiMasterWandRWithSlave__axiSlave.__PVT__axiSignal_r_payload_last) {
            vlSelf->__PVT__axiMasterRead__DOT__regConfigFinish = 0U;
        }
        if (vlSelf->__PVT__axiMasterRead__DOT__dataCounter_willOverflow) {
            vlSelf->__PVT__axiMasterRead__DOT__regReadFinsh = 1U;
        }
        if (vlSelf->__PVT__axiMasterRead__DOT__when_AxiMasterRead_l118) {
            __Vdly__axiMasterRead__DOT__regApDone = 1U;
        }
        if (vlSelf->__PVT__axiMasterRead__DOT__regApDone) {
            vlSelf->__PVT__axiMasterRead__DOT__regConfigFinish = 0U;
            __Vdly__axiMasterRead__DOT__firstIn = 1U;
            vlSelf->__PVT__axiMasterRead__DOT__regReadFinsh = 0U;
            __Vdly__axiMasterRead__DOT__regApDone = 0U;
        }
        if (((IData)(vlSelf->__PVT__axiMasterWrite__DOT__buffer_1__DOT__logic_pushing) 
             != (IData)(vlSelf->__PVT__axiMasterWrite__DOT__buffer_1__DOT__logic_popping))) {
            vlSelf->__PVT__axiMasterWrite__DOT__buffer_1__DOT__logic_risingOccupancy 
                = vlSelf->__PVT__axiMasterWrite__DOT__buffer_1__DOT__logic_pushing;
        }
        if (vlSelf->__PVT__axiMasterWrite__DOT__buffer_1_io_flush) {
            vlSelf->__PVT__axiMasterWrite__DOT__buffer_1__DOT__logic_risingOccupancy = 0U;
        }
    }
    vlSelf->__PVT__axiMasterRead__DOT__buffer_1__DOT___zz_io_pop_valid 
        = ((~ (IData)(vlSymsp->TOP.reset)) & ((IData)(vlSelf->__PVT__axiMasterRead__DOT__buffer_1__DOT__logic_popPtr_valueNext) 
                                              == (IData)(vlSelf->__PVT__axiMasterRead__DOT__buffer_1__DOT__logic_pushPtr_value)));
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__axiMasterWrite__DOT__regAwAddr 
            = vlSymsp->TOP.io_WAddrOffset;
        vlSelf->__PVT__axiMasterWrite__DOT__regConfigFinish = 0U;
        __Vdly__axiMasterWrite__DOT__regApDone = 0U;
        __Vdly__axiMasterWrite__DOT__firstIn = 1U;
        vlSelf->__PVT__axiMasterWrite__DOT__regWriteFinish = 0U;
        vlSelf->__PVT__axiMasterWrite__DOT__regwlast = 0U;
        vlSelf->__PVT__axiMasterWrite__DOT__buffer_1__DOT__logic_popPtr_value = 0U;
    } else {
        if (vlSelf->__PVT__axiMasterWrite__DOT__when_AxiMasterWrite_l197) {
            if ((0x100U > vlSelf->__PVT__axiMasterWrite__DOT__regALLWlen)) {
                vlSelf->__PVT__axiMasterWrite__DOT__regAwAddr 
                    = vlSelf->__PVT__axiMasterWrite__DOT__regWAO;
                __Vdly__axiMasterWrite__DOT__firstIn = 0U;
            } else if (vlSelf->__PVT__axiMasterWrite__DOT__firstIn) {
                vlSelf->__PVT__axiMasterWrite__DOT__regAwAddr 
                    = vlSelf->__PVT__axiMasterWrite__DOT__regWAO;
                __Vdly__axiMasterWrite__DOT__firstIn = 0U;
            } else {
                vlSelf->__PVT__axiMasterWrite__DOT__regAwAddr 
                    = (IData)(vlSelf->__PVT__axiMasterWrite__DOT___zz_regAwAddr);
            }
            vlSelf->__PVT__axiMasterWrite__DOT__regConfigFinish = 1U;
        }
        if (((0xffU == (IData)(vlSelf->__PVT__axiMasterWrite__DOT__data255flag_value)) 
             & (IData)(vlSelf->__PVT__axiMasterWrite__DOT__data255flag_willIncrement))) {
            vlSelf->__PVT__axiMasterWrite__DOT__regConfigFinish = 0U;
        }
        if (vlSelf->__PVT__axiMasterWrite__DOT__dataCounter_willOverflow) {
            __Vdly__axiMasterWrite__DOT__regApDone = 1U;
        }
        if (vlSelf->__PVT__axiMasterWrite__DOT__dataInCounter_willOverflow) {
            vlSelf->__PVT__axiMasterWrite__DOT__regWriteFinish = 1U;
        }
        if (vlSelf->__PVT__axiMasterWrite__DOT__regApDone) {
            vlSelf->__PVT__axiMasterWrite__DOT__regConfigFinish = 0U;
            __Vdly__axiMasterWrite__DOT__firstIn = 1U;
            __Vdly__axiMasterWrite__DOT__regApDone = 0U;
            vlSelf->__PVT__axiMasterWrite__DOT__regWriteFinish = 0U;
        }
        if ((((0U != (IData)(vlSelf->__PVT__axiMasterWrite__DOT__dataCounter_value)) 
              & ((0xfeU == (IData)(vlSelf->__PVT__axiMasterWrite__DOT__data255flag_value)) 
                 | ((IData)(vlSelf->__PVT__axiMasterWrite__DOT__dataCounter_value) 
                    == (vlSymsp->TOP.io_Wlen - (IData)(2U))))) 
             & ((IData)(vlSelf->__PVT__axiMasterWrite__DOT__buffer_1_io_pop_valid) 
                & (~ (IData)(vlSymsp->TOP__TopAxiMasterWandRWithSlave__axiSlave.__PVT__updataAw))))) {
            vlSelf->__PVT__axiMasterWrite__DOT__regwlast = 1U;
        } else if (vlSelf->__PVT__axiMasterWrite__DOT__when_AxiMasterWrite_l276) {
            vlSelf->__PVT__axiMasterWrite__DOT__regwlast = 0U;
        }
        vlSelf->__PVT__axiMasterWrite__DOT__buffer_1__DOT__logic_popPtr_value 
            = vlSelf->__PVT__axiMasterWrite__DOT__buffer_1__DOT__logic_popPtr_valueNext;
    }
    vlSelf->__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_io_pop_valid 
        = ((~ (IData)(vlSymsp->TOP.reset)) & ((IData)(vlSelf->__PVT__axiMasterWrite__DOT__buffer_1__DOT__logic_popPtr_valueNext) 
                                              == (IData)(vlSelf->__PVT__axiMasterWrite__DOT__buffer_1__DOT__logic_pushPtr_value)));
    vlSelf->__PVT__axiMasterRead__DOT__firstIn = __Vdly__axiMasterRead__DOT__firstIn;
    vlSelf->__PVT__axiMasterRead__DOT__regApDone = __Vdly__axiMasterRead__DOT__regApDone;
    vlSelf->__PVT__axiMasterWrite__DOT__firstIn = __Vdly__axiMasterWrite__DOT__firstIn;
    vlSelf->__PVT__axiMasterWrite__DOT__regApDone = __Vdly__axiMasterWrite__DOT__regApDone;
    vlSelf->__PVT__axiMasterRead__DOT___zz_regArAddr 
        = (0xffffffffffULL & ((QData)((IData)(((IData)(1U) 
                                               + vlSelf->__PVT__axiMasterRead__DOT__regArAddr))) 
                              << 8U));
    vlSelf->__PVT__axiMasterRead__DOT__buffer_1__DOT__logic_pushPtr_value 
        = ((IData)(vlSymsp->TOP.reset) ? 0U : (IData)(vlSelf->__PVT__axiMasterRead__DOT__buffer_1__DOT__logic_pushPtr_valueNext));
    vlSelf->__PVT__axiMasterWrite__DOT___zz_regAwAddr 
        = (0xffffffffffULL & ((QData)((IData)(((IData)(1U) 
                                               + vlSelf->__PVT__axiMasterWrite__DOT__regAwAddr))) 
                              << 8U));
    vlSelf->__PVT__axiMasterWrite__DOT__buffer_1_io_flush = 0U;
    if (vlSelf->__PVT__axiMasterWrite__DOT__regApDone) {
        vlSelf->__PVT__axiMasterWrite__DOT__buffer_1_io_flush = 1U;
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__axiMasterWrite__DOT__data255flag_value = 0U;
        vlSelf->__PVT__axiMasterWrite__DOT__dataCounter_value = 0U;
        vlSelf->__PVT__axiMasterWrite__DOT__buffer_1__DOT__logic_pushPtr_value = 0U;
    } else {
        vlSelf->__PVT__axiMasterWrite__DOT__data255flag_value 
            = vlSelf->__PVT__axiMasterWrite__DOT__data255flag_valueNext;
        vlSelf->__PVT__axiMasterWrite__DOT__dataCounter_value 
            = vlSelf->__PVT__axiMasterWrite__DOT__dataCounter_valueNext;
        vlSelf->__PVT__axiMasterWrite__DOT__buffer_1__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__axiMasterWrite__DOT__buffer_1__DOT__logic_pushPtr_valueNext;
    }
    vlSelf->__PVT__axiMasterWrite__DOT__buffer_1__DOT__logic_pushPtr_willClear = 0U;
    if (vlSelf->__PVT__axiMasterWrite__DOT__buffer_1_io_flush) {
        vlSelf->__PVT__axiMasterWrite__DOT__buffer_1__DOT__logic_pushPtr_willClear = 1U;
        vlSelf->__PVT__axiMasterWrite__DOT__buffer_1__DOT__logic_popPtr_willClear = 0U;
        vlSelf->__PVT__axiMasterWrite__DOT__buffer_1__DOT__logic_popPtr_willClear = 1U;
    } else {
        vlSelf->__PVT__axiMasterWrite__DOT__buffer_1__DOT__logic_popPtr_willClear = 0U;
    }
    vlSelf->__PVT__axiMasterRead__DOT__buffer_1__DOT__logic_ptrMatch 
        = ((IData)(vlSelf->__PVT__axiMasterRead__DOT__buffer_1__DOT__logic_pushPtr_value) 
           == (IData)(vlSelf->__PVT__axiMasterRead__DOT__buffer_1__DOT__logic_popPtr_value));
    vlSelf->__PVT__axiMasterWrite__DOT__buffer_1__DOT__logic_ptrMatch 
        = ((IData)(vlSelf->__PVT__axiMasterWrite__DOT__buffer_1__DOT__logic_pushPtr_value) 
           == (IData)(vlSelf->__PVT__axiMasterWrite__DOT__buffer_1__DOT__logic_popPtr_value));
    vlSelf->__PVT__axiMasterRead__DOT__buffer_1_io_occupancy 
        = ((((IData)(vlSelf->__PVT__axiMasterRead__DOT__buffer_1__DOT__logic_risingOccupancy) 
             & (IData)(vlSelf->__PVT__axiMasterRead__DOT__buffer_1__DOT__logic_ptrMatch)) 
            << 5U) | (0x1fU & ((IData)(vlSelf->__PVT__axiMasterRead__DOT__buffer_1__DOT__logic_pushPtr_value) 
                               - (IData)(vlSelf->__PVT__axiMasterRead__DOT__buffer_1__DOT__logic_popPtr_value))));
}

VL_INLINE_OPT void VTopAxiMasterWandRWithSlave_TopAxiMasterWandRWithSlave___sequent__TOP__TopAxiMasterWandRWithSlave__8(VTopAxiMasterWandRWithSlave_TopAxiMasterWandRWithSlave* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTopAxiMasterWandRWithSlave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VTopAxiMasterWandRWithSlave_TopAxiMasterWandRWithSlave___sequent__TOP__TopAxiMasterWandRWithSlave__8\n"); );
    // Body
    vlSelf->__PVT__axiMasterWrite__DOT__buffer_1_io_pop_valid 
        = (1U & ((~ ((IData)(vlSelf->__PVT__axiMasterWrite__DOT__buffer_1__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlSelf->__PVT__axiMasterWrite__DOT__buffer_1__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlSelf->__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlSelf->__PVT__axiMasterWrite__DOT__buffer_1__DOT__logic_full))))));
    vlSelf->__PVT__axiMasterRead__DOT__buffer_1_io_availability 
        = ((((~ (IData)(vlSelf->__PVT__axiMasterRead__DOT__buffer_1__DOT__logic_risingOccupancy)) 
             & (IData)(vlSelf->__PVT__axiMasterRead__DOT__buffer_1__DOT__logic_ptrMatch)) 
            << 5U) | (0x1fU & ((IData)(vlSelf->__PVT__axiMasterRead__DOT__buffer_1__DOT__logic_popPtr_value) 
                               - (IData)(vlSelf->__PVT__axiMasterRead__DOT__buffer_1__DOT__logic_pushPtr_value))));
    vlSelf->__PVT__axiMasterWrite__DOT__when_AxiMasterWrite_l218 
        = (((IData)(vlSelf->__PVT__axiMasterWrite__DOT__regApStart) 
            & (~ (IData)(vlSelf->__PVT__axiMasterWrite__DOT__regApDone))) 
           & (IData)(vlSelf->__PVT__axiMasterWrite__DOT__regConfigFinish));
    vlSelf->__PVT__axiMasterRead__DOT__when_AxiMasterRead_l67 
        = (((IData)(vlSelf->__PVT__axiMasterRead__DOT__regApStart) 
            & (IData)(vlSelf->__PVT__axiMasterRead__DOT__regConfigFinish)) 
           & (~ (IData)(vlSelf->__PVT__axiMasterRead__DOT__regReadFinsh)));
    vlSelf->__PVT__axiMasterWrite__DOT__when_AxiMasterWrite_l276 
        = ((IData)(vlSelf->__PVT__axiMasterWrite__DOT__regwlast) 
           & ((IData)(vlSelf->__PVT__axiMasterWrite__DOT__buffer_1_io_pop_valid) 
              & (~ (IData)(vlSymsp->TOP__TopAxiMasterWandRWithSlave__axiSlave.__PVT__updataAw))));
    vlSelf->__PVT__axiMasterWrite__DOT__buffer_1__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__axiMasterWrite__DOT__buffer_1_io_pop_valid) 
           & (~ (IData)(vlSymsp->TOP__TopAxiMasterWandRWithSlave__axiSlave.__PVT__updataAw)));
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__axiMasterWrite__DOT__regAwLen = 0U;
    } else if (vlSelf->__PVT__axiMasterWrite__DOT__when_AxiMasterWrite_l197) {
        vlSelf->__PVT__axiMasterWrite__DOT__regAwLen 
            = (0xffU & ((0x100U > vlSelf->__PVT__axiMasterWrite__DOT__regALLWlen)
                         ? (vlSelf->__PVT__axiMasterWrite__DOT__regWAO 
                            - (IData)(1U)) : ((0x100U 
                                               > vlSelf->__PVT__axiMasterWrite__DOT__resdata)
                                               ? (vlSelf->__PVT__axiMasterWrite__DOT__resdata 
                                                  - (IData)(1U))
                                               : 0xffU)));
    }
    vlSelf->__PVT__axiMasterRead__DOT__when_AxiMasterRead_l97 
        = ((IData)(vlSymsp->TOP__TopAxiMasterWandRWithSlave__axiSlave.__PVT__axiSignal_r_valid) 
           & (0U != (IData)(vlSelf->__PVT__axiMasterRead__DOT__buffer_1_io_availability)));
    vlSelf->__PVT__axiMasterWrite_io_axiAW_payload_addr 
        = ((IData)(vlSelf->__PVT__axiMasterWrite__DOT__when_AxiMasterWrite_l218)
            ? vlSelf->__PVT__axiMasterWrite__DOT__regAwAddr
            : 0U);
    vlSelf->__PVT__axiMasterRead_io_axiAR_payload_addr 
        = ((IData)(vlSelf->__PVT__axiMasterRead__DOT__when_AxiMasterRead_l67)
            ? vlSelf->__PVT__axiMasterRead__DOT__regArAddr
            : 0U);
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__axiMasterRead__DOT__regArLen = 0U;
    } else if (vlSelf->__PVT__axiMasterRead__DOT__when_AxiMasterRead_l47) {
        vlSelf->__PVT__axiMasterRead__DOT__regArLen 
            = (0xffU & ((0x100U > vlSelf->__PVT__axiMasterRead__DOT__regALLRlen)
                         ? (vlSelf->__PVT__axiMasterRead__DOT__regRAO 
                            - (IData)(1U)) : ((0x100U 
                                               > vlSelf->__PVT__axiMasterRead__DOT__resdata)
                                               ? (vlSelf->__PVT__axiMasterRead__DOT__resdata 
                                                  - (IData)(1U))
                                               : 0xffU)));
    }
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
    vlSelf->__PVT__axiMasterWrite__DOT__when_AxiMasterWrite_l197 
        = ((((IData)(vlSelf->__PVT__axiMasterWrite__DOT__regApStart) 
             & (~ (IData)(vlSelf->__PVT__axiMasterWrite__DOT__regConfigFinish))) 
            & (~ (IData)(vlSelf->__PVT__axiMasterWrite__DOT__regWriteFinish))) 
           & ((IData)(vlSelf->__PVT__axiMasterWrite__DOT__firstIn) 
              | (IData)(vlSymsp->TOP__TopAxiMasterWandRWithSlave__axiSlave.__PVT__writeSuccess)));
    if (vlSelf->__PVT__axiMasterRead__DOT__when_AxiMasterRead_l97) {
        vlSelf->__PVT__axiMasterRead__DOT__buffer_1__DOT__logic_pushing 
            = (1U & (~ (IData)(vlSelf->__PVT__axiMasterRead__DOT__buffer_1__DOT__logic_full)));
        vlSelf->__PVT__axiMasterRead__DOT__dataCounter_willIncrement = 0U;
        vlSelf->__PVT__axiMasterRead__DOT__dataCounter_willIncrement = 1U;
    } else {
        vlSelf->__PVT__axiMasterRead__DOT__buffer_1__DOT__logic_pushing = 0U;
        vlSelf->__PVT__axiMasterRead__DOT__dataCounter_willIncrement = 0U;
    }
    vlSelf->__PVT__axiMasterRead__DOT__when_AxiMasterRead_l47 
        = (((IData)(vlSelf->__PVT__axiMasterRead__DOT__regApStart) 
            & (~ (IData)(vlSelf->__PVT__axiMasterRead__DOT__regConfigFinish))) 
           & (~ (IData)(vlSelf->__PVT__axiMasterRead__DOT__regReadFinsh)));
    vlSelf->__PVT__axiMasterWrite__DOT__dataCounter_willOverflow 
        = ((0x12bU == (IData)(vlSelf->__PVT__axiMasterWrite__DOT__dataCounter_value)) 
           & (IData)(vlSelf->__PVT__axiMasterWrite__DOT__dataCounter_willIncrement));
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__axiMasterWrite__DOT__regWAO = 0U;
        vlSelf->__PVT__axiMasterWrite__DOT__regALLWlen = 0U;
    } else {
        vlSelf->__PVT__axiMasterWrite__DOT__regWAO 
            = vlSymsp->TOP.io_WAddrOffset;
        vlSelf->__PVT__axiMasterWrite__DOT__regALLWlen 
            = vlSymsp->TOP.io_Wlen;
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
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__axiMasterRead__DOT__regRAO = 0U;
        vlSelf->__PVT__axiMasterRead__DOT__regALLRlen = 0U;
    } else {
        vlSelf->__PVT__axiMasterRead__DOT__regRAO = vlSymsp->TOP.io_RAddrOffset;
        vlSelf->__PVT__axiMasterRead__DOT__regALLRlen 
            = vlSymsp->TOP.io_Rlen;
    }
    vlSelf->__PVT__axiMasterWrite__DOT__data255flag_willClear = 0U;
    if (vlSelf->__PVT__axiMasterWrite__DOT__dataCounter_willOverflow) {
        vlSelf->__PVT__axiMasterWrite__DOT__data255flag_willClear = 1U;
        vlSelf->__PVT__axiMasterWrite__DOT__dataCounter_willClear = 0U;
        vlSelf->__PVT__axiMasterWrite__DOT__dataCounter_willClear = 1U;
    } else {
        vlSelf->__PVT__axiMasterWrite__DOT__dataCounter_willClear = 0U;
    }
    vlSelf->__PVT__axiMasterRead__DOT__buffer_1__DOT__logic_pushPtr_valueNext 
        = (0x1fU & ((IData)(vlSelf->__PVT__axiMasterRead__DOT__buffer_1__DOT__logic_pushPtr_value) 
                    + (IData)(vlSelf->__PVT__axiMasterRead__DOT__buffer_1__DOT__logic_pushPtr_willIncrement)));
    vlSelf->__PVT__axiMasterRead__DOT__dataCounter_valueNext 
        = ((IData)(vlSelf->__PVT__axiMasterRead__DOT__dataCounter_willOverflow)
            ? 0U : (0x1ffU & ((IData)(vlSelf->__PVT__axiMasterRead__DOT__dataCounter_value) 
                              + (IData)(vlSelf->__PVT__axiMasterRead__DOT__dataCounter_willIncrement))));
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
    vlSelf->__PVT__axiMasterWrite__DOT__resdata = (vlSelf->__PVT__axiMasterWrite__DOT__regALLWlen 
                                                   - (IData)(vlSelf->__PVT__axiMasterWrite__DOT__dataCounter_value));
    vlSelf->__PVT__axiMasterRead__DOT__resdata = (vlSelf->__PVT__axiMasterRead__DOT__regALLRlen 
                                                  - (IData)(vlSelf->__PVT__axiMasterRead__DOT__dataCounter_value));
}

VL_INLINE_OPT void VTopAxiMasterWandRWithSlave_TopAxiMasterWandRWithSlave___combo__TOP__TopAxiMasterWandRWithSlave__9(VTopAxiMasterWandRWithSlave_TopAxiMasterWandRWithSlave* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTopAxiMasterWandRWithSlave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VTopAxiMasterWandRWithSlave_TopAxiMasterWandRWithSlave___combo__TOP__TopAxiMasterWandRWithSlave__9\n"); );
    // Body
    vlSelf->__PVT__axiMasterWrite__DOT__when_AxiMasterWrite_l186 
        = ((IData)(vlSymsp->TOP.io_wdata_in_valid) 
           & (IData)(vlSelf->__PVT__axiMasterWrite_io_data_in_ready));
    vlSelf->__PVT__axiMasterRead__DOT__buffer_1__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__axiMasterRead__DOT__buffer_1_io_pop_valid) 
           & ((0U != (IData)(vlSelf->__PVT__axiMasterRead__DOT__buffer_1_io_occupancy)) 
              & (IData)(vlSymsp->TOP.io_rdataOut_ready)));
    vlSelf->__PVT__axiMasterRead__DOT__when_AxiMasterRead_l118 
        = (((IData)(vlSelf->__PVT__axiMasterRead__DOT__regReadFinsh) 
            & (1U == (IData)(vlSelf->__PVT__axiMasterRead__DOT__buffer_1_io_occupancy))) 
           & ((IData)(vlSelf->__PVT__axiMasterRead_io_dataOut_valid) 
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
        vlSelf->__PVT__axiMasterWrite__DOT__dataInCounter_valueNext = 0U;
    } else {
        vlSelf->__PVT__axiMasterWrite__DOT__dataInCounter_valueNext 
            = (0x1ffU & ((IData)(vlSelf->__PVT__axiMasterWrite__DOT__dataInCounter_value) 
                         + (IData)(vlSelf->__PVT__axiMasterWrite__DOT__dataInCounter_willIncrement)));
    }
    if (vlSelf->__PVT__axiMasterWrite__DOT__dataInCounter_willClear) {
        vlSelf->__PVT__axiMasterWrite__DOT__dataInCounter_valueNext = 0U;
    }
}
