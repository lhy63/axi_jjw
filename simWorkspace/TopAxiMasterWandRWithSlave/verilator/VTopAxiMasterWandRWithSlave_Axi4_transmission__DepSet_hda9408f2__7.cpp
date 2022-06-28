// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTopAxiMasterWandRWithSlave.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTopAxiMasterWandRWithSlave_Axi4_transmission.h"
#include "VTopAxiMasterWandRWithSlave__Syms.h"

extern const VlWide<128>/*4095:0*/ VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0;

VL_INLINE_OPT void VTopAxiMasterWandRWithSlave_Axi4_transmission___sequent__TOP__TopAxiMasterWandRWithSlave__axiSlave__149(VTopAxiMasterWandRWithSlave_Axi4_transmission* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTopAxiMasterWandRWithSlave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTopAxiMasterWandRWithSlave_Axi4_transmission___sequent__TOP__TopAxiMasterWandRWithSlave__axiSlave__149\n"); );
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
        vlSelf->__PVT__regVec_520 = 0U;
        vlSelf->__PVT__regVec_519 = 0U;
        vlSelf->__PVT__regVec_518 = 0U;
        vlSelf->__PVT__regVec_517 = 0U;
        vlSelf->__PVT__regVec_516 = 0U;
        vlSelf->__PVT__regVec_515 = 0U;
        vlSelf->__PVT__regVec_514 = 0U;
        vlSelf->__PVT__regVec_513 = 0U;
        vlSelf->__PVT__regVec_512 = 0U;
        vlSelf->__PVT__regVec_511 = 0U;
        vlSelf->__PVT__regVec_510 = 0U;
        vlSelf->__PVT__regVec_509 = 0U;
        vlSelf->__PVT__regVec_508 = 0U;
        vlSelf->__PVT__regVec_507 = 0U;
        vlSelf->__PVT__regVec_506 = 0U;
        vlSelf->__PVT__regVec_505 = 0U;
        vlSelf->__PVT__regVec_504 = 0U;
        vlSelf->__PVT__regVec_503 = 0U;
        vlSelf->__PVT__regVec_502 = 0U;
        vlSelf->__PVT__regVec_501 = 0U;
        vlSelf->__PVT__regVec_500 = 0U;
        vlSelf->__PVT__regVec_499 = 0U;
        vlSelf->__PVT__regVec_498 = 0U;
        vlSelf->__PVT__regVec_497 = 0U;
        vlSelf->__PVT__regVec_496 = 0U;
        vlSelf->__PVT__regVec_495 = 0U;
        vlSelf->__PVT__regVec_494 = 0U;
        vlSelf->__PVT__regVec_493 = 0U;
        vlSelf->__PVT__regVec_492 = 0U;
        vlSelf->__PVT__regVec_491 = 0U;
    } else if (vlSelf->__PVT__when_Axi4_transmission_l91) {
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__0, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x100U & __Vtemp_h34d96581__0[0x10U])) {
            vlSelf->__PVT__regVec_520 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__1, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x80U & __Vtemp_h34d96581__1[0x10U])) {
            vlSelf->__PVT__regVec_519 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__2, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40U & __Vtemp_h34d96581__2[0x10U])) {
            vlSelf->__PVT__regVec_518 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__3, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x20U & __Vtemp_h34d96581__3[0x10U])) {
            vlSelf->__PVT__regVec_517 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__4, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10U & __Vtemp_h34d96581__4[0x10U])) {
            vlSelf->__PVT__regVec_516 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__5, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((8U & __Vtemp_h34d96581__5[0x10U])) {
            vlSelf->__PVT__regVec_515 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__6, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((4U & __Vtemp_h34d96581__6[0x10U])) {
            vlSelf->__PVT__regVec_514 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__7, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((2U & __Vtemp_h34d96581__7[0x10U])) {
            vlSelf->__PVT__regVec_513 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__8, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((1U & __Vtemp_h34d96581__8[0x10U])) {
            vlSelf->__PVT__regVec_512 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__9, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((__Vtemp_h34d96581__9[0xfU] >> 0x1fU)) {
            vlSelf->__PVT__regVec_511 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__10, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40000000U & __Vtemp_h34d96581__10[0xfU])) {
            vlSelf->__PVT__regVec_510 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__11, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x20000000U & __Vtemp_h34d96581__11[0xfU])) {
            vlSelf->__PVT__regVec_509 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__12, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10000000U & __Vtemp_h34d96581__12[0xfU])) {
            vlSelf->__PVT__regVec_508 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__13, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x8000000U & __Vtemp_h34d96581__13[0xfU])) {
            vlSelf->__PVT__regVec_507 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__14, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x4000000U & __Vtemp_h34d96581__14[0xfU])) {
            vlSelf->__PVT__regVec_506 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__15, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x2000000U & __Vtemp_h34d96581__15[0xfU])) {
            vlSelf->__PVT__regVec_505 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__16, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x1000000U & __Vtemp_h34d96581__16[0xfU])) {
            vlSelf->__PVT__regVec_504 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__17, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x800000U & __Vtemp_h34d96581__17[0xfU])) {
            vlSelf->__PVT__regVec_503 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__18, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x400000U & __Vtemp_h34d96581__18[0xfU])) {
            vlSelf->__PVT__regVec_502 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__19, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x200000U & __Vtemp_h34d96581__19[0xfU])) {
            vlSelf->__PVT__regVec_501 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__20, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x100000U & __Vtemp_h34d96581__20[0xfU])) {
            vlSelf->__PVT__regVec_500 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__21, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x80000U & __Vtemp_h34d96581__21[0xfU])) {
            vlSelf->__PVT__regVec_499 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__22, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40000U & __Vtemp_h34d96581__22[0xfU])) {
            vlSelf->__PVT__regVec_498 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__23, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x20000U & __Vtemp_h34d96581__23[0xfU])) {
            vlSelf->__PVT__regVec_497 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__24, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10000U & __Vtemp_h34d96581__24[0xfU])) {
            vlSelf->__PVT__regVec_496 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__25, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x8000U & __Vtemp_h34d96581__25[0xfU])) {
            vlSelf->__PVT__regVec_495 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__26, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x4000U & __Vtemp_h34d96581__26[0xfU])) {
            vlSelf->__PVT__regVec_494 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__27, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x2000U & __Vtemp_h34d96581__27[0xfU])) {
            vlSelf->__PVT__regVec_493 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__28, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x1000U & __Vtemp_h34d96581__28[0xfU])) {
            vlSelf->__PVT__regVec_492 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__29, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x800U & __Vtemp_h34d96581__29[0xfU])) {
            vlSelf->__PVT__regVec_491 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
    }
}

VL_INLINE_OPT void VTopAxiMasterWandRWithSlave_Axi4_transmission___sequent__TOP__TopAxiMasterWandRWithSlave__axiSlave__150(VTopAxiMasterWandRWithSlave_Axi4_transmission* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTopAxiMasterWandRWithSlave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTopAxiMasterWandRWithSlave_Axi4_transmission___sequent__TOP__TopAxiMasterWandRWithSlave__axiSlave__150\n"); );
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
        vlSelf->__PVT__regVec_490 = 0U;
        vlSelf->__PVT__regVec_489 = 0U;
        vlSelf->__PVT__regVec_488 = 0U;
        vlSelf->__PVT__regVec_487 = 0U;
        vlSelf->__PVT__regVec_486 = 0U;
        vlSelf->__PVT__regVec_485 = 0U;
        vlSelf->__PVT__regVec_484 = 0U;
        vlSelf->__PVT__regVec_483 = 0U;
        vlSelf->__PVT__regVec_482 = 0U;
        vlSelf->__PVT__regVec_481 = 0U;
        vlSelf->__PVT__regVec_480 = 0U;
        vlSelf->__PVT__regVec_479 = 0U;
        vlSelf->__PVT__regVec_478 = 0U;
        vlSelf->__PVT__regVec_477 = 0U;
        vlSelf->__PVT__regVec_476 = 0U;
        vlSelf->__PVT__regVec_475 = 0U;
        vlSelf->__PVT__regVec_474 = 0U;
        vlSelf->__PVT__regVec_473 = 0U;
        vlSelf->__PVT__regVec_471 = 0U;
        vlSelf->__PVT__regVec_470 = 0U;
        vlSelf->__PVT__regVec_469 = 0U;
        vlSelf->__PVT__regVec_468 = 0U;
        vlSelf->__PVT__regVec_467 = 0U;
        vlSelf->__PVT__regVec_466 = 0U;
        vlSelf->__PVT__regVec_465 = 0U;
        vlSelf->__PVT__regVec_464 = 0U;
        vlSelf->__PVT__regVec_463 = 0U;
        vlSelf->__PVT__regVec_462 = 0U;
        vlSelf->__PVT__regVec_461 = 0U;
        vlSelf->__PVT__regVec_460 = 0U;
    } else if (vlSelf->__PVT__when_Axi4_transmission_l91) {
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__0, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x400U & __Vtemp_h34d96581__0[0xfU])) {
            vlSelf->__PVT__regVec_490 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__1, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x200U & __Vtemp_h34d96581__1[0xfU])) {
            vlSelf->__PVT__regVec_489 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__2, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x100U & __Vtemp_h34d96581__2[0xfU])) {
            vlSelf->__PVT__regVec_488 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__3, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x80U & __Vtemp_h34d96581__3[0xfU])) {
            vlSelf->__PVT__regVec_487 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__4, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40U & __Vtemp_h34d96581__4[0xfU])) {
            vlSelf->__PVT__regVec_486 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__5, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x20U & __Vtemp_h34d96581__5[0xfU])) {
            vlSelf->__PVT__regVec_485 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__6, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10U & __Vtemp_h34d96581__6[0xfU])) {
            vlSelf->__PVT__regVec_484 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__7, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((8U & __Vtemp_h34d96581__7[0xfU])) {
            vlSelf->__PVT__regVec_483 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__8, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((4U & __Vtemp_h34d96581__8[0xfU])) {
            vlSelf->__PVT__regVec_482 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__9, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((2U & __Vtemp_h34d96581__9[0xfU])) {
            vlSelf->__PVT__regVec_481 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__10, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((1U & __Vtemp_h34d96581__10[0xfU])) {
            vlSelf->__PVT__regVec_480 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__11, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((__Vtemp_h34d96581__11[0xeU] >> 0x1fU)) {
            vlSelf->__PVT__regVec_479 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__12, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40000000U & __Vtemp_h34d96581__12[0xeU])) {
            vlSelf->__PVT__regVec_478 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__13, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x20000000U & __Vtemp_h34d96581__13[0xeU])) {
            vlSelf->__PVT__regVec_477 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__14, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10000000U & __Vtemp_h34d96581__14[0xeU])) {
            vlSelf->__PVT__regVec_476 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__15, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x8000000U & __Vtemp_h34d96581__15[0xeU])) {
            vlSelf->__PVT__regVec_475 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__16, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x4000000U & __Vtemp_h34d96581__16[0xeU])) {
            vlSelf->__PVT__regVec_474 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__17, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x2000000U & __Vtemp_h34d96581__17[0xeU])) {
            vlSelf->__PVT__regVec_473 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__18, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x800000U & __Vtemp_h34d96581__18[0xeU])) {
            vlSelf->__PVT__regVec_471 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__19, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x400000U & __Vtemp_h34d96581__19[0xeU])) {
            vlSelf->__PVT__regVec_470 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__20, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x200000U & __Vtemp_h34d96581__20[0xeU])) {
            vlSelf->__PVT__regVec_469 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__21, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x100000U & __Vtemp_h34d96581__21[0xeU])) {
            vlSelf->__PVT__regVec_468 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__22, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x80000U & __Vtemp_h34d96581__22[0xeU])) {
            vlSelf->__PVT__regVec_467 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__23, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40000U & __Vtemp_h34d96581__23[0xeU])) {
            vlSelf->__PVT__regVec_466 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__24, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x20000U & __Vtemp_h34d96581__24[0xeU])) {
            vlSelf->__PVT__regVec_465 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__25, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10000U & __Vtemp_h34d96581__25[0xeU])) {
            vlSelf->__PVT__regVec_464 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__26, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x8000U & __Vtemp_h34d96581__26[0xeU])) {
            vlSelf->__PVT__regVec_463 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__27, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x4000U & __Vtemp_h34d96581__27[0xeU])) {
            vlSelf->__PVT__regVec_462 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__28, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x2000U & __Vtemp_h34d96581__28[0xeU])) {
            vlSelf->__PVT__regVec_461 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__29, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x1000U & __Vtemp_h34d96581__29[0xeU])) {
            vlSelf->__PVT__regVec_460 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
    }
}

VL_INLINE_OPT void VTopAxiMasterWandRWithSlave_Axi4_transmission___sequent__TOP__TopAxiMasterWandRWithSlave__axiSlave__151(VTopAxiMasterWandRWithSlave_Axi4_transmission* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTopAxiMasterWandRWithSlave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTopAxiMasterWandRWithSlave_Axi4_transmission___sequent__TOP__TopAxiMasterWandRWithSlave__axiSlave__151\n"); );
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
        vlSelf->__PVT__regVec_459 = 0U;
        vlSelf->__PVT__regVec_458 = 0U;
        vlSelf->__PVT__regVec_457 = 0U;
        vlSelf->__PVT__regVec_456 = 0U;
        vlSelf->__PVT__regVec_455 = 0U;
        vlSelf->__PVT__regVec_454 = 0U;
        vlSelf->__PVT__regVec_453 = 0U;
        vlSelf->__PVT__regVec_452 = 0U;
        vlSelf->__PVT__regVec_451 = 0U;
        vlSelf->__PVT__regVec_450 = 0U;
        vlSelf->__PVT__regVec_449 = 0U;
        vlSelf->__PVT__regVec_448 = 0U;
        vlSelf->__PVT__regVec_447 = 0U;
        vlSelf->__PVT__regVec_446 = 0U;
        vlSelf->__PVT__regVec_445 = 0U;
        vlSelf->__PVT__regVec_444 = 0U;
        vlSelf->__PVT__regVec_443 = 0U;
        vlSelf->__PVT__regVec_442 = 0U;
        vlSelf->__PVT__regVec_441 = 0U;
        vlSelf->__PVT__regVec_440 = 0U;
        vlSelf->__PVT__regVec_439 = 0U;
        vlSelf->__PVT__regVec_438 = 0U;
        vlSelf->__PVT__regVec_437 = 0U;
        vlSelf->__PVT__regVec_436 = 0U;
        vlSelf->__PVT__regVec_435 = 0U;
        vlSelf->__PVT__regVec_434 = 0U;
        vlSelf->__PVT__regVec_433 = 0U;
        vlSelf->__PVT__regVec_432 = 0U;
        vlSelf->__PVT__regVec_431 = 0U;
        vlSelf->__PVT__regVec_430 = 0U;
    } else if (vlSelf->__PVT__when_Axi4_transmission_l91) {
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__0, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x800U & __Vtemp_h34d96581__0[0xeU])) {
            vlSelf->__PVT__regVec_459 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__1, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x400U & __Vtemp_h34d96581__1[0xeU])) {
            vlSelf->__PVT__regVec_458 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__2, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x200U & __Vtemp_h34d96581__2[0xeU])) {
            vlSelf->__PVT__regVec_457 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__3, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x100U & __Vtemp_h34d96581__3[0xeU])) {
            vlSelf->__PVT__regVec_456 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__4, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x80U & __Vtemp_h34d96581__4[0xeU])) {
            vlSelf->__PVT__regVec_455 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__5, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40U & __Vtemp_h34d96581__5[0xeU])) {
            vlSelf->__PVT__regVec_454 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__6, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x20U & __Vtemp_h34d96581__6[0xeU])) {
            vlSelf->__PVT__regVec_453 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__7, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10U & __Vtemp_h34d96581__7[0xeU])) {
            vlSelf->__PVT__regVec_452 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__8, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((8U & __Vtemp_h34d96581__8[0xeU])) {
            vlSelf->__PVT__regVec_451 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__9, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((4U & __Vtemp_h34d96581__9[0xeU])) {
            vlSelf->__PVT__regVec_450 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__10, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((2U & __Vtemp_h34d96581__10[0xeU])) {
            vlSelf->__PVT__regVec_449 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__11, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((1U & __Vtemp_h34d96581__11[0xeU])) {
            vlSelf->__PVT__regVec_448 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__12, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((__Vtemp_h34d96581__12[0xdU] >> 0x1fU)) {
            vlSelf->__PVT__regVec_447 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__13, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40000000U & __Vtemp_h34d96581__13[0xdU])) {
            vlSelf->__PVT__regVec_446 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__14, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x20000000U & __Vtemp_h34d96581__14[0xdU])) {
            vlSelf->__PVT__regVec_445 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__15, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10000000U & __Vtemp_h34d96581__15[0xdU])) {
            vlSelf->__PVT__regVec_444 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__16, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x8000000U & __Vtemp_h34d96581__16[0xdU])) {
            vlSelf->__PVT__regVec_443 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__17, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x4000000U & __Vtemp_h34d96581__17[0xdU])) {
            vlSelf->__PVT__regVec_442 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__18, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x2000000U & __Vtemp_h34d96581__18[0xdU])) {
            vlSelf->__PVT__regVec_441 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__19, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x1000000U & __Vtemp_h34d96581__19[0xdU])) {
            vlSelf->__PVT__regVec_440 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__20, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x800000U & __Vtemp_h34d96581__20[0xdU])) {
            vlSelf->__PVT__regVec_439 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__21, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x400000U & __Vtemp_h34d96581__21[0xdU])) {
            vlSelf->__PVT__regVec_438 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__22, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x200000U & __Vtemp_h34d96581__22[0xdU])) {
            vlSelf->__PVT__regVec_437 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__23, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x100000U & __Vtemp_h34d96581__23[0xdU])) {
            vlSelf->__PVT__regVec_436 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__24, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x80000U & __Vtemp_h34d96581__24[0xdU])) {
            vlSelf->__PVT__regVec_435 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__25, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40000U & __Vtemp_h34d96581__25[0xdU])) {
            vlSelf->__PVT__regVec_434 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__26, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x20000U & __Vtemp_h34d96581__26[0xdU])) {
            vlSelf->__PVT__regVec_433 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__27, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10000U & __Vtemp_h34d96581__27[0xdU])) {
            vlSelf->__PVT__regVec_432 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__28, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x8000U & __Vtemp_h34d96581__28[0xdU])) {
            vlSelf->__PVT__regVec_431 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__29, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x4000U & __Vtemp_h34d96581__29[0xdU])) {
            vlSelf->__PVT__regVec_430 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
    }
}

VL_INLINE_OPT void VTopAxiMasterWandRWithSlave_Axi4_transmission___sequent__TOP__TopAxiMasterWandRWithSlave__axiSlave__152(VTopAxiMasterWandRWithSlave_Axi4_transmission* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTopAxiMasterWandRWithSlave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTopAxiMasterWandRWithSlave_Axi4_transmission___sequent__TOP__TopAxiMasterWandRWithSlave__axiSlave__152\n"); );
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
        vlSelf->__PVT__regVec_428 = 0U;
        vlSelf->__PVT__regVec_427 = 0U;
        vlSelf->__PVT__regVec_426 = 0U;
        vlSelf->__PVT__regVec_425 = 0U;
        vlSelf->__PVT__regVec_424 = 0U;
        vlSelf->__PVT__regVec_423 = 0U;
        vlSelf->__PVT__regVec_422 = 0U;
        vlSelf->__PVT__regVec_421 = 0U;
        vlSelf->__PVT__regVec_420 = 0U;
        vlSelf->__PVT__regVec_419 = 0U;
        vlSelf->__PVT__regVec_418 = 0U;
        vlSelf->__PVT__regVec_417 = 0U;
        vlSelf->__PVT__regVec_416 = 0U;
        vlSelf->__PVT__regVec_415 = 0U;
        vlSelf->__PVT__regVec_414 = 0U;
        vlSelf->__PVT__regVec_413 = 0U;
        vlSelf->__PVT__regVec_412 = 0U;
        vlSelf->__PVT__regVec_411 = 0U;
        vlSelf->__PVT__regVec_410 = 0U;
        vlSelf->__PVT__regVec_409 = 0U;
        vlSelf->__PVT__regVec_408 = 0U;
        vlSelf->__PVT__regVec_407 = 0U;
        vlSelf->__PVT__regVec_406 = 0U;
        vlSelf->__PVT__regVec_405 = 0U;
        vlSelf->__PVT__regVec_404 = 0U;
        vlSelf->__PVT__regVec_403 = 0U;
        vlSelf->__PVT__regVec_402 = 0U;
        vlSelf->__PVT__regVec_401 = 0U;
        vlSelf->__PVT__regVec_400 = 0U;
        vlSelf->__PVT__regVec_399 = 0U;
    } else if (vlSelf->__PVT__when_Axi4_transmission_l91) {
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__0, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x1000U & __Vtemp_h34d96581__0[0xdU])) {
            vlSelf->__PVT__regVec_428 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__1, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x800U & __Vtemp_h34d96581__1[0xdU])) {
            vlSelf->__PVT__regVec_427 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__2, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x400U & __Vtemp_h34d96581__2[0xdU])) {
            vlSelf->__PVT__regVec_426 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__3, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x200U & __Vtemp_h34d96581__3[0xdU])) {
            vlSelf->__PVT__regVec_425 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__4, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x100U & __Vtemp_h34d96581__4[0xdU])) {
            vlSelf->__PVT__regVec_424 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__5, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x80U & __Vtemp_h34d96581__5[0xdU])) {
            vlSelf->__PVT__regVec_423 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__6, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40U & __Vtemp_h34d96581__6[0xdU])) {
            vlSelf->__PVT__regVec_422 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__7, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x20U & __Vtemp_h34d96581__7[0xdU])) {
            vlSelf->__PVT__regVec_421 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__8, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10U & __Vtemp_h34d96581__8[0xdU])) {
            vlSelf->__PVT__regVec_420 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__9, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((8U & __Vtemp_h34d96581__9[0xdU])) {
            vlSelf->__PVT__regVec_419 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__10, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((4U & __Vtemp_h34d96581__10[0xdU])) {
            vlSelf->__PVT__regVec_418 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__11, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((2U & __Vtemp_h34d96581__11[0xdU])) {
            vlSelf->__PVT__regVec_417 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__12, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((1U & __Vtemp_h34d96581__12[0xdU])) {
            vlSelf->__PVT__regVec_416 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__13, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((__Vtemp_h34d96581__13[0xcU] >> 0x1fU)) {
            vlSelf->__PVT__regVec_415 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__14, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40000000U & __Vtemp_h34d96581__14[0xcU])) {
            vlSelf->__PVT__regVec_414 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__15, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x20000000U & __Vtemp_h34d96581__15[0xcU])) {
            vlSelf->__PVT__regVec_413 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__16, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10000000U & __Vtemp_h34d96581__16[0xcU])) {
            vlSelf->__PVT__regVec_412 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__17, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x8000000U & __Vtemp_h34d96581__17[0xcU])) {
            vlSelf->__PVT__regVec_411 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__18, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x4000000U & __Vtemp_h34d96581__18[0xcU])) {
            vlSelf->__PVT__regVec_410 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__19, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x2000000U & __Vtemp_h34d96581__19[0xcU])) {
            vlSelf->__PVT__regVec_409 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__20, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x1000000U & __Vtemp_h34d96581__20[0xcU])) {
            vlSelf->__PVT__regVec_408 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__21, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x800000U & __Vtemp_h34d96581__21[0xcU])) {
            vlSelf->__PVT__regVec_407 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__22, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x400000U & __Vtemp_h34d96581__22[0xcU])) {
            vlSelf->__PVT__regVec_406 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__23, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x200000U & __Vtemp_h34d96581__23[0xcU])) {
            vlSelf->__PVT__regVec_405 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__24, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x100000U & __Vtemp_h34d96581__24[0xcU])) {
            vlSelf->__PVT__regVec_404 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__25, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x80000U & __Vtemp_h34d96581__25[0xcU])) {
            vlSelf->__PVT__regVec_403 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__26, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40000U & __Vtemp_h34d96581__26[0xcU])) {
            vlSelf->__PVT__regVec_402 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__27, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x20000U & __Vtemp_h34d96581__27[0xcU])) {
            vlSelf->__PVT__regVec_401 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__28, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10000U & __Vtemp_h34d96581__28[0xcU])) {
            vlSelf->__PVT__regVec_400 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__29, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x8000U & __Vtemp_h34d96581__29[0xcU])) {
            vlSelf->__PVT__regVec_399 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
    }
}

VL_INLINE_OPT void VTopAxiMasterWandRWithSlave_Axi4_transmission___sequent__TOP__TopAxiMasterWandRWithSlave__axiSlave__153(VTopAxiMasterWandRWithSlave_Axi4_transmission* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTopAxiMasterWandRWithSlave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTopAxiMasterWandRWithSlave_Axi4_transmission___sequent__TOP__TopAxiMasterWandRWithSlave__axiSlave__153\n"); );
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
        vlSelf->__PVT__regVec_398 = 0U;
        vlSelf->__PVT__regVec_397 = 0U;
        vlSelf->__PVT__regVec_396 = 0U;
        vlSelf->__PVT__regVec_395 = 0U;
        vlSelf->__PVT__regVec_394 = 0U;
        vlSelf->__PVT__regVec_393 = 0U;
        vlSelf->__PVT__regVec_392 = 0U;
        vlSelf->__PVT__regVec_391 = 0U;
        vlSelf->__PVT__regVec_390 = 0U;
        vlSelf->__PVT__regVec_389 = 0U;
        vlSelf->__PVT__regVec_388 = 0U;
        vlSelf->__PVT__regVec_387 = 0U;
        vlSelf->__PVT__regVec_386 = 0U;
        vlSelf->__PVT__regVec_385 = 0U;
        vlSelf->__PVT__regVec_384 = 0U;
        vlSelf->__PVT__regVec_383 = 0U;
        vlSelf->__PVT__regVec_382 = 0U;
        vlSelf->__PVT__regVec_381 = 0U;
        vlSelf->__PVT__regVec_380 = 0U;
        vlSelf->__PVT__regVec_379 = 0U;
        vlSelf->__PVT__regVec_378 = 0U;
        vlSelf->__PVT__regVec_377 = 0U;
        vlSelf->__PVT__regVec_376 = 0U;
        vlSelf->__PVT__regVec_375 = 0U;
        vlSelf->__PVT__regVec_374 = 0U;
        vlSelf->__PVT__regVec_373 = 0U;
        vlSelf->__PVT__regVec_372 = 0U;
        vlSelf->__PVT__regVec_371 = 0U;
        vlSelf->__PVT__regVec_370 = 0U;
        vlSelf->__PVT__regVec_369 = 0U;
    } else if (vlSelf->__PVT__when_Axi4_transmission_l91) {
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__0, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x4000U & __Vtemp_h34d96581__0[0xcU])) {
            vlSelf->__PVT__regVec_398 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__1, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x2000U & __Vtemp_h34d96581__1[0xcU])) {
            vlSelf->__PVT__regVec_397 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__2, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x1000U & __Vtemp_h34d96581__2[0xcU])) {
            vlSelf->__PVT__regVec_396 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__3, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x800U & __Vtemp_h34d96581__3[0xcU])) {
            vlSelf->__PVT__regVec_395 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__4, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x400U & __Vtemp_h34d96581__4[0xcU])) {
            vlSelf->__PVT__regVec_394 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__5, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x200U & __Vtemp_h34d96581__5[0xcU])) {
            vlSelf->__PVT__regVec_393 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__6, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x100U & __Vtemp_h34d96581__6[0xcU])) {
            vlSelf->__PVT__regVec_392 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__7, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x80U & __Vtemp_h34d96581__7[0xcU])) {
            vlSelf->__PVT__regVec_391 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__8, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40U & __Vtemp_h34d96581__8[0xcU])) {
            vlSelf->__PVT__regVec_390 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__9, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x20U & __Vtemp_h34d96581__9[0xcU])) {
            vlSelf->__PVT__regVec_389 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__10, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10U & __Vtemp_h34d96581__10[0xcU])) {
            vlSelf->__PVT__regVec_388 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__11, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((8U & __Vtemp_h34d96581__11[0xcU])) {
            vlSelf->__PVT__regVec_387 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__12, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((4U & __Vtemp_h34d96581__12[0xcU])) {
            vlSelf->__PVT__regVec_386 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__13, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((2U & __Vtemp_h34d96581__13[0xcU])) {
            vlSelf->__PVT__regVec_385 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__14, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((1U & __Vtemp_h34d96581__14[0xcU])) {
            vlSelf->__PVT__regVec_384 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__15, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((__Vtemp_h34d96581__15[0xbU] >> 0x1fU)) {
            vlSelf->__PVT__regVec_383 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__16, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40000000U & __Vtemp_h34d96581__16[0xbU])) {
            vlSelf->__PVT__regVec_382 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__17, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x20000000U & __Vtemp_h34d96581__17[0xbU])) {
            vlSelf->__PVT__regVec_381 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__18, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10000000U & __Vtemp_h34d96581__18[0xbU])) {
            vlSelf->__PVT__regVec_380 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__19, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x8000000U & __Vtemp_h34d96581__19[0xbU])) {
            vlSelf->__PVT__regVec_379 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__20, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x4000000U & __Vtemp_h34d96581__20[0xbU])) {
            vlSelf->__PVT__regVec_378 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__21, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x2000000U & __Vtemp_h34d96581__21[0xbU])) {
            vlSelf->__PVT__regVec_377 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__22, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x1000000U & __Vtemp_h34d96581__22[0xbU])) {
            vlSelf->__PVT__regVec_376 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__23, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x800000U & __Vtemp_h34d96581__23[0xbU])) {
            vlSelf->__PVT__regVec_375 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__24, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x400000U & __Vtemp_h34d96581__24[0xbU])) {
            vlSelf->__PVT__regVec_374 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__25, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x200000U & __Vtemp_h34d96581__25[0xbU])) {
            vlSelf->__PVT__regVec_373 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__26, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x100000U & __Vtemp_h34d96581__26[0xbU])) {
            vlSelf->__PVT__regVec_372 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__27, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x80000U & __Vtemp_h34d96581__27[0xbU])) {
            vlSelf->__PVT__regVec_371 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__28, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40000U & __Vtemp_h34d96581__28[0xbU])) {
            vlSelf->__PVT__regVec_370 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__29, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x20000U & __Vtemp_h34d96581__29[0xbU])) {
            vlSelf->__PVT__regVec_369 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
    }
}

VL_INLINE_OPT void VTopAxiMasterWandRWithSlave_Axi4_transmission___sequent__TOP__TopAxiMasterWandRWithSlave__axiSlave__154(VTopAxiMasterWandRWithSlave_Axi4_transmission* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTopAxiMasterWandRWithSlave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTopAxiMasterWandRWithSlave_Axi4_transmission___sequent__TOP__TopAxiMasterWandRWithSlave__axiSlave__154\n"); );
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
        vlSelf->__PVT__regVec_368 = 0U;
        vlSelf->__PVT__regVec_367 = 0U;
        vlSelf->__PVT__regVec_366 = 0U;
        vlSelf->__PVT__regVec_365 = 0U;
        vlSelf->__PVT__regVec_364 = 0U;
        vlSelf->__PVT__regVec_363 = 0U;
        vlSelf->__PVT__regVec_362 = 0U;
        vlSelf->__PVT__regVec_361 = 0U;
        vlSelf->__PVT__regVec_360 = 0U;
        vlSelf->__PVT__regVec_359 = 0U;
        vlSelf->__PVT__regVec_358 = 0U;
        vlSelf->__PVT__regVec_357 = 0U;
        vlSelf->__PVT__regVec_356 = 0U;
        vlSelf->__PVT__regVec_355 = 0U;
        vlSelf->__PVT__regVec_354 = 0U;
        vlSelf->__PVT__regVec_353 = 0U;
        vlSelf->__PVT__regVec_352 = 0U;
        vlSelf->__PVT__regVec_351 = 0U;
        vlSelf->__PVT__regVec_350 = 0U;
        vlSelf->__PVT__regVec_349 = 0U;
        vlSelf->__PVT__regVec_348 = 0U;
        vlSelf->__PVT__regVec_347 = 0U;
        vlSelf->__PVT__regVec_346 = 0U;
        vlSelf->__PVT__regVec_345 = 0U;
        vlSelf->__PVT__regVec_344 = 0U;
        vlSelf->__PVT__regVec_343 = 0U;
        vlSelf->__PVT__regVec_342 = 0U;
        vlSelf->__PVT__regVec_341 = 0U;
        vlSelf->__PVT__regVec_340 = 0U;
        vlSelf->__PVT__regVec_339 = 0U;
    } else if (vlSelf->__PVT__when_Axi4_transmission_l91) {
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__0, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10000U & __Vtemp_h34d96581__0[0xbU])) {
            vlSelf->__PVT__regVec_368 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__1, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x8000U & __Vtemp_h34d96581__1[0xbU])) {
            vlSelf->__PVT__regVec_367 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__2, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x4000U & __Vtemp_h34d96581__2[0xbU])) {
            vlSelf->__PVT__regVec_366 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__3, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x2000U & __Vtemp_h34d96581__3[0xbU])) {
            vlSelf->__PVT__regVec_365 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__4, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x1000U & __Vtemp_h34d96581__4[0xbU])) {
            vlSelf->__PVT__regVec_364 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__5, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x800U & __Vtemp_h34d96581__5[0xbU])) {
            vlSelf->__PVT__regVec_363 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__6, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x400U & __Vtemp_h34d96581__6[0xbU])) {
            vlSelf->__PVT__regVec_362 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__7, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x200U & __Vtemp_h34d96581__7[0xbU])) {
            vlSelf->__PVT__regVec_361 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__8, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x100U & __Vtemp_h34d96581__8[0xbU])) {
            vlSelf->__PVT__regVec_360 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__9, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x80U & __Vtemp_h34d96581__9[0xbU])) {
            vlSelf->__PVT__regVec_359 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__10, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40U & __Vtemp_h34d96581__10[0xbU])) {
            vlSelf->__PVT__regVec_358 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__11, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x20U & __Vtemp_h34d96581__11[0xbU])) {
            vlSelf->__PVT__regVec_357 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__12, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10U & __Vtemp_h34d96581__12[0xbU])) {
            vlSelf->__PVT__regVec_356 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__13, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((8U & __Vtemp_h34d96581__13[0xbU])) {
            vlSelf->__PVT__regVec_355 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__14, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((4U & __Vtemp_h34d96581__14[0xbU])) {
            vlSelf->__PVT__regVec_354 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__15, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((2U & __Vtemp_h34d96581__15[0xbU])) {
            vlSelf->__PVT__regVec_353 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__16, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((1U & __Vtemp_h34d96581__16[0xbU])) {
            vlSelf->__PVT__regVec_352 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__17, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((__Vtemp_h34d96581__17[0xaU] >> 0x1fU)) {
            vlSelf->__PVT__regVec_351 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__18, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40000000U & __Vtemp_h34d96581__18[0xaU])) {
            vlSelf->__PVT__regVec_350 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__19, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x20000000U & __Vtemp_h34d96581__19[0xaU])) {
            vlSelf->__PVT__regVec_349 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__20, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10000000U & __Vtemp_h34d96581__20[0xaU])) {
            vlSelf->__PVT__regVec_348 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__21, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x8000000U & __Vtemp_h34d96581__21[0xaU])) {
            vlSelf->__PVT__regVec_347 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__22, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x4000000U & __Vtemp_h34d96581__22[0xaU])) {
            vlSelf->__PVT__regVec_346 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__23, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x2000000U & __Vtemp_h34d96581__23[0xaU])) {
            vlSelf->__PVT__regVec_345 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__24, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x1000000U & __Vtemp_h34d96581__24[0xaU])) {
            vlSelf->__PVT__regVec_344 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__25, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x800000U & __Vtemp_h34d96581__25[0xaU])) {
            vlSelf->__PVT__regVec_343 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__26, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x400000U & __Vtemp_h34d96581__26[0xaU])) {
            vlSelf->__PVT__regVec_342 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__27, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x200000U & __Vtemp_h34d96581__27[0xaU])) {
            vlSelf->__PVT__regVec_341 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__28, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x100000U & __Vtemp_h34d96581__28[0xaU])) {
            vlSelf->__PVT__regVec_340 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__29, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x80000U & __Vtemp_h34d96581__29[0xaU])) {
            vlSelf->__PVT__regVec_339 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
    }
}

VL_INLINE_OPT void VTopAxiMasterWandRWithSlave_Axi4_transmission___sequent__TOP__TopAxiMasterWandRWithSlave__axiSlave__155(VTopAxiMasterWandRWithSlave_Axi4_transmission* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTopAxiMasterWandRWithSlave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTopAxiMasterWandRWithSlave_Axi4_transmission___sequent__TOP__TopAxiMasterWandRWithSlave__axiSlave__155\n"); );
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
        vlSelf->__PVT__regVec_338 = 0U;
        vlSelf->__PVT__regVec_337 = 0U;
        vlSelf->__PVT__regVec_336 = 0U;
        vlSelf->__PVT__regVec_335 = 0U;
        vlSelf->__PVT__regVec_164 = 0U;
        vlSelf->__PVT__regVec_162 = 0U;
        vlSelf->__PVT__regVec_160 = 0U;
        vlSelf->__PVT__regVec_158 = 0U;
        vlSelf->__PVT__regVec_156 = 0U;
        vlSelf->__PVT__regVec_154 = 0U;
        vlSelf->__PVT__regVec_152 = 0U;
        vlSelf->__PVT__regVec_150 = 0U;
        vlSelf->__PVT__regVec_148 = 0U;
        vlSelf->__PVT__regVec_146 = 0U;
        vlSelf->__PVT__regVec_144 = 0U;
        vlSelf->__PVT__regVec_142 = 0U;
        vlSelf->__PVT__regVec_140 = 0U;
        vlSelf->__PVT__regVec_138 = 0U;
        vlSelf->__PVT__regVec_136 = 0U;
        vlSelf->__PVT__regVec_134 = 0U;
        vlSelf->__PVT__regVec_132 = 0U;
        vlSelf->__PVT__regVec_130 = 0U;
        vlSelf->__PVT__regVec_128 = 0U;
        vlSelf->__PVT__regVec_126 = 0U;
        vlSelf->__PVT__regVec_124 = 0U;
        vlSelf->__PVT__regVec_122 = 0U;
        vlSelf->__PVT__regVec_121 = 0U;
        vlSelf->__PVT__regVec_120 = 0U;
        vlSelf->__PVT__regVec_119 = 0U;
        vlSelf->__PVT__regVec_118 = 0U;
    } else if (vlSelf->__PVT__when_Axi4_transmission_l91) {
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__0, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40000U & __Vtemp_h34d96581__0[0xaU])) {
            vlSelf->__PVT__regVec_338 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__1, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x20000U & __Vtemp_h34d96581__1[0xaU])) {
            vlSelf->__PVT__regVec_337 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__2, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10000U & __Vtemp_h34d96581__2[0xaU])) {
            vlSelf->__PVT__regVec_336 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__3, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x8000U & __Vtemp_h34d96581__3[0xaU])) {
            vlSelf->__PVT__regVec_335 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__4, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10U & __Vtemp_h34d96581__4[5U])) {
            vlSelf->__PVT__regVec_164 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__5, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((4U & __Vtemp_h34d96581__5[5U])) {
            vlSelf->__PVT__regVec_162 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__6, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((1U & __Vtemp_h34d96581__6[5U])) {
            vlSelf->__PVT__regVec_160 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__7, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40000000U & __Vtemp_h34d96581__7[4U])) {
            vlSelf->__PVT__regVec_158 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__8, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10000000U & __Vtemp_h34d96581__8[4U])) {
            vlSelf->__PVT__regVec_156 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__9, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x4000000U & __Vtemp_h34d96581__9[4U])) {
            vlSelf->__PVT__regVec_154 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__10, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x1000000U & __Vtemp_h34d96581__10[4U])) {
            vlSelf->__PVT__regVec_152 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__11, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x400000U & __Vtemp_h34d96581__11[4U])) {
            vlSelf->__PVT__regVec_150 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__12, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x100000U & __Vtemp_h34d96581__12[4U])) {
            vlSelf->__PVT__regVec_148 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__13, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40000U & __Vtemp_h34d96581__13[4U])) {
            vlSelf->__PVT__regVec_146 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__14, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10000U & __Vtemp_h34d96581__14[4U])) {
            vlSelf->__PVT__regVec_144 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__15, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x4000U & __Vtemp_h34d96581__15[4U])) {
            vlSelf->__PVT__regVec_142 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__16, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x1000U & __Vtemp_h34d96581__16[4U])) {
            vlSelf->__PVT__regVec_140 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__17, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x400U & __Vtemp_h34d96581__17[4U])) {
            vlSelf->__PVT__regVec_138 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__18, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x100U & __Vtemp_h34d96581__18[4U])) {
            vlSelf->__PVT__regVec_136 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__19, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40U & __Vtemp_h34d96581__19[4U])) {
            vlSelf->__PVT__regVec_134 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__20, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10U & __Vtemp_h34d96581__20[4U])) {
            vlSelf->__PVT__regVec_132 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__21, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((4U & __Vtemp_h34d96581__21[4U])) {
            vlSelf->__PVT__regVec_130 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__22, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((1U & __Vtemp_h34d96581__22[4U])) {
            vlSelf->__PVT__regVec_128 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__23, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40000000U & __Vtemp_h34d96581__23[3U])) {
            vlSelf->__PVT__regVec_126 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__24, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10000000U & __Vtemp_h34d96581__24[3U])) {
            vlSelf->__PVT__regVec_124 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__25, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x4000000U & __Vtemp_h34d96581__25[3U])) {
            vlSelf->__PVT__regVec_122 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__26, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x2000000U & __Vtemp_h34d96581__26[3U])) {
            vlSelf->__PVT__regVec_121 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__27, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x1000000U & __Vtemp_h34d96581__27[3U])) {
            vlSelf->__PVT__regVec_120 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__28, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x800000U & __Vtemp_h34d96581__28[3U])) {
            vlSelf->__PVT__regVec_119 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__29, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x400000U & __Vtemp_h34d96581__29[3U])) {
            vlSelf->__PVT__regVec_118 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
    }
}

VL_INLINE_OPT void VTopAxiMasterWandRWithSlave_Axi4_transmission___sequent__TOP__TopAxiMasterWandRWithSlave__axiSlave__156(VTopAxiMasterWandRWithSlave_Axi4_transmission* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTopAxiMasterWandRWithSlave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTopAxiMasterWandRWithSlave_Axi4_transmission___sequent__TOP__TopAxiMasterWandRWithSlave__axiSlave__156\n"); );
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
        vlSelf->__PVT__regVec_117 = 0U;
        vlSelf->__PVT__regVec_116 = 0U;
        vlSelf->__PVT__regVec_115 = 0U;
        vlSelf->__PVT__regVec_114 = 0U;
        vlSelf->__PVT__regVec_113 = 0U;
        vlSelf->__PVT__regVec_112 = 0U;
        vlSelf->__PVT__regVec_111 = 0U;
        vlSelf->__PVT__regVec_110 = 0U;
        vlSelf->__PVT__regVec_109 = 0U;
        vlSelf->__PVT__regVec_108 = 0U;
        vlSelf->__PVT__regVec_107 = 0U;
        vlSelf->__PVT__regVec_106 = 0U;
        vlSelf->__PVT__regVec_105 = 0U;
        vlSelf->__PVT__regVec_104 = 0U;
        vlSelf->__PVT__regVec_103 = 0U;
        vlSelf->__PVT__regVec_102 = 0U;
        vlSelf->__PVT__regVec_101 = 0U;
        vlSelf->__PVT__regVec_100 = 0U;
        vlSelf->__PVT__regVec_99 = 0U;
        vlSelf->__PVT__regVec_98 = 0U;
        vlSelf->__PVT__regVec_97 = 0U;
        vlSelf->__PVT__regVec_96 = 0U;
        vlSelf->__PVT__regVec_95 = 0U;
        vlSelf->__PVT__regVec_94 = 0U;
        vlSelf->__PVT__regVec_93 = 0U;
        vlSelf->__PVT__regVec_92 = 0U;
        vlSelf->__PVT__regVec_91 = 0U;
        vlSelf->__PVT__regVec_90 = 0U;
        vlSelf->__PVT__regVec_89 = 0U;
        vlSelf->__PVT__regVec_88 = 0U;
    } else if (vlSelf->__PVT__when_Axi4_transmission_l91) {
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__0, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x200000U & __Vtemp_h34d96581__0[3U])) {
            vlSelf->__PVT__regVec_117 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__1, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x100000U & __Vtemp_h34d96581__1[3U])) {
            vlSelf->__PVT__regVec_116 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__2, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x80000U & __Vtemp_h34d96581__2[3U])) {
            vlSelf->__PVT__regVec_115 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__3, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40000U & __Vtemp_h34d96581__3[3U])) {
            vlSelf->__PVT__regVec_114 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__4, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x20000U & __Vtemp_h34d96581__4[3U])) {
            vlSelf->__PVT__regVec_113 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__5, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10000U & __Vtemp_h34d96581__5[3U])) {
            vlSelf->__PVT__regVec_112 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__6, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x8000U & __Vtemp_h34d96581__6[3U])) {
            vlSelf->__PVT__regVec_111 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__7, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x4000U & __Vtemp_h34d96581__7[3U])) {
            vlSelf->__PVT__regVec_110 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__8, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x2000U & __Vtemp_h34d96581__8[3U])) {
            vlSelf->__PVT__regVec_109 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__9, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x1000U & __Vtemp_h34d96581__9[3U])) {
            vlSelf->__PVT__regVec_108 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__10, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x800U & __Vtemp_h34d96581__10[3U])) {
            vlSelf->__PVT__regVec_107 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__11, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x400U & __Vtemp_h34d96581__11[3U])) {
            vlSelf->__PVT__regVec_106 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__12, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x200U & __Vtemp_h34d96581__12[3U])) {
            vlSelf->__PVT__regVec_105 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__13, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x100U & __Vtemp_h34d96581__13[3U])) {
            vlSelf->__PVT__regVec_104 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__14, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x80U & __Vtemp_h34d96581__14[3U])) {
            vlSelf->__PVT__regVec_103 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__15, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40U & __Vtemp_h34d96581__15[3U])) {
            vlSelf->__PVT__regVec_102 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__16, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x20U & __Vtemp_h34d96581__16[3U])) {
            vlSelf->__PVT__regVec_101 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__17, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10U & __Vtemp_h34d96581__17[3U])) {
            vlSelf->__PVT__regVec_100 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__18, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((8U & __Vtemp_h34d96581__18[3U])) {
            vlSelf->__PVT__regVec_99 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__19, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((4U & __Vtemp_h34d96581__19[3U])) {
            vlSelf->__PVT__regVec_98 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__20, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((2U & __Vtemp_h34d96581__20[3U])) {
            vlSelf->__PVT__regVec_97 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__21, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((1U & __Vtemp_h34d96581__21[3U])) {
            vlSelf->__PVT__regVec_96 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__22, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((__Vtemp_h34d96581__22[2U] >> 0x1fU)) {
            vlSelf->__PVT__regVec_95 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__23, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40000000U & __Vtemp_h34d96581__23[2U])) {
            vlSelf->__PVT__regVec_94 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__24, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x20000000U & __Vtemp_h34d96581__24[2U])) {
            vlSelf->__PVT__regVec_93 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__25, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10000000U & __Vtemp_h34d96581__25[2U])) {
            vlSelf->__PVT__regVec_92 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__26, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x8000000U & __Vtemp_h34d96581__26[2U])) {
            vlSelf->__PVT__regVec_91 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__27, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x4000000U & __Vtemp_h34d96581__27[2U])) {
            vlSelf->__PVT__regVec_90 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__28, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x2000000U & __Vtemp_h34d96581__28[2U])) {
            vlSelf->__PVT__regVec_89 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__29, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x1000000U & __Vtemp_h34d96581__29[2U])) {
            vlSelf->__PVT__regVec_88 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
    }
}

VL_INLINE_OPT void VTopAxiMasterWandRWithSlave_Axi4_transmission___sequent__TOP__TopAxiMasterWandRWithSlave__axiSlave__157(VTopAxiMasterWandRWithSlave_Axi4_transmission* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTopAxiMasterWandRWithSlave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTopAxiMasterWandRWithSlave_Axi4_transmission___sequent__TOP__TopAxiMasterWandRWithSlave__axiSlave__157\n"); );
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
        vlSelf->__PVT__regVec_87 = 0U;
        vlSelf->__PVT__regVec_86 = 0U;
        vlSelf->__PVT__regVec_85 = 0U;
        vlSelf->__PVT__regVec_84 = 0U;
        vlSelf->__PVT__regVec_83 = 0U;
        vlSelf->__PVT__regVec_82 = 0U;
        vlSelf->__PVT__regVec_81 = 0U;
        vlSelf->__PVT__regVec_80 = 0U;
        vlSelf->__PVT__regVec_79 = 0U;
        vlSelf->__PVT__regVec_78 = 0U;
        vlSelf->__PVT__regVec_77 = 0U;
        vlSelf->__PVT__regVec_34 = 0U;
        vlSelf->__PVT__regVec_32 = 0U;
        vlSelf->__PVT__regVec_30 = 0U;
        vlSelf->__PVT__regVec_28 = 0U;
        vlSelf->__PVT__regVec_26 = 0U;
        vlSelf->__PVT__regVec_22 = 0U;
        vlSelf->__PVT__regVec_20 = 0U;
        vlSelf->__PVT__regVec_18 = 0U;
        vlSelf->__PVT__regVec_16 = 0U;
        vlSelf->__PVT__regVec_2 = 0U;
        vlSelf->__PVT__regVec_4 = 0U;
        vlSelf->__PVT__regVec_24 = 0U;
        vlSelf->__PVT__regVec_52 = 0U;
        vlSelf->__PVT__regVec_0 = 0U;
        vlSelf->__PVT__regVec_6 = 0U;
        vlSelf->__PVT__regVec_8 = 0U;
        vlSelf->__PVT__regVec_9 = 0U;
        vlSelf->__PVT__regVec_10 = 0U;
        vlSelf->__PVT__regVec_12 = 0U;
    } else if (vlSelf->__PVT__when_Axi4_transmission_l91) {
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__0, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x800000U & __Vtemp_h34d96581__0[2U])) {
            vlSelf->__PVT__regVec_87 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__1, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x400000U & __Vtemp_h34d96581__1[2U])) {
            vlSelf->__PVT__regVec_86 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__2, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x200000U & __Vtemp_h34d96581__2[2U])) {
            vlSelf->__PVT__regVec_85 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__3, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x100000U & __Vtemp_h34d96581__3[2U])) {
            vlSelf->__PVT__regVec_84 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__4, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x80000U & __Vtemp_h34d96581__4[2U])) {
            vlSelf->__PVT__regVec_83 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__5, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40000U & __Vtemp_h34d96581__5[2U])) {
            vlSelf->__PVT__regVec_82 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__6, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x20000U & __Vtemp_h34d96581__6[2U])) {
            vlSelf->__PVT__regVec_81 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__7, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10000U & __Vtemp_h34d96581__7[2U])) {
            vlSelf->__PVT__regVec_80 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__8, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x8000U & __Vtemp_h34d96581__8[2U])) {
            vlSelf->__PVT__regVec_79 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__9, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x4000U & __Vtemp_h34d96581__9[2U])) {
            vlSelf->__PVT__regVec_78 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__10, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x2000U & __Vtemp_h34d96581__10[2U])) {
            vlSelf->__PVT__regVec_77 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__11, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((4U & __Vtemp_h34d96581__11[1U])) {
            vlSelf->__PVT__regVec_34 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__12, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((1U & __Vtemp_h34d96581__12[1U])) {
            vlSelf->__PVT__regVec_32 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__13, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40000000U & __Vtemp_h34d96581__13[0U])) {
            vlSelf->__PVT__regVec_30 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__14, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10000000U & __Vtemp_h34d96581__14[0U])) {
            vlSelf->__PVT__regVec_28 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__15, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x4000000U & __Vtemp_h34d96581__15[0U])) {
            vlSelf->__PVT__regVec_26 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__16, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x400000U & __Vtemp_h34d96581__16[0U])) {
            vlSelf->__PVT__regVec_22 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__17, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x100000U & __Vtemp_h34d96581__17[0U])) {
            vlSelf->__PVT__regVec_20 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__18, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40000U & __Vtemp_h34d96581__18[0U])) {
            vlSelf->__PVT__regVec_18 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__19, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10000U & __Vtemp_h34d96581__19[0U])) {
            vlSelf->__PVT__regVec_16 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__20, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((4U & __Vtemp_h34d96581__20[0U])) {
            vlSelf->__PVT__regVec_2 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__21, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10U & __Vtemp_h34d96581__21[0U])) {
            vlSelf->__PVT__regVec_4 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__22, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x1000000U & __Vtemp_h34d96581__22[0U])) {
            vlSelf->__PVT__regVec_24 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__23, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x100000U & __Vtemp_h34d96581__23[1U])) {
            vlSelf->__PVT__regVec_52 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__24, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((1U & __Vtemp_h34d96581__24[0U])) {
            vlSelf->__PVT__regVec_0 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__25, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40U & __Vtemp_h34d96581__25[0U])) {
            vlSelf->__PVT__regVec_6 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__26, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x100U & __Vtemp_h34d96581__26[0U])) {
            vlSelf->__PVT__regVec_8 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__27, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x200U & __Vtemp_h34d96581__27[0U])) {
            vlSelf->__PVT__regVec_9 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__28, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x400U & __Vtemp_h34d96581__28[0U])) {
            vlSelf->__PVT__regVec_10 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__29, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x1000U & __Vtemp_h34d96581__29[0U])) {
            vlSelf->__PVT__regVec_12 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
    }
}
