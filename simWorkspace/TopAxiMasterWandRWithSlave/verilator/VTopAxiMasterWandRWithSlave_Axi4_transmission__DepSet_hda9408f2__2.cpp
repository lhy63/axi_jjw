// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTopAxiMasterWandRWithSlave.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTopAxiMasterWandRWithSlave_Axi4_transmission.h"
#include "VTopAxiMasterWandRWithSlave__Syms.h"

extern const VlWide<128>/*4095:0*/ VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0;

VL_INLINE_OPT void VTopAxiMasterWandRWithSlave_Axi4_transmission___sequent__TOP__TopAxiMasterWandRWithSlave__axiSlave__104(VTopAxiMasterWandRWithSlave_Axi4_transmission* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTopAxiMasterWandRWithSlave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTopAxiMasterWandRWithSlave_Axi4_transmission___sequent__TOP__TopAxiMasterWandRWithSlave__axiSlave__104\n"); );
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
        vlSelf->__PVT__regVec_2675 = 0U;
        vlSelf->__PVT__regVec_2674 = 0U;
        vlSelf->__PVT__regVec_2673 = 0U;
        vlSelf->__PVT__regVec_2672 = 0U;
        vlSelf->__PVT__regVec_2671 = 0U;
        vlSelf->__PVT__regVec_2670 = 0U;
        vlSelf->__PVT__regVec_2669 = 0U;
        vlSelf->__PVT__regVec_2668 = 0U;
        vlSelf->__PVT__regVec_2667 = 0U;
        vlSelf->__PVT__regVec_2666 = 0U;
        vlSelf->__PVT__regVec_2665 = 0U;
        vlSelf->__PVT__regVec_2664 = 0U;
        vlSelf->__PVT__regVec_2663 = 0U;
        vlSelf->__PVT__regVec_2662 = 0U;
        vlSelf->__PVT__regVec_2661 = 0U;
        vlSelf->__PVT__regVec_2660 = 0U;
        vlSelf->__PVT__regVec_2659 = 0U;
        vlSelf->__PVT__regVec_2658 = 0U;
        vlSelf->__PVT__regVec_2657 = 0U;
        vlSelf->__PVT__regVec_2656 = 0U;
        vlSelf->__PVT__regVec_2655 = 0U;
        vlSelf->__PVT__regVec_2654 = 0U;
        vlSelf->__PVT__regVec_2653 = 0U;
        vlSelf->__PVT__regVec_2652 = 0U;
        vlSelf->__PVT__regVec_2651 = 0U;
        vlSelf->__PVT__regVec_2650 = 0U;
        vlSelf->__PVT__regVec_2649 = 0U;
        vlSelf->__PVT__regVec_2648 = 0U;
        vlSelf->__PVT__regVec_2647 = 0U;
        vlSelf->__PVT__regVec_2646 = 0U;
    } else if (vlSelf->__PVT__when_Axi4_transmission_l91) {
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__0, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x80000U & __Vtemp_h34d96581__0[0x53U])) {
            vlSelf->__PVT__regVec_2675 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__1, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40000U & __Vtemp_h34d96581__1[0x53U])) {
            vlSelf->__PVT__regVec_2674 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__2, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x20000U & __Vtemp_h34d96581__2[0x53U])) {
            vlSelf->__PVT__regVec_2673 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__3, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10000U & __Vtemp_h34d96581__3[0x53U])) {
            vlSelf->__PVT__regVec_2672 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__4, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x8000U & __Vtemp_h34d96581__4[0x53U])) {
            vlSelf->__PVT__regVec_2671 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__5, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x4000U & __Vtemp_h34d96581__5[0x53U])) {
            vlSelf->__PVT__regVec_2670 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__6, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x2000U & __Vtemp_h34d96581__6[0x53U])) {
            vlSelf->__PVT__regVec_2669 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__7, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x1000U & __Vtemp_h34d96581__7[0x53U])) {
            vlSelf->__PVT__regVec_2668 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__8, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x800U & __Vtemp_h34d96581__8[0x53U])) {
            vlSelf->__PVT__regVec_2667 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__9, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x400U & __Vtemp_h34d96581__9[0x53U])) {
            vlSelf->__PVT__regVec_2666 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__10, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x200U & __Vtemp_h34d96581__10[0x53U])) {
            vlSelf->__PVT__regVec_2665 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__11, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x100U & __Vtemp_h34d96581__11[0x53U])) {
            vlSelf->__PVT__regVec_2664 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__12, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x80U & __Vtemp_h34d96581__12[0x53U])) {
            vlSelf->__PVT__regVec_2663 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__13, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40U & __Vtemp_h34d96581__13[0x53U])) {
            vlSelf->__PVT__regVec_2662 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__14, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x20U & __Vtemp_h34d96581__14[0x53U])) {
            vlSelf->__PVT__regVec_2661 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__15, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10U & __Vtemp_h34d96581__15[0x53U])) {
            vlSelf->__PVT__regVec_2660 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__16, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((8U & __Vtemp_h34d96581__16[0x53U])) {
            vlSelf->__PVT__regVec_2659 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__17, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((4U & __Vtemp_h34d96581__17[0x53U])) {
            vlSelf->__PVT__regVec_2658 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__18, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((2U & __Vtemp_h34d96581__18[0x53U])) {
            vlSelf->__PVT__regVec_2657 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__19, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((1U & __Vtemp_h34d96581__19[0x53U])) {
            vlSelf->__PVT__regVec_2656 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__20, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((__Vtemp_h34d96581__20[0x52U] >> 0x1fU)) {
            vlSelf->__PVT__regVec_2655 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__21, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40000000U & __Vtemp_h34d96581__21[0x52U])) {
            vlSelf->__PVT__regVec_2654 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__22, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x20000000U & __Vtemp_h34d96581__22[0x52U])) {
            vlSelf->__PVT__regVec_2653 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__23, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10000000U & __Vtemp_h34d96581__23[0x52U])) {
            vlSelf->__PVT__regVec_2652 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__24, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x8000000U & __Vtemp_h34d96581__24[0x52U])) {
            vlSelf->__PVT__regVec_2651 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__25, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x4000000U & __Vtemp_h34d96581__25[0x52U])) {
            vlSelf->__PVT__regVec_2650 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__26, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x2000000U & __Vtemp_h34d96581__26[0x52U])) {
            vlSelf->__PVT__regVec_2649 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__27, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x1000000U & __Vtemp_h34d96581__27[0x52U])) {
            vlSelf->__PVT__regVec_2648 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__28, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x800000U & __Vtemp_h34d96581__28[0x52U])) {
            vlSelf->__PVT__regVec_2647 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__29, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x400000U & __Vtemp_h34d96581__29[0x52U])) {
            vlSelf->__PVT__regVec_2646 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
    }
}

VL_INLINE_OPT void VTopAxiMasterWandRWithSlave_Axi4_transmission___sequent__TOP__TopAxiMasterWandRWithSlave__axiSlave__105(VTopAxiMasterWandRWithSlave_Axi4_transmission* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTopAxiMasterWandRWithSlave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTopAxiMasterWandRWithSlave_Axi4_transmission___sequent__TOP__TopAxiMasterWandRWithSlave__axiSlave__105\n"); );
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
        vlSelf->__PVT__regVec_2645 = 0U;
        vlSelf->__PVT__regVec_2644 = 0U;
        vlSelf->__PVT__regVec_2643 = 0U;
        vlSelf->__PVT__regVec_2642 = 0U;
        vlSelf->__PVT__regVec_2641 = 0U;
        vlSelf->__PVT__regVec_2640 = 0U;
        vlSelf->__PVT__regVec_2639 = 0U;
        vlSelf->__PVT__regVec_2638 = 0U;
        vlSelf->__PVT__regVec_2637 = 0U;
        vlSelf->__PVT__regVec_2636 = 0U;
        vlSelf->__PVT__regVec_2635 = 0U;
        vlSelf->__PVT__regVec_2634 = 0U;
        vlSelf->__PVT__regVec_2633 = 0U;
        vlSelf->__PVT__regVec_2632 = 0U;
        vlSelf->__PVT__regVec_2631 = 0U;
        vlSelf->__PVT__regVec_2630 = 0U;
        vlSelf->__PVT__regVec_2629 = 0U;
        vlSelf->__PVT__regVec_2628 = 0U;
        vlSelf->__PVT__regVec_2627 = 0U;
        vlSelf->__PVT__regVec_2626 = 0U;
        vlSelf->__PVT__regVec_2625 = 0U;
        vlSelf->__PVT__regVec_2624 = 0U;
        vlSelf->__PVT__regVec_2623 = 0U;
        vlSelf->__PVT__regVec_2622 = 0U;
        vlSelf->__PVT__regVec_2621 = 0U;
        vlSelf->__PVT__regVec_2620 = 0U;
        vlSelf->__PVT__regVec_2619 = 0U;
        vlSelf->__PVT__regVec_2618 = 0U;
        vlSelf->__PVT__regVec_2617 = 0U;
        vlSelf->__PVT__regVec_2616 = 0U;
    } else if (vlSelf->__PVT__when_Axi4_transmission_l91) {
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__0, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x200000U & __Vtemp_h34d96581__0[0x52U])) {
            vlSelf->__PVT__regVec_2645 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__1, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x100000U & __Vtemp_h34d96581__1[0x52U])) {
            vlSelf->__PVT__regVec_2644 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__2, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x80000U & __Vtemp_h34d96581__2[0x52U])) {
            vlSelf->__PVT__regVec_2643 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__3, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40000U & __Vtemp_h34d96581__3[0x52U])) {
            vlSelf->__PVT__regVec_2642 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__4, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x20000U & __Vtemp_h34d96581__4[0x52U])) {
            vlSelf->__PVT__regVec_2641 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__5, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10000U & __Vtemp_h34d96581__5[0x52U])) {
            vlSelf->__PVT__regVec_2640 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__6, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x8000U & __Vtemp_h34d96581__6[0x52U])) {
            vlSelf->__PVT__regVec_2639 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__7, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x4000U & __Vtemp_h34d96581__7[0x52U])) {
            vlSelf->__PVT__regVec_2638 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__8, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x2000U & __Vtemp_h34d96581__8[0x52U])) {
            vlSelf->__PVT__regVec_2637 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__9, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x1000U & __Vtemp_h34d96581__9[0x52U])) {
            vlSelf->__PVT__regVec_2636 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__10, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x800U & __Vtemp_h34d96581__10[0x52U])) {
            vlSelf->__PVT__regVec_2635 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__11, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x400U & __Vtemp_h34d96581__11[0x52U])) {
            vlSelf->__PVT__regVec_2634 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__12, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x200U & __Vtemp_h34d96581__12[0x52U])) {
            vlSelf->__PVT__regVec_2633 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__13, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x100U & __Vtemp_h34d96581__13[0x52U])) {
            vlSelf->__PVT__regVec_2632 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__14, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x80U & __Vtemp_h34d96581__14[0x52U])) {
            vlSelf->__PVT__regVec_2631 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__15, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40U & __Vtemp_h34d96581__15[0x52U])) {
            vlSelf->__PVT__regVec_2630 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__16, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x20U & __Vtemp_h34d96581__16[0x52U])) {
            vlSelf->__PVT__regVec_2629 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__17, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10U & __Vtemp_h34d96581__17[0x52U])) {
            vlSelf->__PVT__regVec_2628 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__18, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((8U & __Vtemp_h34d96581__18[0x52U])) {
            vlSelf->__PVT__regVec_2627 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__19, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((4U & __Vtemp_h34d96581__19[0x52U])) {
            vlSelf->__PVT__regVec_2626 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__20, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((2U & __Vtemp_h34d96581__20[0x52U])) {
            vlSelf->__PVT__regVec_2625 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__21, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((1U & __Vtemp_h34d96581__21[0x52U])) {
            vlSelf->__PVT__regVec_2624 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__22, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((__Vtemp_h34d96581__22[0x51U] >> 0x1fU)) {
            vlSelf->__PVT__regVec_2623 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__23, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40000000U & __Vtemp_h34d96581__23[0x51U])) {
            vlSelf->__PVT__regVec_2622 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__24, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x20000000U & __Vtemp_h34d96581__24[0x51U])) {
            vlSelf->__PVT__regVec_2621 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__25, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10000000U & __Vtemp_h34d96581__25[0x51U])) {
            vlSelf->__PVT__regVec_2620 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__26, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x8000000U & __Vtemp_h34d96581__26[0x51U])) {
            vlSelf->__PVT__regVec_2619 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__27, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x4000000U & __Vtemp_h34d96581__27[0x51U])) {
            vlSelf->__PVT__regVec_2618 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__28, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x2000000U & __Vtemp_h34d96581__28[0x51U])) {
            vlSelf->__PVT__regVec_2617 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__29, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x1000000U & __Vtemp_h34d96581__29[0x51U])) {
            vlSelf->__PVT__regVec_2616 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
    }
}

VL_INLINE_OPT void VTopAxiMasterWandRWithSlave_Axi4_transmission___sequent__TOP__TopAxiMasterWandRWithSlave__axiSlave__106(VTopAxiMasterWandRWithSlave_Axi4_transmission* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTopAxiMasterWandRWithSlave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTopAxiMasterWandRWithSlave_Axi4_transmission___sequent__TOP__TopAxiMasterWandRWithSlave__axiSlave__106\n"); );
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
        vlSelf->__PVT__regVec_2615 = 0U;
        vlSelf->__PVT__regVec_2614 = 0U;
        vlSelf->__PVT__regVec_2613 = 0U;
        vlSelf->__PVT__regVec_2612 = 0U;
        vlSelf->__PVT__regVec_2611 = 0U;
        vlSelf->__PVT__regVec_2610 = 0U;
        vlSelf->__PVT__regVec_2609 = 0U;
        vlSelf->__PVT__regVec_2608 = 0U;
        vlSelf->__PVT__regVec_2607 = 0U;
        vlSelf->__PVT__regVec_2606 = 0U;
        vlSelf->__PVT__regVec_2605 = 0U;
        vlSelf->__PVT__regVec_2604 = 0U;
        vlSelf->__PVT__regVec_2603 = 0U;
        vlSelf->__PVT__regVec_2602 = 0U;
        vlSelf->__PVT__regVec_2601 = 0U;
        vlSelf->__PVT__regVec_2600 = 0U;
        vlSelf->__PVT__regVec_2599 = 0U;
        vlSelf->__PVT__regVec_2598 = 0U;
        vlSelf->__PVT__regVec_2597 = 0U;
        vlSelf->__PVT__regVec_2596 = 0U;
        vlSelf->__PVT__regVec_2595 = 0U;
        vlSelf->__PVT__regVec_2594 = 0U;
        vlSelf->__PVT__regVec_2593 = 0U;
        vlSelf->__PVT__regVec_2592 = 0U;
        vlSelf->__PVT__regVec_2591 = 0U;
        vlSelf->__PVT__regVec_2590 = 0U;
        vlSelf->__PVT__regVec_2589 = 0U;
        vlSelf->__PVT__regVec_2588 = 0U;
        vlSelf->__PVT__regVec_2587 = 0U;
        vlSelf->__PVT__regVec_2586 = 0U;
    } else if (vlSelf->__PVT__when_Axi4_transmission_l91) {
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__0, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x800000U & __Vtemp_h34d96581__0[0x51U])) {
            vlSelf->__PVT__regVec_2615 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__1, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x400000U & __Vtemp_h34d96581__1[0x51U])) {
            vlSelf->__PVT__regVec_2614 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__2, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x200000U & __Vtemp_h34d96581__2[0x51U])) {
            vlSelf->__PVT__regVec_2613 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__3, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x100000U & __Vtemp_h34d96581__3[0x51U])) {
            vlSelf->__PVT__regVec_2612 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__4, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x80000U & __Vtemp_h34d96581__4[0x51U])) {
            vlSelf->__PVT__regVec_2611 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__5, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40000U & __Vtemp_h34d96581__5[0x51U])) {
            vlSelf->__PVT__regVec_2610 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__6, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x20000U & __Vtemp_h34d96581__6[0x51U])) {
            vlSelf->__PVT__regVec_2609 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__7, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10000U & __Vtemp_h34d96581__7[0x51U])) {
            vlSelf->__PVT__regVec_2608 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__8, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x8000U & __Vtemp_h34d96581__8[0x51U])) {
            vlSelf->__PVT__regVec_2607 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__9, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x4000U & __Vtemp_h34d96581__9[0x51U])) {
            vlSelf->__PVT__regVec_2606 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__10, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x2000U & __Vtemp_h34d96581__10[0x51U])) {
            vlSelf->__PVT__regVec_2605 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__11, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x1000U & __Vtemp_h34d96581__11[0x51U])) {
            vlSelf->__PVT__regVec_2604 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__12, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x800U & __Vtemp_h34d96581__12[0x51U])) {
            vlSelf->__PVT__regVec_2603 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__13, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x400U & __Vtemp_h34d96581__13[0x51U])) {
            vlSelf->__PVT__regVec_2602 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__14, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x200U & __Vtemp_h34d96581__14[0x51U])) {
            vlSelf->__PVT__regVec_2601 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__15, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x100U & __Vtemp_h34d96581__15[0x51U])) {
            vlSelf->__PVT__regVec_2600 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__16, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x80U & __Vtemp_h34d96581__16[0x51U])) {
            vlSelf->__PVT__regVec_2599 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__17, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40U & __Vtemp_h34d96581__17[0x51U])) {
            vlSelf->__PVT__regVec_2598 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__18, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x20U & __Vtemp_h34d96581__18[0x51U])) {
            vlSelf->__PVT__regVec_2597 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__19, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10U & __Vtemp_h34d96581__19[0x51U])) {
            vlSelf->__PVT__regVec_2596 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__20, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((8U & __Vtemp_h34d96581__20[0x51U])) {
            vlSelf->__PVT__regVec_2595 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__21, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((4U & __Vtemp_h34d96581__21[0x51U])) {
            vlSelf->__PVT__regVec_2594 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__22, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((2U & __Vtemp_h34d96581__22[0x51U])) {
            vlSelf->__PVT__regVec_2593 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__23, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((1U & __Vtemp_h34d96581__23[0x51U])) {
            vlSelf->__PVT__regVec_2592 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__24, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((__Vtemp_h34d96581__24[0x50U] >> 0x1fU)) {
            vlSelf->__PVT__regVec_2591 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__25, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40000000U & __Vtemp_h34d96581__25[0x50U])) {
            vlSelf->__PVT__regVec_2590 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__26, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x20000000U & __Vtemp_h34d96581__26[0x50U])) {
            vlSelf->__PVT__regVec_2589 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__27, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10000000U & __Vtemp_h34d96581__27[0x50U])) {
            vlSelf->__PVT__regVec_2588 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__28, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x8000000U & __Vtemp_h34d96581__28[0x50U])) {
            vlSelf->__PVT__regVec_2587 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__29, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x4000000U & __Vtemp_h34d96581__29[0x50U])) {
            vlSelf->__PVT__regVec_2586 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
    }
}

VL_INLINE_OPT void VTopAxiMasterWandRWithSlave_Axi4_transmission___sequent__TOP__TopAxiMasterWandRWithSlave__axiSlave__107(VTopAxiMasterWandRWithSlave_Axi4_transmission* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTopAxiMasterWandRWithSlave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTopAxiMasterWandRWithSlave_Axi4_transmission___sequent__TOP__TopAxiMasterWandRWithSlave__axiSlave__107\n"); );
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
        vlSelf->__PVT__regVec_2585 = 0U;
        vlSelf->__PVT__regVec_2584 = 0U;
        vlSelf->__PVT__regVec_2583 = 0U;
        vlSelf->__PVT__regVec_2582 = 0U;
        vlSelf->__PVT__regVec_2581 = 0U;
        vlSelf->__PVT__regVec_2580 = 0U;
        vlSelf->__PVT__regVec_2579 = 0U;
        vlSelf->__PVT__regVec_2578 = 0U;
        vlSelf->__PVT__regVec_2577 = 0U;
        vlSelf->__PVT__regVec_2576 = 0U;
        vlSelf->__PVT__regVec_2575 = 0U;
        vlSelf->__PVT__regVec_2574 = 0U;
        vlSelf->__PVT__regVec_2573 = 0U;
        vlSelf->__PVT__regVec_2572 = 0U;
        vlSelf->__PVT__regVec_2571 = 0U;
        vlSelf->__PVT__regVec_2570 = 0U;
        vlSelf->__PVT__regVec_2569 = 0U;
        vlSelf->__PVT__regVec_2568 = 0U;
        vlSelf->__PVT__regVec_2567 = 0U;
        vlSelf->__PVT__regVec_2566 = 0U;
        vlSelf->__PVT__regVec_2565 = 0U;
        vlSelf->__PVT__regVec_2564 = 0U;
        vlSelf->__PVT__regVec_2563 = 0U;
        vlSelf->__PVT__regVec_2562 = 0U;
        vlSelf->__PVT__regVec_2561 = 0U;
        vlSelf->__PVT__regVec_2560 = 0U;
        vlSelf->__PVT__regVec_2559 = 0U;
        vlSelf->__PVT__regVec_2558 = 0U;
        vlSelf->__PVT__regVec_2557 = 0U;
        vlSelf->__PVT__regVec_2556 = 0U;
    } else if (vlSelf->__PVT__when_Axi4_transmission_l91) {
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__0, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x2000000U & __Vtemp_h34d96581__0[0x50U])) {
            vlSelf->__PVT__regVec_2585 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__1, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x1000000U & __Vtemp_h34d96581__1[0x50U])) {
            vlSelf->__PVT__regVec_2584 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__2, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x800000U & __Vtemp_h34d96581__2[0x50U])) {
            vlSelf->__PVT__regVec_2583 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__3, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x400000U & __Vtemp_h34d96581__3[0x50U])) {
            vlSelf->__PVT__regVec_2582 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__4, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x200000U & __Vtemp_h34d96581__4[0x50U])) {
            vlSelf->__PVT__regVec_2581 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__5, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x100000U & __Vtemp_h34d96581__5[0x50U])) {
            vlSelf->__PVT__regVec_2580 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__6, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x80000U & __Vtemp_h34d96581__6[0x50U])) {
            vlSelf->__PVT__regVec_2579 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__7, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40000U & __Vtemp_h34d96581__7[0x50U])) {
            vlSelf->__PVT__regVec_2578 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__8, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x20000U & __Vtemp_h34d96581__8[0x50U])) {
            vlSelf->__PVT__regVec_2577 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__9, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10000U & __Vtemp_h34d96581__9[0x50U])) {
            vlSelf->__PVT__regVec_2576 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__10, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x8000U & __Vtemp_h34d96581__10[0x50U])) {
            vlSelf->__PVT__regVec_2575 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__11, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x4000U & __Vtemp_h34d96581__11[0x50U])) {
            vlSelf->__PVT__regVec_2574 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__12, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x2000U & __Vtemp_h34d96581__12[0x50U])) {
            vlSelf->__PVT__regVec_2573 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__13, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x1000U & __Vtemp_h34d96581__13[0x50U])) {
            vlSelf->__PVT__regVec_2572 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__14, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x800U & __Vtemp_h34d96581__14[0x50U])) {
            vlSelf->__PVT__regVec_2571 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__15, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x400U & __Vtemp_h34d96581__15[0x50U])) {
            vlSelf->__PVT__regVec_2570 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__16, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x200U & __Vtemp_h34d96581__16[0x50U])) {
            vlSelf->__PVT__regVec_2569 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__17, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x100U & __Vtemp_h34d96581__17[0x50U])) {
            vlSelf->__PVT__regVec_2568 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__18, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x80U & __Vtemp_h34d96581__18[0x50U])) {
            vlSelf->__PVT__regVec_2567 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__19, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40U & __Vtemp_h34d96581__19[0x50U])) {
            vlSelf->__PVT__regVec_2566 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__20, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x20U & __Vtemp_h34d96581__20[0x50U])) {
            vlSelf->__PVT__regVec_2565 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__21, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10U & __Vtemp_h34d96581__21[0x50U])) {
            vlSelf->__PVT__regVec_2564 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__22, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((8U & __Vtemp_h34d96581__22[0x50U])) {
            vlSelf->__PVT__regVec_2563 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__23, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((4U & __Vtemp_h34d96581__23[0x50U])) {
            vlSelf->__PVT__regVec_2562 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__24, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((2U & __Vtemp_h34d96581__24[0x50U])) {
            vlSelf->__PVT__regVec_2561 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__25, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((1U & __Vtemp_h34d96581__25[0x50U])) {
            vlSelf->__PVT__regVec_2560 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__26, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((__Vtemp_h34d96581__26[0x4fU] >> 0x1fU)) {
            vlSelf->__PVT__regVec_2559 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__27, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40000000U & __Vtemp_h34d96581__27[0x4fU])) {
            vlSelf->__PVT__regVec_2558 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__28, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x20000000U & __Vtemp_h34d96581__28[0x4fU])) {
            vlSelf->__PVT__regVec_2557 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__29, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10000000U & __Vtemp_h34d96581__29[0x4fU])) {
            vlSelf->__PVT__regVec_2556 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
    }
}

VL_INLINE_OPT void VTopAxiMasterWandRWithSlave_Axi4_transmission___sequent__TOP__TopAxiMasterWandRWithSlave__axiSlave__108(VTopAxiMasterWandRWithSlave_Axi4_transmission* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTopAxiMasterWandRWithSlave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTopAxiMasterWandRWithSlave_Axi4_transmission___sequent__TOP__TopAxiMasterWandRWithSlave__axiSlave__108\n"); );
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
        vlSelf->__PVT__regVec_2555 = 0U;
        vlSelf->__PVT__regVec_2554 = 0U;
        vlSelf->__PVT__regVec_2553 = 0U;
        vlSelf->__PVT__regVec_2552 = 0U;
        vlSelf->__PVT__regVec_2551 = 0U;
        vlSelf->__PVT__regVec_2550 = 0U;
        vlSelf->__PVT__regVec_2549 = 0U;
        vlSelf->__PVT__regVec_2548 = 0U;
        vlSelf->__PVT__regVec_2547 = 0U;
        vlSelf->__PVT__regVec_2546 = 0U;
        vlSelf->__PVT__regVec_2545 = 0U;
        vlSelf->__PVT__regVec_2544 = 0U;
        vlSelf->__PVT__regVec_2543 = 0U;
        vlSelf->__PVT__regVec_2542 = 0U;
        vlSelf->__PVT__regVec_2541 = 0U;
        vlSelf->__PVT__regVec_2540 = 0U;
        vlSelf->__PVT__regVec_2539 = 0U;
        vlSelf->__PVT__regVec_2538 = 0U;
        vlSelf->__PVT__regVec_2537 = 0U;
        vlSelf->__PVT__regVec_2536 = 0U;
        vlSelf->__PVT__regVec_2535 = 0U;
        vlSelf->__PVT__regVec_2534 = 0U;
        vlSelf->__PVT__regVec_2533 = 0U;
        vlSelf->__PVT__regVec_2532 = 0U;
        vlSelf->__PVT__regVec_2531 = 0U;
        vlSelf->__PVT__regVec_2530 = 0U;
        vlSelf->__PVT__regVec_2529 = 0U;
        vlSelf->__PVT__regVec_2528 = 0U;
        vlSelf->__PVT__regVec_2527 = 0U;
        vlSelf->__PVT__regVec_2526 = 0U;
    } else if (vlSelf->__PVT__when_Axi4_transmission_l91) {
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__0, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x8000000U & __Vtemp_h34d96581__0[0x4fU])) {
            vlSelf->__PVT__regVec_2555 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__1, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x4000000U & __Vtemp_h34d96581__1[0x4fU])) {
            vlSelf->__PVT__regVec_2554 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__2, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x2000000U & __Vtemp_h34d96581__2[0x4fU])) {
            vlSelf->__PVT__regVec_2553 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__3, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x1000000U & __Vtemp_h34d96581__3[0x4fU])) {
            vlSelf->__PVT__regVec_2552 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__4, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x800000U & __Vtemp_h34d96581__4[0x4fU])) {
            vlSelf->__PVT__regVec_2551 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__5, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x400000U & __Vtemp_h34d96581__5[0x4fU])) {
            vlSelf->__PVT__regVec_2550 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__6, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x200000U & __Vtemp_h34d96581__6[0x4fU])) {
            vlSelf->__PVT__regVec_2549 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__7, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x100000U & __Vtemp_h34d96581__7[0x4fU])) {
            vlSelf->__PVT__regVec_2548 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__8, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x80000U & __Vtemp_h34d96581__8[0x4fU])) {
            vlSelf->__PVT__regVec_2547 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__9, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40000U & __Vtemp_h34d96581__9[0x4fU])) {
            vlSelf->__PVT__regVec_2546 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__10, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x20000U & __Vtemp_h34d96581__10[0x4fU])) {
            vlSelf->__PVT__regVec_2545 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__11, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10000U & __Vtemp_h34d96581__11[0x4fU])) {
            vlSelf->__PVT__regVec_2544 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__12, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x8000U & __Vtemp_h34d96581__12[0x4fU])) {
            vlSelf->__PVT__regVec_2543 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__13, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x4000U & __Vtemp_h34d96581__13[0x4fU])) {
            vlSelf->__PVT__regVec_2542 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__14, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x2000U & __Vtemp_h34d96581__14[0x4fU])) {
            vlSelf->__PVT__regVec_2541 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__15, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x1000U & __Vtemp_h34d96581__15[0x4fU])) {
            vlSelf->__PVT__regVec_2540 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__16, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x800U & __Vtemp_h34d96581__16[0x4fU])) {
            vlSelf->__PVT__regVec_2539 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__17, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x400U & __Vtemp_h34d96581__17[0x4fU])) {
            vlSelf->__PVT__regVec_2538 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__18, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x200U & __Vtemp_h34d96581__18[0x4fU])) {
            vlSelf->__PVT__regVec_2537 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__19, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x100U & __Vtemp_h34d96581__19[0x4fU])) {
            vlSelf->__PVT__regVec_2536 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__20, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x80U & __Vtemp_h34d96581__20[0x4fU])) {
            vlSelf->__PVT__regVec_2535 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__21, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40U & __Vtemp_h34d96581__21[0x4fU])) {
            vlSelf->__PVT__regVec_2534 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__22, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x20U & __Vtemp_h34d96581__22[0x4fU])) {
            vlSelf->__PVT__regVec_2533 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__23, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10U & __Vtemp_h34d96581__23[0x4fU])) {
            vlSelf->__PVT__regVec_2532 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__24, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((8U & __Vtemp_h34d96581__24[0x4fU])) {
            vlSelf->__PVT__regVec_2531 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__25, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((4U & __Vtemp_h34d96581__25[0x4fU])) {
            vlSelf->__PVT__regVec_2530 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__26, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((2U & __Vtemp_h34d96581__26[0x4fU])) {
            vlSelf->__PVT__regVec_2529 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__27, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((1U & __Vtemp_h34d96581__27[0x4fU])) {
            vlSelf->__PVT__regVec_2528 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__28, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((__Vtemp_h34d96581__28[0x4eU] >> 0x1fU)) {
            vlSelf->__PVT__regVec_2527 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__29, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40000000U & __Vtemp_h34d96581__29[0x4eU])) {
            vlSelf->__PVT__regVec_2526 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
    }
}

VL_INLINE_OPT void VTopAxiMasterWandRWithSlave_Axi4_transmission___sequent__TOP__TopAxiMasterWandRWithSlave__axiSlave__109(VTopAxiMasterWandRWithSlave_Axi4_transmission* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTopAxiMasterWandRWithSlave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTopAxiMasterWandRWithSlave_Axi4_transmission___sequent__TOP__TopAxiMasterWandRWithSlave__axiSlave__109\n"); );
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
        vlSelf->__PVT__regVec_2525 = 0U;
        vlSelf->__PVT__regVec_2524 = 0U;
        vlSelf->__PVT__regVec_2523 = 0U;
        vlSelf->__PVT__regVec_2522 = 0U;
        vlSelf->__PVT__regVec_2521 = 0U;
        vlSelf->__PVT__regVec_2520 = 0U;
        vlSelf->__PVT__regVec_2519 = 0U;
        vlSelf->__PVT__regVec_2518 = 0U;
        vlSelf->__PVT__regVec_2517 = 0U;
        vlSelf->__PVT__regVec_2516 = 0U;
        vlSelf->__PVT__regVec_2515 = 0U;
        vlSelf->__PVT__regVec_2514 = 0U;
        vlSelf->__PVT__regVec_2513 = 0U;
        vlSelf->__PVT__regVec_2512 = 0U;
        vlSelf->__PVT__regVec_2511 = 0U;
        vlSelf->__PVT__regVec_2510 = 0U;
        vlSelf->__PVT__regVec_2509 = 0U;
        vlSelf->__PVT__regVec_2508 = 0U;
        vlSelf->__PVT__regVec_2507 = 0U;
        vlSelf->__PVT__regVec_2506 = 0U;
        vlSelf->__PVT__regVec_2505 = 0U;
        vlSelf->__PVT__regVec_2504 = 0U;
        vlSelf->__PVT__regVec_2503 = 0U;
        vlSelf->__PVT__regVec_2502 = 0U;
        vlSelf->__PVT__regVec_2501 = 0U;
        vlSelf->__PVT__regVec_2500 = 0U;
        vlSelf->__PVT__regVec_2499 = 0U;
        vlSelf->__PVT__regVec_2498 = 0U;
        vlSelf->__PVT__regVec_2497 = 0U;
        vlSelf->__PVT__regVec_2496 = 0U;
    } else if (vlSelf->__PVT__when_Axi4_transmission_l91) {
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__0, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x20000000U & __Vtemp_h34d96581__0[0x4eU])) {
            vlSelf->__PVT__regVec_2525 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__1, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10000000U & __Vtemp_h34d96581__1[0x4eU])) {
            vlSelf->__PVT__regVec_2524 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__2, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x8000000U & __Vtemp_h34d96581__2[0x4eU])) {
            vlSelf->__PVT__regVec_2523 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__3, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x4000000U & __Vtemp_h34d96581__3[0x4eU])) {
            vlSelf->__PVT__regVec_2522 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__4, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x2000000U & __Vtemp_h34d96581__4[0x4eU])) {
            vlSelf->__PVT__regVec_2521 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__5, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x1000000U & __Vtemp_h34d96581__5[0x4eU])) {
            vlSelf->__PVT__regVec_2520 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__6, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x800000U & __Vtemp_h34d96581__6[0x4eU])) {
            vlSelf->__PVT__regVec_2519 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__7, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x400000U & __Vtemp_h34d96581__7[0x4eU])) {
            vlSelf->__PVT__regVec_2518 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__8, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x200000U & __Vtemp_h34d96581__8[0x4eU])) {
            vlSelf->__PVT__regVec_2517 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__9, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x100000U & __Vtemp_h34d96581__9[0x4eU])) {
            vlSelf->__PVT__regVec_2516 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__10, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x80000U & __Vtemp_h34d96581__10[0x4eU])) {
            vlSelf->__PVT__regVec_2515 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__11, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40000U & __Vtemp_h34d96581__11[0x4eU])) {
            vlSelf->__PVT__regVec_2514 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__12, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x20000U & __Vtemp_h34d96581__12[0x4eU])) {
            vlSelf->__PVT__regVec_2513 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__13, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10000U & __Vtemp_h34d96581__13[0x4eU])) {
            vlSelf->__PVT__regVec_2512 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__14, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x8000U & __Vtemp_h34d96581__14[0x4eU])) {
            vlSelf->__PVT__regVec_2511 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__15, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x4000U & __Vtemp_h34d96581__15[0x4eU])) {
            vlSelf->__PVT__regVec_2510 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__16, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x2000U & __Vtemp_h34d96581__16[0x4eU])) {
            vlSelf->__PVT__regVec_2509 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__17, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x1000U & __Vtemp_h34d96581__17[0x4eU])) {
            vlSelf->__PVT__regVec_2508 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__18, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x800U & __Vtemp_h34d96581__18[0x4eU])) {
            vlSelf->__PVT__regVec_2507 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__19, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x400U & __Vtemp_h34d96581__19[0x4eU])) {
            vlSelf->__PVT__regVec_2506 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__20, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x200U & __Vtemp_h34d96581__20[0x4eU])) {
            vlSelf->__PVT__regVec_2505 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__21, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x100U & __Vtemp_h34d96581__21[0x4eU])) {
            vlSelf->__PVT__regVec_2504 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__22, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x80U & __Vtemp_h34d96581__22[0x4eU])) {
            vlSelf->__PVT__regVec_2503 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__23, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40U & __Vtemp_h34d96581__23[0x4eU])) {
            vlSelf->__PVT__regVec_2502 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__24, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x20U & __Vtemp_h34d96581__24[0x4eU])) {
            vlSelf->__PVT__regVec_2501 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__25, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10U & __Vtemp_h34d96581__25[0x4eU])) {
            vlSelf->__PVT__regVec_2500 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__26, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((8U & __Vtemp_h34d96581__26[0x4eU])) {
            vlSelf->__PVT__regVec_2499 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__27, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((4U & __Vtemp_h34d96581__27[0x4eU])) {
            vlSelf->__PVT__regVec_2498 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__28, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((2U & __Vtemp_h34d96581__28[0x4eU])) {
            vlSelf->__PVT__regVec_2497 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__29, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((1U & __Vtemp_h34d96581__29[0x4eU])) {
            vlSelf->__PVT__regVec_2496 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
    }
}

VL_INLINE_OPT void VTopAxiMasterWandRWithSlave_Axi4_transmission___sequent__TOP__TopAxiMasterWandRWithSlave__axiSlave__110(VTopAxiMasterWandRWithSlave_Axi4_transmission* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTopAxiMasterWandRWithSlave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTopAxiMasterWandRWithSlave_Axi4_transmission___sequent__TOP__TopAxiMasterWandRWithSlave__axiSlave__110\n"); );
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
        vlSelf->__PVT__regVec_2495 = 0U;
        vlSelf->__PVT__regVec_2494 = 0U;
        vlSelf->__PVT__regVec_2493 = 0U;
        vlSelf->__PVT__regVec_2492 = 0U;
        vlSelf->__PVT__regVec_2491 = 0U;
        vlSelf->__PVT__regVec_2490 = 0U;
        vlSelf->__PVT__regVec_2489 = 0U;
        vlSelf->__PVT__regVec_2488 = 0U;
        vlSelf->__PVT__regVec_2487 = 0U;
        vlSelf->__PVT__regVec_2486 = 0U;
        vlSelf->__PVT__regVec_2485 = 0U;
        vlSelf->__PVT__regVec_2484 = 0U;
        vlSelf->__PVT__regVec_2483 = 0U;
        vlSelf->__PVT__regVec_2482 = 0U;
        vlSelf->__PVT__regVec_2481 = 0U;
        vlSelf->__PVT__regVec_2480 = 0U;
        vlSelf->__PVT__regVec_2479 = 0U;
        vlSelf->__PVT__regVec_2478 = 0U;
        vlSelf->__PVT__regVec_2477 = 0U;
        vlSelf->__PVT__regVec_2476 = 0U;
        vlSelf->__PVT__regVec_2475 = 0U;
        vlSelf->__PVT__regVec_2474 = 0U;
        vlSelf->__PVT__regVec_2473 = 0U;
        vlSelf->__PVT__regVec_2472 = 0U;
        vlSelf->__PVT__regVec_2471 = 0U;
        vlSelf->__PVT__regVec_2470 = 0U;
        vlSelf->__PVT__regVec_2469 = 0U;
        vlSelf->__PVT__regVec_2468 = 0U;
        vlSelf->__PVT__regVec_2467 = 0U;
        vlSelf->__PVT__regVec_2466 = 0U;
    } else if (vlSelf->__PVT__when_Axi4_transmission_l91) {
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__0, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((__Vtemp_h34d96581__0[0x4dU] >> 0x1fU)) {
            vlSelf->__PVT__regVec_2495 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__1, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40000000U & __Vtemp_h34d96581__1[0x4dU])) {
            vlSelf->__PVT__regVec_2494 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__2, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x20000000U & __Vtemp_h34d96581__2[0x4dU])) {
            vlSelf->__PVT__regVec_2493 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__3, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10000000U & __Vtemp_h34d96581__3[0x4dU])) {
            vlSelf->__PVT__regVec_2492 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__4, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x8000000U & __Vtemp_h34d96581__4[0x4dU])) {
            vlSelf->__PVT__regVec_2491 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__5, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x4000000U & __Vtemp_h34d96581__5[0x4dU])) {
            vlSelf->__PVT__regVec_2490 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__6, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x2000000U & __Vtemp_h34d96581__6[0x4dU])) {
            vlSelf->__PVT__regVec_2489 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__7, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x1000000U & __Vtemp_h34d96581__7[0x4dU])) {
            vlSelf->__PVT__regVec_2488 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__8, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x800000U & __Vtemp_h34d96581__8[0x4dU])) {
            vlSelf->__PVT__regVec_2487 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__9, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x400000U & __Vtemp_h34d96581__9[0x4dU])) {
            vlSelf->__PVT__regVec_2486 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__10, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x200000U & __Vtemp_h34d96581__10[0x4dU])) {
            vlSelf->__PVT__regVec_2485 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__11, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x100000U & __Vtemp_h34d96581__11[0x4dU])) {
            vlSelf->__PVT__regVec_2484 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__12, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x80000U & __Vtemp_h34d96581__12[0x4dU])) {
            vlSelf->__PVT__regVec_2483 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__13, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40000U & __Vtemp_h34d96581__13[0x4dU])) {
            vlSelf->__PVT__regVec_2482 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__14, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x20000U & __Vtemp_h34d96581__14[0x4dU])) {
            vlSelf->__PVT__regVec_2481 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__15, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10000U & __Vtemp_h34d96581__15[0x4dU])) {
            vlSelf->__PVT__regVec_2480 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__16, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x8000U & __Vtemp_h34d96581__16[0x4dU])) {
            vlSelf->__PVT__regVec_2479 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__17, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x4000U & __Vtemp_h34d96581__17[0x4dU])) {
            vlSelf->__PVT__regVec_2478 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__18, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x2000U & __Vtemp_h34d96581__18[0x4dU])) {
            vlSelf->__PVT__regVec_2477 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__19, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x1000U & __Vtemp_h34d96581__19[0x4dU])) {
            vlSelf->__PVT__regVec_2476 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__20, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x800U & __Vtemp_h34d96581__20[0x4dU])) {
            vlSelf->__PVT__regVec_2475 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__21, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x400U & __Vtemp_h34d96581__21[0x4dU])) {
            vlSelf->__PVT__regVec_2474 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__22, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x200U & __Vtemp_h34d96581__22[0x4dU])) {
            vlSelf->__PVT__regVec_2473 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__23, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x100U & __Vtemp_h34d96581__23[0x4dU])) {
            vlSelf->__PVT__regVec_2472 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__24, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x80U & __Vtemp_h34d96581__24[0x4dU])) {
            vlSelf->__PVT__regVec_2471 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__25, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40U & __Vtemp_h34d96581__25[0x4dU])) {
            vlSelf->__PVT__regVec_2470 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__26, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x20U & __Vtemp_h34d96581__26[0x4dU])) {
            vlSelf->__PVT__regVec_2469 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__27, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10U & __Vtemp_h34d96581__27[0x4dU])) {
            vlSelf->__PVT__regVec_2468 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__28, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((8U & __Vtemp_h34d96581__28[0x4dU])) {
            vlSelf->__PVT__regVec_2467 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__29, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((4U & __Vtemp_h34d96581__29[0x4dU])) {
            vlSelf->__PVT__regVec_2466 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
    }
}

VL_INLINE_OPT void VTopAxiMasterWandRWithSlave_Axi4_transmission___sequent__TOP__TopAxiMasterWandRWithSlave__axiSlave__111(VTopAxiMasterWandRWithSlave_Axi4_transmission* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTopAxiMasterWandRWithSlave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTopAxiMasterWandRWithSlave_Axi4_transmission___sequent__TOP__TopAxiMasterWandRWithSlave__axiSlave__111\n"); );
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
        vlSelf->__PVT__regVec_2465 = 0U;
        vlSelf->__PVT__regVec_2464 = 0U;
        vlSelf->__PVT__regVec_2463 = 0U;
        vlSelf->__PVT__regVec_2462 = 0U;
        vlSelf->__PVT__regVec_2461 = 0U;
        vlSelf->__PVT__regVec_2460 = 0U;
        vlSelf->__PVT__regVec_2459 = 0U;
        vlSelf->__PVT__regVec_2458 = 0U;
        vlSelf->__PVT__regVec_2457 = 0U;
        vlSelf->__PVT__regVec_2456 = 0U;
        vlSelf->__PVT__regVec_2455 = 0U;
        vlSelf->__PVT__regVec_2454 = 0U;
        vlSelf->__PVT__regVec_2453 = 0U;
        vlSelf->__PVT__regVec_2452 = 0U;
        vlSelf->__PVT__regVec_2451 = 0U;
        vlSelf->__PVT__regVec_2450 = 0U;
        vlSelf->__PVT__regVec_2449 = 0U;
        vlSelf->__PVT__regVec_2448 = 0U;
        vlSelf->__PVT__regVec_2447 = 0U;
        vlSelf->__PVT__regVec_2446 = 0U;
        vlSelf->__PVT__regVec_2445 = 0U;
        vlSelf->__PVT__regVec_2444 = 0U;
        vlSelf->__PVT__regVec_2443 = 0U;
        vlSelf->__PVT__regVec_2442 = 0U;
        vlSelf->__PVT__regVec_2441 = 0U;
        vlSelf->__PVT__regVec_2440 = 0U;
        vlSelf->__PVT__regVec_2439 = 0U;
        vlSelf->__PVT__regVec_2438 = 0U;
        vlSelf->__PVT__regVec_2437 = 0U;
        vlSelf->__PVT__regVec_2436 = 0U;
    } else if (vlSelf->__PVT__when_Axi4_transmission_l91) {
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__0, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((2U & __Vtemp_h34d96581__0[0x4dU])) {
            vlSelf->__PVT__regVec_2465 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__1, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((1U & __Vtemp_h34d96581__1[0x4dU])) {
            vlSelf->__PVT__regVec_2464 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__2, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((__Vtemp_h34d96581__2[0x4cU] >> 0x1fU)) {
            vlSelf->__PVT__regVec_2463 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__3, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40000000U & __Vtemp_h34d96581__3[0x4cU])) {
            vlSelf->__PVT__regVec_2462 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__4, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x20000000U & __Vtemp_h34d96581__4[0x4cU])) {
            vlSelf->__PVT__regVec_2461 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__5, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10000000U & __Vtemp_h34d96581__5[0x4cU])) {
            vlSelf->__PVT__regVec_2460 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__6, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x8000000U & __Vtemp_h34d96581__6[0x4cU])) {
            vlSelf->__PVT__regVec_2459 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__7, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x4000000U & __Vtemp_h34d96581__7[0x4cU])) {
            vlSelf->__PVT__regVec_2458 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__8, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x2000000U & __Vtemp_h34d96581__8[0x4cU])) {
            vlSelf->__PVT__regVec_2457 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__9, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x1000000U & __Vtemp_h34d96581__9[0x4cU])) {
            vlSelf->__PVT__regVec_2456 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__10, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x800000U & __Vtemp_h34d96581__10[0x4cU])) {
            vlSelf->__PVT__regVec_2455 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__11, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x400000U & __Vtemp_h34d96581__11[0x4cU])) {
            vlSelf->__PVT__regVec_2454 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__12, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x200000U & __Vtemp_h34d96581__12[0x4cU])) {
            vlSelf->__PVT__regVec_2453 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__13, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x100000U & __Vtemp_h34d96581__13[0x4cU])) {
            vlSelf->__PVT__regVec_2452 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__14, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x80000U & __Vtemp_h34d96581__14[0x4cU])) {
            vlSelf->__PVT__regVec_2451 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__15, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40000U & __Vtemp_h34d96581__15[0x4cU])) {
            vlSelf->__PVT__regVec_2450 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__16, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x20000U & __Vtemp_h34d96581__16[0x4cU])) {
            vlSelf->__PVT__regVec_2449 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__17, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10000U & __Vtemp_h34d96581__17[0x4cU])) {
            vlSelf->__PVT__regVec_2448 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__18, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x8000U & __Vtemp_h34d96581__18[0x4cU])) {
            vlSelf->__PVT__regVec_2447 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__19, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x4000U & __Vtemp_h34d96581__19[0x4cU])) {
            vlSelf->__PVT__regVec_2446 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__20, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x2000U & __Vtemp_h34d96581__20[0x4cU])) {
            vlSelf->__PVT__regVec_2445 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__21, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x1000U & __Vtemp_h34d96581__21[0x4cU])) {
            vlSelf->__PVT__regVec_2444 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__22, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x800U & __Vtemp_h34d96581__22[0x4cU])) {
            vlSelf->__PVT__regVec_2443 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__23, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x400U & __Vtemp_h34d96581__23[0x4cU])) {
            vlSelf->__PVT__regVec_2442 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__24, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x200U & __Vtemp_h34d96581__24[0x4cU])) {
            vlSelf->__PVT__regVec_2441 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__25, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x100U & __Vtemp_h34d96581__25[0x4cU])) {
            vlSelf->__PVT__regVec_2440 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__26, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x80U & __Vtemp_h34d96581__26[0x4cU])) {
            vlSelf->__PVT__regVec_2439 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__27, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40U & __Vtemp_h34d96581__27[0x4cU])) {
            vlSelf->__PVT__regVec_2438 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__28, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x20U & __Vtemp_h34d96581__28[0x4cU])) {
            vlSelf->__PVT__regVec_2437 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__29, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10U & __Vtemp_h34d96581__29[0x4cU])) {
            vlSelf->__PVT__regVec_2436 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
    }
}

VL_INLINE_OPT void VTopAxiMasterWandRWithSlave_Axi4_transmission___sequent__TOP__TopAxiMasterWandRWithSlave__axiSlave__112(VTopAxiMasterWandRWithSlave_Axi4_transmission* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTopAxiMasterWandRWithSlave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTopAxiMasterWandRWithSlave_Axi4_transmission___sequent__TOP__TopAxiMasterWandRWithSlave__axiSlave__112\n"); );
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
        vlSelf->__PVT__regVec_2435 = 0U;
        vlSelf->__PVT__regVec_2434 = 0U;
        vlSelf->__PVT__regVec_2433 = 0U;
        vlSelf->__PVT__regVec_2432 = 0U;
        vlSelf->__PVT__regVec_2431 = 0U;
        vlSelf->__PVT__regVec_2430 = 0U;
        vlSelf->__PVT__regVec_2429 = 0U;
        vlSelf->__PVT__regVec_2428 = 0U;
        vlSelf->__PVT__regVec_2427 = 0U;
        vlSelf->__PVT__regVec_2426 = 0U;
        vlSelf->__PVT__regVec_2425 = 0U;
        vlSelf->__PVT__regVec_2424 = 0U;
        vlSelf->__PVT__regVec_2423 = 0U;
        vlSelf->__PVT__regVec_2422 = 0U;
        vlSelf->__PVT__regVec_2421 = 0U;
        vlSelf->__PVT__regVec_2420 = 0U;
        vlSelf->__PVT__regVec_2419 = 0U;
        vlSelf->__PVT__regVec_2418 = 0U;
        vlSelf->__PVT__regVec_2417 = 0U;
        vlSelf->__PVT__regVec_2416 = 0U;
        vlSelf->__PVT__regVec_2415 = 0U;
        vlSelf->__PVT__regVec_2414 = 0U;
        vlSelf->__PVT__regVec_2413 = 0U;
        vlSelf->__PVT__regVec_2412 = 0U;
        vlSelf->__PVT__regVec_2411 = 0U;
        vlSelf->__PVT__regVec_2410 = 0U;
        vlSelf->__PVT__regVec_2409 = 0U;
        vlSelf->__PVT__regVec_2408 = 0U;
        vlSelf->__PVT__regVec_2407 = 0U;
        vlSelf->__PVT__regVec_2406 = 0U;
    } else if (vlSelf->__PVT__when_Axi4_transmission_l91) {
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__0, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((8U & __Vtemp_h34d96581__0[0x4cU])) {
            vlSelf->__PVT__regVec_2435 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__1, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((4U & __Vtemp_h34d96581__1[0x4cU])) {
            vlSelf->__PVT__regVec_2434 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__2, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((2U & __Vtemp_h34d96581__2[0x4cU])) {
            vlSelf->__PVT__regVec_2433 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__3, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((1U & __Vtemp_h34d96581__3[0x4cU])) {
            vlSelf->__PVT__regVec_2432 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__4, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((__Vtemp_h34d96581__4[0x4bU] >> 0x1fU)) {
            vlSelf->__PVT__regVec_2431 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__5, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40000000U & __Vtemp_h34d96581__5[0x4bU])) {
            vlSelf->__PVT__regVec_2430 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__6, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x20000000U & __Vtemp_h34d96581__6[0x4bU])) {
            vlSelf->__PVT__regVec_2429 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__7, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10000000U & __Vtemp_h34d96581__7[0x4bU])) {
            vlSelf->__PVT__regVec_2428 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__8, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x8000000U & __Vtemp_h34d96581__8[0x4bU])) {
            vlSelf->__PVT__regVec_2427 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__9, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x4000000U & __Vtemp_h34d96581__9[0x4bU])) {
            vlSelf->__PVT__regVec_2426 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__10, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x2000000U & __Vtemp_h34d96581__10[0x4bU])) {
            vlSelf->__PVT__regVec_2425 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__11, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x1000000U & __Vtemp_h34d96581__11[0x4bU])) {
            vlSelf->__PVT__regVec_2424 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__12, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x800000U & __Vtemp_h34d96581__12[0x4bU])) {
            vlSelf->__PVT__regVec_2423 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__13, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x400000U & __Vtemp_h34d96581__13[0x4bU])) {
            vlSelf->__PVT__regVec_2422 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__14, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x200000U & __Vtemp_h34d96581__14[0x4bU])) {
            vlSelf->__PVT__regVec_2421 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__15, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x100000U & __Vtemp_h34d96581__15[0x4bU])) {
            vlSelf->__PVT__regVec_2420 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__16, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x80000U & __Vtemp_h34d96581__16[0x4bU])) {
            vlSelf->__PVT__regVec_2419 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__17, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40000U & __Vtemp_h34d96581__17[0x4bU])) {
            vlSelf->__PVT__regVec_2418 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__18, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x20000U & __Vtemp_h34d96581__18[0x4bU])) {
            vlSelf->__PVT__regVec_2417 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__19, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10000U & __Vtemp_h34d96581__19[0x4bU])) {
            vlSelf->__PVT__regVec_2416 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__20, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x8000U & __Vtemp_h34d96581__20[0x4bU])) {
            vlSelf->__PVT__regVec_2415 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__21, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x4000U & __Vtemp_h34d96581__21[0x4bU])) {
            vlSelf->__PVT__regVec_2414 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__22, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x2000U & __Vtemp_h34d96581__22[0x4bU])) {
            vlSelf->__PVT__regVec_2413 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__23, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x1000U & __Vtemp_h34d96581__23[0x4bU])) {
            vlSelf->__PVT__regVec_2412 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__24, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x800U & __Vtemp_h34d96581__24[0x4bU])) {
            vlSelf->__PVT__regVec_2411 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__25, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x400U & __Vtemp_h34d96581__25[0x4bU])) {
            vlSelf->__PVT__regVec_2410 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__26, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x200U & __Vtemp_h34d96581__26[0x4bU])) {
            vlSelf->__PVT__regVec_2409 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__27, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x100U & __Vtemp_h34d96581__27[0x4bU])) {
            vlSelf->__PVT__regVec_2408 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__28, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x80U & __Vtemp_h34d96581__28[0x4bU])) {
            vlSelf->__PVT__regVec_2407 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__29, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40U & __Vtemp_h34d96581__29[0x4bU])) {
            vlSelf->__PVT__regVec_2406 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
    }
}
