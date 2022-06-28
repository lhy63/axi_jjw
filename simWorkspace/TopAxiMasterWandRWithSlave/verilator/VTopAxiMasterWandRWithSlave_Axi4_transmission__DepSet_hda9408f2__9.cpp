// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTopAxiMasterWandRWithSlave.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTopAxiMasterWandRWithSlave_Axi4_transmission.h"
#include "VTopAxiMasterWandRWithSlave__Syms.h"

extern const VlWide<128>/*4095:0*/ VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0;

VL_INLINE_OPT void VTopAxiMasterWandRWithSlave_Axi4_transmission___sequent__TOP__TopAxiMasterWandRWithSlave__axiSlave__167(VTopAxiMasterWandRWithSlave_Axi4_transmission* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTopAxiMasterWandRWithSlave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTopAxiMasterWandRWithSlave_Axi4_transmission___sequent__TOP__TopAxiMasterWandRWithSlave__axiSlave__167\n"); );
    // Init
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__0;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__1;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__2;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__3;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__4;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__5;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__6;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__7;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__8;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__9;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__10;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__11;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__12;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__13;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__14;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__15;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__16;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__17;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__18;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__19;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__20;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__21;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__22;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__23;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__24;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__25;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__26;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__27;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__28;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__29;
    // Body
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__regVec_683 = 0U;
        vlSelf->__PVT__regVec_728 = 0U;
        vlSelf->__PVT__regVec_685 = 0U;
        vlSelf->__PVT__regVec_730 = 0U;
        vlSelf->__PVT__regVec_687 = 0U;
        vlSelf->__PVT__regVec_732 = 0U;
        vlSelf->__PVT__regVec_689 = 0U;
        vlSelf->__PVT__regVec_734 = 0U;
        vlSelf->__PVT__regVec_691 = 0U;
        vlSelf->__PVT__regVec_736 = 0U;
        vlSelf->__PVT__regVec_693 = 0U;
        vlSelf->__PVT__regVec_738 = 0U;
        vlSelf->__PVT__regVec_695 = 0U;
        vlSelf->__PVT__regVec_740 = 0U;
        vlSelf->__PVT__regVec_697 = 0U;
        vlSelf->__PVT__regVec_742 = 0U;
        vlSelf->__PVT__regVec_699 = 0U;
        vlSelf->__PVT__regVec_744 = 0U;
        vlSelf->__PVT__regVec_701 = 0U;
        vlSelf->__PVT__regVec_746 = 0U;
        vlSelf->__PVT__regVec_703 = 0U;
        vlSelf->__PVT__regVec_748 = 0U;
        vlSelf->__PVT__regVec_705 = 0U;
        vlSelf->__PVT__regVec_750 = 0U;
        vlSelf->__PVT__regVec_707 = 0U;
        vlSelf->__PVT__regVec_752 = 0U;
        vlSelf->__PVT__regVec_709 = 0U;
        vlSelf->__PVT__regVec_754 = 0U;
        vlSelf->__PVT__regVec_711 = 0U;
        vlSelf->__PVT__regVec_756 = 0U;
    } else if (vlSelf->__PVT__when_Axi4_transmission_l91) {
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__0, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x800U & __Vtemp_h34d96581__0[0x15U])) {
            vlSelf->__PVT__regVec_683 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__1, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x1000000U & __Vtemp_h34d96581__1[0x16U])) {
            vlSelf->__PVT__regVec_728 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__2, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x2000U & __Vtemp_h34d96581__2[0x15U])) {
            vlSelf->__PVT__regVec_685 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__3, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x4000000U & __Vtemp_h34d96581__3[0x16U])) {
            vlSelf->__PVT__regVec_730 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__4, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x8000U & __Vtemp_h34d96581__4[0x15U])) {
            vlSelf->__PVT__regVec_687 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__5, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10000000U & __Vtemp_h34d96581__5[0x16U])) {
            vlSelf->__PVT__regVec_732 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__6, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x20000U & __Vtemp_h34d96581__6[0x15U])) {
            vlSelf->__PVT__regVec_689 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__7, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40000000U & __Vtemp_h34d96581__7[0x16U])) {
            vlSelf->__PVT__regVec_734 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__8, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x80000U & __Vtemp_h34d96581__8[0x15U])) {
            vlSelf->__PVT__regVec_691 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__9, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((1U & __Vtemp_h34d96581__9[0x17U])) {
            vlSelf->__PVT__regVec_736 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__10, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x200000U & __Vtemp_h34d96581__10[0x15U])) {
            vlSelf->__PVT__regVec_693 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__11, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((4U & __Vtemp_h34d96581__11[0x17U])) {
            vlSelf->__PVT__regVec_738 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__12, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x800000U & __Vtemp_h34d96581__12[0x15U])) {
            vlSelf->__PVT__regVec_695 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__13, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10U & __Vtemp_h34d96581__13[0x17U])) {
            vlSelf->__PVT__regVec_740 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__14, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x2000000U & __Vtemp_h34d96581__14[0x15U])) {
            vlSelf->__PVT__regVec_697 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__15, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40U & __Vtemp_h34d96581__15[0x17U])) {
            vlSelf->__PVT__regVec_742 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__16, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x8000000U & __Vtemp_h34d96581__16[0x15U])) {
            vlSelf->__PVT__regVec_699 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__17, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x100U & __Vtemp_h34d96581__17[0x17U])) {
            vlSelf->__PVT__regVec_744 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__18, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x20000000U & __Vtemp_h34d96581__18[0x15U])) {
            vlSelf->__PVT__regVec_701 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__19, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x400U & __Vtemp_h34d96581__19[0x17U])) {
            vlSelf->__PVT__regVec_746 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__20, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((__Vtemp_h34d96581__20[0x15U] >> 0x1fU)) {
            vlSelf->__PVT__regVec_703 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__21, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x1000U & __Vtemp_h34d96581__21[0x17U])) {
            vlSelf->__PVT__regVec_748 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__22, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((2U & __Vtemp_h34d96581__22[0x16U])) {
            vlSelf->__PVT__regVec_705 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__23, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x4000U & __Vtemp_h34d96581__23[0x17U])) {
            vlSelf->__PVT__regVec_750 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__24, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((8U & __Vtemp_h34d96581__24[0x16U])) {
            vlSelf->__PVT__regVec_707 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__25, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10000U & __Vtemp_h34d96581__25[0x17U])) {
            vlSelf->__PVT__regVec_752 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__26, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x20U & __Vtemp_h34d96581__26[0x16U])) {
            vlSelf->__PVT__regVec_709 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__27, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40000U & __Vtemp_h34d96581__27[0x17U])) {
            vlSelf->__PVT__regVec_754 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__28, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x80U & __Vtemp_h34d96581__28[0x16U])) {
            vlSelf->__PVT__regVec_711 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__29, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x100000U & __Vtemp_h34d96581__29[0x17U])) {
            vlSelf->__PVT__regVec_756 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
    }
}

VL_INLINE_OPT void VTopAxiMasterWandRWithSlave_Axi4_transmission___sequent__TOP__TopAxiMasterWandRWithSlave__axiSlave__168(VTopAxiMasterWandRWithSlave_Axi4_transmission* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTopAxiMasterWandRWithSlave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTopAxiMasterWandRWithSlave_Axi4_transmission___sequent__TOP__TopAxiMasterWandRWithSlave__axiSlave__168\n"); );
    // Init
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__0;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__1;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__2;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__3;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__4;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__5;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__6;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__7;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__8;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__9;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__10;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__11;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__12;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__13;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__14;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__15;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__16;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__17;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__18;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__19;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__20;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__21;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__22;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__23;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__24;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__25;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__26;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__27;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__28;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__29;
    // Body
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__regVec_713 = 0U;
        vlSelf->__PVT__regVec_758 = 0U;
        vlSelf->__PVT__regVec_715 = 0U;
        vlSelf->__PVT__regVec_760 = 0U;
        vlSelf->__PVT__regVec_717 = 0U;
        vlSelf->__PVT__regVec_762 = 0U;
        vlSelf->__PVT__regVec_719 = 0U;
        vlSelf->__PVT__regVec_764 = 0U;
        vlSelf->__PVT__regVec_721 = 0U;
        vlSelf->__PVT__regVec_766 = 0U;
        vlSelf->__PVT__regVec_723 = 0U;
        vlSelf->__PVT__regVec_768 = 0U;
        vlSelf->__PVT__regVec_725 = 0U;
        vlSelf->__PVT__regVec_770 = 0U;
        vlSelf->__PVT__regVec_727 = 0U;
        vlSelf->__PVT__regVec_772 = 0U;
        vlSelf->__PVT__regVec_729 = 0U;
        vlSelf->__PVT__regVec_774 = 0U;
        vlSelf->__PVT__regVec_731 = 0U;
        vlSelf->__PVT__regVec_776 = 0U;
        vlSelf->__PVT__regVec_733 = 0U;
        vlSelf->__PVT__regVec_778 = 0U;
        vlSelf->__PVT__regVec_735 = 0U;
        vlSelf->__PVT__regVec_780 = 0U;
        vlSelf->__PVT__regVec_737 = 0U;
        vlSelf->__PVT__regVec_782 = 0U;
        vlSelf->__PVT__regVec_739 = 0U;
        vlSelf->__PVT__regVec_784 = 0U;
        vlSelf->__PVT__regVec_741 = 0U;
        vlSelf->__PVT__regVec_786 = 0U;
    } else if (vlSelf->__PVT__when_Axi4_transmission_l91) {
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__0, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x200U & __Vtemp_h34d96581__0[0x16U])) {
            vlSelf->__PVT__regVec_713 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__1, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x400000U & __Vtemp_h34d96581__1[0x17U])) {
            vlSelf->__PVT__regVec_758 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__2, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x800U & __Vtemp_h34d96581__2[0x16U])) {
            vlSelf->__PVT__regVec_715 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__3, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x1000000U & __Vtemp_h34d96581__3[0x17U])) {
            vlSelf->__PVT__regVec_760 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__4, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x2000U & __Vtemp_h34d96581__4[0x16U])) {
            vlSelf->__PVT__regVec_717 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__5, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x4000000U & __Vtemp_h34d96581__5[0x17U])) {
            vlSelf->__PVT__regVec_762 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__6, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x8000U & __Vtemp_h34d96581__6[0x16U])) {
            vlSelf->__PVT__regVec_719 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__7, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10000000U & __Vtemp_h34d96581__7[0x17U])) {
            vlSelf->__PVT__regVec_764 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__8, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x20000U & __Vtemp_h34d96581__8[0x16U])) {
            vlSelf->__PVT__regVec_721 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__9, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40000000U & __Vtemp_h34d96581__9[0x17U])) {
            vlSelf->__PVT__regVec_766 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__10, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x80000U & __Vtemp_h34d96581__10[0x16U])) {
            vlSelf->__PVT__regVec_723 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__11, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((1U & __Vtemp_h34d96581__11[0x18U])) {
            vlSelf->__PVT__regVec_768 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__12, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x200000U & __Vtemp_h34d96581__12[0x16U])) {
            vlSelf->__PVT__regVec_725 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__13, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((4U & __Vtemp_h34d96581__13[0x18U])) {
            vlSelf->__PVT__regVec_770 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__14, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x800000U & __Vtemp_h34d96581__14[0x16U])) {
            vlSelf->__PVT__regVec_727 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__15, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10U & __Vtemp_h34d96581__15[0x18U])) {
            vlSelf->__PVT__regVec_772 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__16, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x2000000U & __Vtemp_h34d96581__16[0x16U])) {
            vlSelf->__PVT__regVec_729 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__17, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40U & __Vtemp_h34d96581__17[0x18U])) {
            vlSelf->__PVT__regVec_774 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__18, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x8000000U & __Vtemp_h34d96581__18[0x16U])) {
            vlSelf->__PVT__regVec_731 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__19, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x100U & __Vtemp_h34d96581__19[0x18U])) {
            vlSelf->__PVT__regVec_776 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__20, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x20000000U & __Vtemp_h34d96581__20[0x16U])) {
            vlSelf->__PVT__regVec_733 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__21, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x400U & __Vtemp_h34d96581__21[0x18U])) {
            vlSelf->__PVT__regVec_778 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__22, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((__Vtemp_h34d96581__22[0x16U] >> 0x1fU)) {
            vlSelf->__PVT__regVec_735 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__23, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x1000U & __Vtemp_h34d96581__23[0x18U])) {
            vlSelf->__PVT__regVec_780 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__24, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((2U & __Vtemp_h34d96581__24[0x17U])) {
            vlSelf->__PVT__regVec_737 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__25, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x4000U & __Vtemp_h34d96581__25[0x18U])) {
            vlSelf->__PVT__regVec_782 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__26, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((8U & __Vtemp_h34d96581__26[0x17U])) {
            vlSelf->__PVT__regVec_739 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__27, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10000U & __Vtemp_h34d96581__27[0x18U])) {
            vlSelf->__PVT__regVec_784 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__28, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x20U & __Vtemp_h34d96581__28[0x17U])) {
            vlSelf->__PVT__regVec_741 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__29, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40000U & __Vtemp_h34d96581__29[0x18U])) {
            vlSelf->__PVT__regVec_786 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
    }
}

VL_INLINE_OPT void VTopAxiMasterWandRWithSlave_Axi4_transmission___sequent__TOP__TopAxiMasterWandRWithSlave__axiSlave__169(VTopAxiMasterWandRWithSlave_Axi4_transmission* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTopAxiMasterWandRWithSlave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTopAxiMasterWandRWithSlave_Axi4_transmission___sequent__TOP__TopAxiMasterWandRWithSlave__axiSlave__169\n"); );
    // Init
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__0;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__1;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__2;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__3;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__4;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__5;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__6;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__7;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__8;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__9;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__10;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__11;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__12;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__13;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__14;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__15;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__16;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__17;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__18;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__19;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__20;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__21;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__22;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__23;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__24;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__25;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__26;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__27;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__28;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__29;
    // Body
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__regVec_743 = 0U;
        vlSelf->__PVT__regVec_788 = 0U;
        vlSelf->__PVT__regVec_745 = 0U;
        vlSelf->__PVT__regVec_790 = 0U;
        vlSelf->__PVT__regVec_747 = 0U;
        vlSelf->__PVT__regVec_792 = 0U;
        vlSelf->__PVT__regVec_749 = 0U;
        vlSelf->__PVT__regVec_794 = 0U;
        vlSelf->__PVT__regVec_751 = 0U;
        vlSelf->__PVT__regVec_796 = 0U;
        vlSelf->__PVT__regVec_753 = 0U;
        vlSelf->__PVT__regVec_798 = 0U;
        vlSelf->__PVT__regVec_755 = 0U;
        vlSelf->__PVT__regVec_800 = 0U;
        vlSelf->__PVT__regVec_757 = 0U;
        vlSelf->__PVT__regVec_802 = 0U;
        vlSelf->__PVT__regVec_759 = 0U;
        vlSelf->__PVT__regVec_804 = 0U;
        vlSelf->__PVT__regVec_761 = 0U;
        vlSelf->__PVT__regVec_806 = 0U;
        vlSelf->__PVT__regVec_763 = 0U;
        vlSelf->__PVT__regVec_808 = 0U;
        vlSelf->__PVT__regVec_765 = 0U;
        vlSelf->__PVT__regVec_810 = 0U;
        vlSelf->__PVT__regVec_767 = 0U;
        vlSelf->__PVT__regVec_812 = 0U;
        vlSelf->__PVT__regVec_769 = 0U;
        vlSelf->__PVT__regVec_814 = 0U;
        vlSelf->__PVT__regVec_771 = 0U;
        vlSelf->__PVT__regVec_816 = 0U;
    } else if (vlSelf->__PVT__when_Axi4_transmission_l91) {
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__0, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x80U & __Vtemp_h34d96581__0[0x17U])) {
            vlSelf->__PVT__regVec_743 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__1, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x100000U & __Vtemp_h34d96581__1[0x18U])) {
            vlSelf->__PVT__regVec_788 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__2, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x200U & __Vtemp_h34d96581__2[0x17U])) {
            vlSelf->__PVT__regVec_745 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__3, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x400000U & __Vtemp_h34d96581__3[0x18U])) {
            vlSelf->__PVT__regVec_790 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__4, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x800U & __Vtemp_h34d96581__4[0x17U])) {
            vlSelf->__PVT__regVec_747 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__5, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x1000000U & __Vtemp_h34d96581__5[0x18U])) {
            vlSelf->__PVT__regVec_792 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__6, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x2000U & __Vtemp_h34d96581__6[0x17U])) {
            vlSelf->__PVT__regVec_749 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__7, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x4000000U & __Vtemp_h34d96581__7[0x18U])) {
            vlSelf->__PVT__regVec_794 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__8, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x8000U & __Vtemp_h34d96581__8[0x17U])) {
            vlSelf->__PVT__regVec_751 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__9, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10000000U & __Vtemp_h34d96581__9[0x18U])) {
            vlSelf->__PVT__regVec_796 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__10, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x20000U & __Vtemp_h34d96581__10[0x17U])) {
            vlSelf->__PVT__regVec_753 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__11, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40000000U & __Vtemp_h34d96581__11[0x18U])) {
            vlSelf->__PVT__regVec_798 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__12, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x80000U & __Vtemp_h34d96581__12[0x17U])) {
            vlSelf->__PVT__regVec_755 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__13, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((1U & __Vtemp_h34d96581__13[0x19U])) {
            vlSelf->__PVT__regVec_800 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__14, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x200000U & __Vtemp_h34d96581__14[0x17U])) {
            vlSelf->__PVT__regVec_757 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__15, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((4U & __Vtemp_h34d96581__15[0x19U])) {
            vlSelf->__PVT__regVec_802 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__16, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x800000U & __Vtemp_h34d96581__16[0x17U])) {
            vlSelf->__PVT__regVec_759 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__17, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10U & __Vtemp_h34d96581__17[0x19U])) {
            vlSelf->__PVT__regVec_804 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__18, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x2000000U & __Vtemp_h34d96581__18[0x17U])) {
            vlSelf->__PVT__regVec_761 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__19, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40U & __Vtemp_h34d96581__19[0x19U])) {
            vlSelf->__PVT__regVec_806 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__20, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x8000000U & __Vtemp_h34d96581__20[0x17U])) {
            vlSelf->__PVT__regVec_763 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__21, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x100U & __Vtemp_h34d96581__21[0x19U])) {
            vlSelf->__PVT__regVec_808 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__22, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x20000000U & __Vtemp_h34d96581__22[0x17U])) {
            vlSelf->__PVT__regVec_765 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__23, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x400U & __Vtemp_h34d96581__23[0x19U])) {
            vlSelf->__PVT__regVec_810 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__24, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((__Vtemp_h34d96581__24[0x17U] >> 0x1fU)) {
            vlSelf->__PVT__regVec_767 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__25, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x1000U & __Vtemp_h34d96581__25[0x19U])) {
            vlSelf->__PVT__regVec_812 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__26, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((2U & __Vtemp_h34d96581__26[0x18U])) {
            vlSelf->__PVT__regVec_769 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__27, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x4000U & __Vtemp_h34d96581__27[0x19U])) {
            vlSelf->__PVT__regVec_814 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__28, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((8U & __Vtemp_h34d96581__28[0x18U])) {
            vlSelf->__PVT__regVec_771 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__29, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10000U & __Vtemp_h34d96581__29[0x19U])) {
            vlSelf->__PVT__regVec_816 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
    }
}

VL_INLINE_OPT void VTopAxiMasterWandRWithSlave_Axi4_transmission___sequent__TOP__TopAxiMasterWandRWithSlave__axiSlave__170(VTopAxiMasterWandRWithSlave_Axi4_transmission* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTopAxiMasterWandRWithSlave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTopAxiMasterWandRWithSlave_Axi4_transmission___sequent__TOP__TopAxiMasterWandRWithSlave__axiSlave__170\n"); );
    // Init
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__0;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__1;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__2;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__3;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__4;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__5;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__6;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__7;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__8;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__9;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__10;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__11;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__12;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__13;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__14;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__15;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__16;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__17;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__18;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__19;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__20;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__21;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__22;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__23;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__24;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__25;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__26;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__27;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__28;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__29;
    // Body
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__regVec_773 = 0U;
        vlSelf->__PVT__regVec_818 = 0U;
        vlSelf->__PVT__regVec_775 = 0U;
        vlSelf->__PVT__regVec_820 = 0U;
        vlSelf->__PVT__regVec_777 = 0U;
        vlSelf->__PVT__regVec_822 = 0U;
        vlSelf->__PVT__regVec_779 = 0U;
        vlSelf->__PVT__regVec_824 = 0U;
        vlSelf->__PVT__regVec_781 = 0U;
        vlSelf->__PVT__regVec_826 = 0U;
        vlSelf->__PVT__regVec_783 = 0U;
        vlSelf->__PVT__regVec_828 = 0U;
        vlSelf->__PVT__regVec_785 = 0U;
        vlSelf->__PVT__regVec_830 = 0U;
        vlSelf->__PVT__regVec_787 = 0U;
        vlSelf->__PVT__regVec_832 = 0U;
        vlSelf->__PVT__regVec_789 = 0U;
        vlSelf->__PVT__regVec_834 = 0U;
        vlSelf->__PVT__regVec_791 = 0U;
        vlSelf->__PVT__regVec_836 = 0U;
        vlSelf->__PVT__regVec_793 = 0U;
        vlSelf->__PVT__regVec_838 = 0U;
        vlSelf->__PVT__regVec_795 = 0U;
        vlSelf->__PVT__regVec_840 = 0U;
        vlSelf->__PVT__regVec_797 = 0U;
        vlSelf->__PVT__regVec_842 = 0U;
        vlSelf->__PVT__regVec_799 = 0U;
        vlSelf->__PVT__regVec_844 = 0U;
        vlSelf->__PVT__regVec_801 = 0U;
        vlSelf->__PVT__regVec_846 = 0U;
    } else if (vlSelf->__PVT__when_Axi4_transmission_l91) {
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__0, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x20U & __Vtemp_h34d96581__0[0x18U])) {
            vlSelf->__PVT__regVec_773 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__1, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40000U & __Vtemp_h34d96581__1[0x19U])) {
            vlSelf->__PVT__regVec_818 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__2, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x80U & __Vtemp_h34d96581__2[0x18U])) {
            vlSelf->__PVT__regVec_775 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__3, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x100000U & __Vtemp_h34d96581__3[0x19U])) {
            vlSelf->__PVT__regVec_820 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__4, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x200U & __Vtemp_h34d96581__4[0x18U])) {
            vlSelf->__PVT__regVec_777 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__5, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x400000U & __Vtemp_h34d96581__5[0x19U])) {
            vlSelf->__PVT__regVec_822 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__6, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x800U & __Vtemp_h34d96581__6[0x18U])) {
            vlSelf->__PVT__regVec_779 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__7, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x1000000U & __Vtemp_h34d96581__7[0x19U])) {
            vlSelf->__PVT__regVec_824 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__8, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x2000U & __Vtemp_h34d96581__8[0x18U])) {
            vlSelf->__PVT__regVec_781 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__9, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x4000000U & __Vtemp_h34d96581__9[0x19U])) {
            vlSelf->__PVT__regVec_826 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__10, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x8000U & __Vtemp_h34d96581__10[0x18U])) {
            vlSelf->__PVT__regVec_783 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__11, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10000000U & __Vtemp_h34d96581__11[0x19U])) {
            vlSelf->__PVT__regVec_828 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__12, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x20000U & __Vtemp_h34d96581__12[0x18U])) {
            vlSelf->__PVT__regVec_785 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__13, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40000000U & __Vtemp_h34d96581__13[0x19U])) {
            vlSelf->__PVT__regVec_830 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__14, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x80000U & __Vtemp_h34d96581__14[0x18U])) {
            vlSelf->__PVT__regVec_787 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__15, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((1U & __Vtemp_h34d96581__15[0x1aU])) {
            vlSelf->__PVT__regVec_832 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__16, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x200000U & __Vtemp_h34d96581__16[0x18U])) {
            vlSelf->__PVT__regVec_789 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__17, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((4U & __Vtemp_h34d96581__17[0x1aU])) {
            vlSelf->__PVT__regVec_834 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__18, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x800000U & __Vtemp_h34d96581__18[0x18U])) {
            vlSelf->__PVT__regVec_791 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__19, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10U & __Vtemp_h34d96581__19[0x1aU])) {
            vlSelf->__PVT__regVec_836 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__20, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x2000000U & __Vtemp_h34d96581__20[0x18U])) {
            vlSelf->__PVT__regVec_793 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__21, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40U & __Vtemp_h34d96581__21[0x1aU])) {
            vlSelf->__PVT__regVec_838 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__22, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x8000000U & __Vtemp_h34d96581__22[0x18U])) {
            vlSelf->__PVT__regVec_795 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__23, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x100U & __Vtemp_h34d96581__23[0x1aU])) {
            vlSelf->__PVT__regVec_840 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__24, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x20000000U & __Vtemp_h34d96581__24[0x18U])) {
            vlSelf->__PVT__regVec_797 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__25, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x400U & __Vtemp_h34d96581__25[0x1aU])) {
            vlSelf->__PVT__regVec_842 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__26, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((__Vtemp_h34d96581__26[0x18U] >> 0x1fU)) {
            vlSelf->__PVT__regVec_799 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__27, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x1000U & __Vtemp_h34d96581__27[0x1aU])) {
            vlSelf->__PVT__regVec_844 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__28, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((2U & __Vtemp_h34d96581__28[0x19U])) {
            vlSelf->__PVT__regVec_801 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__29, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x4000U & __Vtemp_h34d96581__29[0x1aU])) {
            vlSelf->__PVT__regVec_846 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
    }
}

VL_INLINE_OPT void VTopAxiMasterWandRWithSlave_Axi4_transmission___sequent__TOP__TopAxiMasterWandRWithSlave__axiSlave__171(VTopAxiMasterWandRWithSlave_Axi4_transmission* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTopAxiMasterWandRWithSlave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTopAxiMasterWandRWithSlave_Axi4_transmission___sequent__TOP__TopAxiMasterWandRWithSlave__axiSlave__171\n"); );
    // Init
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__0;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__1;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__2;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__3;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__4;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__5;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__6;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__7;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__8;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__9;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__10;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__11;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__12;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__13;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__14;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__15;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__16;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__17;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__18;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__19;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__20;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__21;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__22;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__23;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__24;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__25;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__26;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__27;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__28;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__29;
    // Body
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__regVec_803 = 0U;
        vlSelf->__PVT__regVec_848 = 0U;
        vlSelf->__PVT__regVec_805 = 0U;
        vlSelf->__PVT__regVec_850 = 0U;
        vlSelf->__PVT__regVec_807 = 0U;
        vlSelf->__PVT__regVec_852 = 0U;
        vlSelf->__PVT__regVec_809 = 0U;
        vlSelf->__PVT__regVec_854 = 0U;
        vlSelf->__PVT__regVec_811 = 0U;
        vlSelf->__PVT__regVec_856 = 0U;
        vlSelf->__PVT__regVec_813 = 0U;
        vlSelf->__PVT__regVec_858 = 0U;
        vlSelf->__PVT__regVec_815 = 0U;
        vlSelf->__PVT__regVec_860 = 0U;
        vlSelf->__PVT__regVec_817 = 0U;
        vlSelf->__PVT__regVec_862 = 0U;
        vlSelf->__PVT__regVec_819 = 0U;
        vlSelf->__PVT__regVec_864 = 0U;
        vlSelf->__PVT__regVec_821 = 0U;
        vlSelf->__PVT__regVec_866 = 0U;
        vlSelf->__PVT__regVec_823 = 0U;
        vlSelf->__PVT__regVec_868 = 0U;
        vlSelf->__PVT__regVec_825 = 0U;
        vlSelf->__PVT__regVec_870 = 0U;
        vlSelf->__PVT__regVec_827 = 0U;
        vlSelf->__PVT__regVec_872 = 0U;
        vlSelf->__PVT__regVec_829 = 0U;
        vlSelf->__PVT__regVec_874 = 0U;
        vlSelf->__PVT__regVec_831 = 0U;
        vlSelf->__PVT__regVec_876 = 0U;
    } else if (vlSelf->__PVT__when_Axi4_transmission_l91) {
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__0, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((8U & __Vtemp_h34d96581__0[0x19U])) {
            vlSelf->__PVT__regVec_803 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__1, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10000U & __Vtemp_h34d96581__1[0x1aU])) {
            vlSelf->__PVT__regVec_848 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__2, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x20U & __Vtemp_h34d96581__2[0x19U])) {
            vlSelf->__PVT__regVec_805 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__3, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40000U & __Vtemp_h34d96581__3[0x1aU])) {
            vlSelf->__PVT__regVec_850 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__4, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x80U & __Vtemp_h34d96581__4[0x19U])) {
            vlSelf->__PVT__regVec_807 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__5, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x100000U & __Vtemp_h34d96581__5[0x1aU])) {
            vlSelf->__PVT__regVec_852 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__6, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x200U & __Vtemp_h34d96581__6[0x19U])) {
            vlSelf->__PVT__regVec_809 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__7, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x400000U & __Vtemp_h34d96581__7[0x1aU])) {
            vlSelf->__PVT__regVec_854 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__8, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x800U & __Vtemp_h34d96581__8[0x19U])) {
            vlSelf->__PVT__regVec_811 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__9, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x1000000U & __Vtemp_h34d96581__9[0x1aU])) {
            vlSelf->__PVT__regVec_856 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__10, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x2000U & __Vtemp_h34d96581__10[0x19U])) {
            vlSelf->__PVT__regVec_813 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__11, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x4000000U & __Vtemp_h34d96581__11[0x1aU])) {
            vlSelf->__PVT__regVec_858 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__12, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x8000U & __Vtemp_h34d96581__12[0x19U])) {
            vlSelf->__PVT__regVec_815 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__13, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10000000U & __Vtemp_h34d96581__13[0x1aU])) {
            vlSelf->__PVT__regVec_860 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__14, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x20000U & __Vtemp_h34d96581__14[0x19U])) {
            vlSelf->__PVT__regVec_817 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__15, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40000000U & __Vtemp_h34d96581__15[0x1aU])) {
            vlSelf->__PVT__regVec_862 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__16, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x80000U & __Vtemp_h34d96581__16[0x19U])) {
            vlSelf->__PVT__regVec_819 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__17, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((1U & __Vtemp_h34d96581__17[0x1bU])) {
            vlSelf->__PVT__regVec_864 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__18, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x200000U & __Vtemp_h34d96581__18[0x19U])) {
            vlSelf->__PVT__regVec_821 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__19, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((4U & __Vtemp_h34d96581__19[0x1bU])) {
            vlSelf->__PVT__regVec_866 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__20, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x800000U & __Vtemp_h34d96581__20[0x19U])) {
            vlSelf->__PVT__regVec_823 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__21, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10U & __Vtemp_h34d96581__21[0x1bU])) {
            vlSelf->__PVT__regVec_868 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__22, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x2000000U & __Vtemp_h34d96581__22[0x19U])) {
            vlSelf->__PVT__regVec_825 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__23, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40U & __Vtemp_h34d96581__23[0x1bU])) {
            vlSelf->__PVT__regVec_870 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__24, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x8000000U & __Vtemp_h34d96581__24[0x19U])) {
            vlSelf->__PVT__regVec_827 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__25, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x100U & __Vtemp_h34d96581__25[0x1bU])) {
            vlSelf->__PVT__regVec_872 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__26, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x20000000U & __Vtemp_h34d96581__26[0x19U])) {
            vlSelf->__PVT__regVec_829 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__27, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x400U & __Vtemp_h34d96581__27[0x1bU])) {
            vlSelf->__PVT__regVec_874 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__28, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((__Vtemp_h34d96581__28[0x19U] >> 0x1fU)) {
            vlSelf->__PVT__regVec_831 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__29, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x1000U & __Vtemp_h34d96581__29[0x1bU])) {
            vlSelf->__PVT__regVec_876 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
    }
}

VL_INLINE_OPT void VTopAxiMasterWandRWithSlave_Axi4_transmission___sequent__TOP__TopAxiMasterWandRWithSlave__axiSlave__172(VTopAxiMasterWandRWithSlave_Axi4_transmission* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTopAxiMasterWandRWithSlave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTopAxiMasterWandRWithSlave_Axi4_transmission___sequent__TOP__TopAxiMasterWandRWithSlave__axiSlave__172\n"); );
    // Init
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__0;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__1;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__2;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__3;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__4;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__5;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__6;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__7;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__8;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__9;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__10;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__11;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__12;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__13;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__14;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__15;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__16;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__17;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__18;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__19;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__20;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__21;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__22;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__23;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__24;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__25;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__26;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__27;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__28;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__29;
    // Body
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__regVec_833 = 0U;
        vlSelf->__PVT__regVec_878 = 0U;
        vlSelf->__PVT__regVec_835 = 0U;
        vlSelf->__PVT__regVec_880 = 0U;
        vlSelf->__PVT__regVec_837 = 0U;
        vlSelf->__PVT__regVec_882 = 0U;
        vlSelf->__PVT__regVec_839 = 0U;
        vlSelf->__PVT__regVec_884 = 0U;
        vlSelf->__PVT__regVec_841 = 0U;
        vlSelf->__PVT__regVec_886 = 0U;
        vlSelf->__PVT__regVec_843 = 0U;
        vlSelf->__PVT__regVec_888 = 0U;
        vlSelf->__PVT__regVec_845 = 0U;
        vlSelf->__PVT__regVec_890 = 0U;
        vlSelf->__PVT__regVec_847 = 0U;
        vlSelf->__PVT__regVec_892 = 0U;
        vlSelf->__PVT__regVec_849 = 0U;
        vlSelf->__PVT__regVec_894 = 0U;
        vlSelf->__PVT__regVec_851 = 0U;
        vlSelf->__PVT__regVec_896 = 0U;
        vlSelf->__PVT__regVec_853 = 0U;
        vlSelf->__PVT__regVec_898 = 0U;
        vlSelf->__PVT__regVec_855 = 0U;
        vlSelf->__PVT__regVec_900 = 0U;
        vlSelf->__PVT__regVec_857 = 0U;
        vlSelf->__PVT__regVec_902 = 0U;
        vlSelf->__PVT__regVec_859 = 0U;
        vlSelf->__PVT__regVec_904 = 0U;
        vlSelf->__PVT__regVec_861 = 0U;
        vlSelf->__PVT__regVec_906 = 0U;
    } else if (vlSelf->__PVT__when_Axi4_transmission_l91) {
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__0, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((2U & __Vtemp_h34d96581__0[0x1aU])) {
            vlSelf->__PVT__regVec_833 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__1, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x4000U & __Vtemp_h34d96581__1[0x1bU])) {
            vlSelf->__PVT__regVec_878 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__2, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((8U & __Vtemp_h34d96581__2[0x1aU])) {
            vlSelf->__PVT__regVec_835 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__3, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10000U & __Vtemp_h34d96581__3[0x1bU])) {
            vlSelf->__PVT__regVec_880 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__4, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x20U & __Vtemp_h34d96581__4[0x1aU])) {
            vlSelf->__PVT__regVec_837 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__5, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40000U & __Vtemp_h34d96581__5[0x1bU])) {
            vlSelf->__PVT__regVec_882 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__6, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x80U & __Vtemp_h34d96581__6[0x1aU])) {
            vlSelf->__PVT__regVec_839 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__7, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x100000U & __Vtemp_h34d96581__7[0x1bU])) {
            vlSelf->__PVT__regVec_884 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__8, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x200U & __Vtemp_h34d96581__8[0x1aU])) {
            vlSelf->__PVT__regVec_841 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__9, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x400000U & __Vtemp_h34d96581__9[0x1bU])) {
            vlSelf->__PVT__regVec_886 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__10, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x800U & __Vtemp_h34d96581__10[0x1aU])) {
            vlSelf->__PVT__regVec_843 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__11, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x1000000U & __Vtemp_h34d96581__11[0x1bU])) {
            vlSelf->__PVT__regVec_888 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__12, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x2000U & __Vtemp_h34d96581__12[0x1aU])) {
            vlSelf->__PVT__regVec_845 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__13, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x4000000U & __Vtemp_h34d96581__13[0x1bU])) {
            vlSelf->__PVT__regVec_890 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__14, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x8000U & __Vtemp_h34d96581__14[0x1aU])) {
            vlSelf->__PVT__regVec_847 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__15, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10000000U & __Vtemp_h34d96581__15[0x1bU])) {
            vlSelf->__PVT__regVec_892 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__16, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x20000U & __Vtemp_h34d96581__16[0x1aU])) {
            vlSelf->__PVT__regVec_849 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__17, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40000000U & __Vtemp_h34d96581__17[0x1bU])) {
            vlSelf->__PVT__regVec_894 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__18, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x80000U & __Vtemp_h34d96581__18[0x1aU])) {
            vlSelf->__PVT__regVec_851 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__19, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((1U & __Vtemp_h34d96581__19[0x1cU])) {
            vlSelf->__PVT__regVec_896 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__20, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x200000U & __Vtemp_h34d96581__20[0x1aU])) {
            vlSelf->__PVT__regVec_853 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__21, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((4U & __Vtemp_h34d96581__21[0x1cU])) {
            vlSelf->__PVT__regVec_898 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__22, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x800000U & __Vtemp_h34d96581__22[0x1aU])) {
            vlSelf->__PVT__regVec_855 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__23, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10U & __Vtemp_h34d96581__23[0x1cU])) {
            vlSelf->__PVT__regVec_900 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__24, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x2000000U & __Vtemp_h34d96581__24[0x1aU])) {
            vlSelf->__PVT__regVec_857 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__25, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40U & __Vtemp_h34d96581__25[0x1cU])) {
            vlSelf->__PVT__regVec_902 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__26, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x8000000U & __Vtemp_h34d96581__26[0x1aU])) {
            vlSelf->__PVT__regVec_859 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__27, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x100U & __Vtemp_h34d96581__27[0x1cU])) {
            vlSelf->__PVT__regVec_904 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__28, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x20000000U & __Vtemp_h34d96581__28[0x1aU])) {
            vlSelf->__PVT__regVec_861 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__29, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x400U & __Vtemp_h34d96581__29[0x1cU])) {
            vlSelf->__PVT__regVec_906 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
    }
}

VL_INLINE_OPT void VTopAxiMasterWandRWithSlave_Axi4_transmission___sequent__TOP__TopAxiMasterWandRWithSlave__axiSlave__173(VTopAxiMasterWandRWithSlave_Axi4_transmission* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTopAxiMasterWandRWithSlave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTopAxiMasterWandRWithSlave_Axi4_transmission___sequent__TOP__TopAxiMasterWandRWithSlave__axiSlave__173\n"); );
    // Init
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__0;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__1;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__2;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__3;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__4;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__5;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__6;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__7;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__8;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__9;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__10;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__11;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__12;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__13;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__14;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__15;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__16;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__17;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__18;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__19;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__20;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__21;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__22;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__23;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__24;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__25;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__26;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__27;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__28;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__29;
    // Body
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__regVec_863 = 0U;
        vlSelf->__PVT__regVec_908 = 0U;
        vlSelf->__PVT__regVec_865 = 0U;
        vlSelf->__PVT__regVec_910 = 0U;
        vlSelf->__PVT__regVec_867 = 0U;
        vlSelf->__PVT__regVec_912 = 0U;
        vlSelf->__PVT__regVec_869 = 0U;
        vlSelf->__PVT__regVec_914 = 0U;
        vlSelf->__PVT__regVec_871 = 0U;
        vlSelf->__PVT__regVec_916 = 0U;
        vlSelf->__PVT__regVec_873 = 0U;
        vlSelf->__PVT__regVec_918 = 0U;
        vlSelf->__PVT__regVec_875 = 0U;
        vlSelf->__PVT__regVec_920 = 0U;
        vlSelf->__PVT__regVec_877 = 0U;
        vlSelf->__PVT__regVec_922 = 0U;
        vlSelf->__PVT__regVec_879 = 0U;
        vlSelf->__PVT__regVec_924 = 0U;
        vlSelf->__PVT__regVec_881 = 0U;
        vlSelf->__PVT__regVec_926 = 0U;
        vlSelf->__PVT__regVec_883 = 0U;
        vlSelf->__PVT__regVec_928 = 0U;
        vlSelf->__PVT__regVec_885 = 0U;
        vlSelf->__PVT__regVec_930 = 0U;
        vlSelf->__PVT__regVec_887 = 0U;
        vlSelf->__PVT__regVec_932 = 0U;
        vlSelf->__PVT__regVec_889 = 0U;
        vlSelf->__PVT__regVec_934 = 0U;
        vlSelf->__PVT__regVec_891 = 0U;
        vlSelf->__PVT__regVec_936 = 0U;
    } else if (vlSelf->__PVT__when_Axi4_transmission_l91) {
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__0, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((__Vtemp_h34d96581__0[0x1aU] >> 0x1fU)) {
            vlSelf->__PVT__regVec_863 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__1, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x1000U & __Vtemp_h34d96581__1[0x1cU])) {
            vlSelf->__PVT__regVec_908 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__2, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((2U & __Vtemp_h34d96581__2[0x1bU])) {
            vlSelf->__PVT__regVec_865 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__3, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x4000U & __Vtemp_h34d96581__3[0x1cU])) {
            vlSelf->__PVT__regVec_910 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__4, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((8U & __Vtemp_h34d96581__4[0x1bU])) {
            vlSelf->__PVT__regVec_867 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__5, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10000U & __Vtemp_h34d96581__5[0x1cU])) {
            vlSelf->__PVT__regVec_912 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__6, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x20U & __Vtemp_h34d96581__6[0x1bU])) {
            vlSelf->__PVT__regVec_869 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__7, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40000U & __Vtemp_h34d96581__7[0x1cU])) {
            vlSelf->__PVT__regVec_914 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__8, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x80U & __Vtemp_h34d96581__8[0x1bU])) {
            vlSelf->__PVT__regVec_871 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__9, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x100000U & __Vtemp_h34d96581__9[0x1cU])) {
            vlSelf->__PVT__regVec_916 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__10, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x200U & __Vtemp_h34d96581__10[0x1bU])) {
            vlSelf->__PVT__regVec_873 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__11, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x400000U & __Vtemp_h34d96581__11[0x1cU])) {
            vlSelf->__PVT__regVec_918 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__12, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x800U & __Vtemp_h34d96581__12[0x1bU])) {
            vlSelf->__PVT__regVec_875 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__13, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x1000000U & __Vtemp_h34d96581__13[0x1cU])) {
            vlSelf->__PVT__regVec_920 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__14, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x2000U & __Vtemp_h34d96581__14[0x1bU])) {
            vlSelf->__PVT__regVec_877 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__15, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x4000000U & __Vtemp_h34d96581__15[0x1cU])) {
            vlSelf->__PVT__regVec_922 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__16, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x8000U & __Vtemp_h34d96581__16[0x1bU])) {
            vlSelf->__PVT__regVec_879 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__17, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10000000U & __Vtemp_h34d96581__17[0x1cU])) {
            vlSelf->__PVT__regVec_924 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__18, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x20000U & __Vtemp_h34d96581__18[0x1bU])) {
            vlSelf->__PVT__regVec_881 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__19, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40000000U & __Vtemp_h34d96581__19[0x1cU])) {
            vlSelf->__PVT__regVec_926 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__20, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x80000U & __Vtemp_h34d96581__20[0x1bU])) {
            vlSelf->__PVT__regVec_883 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__21, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((1U & __Vtemp_h34d96581__21[0x1dU])) {
            vlSelf->__PVT__regVec_928 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__22, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x200000U & __Vtemp_h34d96581__22[0x1bU])) {
            vlSelf->__PVT__regVec_885 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__23, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((4U & __Vtemp_h34d96581__23[0x1dU])) {
            vlSelf->__PVT__regVec_930 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__24, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x800000U & __Vtemp_h34d96581__24[0x1bU])) {
            vlSelf->__PVT__regVec_887 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__25, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10U & __Vtemp_h34d96581__25[0x1dU])) {
            vlSelf->__PVT__regVec_932 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__26, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x2000000U & __Vtemp_h34d96581__26[0x1bU])) {
            vlSelf->__PVT__regVec_889 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__27, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40U & __Vtemp_h34d96581__27[0x1dU])) {
            vlSelf->__PVT__regVec_934 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__28, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x8000000U & __Vtemp_h34d96581__28[0x1bU])) {
            vlSelf->__PVT__regVec_891 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__29, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x100U & __Vtemp_h34d96581__29[0x1dU])) {
            vlSelf->__PVT__regVec_936 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
    }
}

VL_INLINE_OPT void VTopAxiMasterWandRWithSlave_Axi4_transmission___sequent__TOP__TopAxiMasterWandRWithSlave__axiSlave__174(VTopAxiMasterWandRWithSlave_Axi4_transmission* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTopAxiMasterWandRWithSlave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTopAxiMasterWandRWithSlave_Axi4_transmission___sequent__TOP__TopAxiMasterWandRWithSlave__axiSlave__174\n"); );
    // Init
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__0;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__1;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__2;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__3;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__4;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__5;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__6;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__7;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__8;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__9;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__10;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__11;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__12;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__13;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__14;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__15;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__16;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__17;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__18;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__19;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__20;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__21;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__22;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__23;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__24;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__25;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__26;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__27;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__28;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__29;
    // Body
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__regVec_893 = 0U;
        vlSelf->__PVT__regVec_938 = 0U;
        vlSelf->__PVT__regVec_895 = 0U;
        vlSelf->__PVT__regVec_940 = 0U;
        vlSelf->__PVT__regVec_897 = 0U;
        vlSelf->__PVT__regVec_942 = 0U;
        vlSelf->__PVT__regVec_899 = 0U;
        vlSelf->__PVT__regVec_944 = 0U;
        vlSelf->__PVT__regVec_901 = 0U;
        vlSelf->__PVT__regVec_946 = 0U;
        vlSelf->__PVT__regVec_903 = 0U;
        vlSelf->__PVT__regVec_948 = 0U;
        vlSelf->__PVT__regVec_905 = 0U;
        vlSelf->__PVT__regVec_950 = 0U;
        vlSelf->__PVT__regVec_907 = 0U;
        vlSelf->__PVT__regVec_952 = 0U;
        vlSelf->__PVT__regVec_909 = 0U;
        vlSelf->__PVT__regVec_954 = 0U;
        vlSelf->__PVT__regVec_911 = 0U;
        vlSelf->__PVT__regVec_956 = 0U;
        vlSelf->__PVT__regVec_913 = 0U;
        vlSelf->__PVT__regVec_958 = 0U;
        vlSelf->__PVT__regVec_915 = 0U;
        vlSelf->__PVT__regVec_960 = 0U;
        vlSelf->__PVT__regVec_917 = 0U;
        vlSelf->__PVT__regVec_962 = 0U;
        vlSelf->__PVT__regVec_919 = 0U;
        vlSelf->__PVT__regVec_964 = 0U;
        vlSelf->__PVT__regVec_921 = 0U;
        vlSelf->__PVT__regVec_966 = 0U;
    } else if (vlSelf->__PVT__when_Axi4_transmission_l91) {
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__0, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x20000000U & __Vtemp_h34d96581__0[0x1bU])) {
            vlSelf->__PVT__regVec_893 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__1, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x400U & __Vtemp_h34d96581__1[0x1dU])) {
            vlSelf->__PVT__regVec_938 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__2, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((__Vtemp_h34d96581__2[0x1bU] >> 0x1fU)) {
            vlSelf->__PVT__regVec_895 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__3, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x1000U & __Vtemp_h34d96581__3[0x1dU])) {
            vlSelf->__PVT__regVec_940 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__4, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((2U & __Vtemp_h34d96581__4[0x1cU])) {
            vlSelf->__PVT__regVec_897 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__5, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x4000U & __Vtemp_h34d96581__5[0x1dU])) {
            vlSelf->__PVT__regVec_942 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__6, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((8U & __Vtemp_h34d96581__6[0x1cU])) {
            vlSelf->__PVT__regVec_899 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__7, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10000U & __Vtemp_h34d96581__7[0x1dU])) {
            vlSelf->__PVT__regVec_944 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__8, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x20U & __Vtemp_h34d96581__8[0x1cU])) {
            vlSelf->__PVT__regVec_901 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__9, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40000U & __Vtemp_h34d96581__9[0x1dU])) {
            vlSelf->__PVT__regVec_946 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__10, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x80U & __Vtemp_h34d96581__10[0x1cU])) {
            vlSelf->__PVT__regVec_903 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__11, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x100000U & __Vtemp_h34d96581__11[0x1dU])) {
            vlSelf->__PVT__regVec_948 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__12, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x200U & __Vtemp_h34d96581__12[0x1cU])) {
            vlSelf->__PVT__regVec_905 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__13, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x400000U & __Vtemp_h34d96581__13[0x1dU])) {
            vlSelf->__PVT__regVec_950 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__14, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x800U & __Vtemp_h34d96581__14[0x1cU])) {
            vlSelf->__PVT__regVec_907 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__15, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x1000000U & __Vtemp_h34d96581__15[0x1dU])) {
            vlSelf->__PVT__regVec_952 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__16, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x2000U & __Vtemp_h34d96581__16[0x1cU])) {
            vlSelf->__PVT__regVec_909 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__17, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x4000000U & __Vtemp_h34d96581__17[0x1dU])) {
            vlSelf->__PVT__regVec_954 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__18, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x8000U & __Vtemp_h34d96581__18[0x1cU])) {
            vlSelf->__PVT__regVec_911 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__19, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10000000U & __Vtemp_h34d96581__19[0x1dU])) {
            vlSelf->__PVT__regVec_956 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__20, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x20000U & __Vtemp_h34d96581__20[0x1cU])) {
            vlSelf->__PVT__regVec_913 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__21, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40000000U & __Vtemp_h34d96581__21[0x1dU])) {
            vlSelf->__PVT__regVec_958 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__22, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x80000U & __Vtemp_h34d96581__22[0x1cU])) {
            vlSelf->__PVT__regVec_915 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__23, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((1U & __Vtemp_h34d96581__23[0x1eU])) {
            vlSelf->__PVT__regVec_960 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__24, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x200000U & __Vtemp_h34d96581__24[0x1cU])) {
            vlSelf->__PVT__regVec_917 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__25, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((4U & __Vtemp_h34d96581__25[0x1eU])) {
            vlSelf->__PVT__regVec_962 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__26, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x800000U & __Vtemp_h34d96581__26[0x1cU])) {
            vlSelf->__PVT__regVec_919 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__27, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10U & __Vtemp_h34d96581__27[0x1eU])) {
            vlSelf->__PVT__regVec_964 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__28, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x2000000U & __Vtemp_h34d96581__28[0x1cU])) {
            vlSelf->__PVT__regVec_921 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__29, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40U & __Vtemp_h34d96581__29[0x1eU])) {
            vlSelf->__PVT__regVec_966 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
    }
}

VL_INLINE_OPT void VTopAxiMasterWandRWithSlave_Axi4_transmission___sequent__TOP__TopAxiMasterWandRWithSlave__axiSlave__175(VTopAxiMasterWandRWithSlave_Axi4_transmission* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTopAxiMasterWandRWithSlave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTopAxiMasterWandRWithSlave_Axi4_transmission___sequent__TOP__TopAxiMasterWandRWithSlave__axiSlave__175\n"); );
    // Init
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__0;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__1;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__2;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__3;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__4;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__5;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__6;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__7;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__8;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__9;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__10;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__11;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__12;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__13;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__14;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__15;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__16;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__17;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__18;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__19;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__20;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__21;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__22;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__23;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__24;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__25;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__26;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__27;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__28;
    VlWide<128>/*4095:0*/ __Vtemp_h34d96581__29;
    // Body
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__regVec_923 = 0U;
        vlSelf->__PVT__regVec_968 = 0U;
        vlSelf->__PVT__regVec_925 = 0U;
        vlSelf->__PVT__regVec_970 = 0U;
        vlSelf->__PVT__regVec_927 = 0U;
        vlSelf->__PVT__regVec_972 = 0U;
        vlSelf->__PVT__regVec_929 = 0U;
        vlSelf->__PVT__regVec_974 = 0U;
        vlSelf->__PVT__regVec_931 = 0U;
        vlSelf->__PVT__regVec_976 = 0U;
        vlSelf->__PVT__regVec_933 = 0U;
        vlSelf->__PVT__regVec_978 = 0U;
        vlSelf->__PVT__regVec_935 = 0U;
        vlSelf->__PVT__regVec_980 = 0U;
        vlSelf->__PVT__regVec_937 = 0U;
        vlSelf->__PVT__regVec_982 = 0U;
        vlSelf->__PVT__regVec_939 = 0U;
        vlSelf->__PVT__regVec_984 = 0U;
        vlSelf->__PVT__regVec_941 = 0U;
        vlSelf->__PVT__regVec_986 = 0U;
        vlSelf->__PVT__regVec_943 = 0U;
        vlSelf->__PVT__regVec_988 = 0U;
        vlSelf->__PVT__regVec_945 = 0U;
        vlSelf->__PVT__regVec_990 = 0U;
        vlSelf->__PVT__regVec_947 = 0U;
        vlSelf->__PVT__regVec_992 = 0U;
        vlSelf->__PVT__regVec_949 = 0U;
        vlSelf->__PVT__regVec_994 = 0U;
        vlSelf->__PVT__regVec_951 = 0U;
        vlSelf->__PVT__regVec_996 = 0U;
    } else if (vlSelf->__PVT__when_Axi4_transmission_l91) {
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__0, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x8000000U & __Vtemp_h34d96581__0[0x1cU])) {
            vlSelf->__PVT__regVec_923 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__1, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x100U & __Vtemp_h34d96581__1[0x1eU])) {
            vlSelf->__PVT__regVec_968 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__2, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x20000000U & __Vtemp_h34d96581__2[0x1cU])) {
            vlSelf->__PVT__regVec_925 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__3, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x400U & __Vtemp_h34d96581__3[0x1eU])) {
            vlSelf->__PVT__regVec_970 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__4, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((__Vtemp_h34d96581__4[0x1cU] >> 0x1fU)) {
            vlSelf->__PVT__regVec_927 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__5, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x1000U & __Vtemp_h34d96581__5[0x1eU])) {
            vlSelf->__PVT__regVec_972 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__6, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((2U & __Vtemp_h34d96581__6[0x1dU])) {
            vlSelf->__PVT__regVec_929 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__7, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x4000U & __Vtemp_h34d96581__7[0x1eU])) {
            vlSelf->__PVT__regVec_974 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__8, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((8U & __Vtemp_h34d96581__8[0x1dU])) {
            vlSelf->__PVT__regVec_931 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__9, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10000U & __Vtemp_h34d96581__9[0x1eU])) {
            vlSelf->__PVT__regVec_976 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__10, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x20U & __Vtemp_h34d96581__10[0x1dU])) {
            vlSelf->__PVT__regVec_933 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__11, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40000U & __Vtemp_h34d96581__11[0x1eU])) {
            vlSelf->__PVT__regVec_978 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__12, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x80U & __Vtemp_h34d96581__12[0x1dU])) {
            vlSelf->__PVT__regVec_935 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__13, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x100000U & __Vtemp_h34d96581__13[0x1eU])) {
            vlSelf->__PVT__regVec_980 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__14, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x200U & __Vtemp_h34d96581__14[0x1dU])) {
            vlSelf->__PVT__regVec_937 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__15, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x400000U & __Vtemp_h34d96581__15[0x1eU])) {
            vlSelf->__PVT__regVec_982 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__16, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x800U & __Vtemp_h34d96581__16[0x1dU])) {
            vlSelf->__PVT__regVec_939 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__17, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x1000000U & __Vtemp_h34d96581__17[0x1eU])) {
            vlSelf->__PVT__regVec_984 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__18, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x2000U & __Vtemp_h34d96581__18[0x1dU])) {
            vlSelf->__PVT__regVec_941 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__19, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x4000000U & __Vtemp_h34d96581__19[0x1eU])) {
            vlSelf->__PVT__regVec_986 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__20, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x8000U & __Vtemp_h34d96581__20[0x1dU])) {
            vlSelf->__PVT__regVec_943 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__21, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10000000U & __Vtemp_h34d96581__21[0x1eU])) {
            vlSelf->__PVT__regVec_988 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__22, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x20000U & __Vtemp_h34d96581__22[0x1dU])) {
            vlSelf->__PVT__regVec_945 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__23, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40000000U & __Vtemp_h34d96581__23[0x1eU])) {
            vlSelf->__PVT__regVec_990 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__24, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x80000U & __Vtemp_h34d96581__24[0x1dU])) {
            vlSelf->__PVT__regVec_947 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__25, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((1U & __Vtemp_h34d96581__25[0x1fU])) {
            vlSelf->__PVT__regVec_992 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__26, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x200000U & __Vtemp_h34d96581__26[0x1dU])) {
            vlSelf->__PVT__regVec_949 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__27, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((4U & __Vtemp_h34d96581__27[0x1fU])) {
            vlSelf->__PVT__regVec_994 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__28, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x800000U & __Vtemp_h34d96581__28[0x1dU])) {
            vlSelf->__PVT__regVec_951 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__29, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10U & __Vtemp_h34d96581__29[0x1fU])) {
            vlSelf->__PVT__regVec_996 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
    }
}
