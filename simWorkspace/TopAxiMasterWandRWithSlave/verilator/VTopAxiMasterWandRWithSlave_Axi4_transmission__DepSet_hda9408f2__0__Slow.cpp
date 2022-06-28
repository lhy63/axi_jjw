// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTopAxiMasterWandRWithSlave.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTopAxiMasterWandRWithSlave_Axi4_transmission.h"
#include "VTopAxiMasterWandRWithSlave__Syms.h"

VL_ATTR_COLD void VTopAxiMasterWandRWithSlave_Axi4_transmission___settle__TOP__TopAxiMasterWandRWithSlave__axiSlave__2(VTopAxiMasterWandRWithSlave_Axi4_transmission* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTopAxiMasterWandRWithSlave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTopAxiMasterWandRWithSlave_Axi4_transmission___settle__TOP__TopAxiMasterWandRWithSlave__axiSlave__2\n"); );
    // Body
    vlSelf->__PVT___zz_Axi4Incr_wrapCase_1 = ((8U == 
                                               (8U 
                                                & (IData)(vlSelf->__PVT__regArLen)))
                                               ? 3U
                                               : ((4U 
                                                   == 
                                                   (0xcU 
                                                    & (IData)(vlSelf->__PVT__regArLen)))
                                                   ? 2U
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (0xeU 
                                                     & (IData)(vlSelf->__PVT__regArLen)))
                                                    ? 1U
                                                    : 0U)));
    vlSelf->__PVT__axiSignal_ar_ready = ((IData)(vlSelf->__PVT__updataAr) 
                                         & (IData)(vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiSlave_apstart));
    vlSelf->__PVT__axiSignal_aw_ready = ((IData)(vlSelf->__PVT__updataAw) 
                                         & (IData)(vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiSlave_apstart));
    vlSelf->__PVT__when_Axi4_transmission_l91 = ((IData)(vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1_io_pop_valid) 
                                                 & (~ (IData)(vlSelf->__PVT__updataAw)));
    vlSelf->__PVT__when_Axi4_transmission_l68 = ((IData)(vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__when_AxiMasterWrite_l276) 
                                                 & ((IData)(vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1_io_pop_valid) 
                                                    & (~ (IData)(vlSelf->__PVT__updataAw))));
    vlSelf->__PVT__Axi4Incr_result = (0xfffU & ((0U 
                                                 == (IData)(vlSelf->__PVT__regAwBrust))
                                                 ? (IData)(vlSelf->regAwAddr)
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelf->__PVT__regAwBrust))
                                                  ? 
                                                 ((0U 
                                                   == (IData)(vlSelf->__PVT___zz_Axi4Incr_wrapCase))
                                                   ? 
                                                  ((0xffeU 
                                                    & (IData)(vlSelf->regAwAddr)) 
                                                   | (1U 
                                                      & ((IData)(1U) 
                                                         + (IData)(vlSelf->regAwAddr))))
                                                   : 
                                                  ((1U 
                                                    == (IData)(vlSelf->__PVT___zz_Axi4Incr_wrapCase))
                                                    ? 
                                                   ((0xffcU 
                                                     & (IData)(vlSelf->regAwAddr)) 
                                                    | (3U 
                                                       & ((IData)(1U) 
                                                          + (IData)(vlSelf->regAwAddr))))
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->__PVT___zz_Axi4Incr_wrapCase))
                                                     ? 
                                                    ((0xff8U 
                                                      & (IData)(vlSelf->regAwAddr)) 
                                                     | (7U 
                                                        & ((IData)(1U) 
                                                           + (IData)(vlSelf->regAwAddr))))
                                                     : 
                                                    ((0xff0U 
                                                      & (IData)(vlSelf->regAwAddr)) 
                                                     | (0xfU 
                                                        & ((IData)(1U) 
                                                           + (IData)(vlSelf->regAwAddr)))))))
                                                  : 
                                                 ((IData)(1U) 
                                                  + (IData)(vlSelf->regAwAddr)))));
    if (((IData)(vlSelf->__PVT__axiSignal_r_valid) 
         & (0U != (IData)(vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterRead__DOT__buffer_1_io_availability)))) {
        vlSelf->__PVT__when_Axi4_transmission_l177 
            = ((IData)(vlSelf->__PVT__rFireCounter_value) 
               == (IData)(vlSelf->__PVT__regArLen));
        vlSelf->__PVT__rFireCounter_willIncrement = 0U;
        vlSelf->__PVT__rFireCounter_willIncrement = 1U;
        vlSelf->__PVT__axiSignal_r_payload_last = vlSelf->__PVT__regLast;
    } else {
        vlSelf->__PVT__when_Axi4_transmission_l177 = 0U;
        vlSelf->__PVT__rFireCounter_willIncrement = 0U;
        vlSelf->__PVT__axiSignal_r_payload_last = 0U;
    }
    vlSelf->__PVT__Axi4Incr_result_1 = (0xfffU & ((0U 
                                                   == (IData)(vlSelf->__PVT__regArBrust))
                                                   ? (IData)(vlSelf->__PVT__regArAddr)
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->__PVT__regArBrust))
                                                    ? 
                                                   ((0U 
                                                     == (IData)(vlSelf->__PVT___zz_Axi4Incr_wrapCase_1))
                                                     ? 
                                                    ((0xffeU 
                                                      & (IData)(vlSelf->__PVT__regArAddr)) 
                                                     | (1U 
                                                        & ((IData)(1U) 
                                                           + (IData)(vlSelf->__PVT__regArAddr))))
                                                     : 
                                                    ((1U 
                                                      == (IData)(vlSelf->__PVT___zz_Axi4Incr_wrapCase_1))
                                                      ? 
                                                     ((0xffcU 
                                                       & (IData)(vlSelf->__PVT__regArAddr)) 
                                                      | (3U 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlSelf->__PVT__regArAddr))))
                                                      : 
                                                     ((2U 
                                                       == (IData)(vlSelf->__PVT___zz_Axi4Incr_wrapCase_1))
                                                       ? 
                                                      ((0xff8U 
                                                        & (IData)(vlSelf->__PVT__regArAddr)) 
                                                       | (7U 
                                                          & ((IData)(1U) 
                                                             + (IData)(vlSelf->__PVT__regArAddr))))
                                                       : 
                                                      ((0xff0U 
                                                        & (IData)(vlSelf->__PVT__regArAddr)) 
                                                       | (0xfU 
                                                          & ((IData)(1U) 
                                                             + (IData)(vlSelf->__PVT__regArAddr)))))))
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelf->__PVT__regArAddr)))));
    vlSelf->__PVT__when_Axi4_transmission_l144 = ((IData)(vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterRead__DOT__when_AxiMasterRead_l67) 
                                                  & (IData)(vlSelf->__PVT__axiSignal_ar_ready));
    vlSelf->__PVT__when_Axi4_transmission_l72 = ((IData)(vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__when_AxiMasterWrite_l218) 
                                                 & (IData)(vlSelf->__PVT__axiSignal_aw_ready));
    vlSelf->__PVT__rFireCounter_valueNext = (((0x1000U 
                                               == (IData)(vlSelf->__PVT__rFireCounter_value)) 
                                              & (IData)(vlSelf->__PVT__rFireCounter_willIncrement))
                                              ? 0U : 
                                             (0x1fffU 
                                              & ((IData)(vlSelf->__PVT__rFireCounter_value) 
                                                 + (IData)(vlSelf->__PVT__rFireCounter_willIncrement))));
    vlSelf->__PVT__when_Axi4_transmission_l184 = ((IData)(vlSelf->__PVT__regLast) 
                                                  & (IData)(vlSelf->__PVT__axiSignal_r_payload_last));
}
