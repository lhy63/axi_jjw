// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTopAxiMasterWandRWithSlave.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTopAxiMasterWandRWithSlave_Axi4_transmission.h"
#include "VTopAxiMasterWandRWithSlave__Syms.h"

extern const VlWide<128>/*4095:0*/ VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0;

VL_INLINE_OPT void VTopAxiMasterWandRWithSlave_Axi4_transmission___sequent__TOP__TopAxiMasterWandRWithSlave__axiSlave__176(VTopAxiMasterWandRWithSlave_Axi4_transmission* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTopAxiMasterWandRWithSlave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTopAxiMasterWandRWithSlave_Axi4_transmission___sequent__TOP__TopAxiMasterWandRWithSlave__axiSlave__176\n"); );
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
        vlSelf->__PVT__regVec_953 = 0U;
        vlSelf->__PVT__regVec_998 = 0U;
        vlSelf->__PVT__regVec_955 = 0U;
        vlSelf->__PVT__regVec_1000 = 0U;
        vlSelf->__PVT__regVec_957 = 0U;
        vlSelf->__PVT__regVec_1002 = 0U;
        vlSelf->__PVT__regVec_959 = 0U;
        vlSelf->__PVT__regVec_1004 = 0U;
        vlSelf->__PVT__regVec_961 = 0U;
        vlSelf->__PVT__regVec_1006 = 0U;
        vlSelf->__PVT__regVec_963 = 0U;
        vlSelf->__PVT__regVec_1008 = 0U;
        vlSelf->__PVT__regVec_965 = 0U;
        vlSelf->__PVT__regVec_1010 = 0U;
        vlSelf->__PVT__regVec_967 = 0U;
        vlSelf->__PVT__regVec_1012 = 0U;
        vlSelf->__PVT__regVec_969 = 0U;
        vlSelf->__PVT__regVec_1014 = 0U;
        vlSelf->__PVT__regVec_971 = 0U;
        vlSelf->__PVT__regVec_1016 = 0U;
        vlSelf->__PVT__regVec_973 = 0U;
        vlSelf->__PVT__regVec_1018 = 0U;
        vlSelf->__PVT__regVec_975 = 0U;
        vlSelf->__PVT__regVec_1020 = 0U;
        vlSelf->__PVT__regVec_977 = 0U;
        vlSelf->__PVT__regVec_1022 = 0U;
        vlSelf->__PVT__regVec_979 = 0U;
        vlSelf->__PVT__regVec_1024 = 0U;
        vlSelf->__PVT__regVec_981 = 0U;
        vlSelf->__PVT__regVec_1026 = 0U;
    } else if (vlSelf->__PVT__when_Axi4_transmission_l91) {
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__0, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x2000000U & __Vtemp_h34d96581__0[0x1dU])) {
            vlSelf->__PVT__regVec_953 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__1, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40U & __Vtemp_h34d96581__1[0x1fU])) {
            vlSelf->__PVT__regVec_998 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__2, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x8000000U & __Vtemp_h34d96581__2[0x1dU])) {
            vlSelf->__PVT__regVec_955 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__3, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x100U & __Vtemp_h34d96581__3[0x1fU])) {
            vlSelf->__PVT__regVec_1000 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__4, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x20000000U & __Vtemp_h34d96581__4[0x1dU])) {
            vlSelf->__PVT__regVec_957 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__5, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x400U & __Vtemp_h34d96581__5[0x1fU])) {
            vlSelf->__PVT__regVec_1002 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__6, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((__Vtemp_h34d96581__6[0x1dU] >> 0x1fU)) {
            vlSelf->__PVT__regVec_959 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__7, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x1000U & __Vtemp_h34d96581__7[0x1fU])) {
            vlSelf->__PVT__regVec_1004 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__8, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((2U & __Vtemp_h34d96581__8[0x1eU])) {
            vlSelf->__PVT__regVec_961 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__9, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x4000U & __Vtemp_h34d96581__9[0x1fU])) {
            vlSelf->__PVT__regVec_1006 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__10, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((8U & __Vtemp_h34d96581__10[0x1eU])) {
            vlSelf->__PVT__regVec_963 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__11, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10000U & __Vtemp_h34d96581__11[0x1fU])) {
            vlSelf->__PVT__regVec_1008 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__12, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x20U & __Vtemp_h34d96581__12[0x1eU])) {
            vlSelf->__PVT__regVec_965 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__13, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40000U & __Vtemp_h34d96581__13[0x1fU])) {
            vlSelf->__PVT__regVec_1010 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__14, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x80U & __Vtemp_h34d96581__14[0x1eU])) {
            vlSelf->__PVT__regVec_967 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__15, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x100000U & __Vtemp_h34d96581__15[0x1fU])) {
            vlSelf->__PVT__regVec_1012 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__16, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x200U & __Vtemp_h34d96581__16[0x1eU])) {
            vlSelf->__PVT__regVec_969 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__17, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x400000U & __Vtemp_h34d96581__17[0x1fU])) {
            vlSelf->__PVT__regVec_1014 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__18, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x800U & __Vtemp_h34d96581__18[0x1eU])) {
            vlSelf->__PVT__regVec_971 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__19, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x1000000U & __Vtemp_h34d96581__19[0x1fU])) {
            vlSelf->__PVT__regVec_1016 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__20, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x2000U & __Vtemp_h34d96581__20[0x1eU])) {
            vlSelf->__PVT__regVec_973 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__21, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x4000000U & __Vtemp_h34d96581__21[0x1fU])) {
            vlSelf->__PVT__regVec_1018 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__22, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x8000U & __Vtemp_h34d96581__22[0x1eU])) {
            vlSelf->__PVT__regVec_975 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__23, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10000000U & __Vtemp_h34d96581__23[0x1fU])) {
            vlSelf->__PVT__regVec_1020 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__24, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x20000U & __Vtemp_h34d96581__24[0x1eU])) {
            vlSelf->__PVT__regVec_977 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__25, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40000000U & __Vtemp_h34d96581__25[0x1fU])) {
            vlSelf->__PVT__regVec_1022 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__26, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x80000U & __Vtemp_h34d96581__26[0x1eU])) {
            vlSelf->__PVT__regVec_979 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__27, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((1U & __Vtemp_h34d96581__27[0x20U])) {
            vlSelf->__PVT__regVec_1024 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__28, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x200000U & __Vtemp_h34d96581__28[0x1eU])) {
            vlSelf->__PVT__regVec_981 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__29, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((4U & __Vtemp_h34d96581__29[0x20U])) {
            vlSelf->__PVT__regVec_1026 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
    }
}

VL_INLINE_OPT void VTopAxiMasterWandRWithSlave_Axi4_transmission___sequent__TOP__TopAxiMasterWandRWithSlave__axiSlave__177(VTopAxiMasterWandRWithSlave_Axi4_transmission* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTopAxiMasterWandRWithSlave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTopAxiMasterWandRWithSlave_Axi4_transmission___sequent__TOP__TopAxiMasterWandRWithSlave__axiSlave__177\n"); );
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
        vlSelf->__PVT__regVec_983 = 0U;
        vlSelf->__PVT__regVec_1028 = 0U;
        vlSelf->__PVT__regVec_985 = 0U;
        vlSelf->__PVT__regVec_1030 = 0U;
        vlSelf->__PVT__regVec_987 = 0U;
        vlSelf->__PVT__regVec_1032 = 0U;
        vlSelf->__PVT__regVec_989 = 0U;
        vlSelf->__PVT__regVec_1034 = 0U;
        vlSelf->__PVT__regVec_991 = 0U;
        vlSelf->__PVT__regVec_1036 = 0U;
        vlSelf->__PVT__regVec_993 = 0U;
        vlSelf->__PVT__regVec_1038 = 0U;
        vlSelf->__PVT__regVec_995 = 0U;
        vlSelf->__PVT__regVec_1040 = 0U;
        vlSelf->__PVT__regVec_997 = 0U;
        vlSelf->__PVT__regVec_1042 = 0U;
        vlSelf->__PVT__regVec_999 = 0U;
        vlSelf->__PVT__regVec_1044 = 0U;
        vlSelf->__PVT__regVec_1001 = 0U;
        vlSelf->__PVT__regVec_1046 = 0U;
        vlSelf->__PVT__regVec_1003 = 0U;
        vlSelf->__PVT__regVec_1048 = 0U;
        vlSelf->__PVT__regVec_1005 = 0U;
        vlSelf->__PVT__regVec_1050 = 0U;
        vlSelf->__PVT__regVec_1007 = 0U;
        vlSelf->__PVT__regVec_1052 = 0U;
        vlSelf->__PVT__regVec_1009 = 0U;
        vlSelf->__PVT__regVec_1054 = 0U;
        vlSelf->__PVT__regVec_1011 = 0U;
        vlSelf->__PVT__regVec_1056 = 0U;
    } else if (vlSelf->__PVT__when_Axi4_transmission_l91) {
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__0, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x800000U & __Vtemp_h34d96581__0[0x1eU])) {
            vlSelf->__PVT__regVec_983 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__1, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10U & __Vtemp_h34d96581__1[0x20U])) {
            vlSelf->__PVT__regVec_1028 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__2, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x2000000U & __Vtemp_h34d96581__2[0x1eU])) {
            vlSelf->__PVT__regVec_985 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__3, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40U & __Vtemp_h34d96581__3[0x20U])) {
            vlSelf->__PVT__regVec_1030 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__4, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x8000000U & __Vtemp_h34d96581__4[0x1eU])) {
            vlSelf->__PVT__regVec_987 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__5, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x100U & __Vtemp_h34d96581__5[0x20U])) {
            vlSelf->__PVT__regVec_1032 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__6, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x20000000U & __Vtemp_h34d96581__6[0x1eU])) {
            vlSelf->__PVT__regVec_989 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__7, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x400U & __Vtemp_h34d96581__7[0x20U])) {
            vlSelf->__PVT__regVec_1034 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__8, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((__Vtemp_h34d96581__8[0x1eU] >> 0x1fU)) {
            vlSelf->__PVT__regVec_991 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__9, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x1000U & __Vtemp_h34d96581__9[0x20U])) {
            vlSelf->__PVT__regVec_1036 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__10, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((2U & __Vtemp_h34d96581__10[0x1fU])) {
            vlSelf->__PVT__regVec_993 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__11, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x4000U & __Vtemp_h34d96581__11[0x20U])) {
            vlSelf->__PVT__regVec_1038 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__12, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((8U & __Vtemp_h34d96581__12[0x1fU])) {
            vlSelf->__PVT__regVec_995 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__13, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10000U & __Vtemp_h34d96581__13[0x20U])) {
            vlSelf->__PVT__regVec_1040 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__14, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x20U & __Vtemp_h34d96581__14[0x1fU])) {
            vlSelf->__PVT__regVec_997 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__15, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40000U & __Vtemp_h34d96581__15[0x20U])) {
            vlSelf->__PVT__regVec_1042 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__16, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x80U & __Vtemp_h34d96581__16[0x1fU])) {
            vlSelf->__PVT__regVec_999 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__17, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x100000U & __Vtemp_h34d96581__17[0x20U])) {
            vlSelf->__PVT__regVec_1044 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__18, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x200U & __Vtemp_h34d96581__18[0x1fU])) {
            vlSelf->__PVT__regVec_1001 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__19, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x400000U & __Vtemp_h34d96581__19[0x20U])) {
            vlSelf->__PVT__regVec_1046 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__20, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x800U & __Vtemp_h34d96581__20[0x1fU])) {
            vlSelf->__PVT__regVec_1003 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__21, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x1000000U & __Vtemp_h34d96581__21[0x20U])) {
            vlSelf->__PVT__regVec_1048 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__22, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x2000U & __Vtemp_h34d96581__22[0x1fU])) {
            vlSelf->__PVT__regVec_1005 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__23, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x4000000U & __Vtemp_h34d96581__23[0x20U])) {
            vlSelf->__PVT__regVec_1050 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__24, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x8000U & __Vtemp_h34d96581__24[0x1fU])) {
            vlSelf->__PVT__regVec_1007 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__25, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10000000U & __Vtemp_h34d96581__25[0x20U])) {
            vlSelf->__PVT__regVec_1052 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__26, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x20000U & __Vtemp_h34d96581__26[0x1fU])) {
            vlSelf->__PVT__regVec_1009 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__27, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40000000U & __Vtemp_h34d96581__27[0x20U])) {
            vlSelf->__PVT__regVec_1054 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__28, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x80000U & __Vtemp_h34d96581__28[0x1fU])) {
            vlSelf->__PVT__regVec_1011 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__29, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((1U & __Vtemp_h34d96581__29[0x21U])) {
            vlSelf->__PVT__regVec_1056 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
    }
}

VL_INLINE_OPT void VTopAxiMasterWandRWithSlave_Axi4_transmission___sequent__TOP__TopAxiMasterWandRWithSlave__axiSlave__178(VTopAxiMasterWandRWithSlave_Axi4_transmission* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTopAxiMasterWandRWithSlave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTopAxiMasterWandRWithSlave_Axi4_transmission___sequent__TOP__TopAxiMasterWandRWithSlave__axiSlave__178\n"); );
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
        vlSelf->__PVT__regVec_1013 = 0U;
        vlSelf->__PVT__regVec_1058 = 0U;
        vlSelf->__PVT__regVec_1015 = 0U;
        vlSelf->__PVT__regVec_1060 = 0U;
        vlSelf->__PVT__regVec_1017 = 0U;
        vlSelf->__PVT__regVec_1062 = 0U;
        vlSelf->__PVT__regVec_1019 = 0U;
        vlSelf->__PVT__regVec_1064 = 0U;
        vlSelf->__PVT__regVec_1021 = 0U;
        vlSelf->__PVT__regVec_1066 = 0U;
        vlSelf->__PVT__regVec_1023 = 0U;
        vlSelf->__PVT__regVec_1068 = 0U;
        vlSelf->__PVT__regVec_1025 = 0U;
        vlSelf->__PVT__regVec_1070 = 0U;
        vlSelf->__PVT__regVec_1027 = 0U;
        vlSelf->__PVT__regVec_1072 = 0U;
        vlSelf->__PVT__regVec_1029 = 0U;
        vlSelf->__PVT__regVec_1074 = 0U;
        vlSelf->__PVT__regVec_1031 = 0U;
        vlSelf->__PVT__regVec_1076 = 0U;
        vlSelf->__PVT__regVec_1033 = 0U;
        vlSelf->__PVT__regVec_1078 = 0U;
        vlSelf->__PVT__regVec_1035 = 0U;
        vlSelf->__PVT__regVec_1080 = 0U;
        vlSelf->__PVT__regVec_1037 = 0U;
        vlSelf->__PVT__regVec_1082 = 0U;
        vlSelf->__PVT__regVec_1039 = 0U;
        vlSelf->__PVT__regVec_1084 = 0U;
        vlSelf->__PVT__regVec_1041 = 0U;
        vlSelf->__PVT__regVec_1086 = 0U;
    } else if (vlSelf->__PVT__when_Axi4_transmission_l91) {
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__0, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x200000U & __Vtemp_h34d96581__0[0x1fU])) {
            vlSelf->__PVT__regVec_1013 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__1, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((4U & __Vtemp_h34d96581__1[0x21U])) {
            vlSelf->__PVT__regVec_1058 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__2, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x800000U & __Vtemp_h34d96581__2[0x1fU])) {
            vlSelf->__PVT__regVec_1015 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__3, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10U & __Vtemp_h34d96581__3[0x21U])) {
            vlSelf->__PVT__regVec_1060 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__4, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x2000000U & __Vtemp_h34d96581__4[0x1fU])) {
            vlSelf->__PVT__regVec_1017 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__5, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40U & __Vtemp_h34d96581__5[0x21U])) {
            vlSelf->__PVT__regVec_1062 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__6, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x8000000U & __Vtemp_h34d96581__6[0x1fU])) {
            vlSelf->__PVT__regVec_1019 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__7, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x100U & __Vtemp_h34d96581__7[0x21U])) {
            vlSelf->__PVT__regVec_1064 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__8, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x20000000U & __Vtemp_h34d96581__8[0x1fU])) {
            vlSelf->__PVT__regVec_1021 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__9, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x400U & __Vtemp_h34d96581__9[0x21U])) {
            vlSelf->__PVT__regVec_1066 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__10, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((__Vtemp_h34d96581__10[0x1fU] >> 0x1fU)) {
            vlSelf->__PVT__regVec_1023 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__11, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x1000U & __Vtemp_h34d96581__11[0x21U])) {
            vlSelf->__PVT__regVec_1068 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__12, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((2U & __Vtemp_h34d96581__12[0x20U])) {
            vlSelf->__PVT__regVec_1025 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__13, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x4000U & __Vtemp_h34d96581__13[0x21U])) {
            vlSelf->__PVT__regVec_1070 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__14, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((8U & __Vtemp_h34d96581__14[0x20U])) {
            vlSelf->__PVT__regVec_1027 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__15, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10000U & __Vtemp_h34d96581__15[0x21U])) {
            vlSelf->__PVT__regVec_1072 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__16, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x20U & __Vtemp_h34d96581__16[0x20U])) {
            vlSelf->__PVT__regVec_1029 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__17, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40000U & __Vtemp_h34d96581__17[0x21U])) {
            vlSelf->__PVT__regVec_1074 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__18, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x80U & __Vtemp_h34d96581__18[0x20U])) {
            vlSelf->__PVT__regVec_1031 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__19, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x100000U & __Vtemp_h34d96581__19[0x21U])) {
            vlSelf->__PVT__regVec_1076 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__20, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x200U & __Vtemp_h34d96581__20[0x20U])) {
            vlSelf->__PVT__regVec_1033 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__21, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x400000U & __Vtemp_h34d96581__21[0x21U])) {
            vlSelf->__PVT__regVec_1078 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__22, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x800U & __Vtemp_h34d96581__22[0x20U])) {
            vlSelf->__PVT__regVec_1035 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__23, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x1000000U & __Vtemp_h34d96581__23[0x21U])) {
            vlSelf->__PVT__regVec_1080 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__24, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x2000U & __Vtemp_h34d96581__24[0x20U])) {
            vlSelf->__PVT__regVec_1037 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__25, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x4000000U & __Vtemp_h34d96581__25[0x21U])) {
            vlSelf->__PVT__regVec_1082 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__26, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x8000U & __Vtemp_h34d96581__26[0x20U])) {
            vlSelf->__PVT__regVec_1039 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__27, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10000000U & __Vtemp_h34d96581__27[0x21U])) {
            vlSelf->__PVT__regVec_1084 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__28, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x20000U & __Vtemp_h34d96581__28[0x20U])) {
            vlSelf->__PVT__regVec_1041 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__29, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40000000U & __Vtemp_h34d96581__29[0x21U])) {
            vlSelf->__PVT__regVec_1086 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
    }
}

VL_INLINE_OPT void VTopAxiMasterWandRWithSlave_Axi4_transmission___sequent__TOP__TopAxiMasterWandRWithSlave__axiSlave__179(VTopAxiMasterWandRWithSlave_Axi4_transmission* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTopAxiMasterWandRWithSlave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTopAxiMasterWandRWithSlave_Axi4_transmission___sequent__TOP__TopAxiMasterWandRWithSlave__axiSlave__179\n"); );
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
        vlSelf->__PVT__regVec_1043 = 0U;
        vlSelf->__PVT__regVec_1088 = 0U;
        vlSelf->__PVT__regVec_1045 = 0U;
        vlSelf->__PVT__regVec_1090 = 0U;
        vlSelf->__PVT__regVec_1047 = 0U;
        vlSelf->__PVT__regVec_1092 = 0U;
        vlSelf->__PVT__regVec_1049 = 0U;
        vlSelf->__PVT__regVec_1094 = 0U;
        vlSelf->__PVT__regVec_1051 = 0U;
        vlSelf->__PVT__regVec_1096 = 0U;
        vlSelf->__PVT__regVec_1053 = 0U;
        vlSelf->__PVT__regVec_1098 = 0U;
        vlSelf->__PVT__regVec_1055 = 0U;
        vlSelf->__PVT__regVec_1100 = 0U;
        vlSelf->__PVT__regVec_1057 = 0U;
        vlSelf->__PVT__regVec_1102 = 0U;
        vlSelf->__PVT__regVec_1059 = 0U;
        vlSelf->__PVT__regVec_1104 = 0U;
        vlSelf->__PVT__regVec_1061 = 0U;
        vlSelf->__PVT__regVec_1106 = 0U;
        vlSelf->__PVT__regVec_1063 = 0U;
        vlSelf->__PVT__regVec_1108 = 0U;
        vlSelf->__PVT__regVec_1065 = 0U;
        vlSelf->__PVT__regVec_1110 = 0U;
        vlSelf->__PVT__regVec_1067 = 0U;
        vlSelf->__PVT__regVec_1112 = 0U;
        vlSelf->__PVT__regVec_1069 = 0U;
        vlSelf->__PVT__regVec_1114 = 0U;
        vlSelf->__PVT__regVec_1071 = 0U;
        vlSelf->__PVT__regVec_1116 = 0U;
    } else if (vlSelf->__PVT__when_Axi4_transmission_l91) {
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__0, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x80000U & __Vtemp_h34d96581__0[0x20U])) {
            vlSelf->__PVT__regVec_1043 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__1, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((1U & __Vtemp_h34d96581__1[0x22U])) {
            vlSelf->__PVT__regVec_1088 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__2, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x200000U & __Vtemp_h34d96581__2[0x20U])) {
            vlSelf->__PVT__regVec_1045 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__3, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((4U & __Vtemp_h34d96581__3[0x22U])) {
            vlSelf->__PVT__regVec_1090 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__4, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x800000U & __Vtemp_h34d96581__4[0x20U])) {
            vlSelf->__PVT__regVec_1047 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__5, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10U & __Vtemp_h34d96581__5[0x22U])) {
            vlSelf->__PVT__regVec_1092 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__6, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x2000000U & __Vtemp_h34d96581__6[0x20U])) {
            vlSelf->__PVT__regVec_1049 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__7, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40U & __Vtemp_h34d96581__7[0x22U])) {
            vlSelf->__PVT__regVec_1094 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__8, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x8000000U & __Vtemp_h34d96581__8[0x20U])) {
            vlSelf->__PVT__regVec_1051 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__9, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x100U & __Vtemp_h34d96581__9[0x22U])) {
            vlSelf->__PVT__regVec_1096 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__10, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x20000000U & __Vtemp_h34d96581__10[0x20U])) {
            vlSelf->__PVT__regVec_1053 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__11, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x400U & __Vtemp_h34d96581__11[0x22U])) {
            vlSelf->__PVT__regVec_1098 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__12, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((__Vtemp_h34d96581__12[0x20U] >> 0x1fU)) {
            vlSelf->__PVT__regVec_1055 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__13, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x1000U & __Vtemp_h34d96581__13[0x22U])) {
            vlSelf->__PVT__regVec_1100 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__14, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((2U & __Vtemp_h34d96581__14[0x21U])) {
            vlSelf->__PVT__regVec_1057 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__15, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x4000U & __Vtemp_h34d96581__15[0x22U])) {
            vlSelf->__PVT__regVec_1102 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__16, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((8U & __Vtemp_h34d96581__16[0x21U])) {
            vlSelf->__PVT__regVec_1059 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__17, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10000U & __Vtemp_h34d96581__17[0x22U])) {
            vlSelf->__PVT__regVec_1104 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__18, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x20U & __Vtemp_h34d96581__18[0x21U])) {
            vlSelf->__PVT__regVec_1061 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__19, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40000U & __Vtemp_h34d96581__19[0x22U])) {
            vlSelf->__PVT__regVec_1106 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__20, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x80U & __Vtemp_h34d96581__20[0x21U])) {
            vlSelf->__PVT__regVec_1063 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__21, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x100000U & __Vtemp_h34d96581__21[0x22U])) {
            vlSelf->__PVT__regVec_1108 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__22, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x200U & __Vtemp_h34d96581__22[0x21U])) {
            vlSelf->__PVT__regVec_1065 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__23, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x400000U & __Vtemp_h34d96581__23[0x22U])) {
            vlSelf->__PVT__regVec_1110 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__24, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x800U & __Vtemp_h34d96581__24[0x21U])) {
            vlSelf->__PVT__regVec_1067 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__25, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x1000000U & __Vtemp_h34d96581__25[0x22U])) {
            vlSelf->__PVT__regVec_1112 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__26, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x2000U & __Vtemp_h34d96581__26[0x21U])) {
            vlSelf->__PVT__regVec_1069 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__27, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x4000000U & __Vtemp_h34d96581__27[0x22U])) {
            vlSelf->__PVT__regVec_1114 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__28, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x8000U & __Vtemp_h34d96581__28[0x21U])) {
            vlSelf->__PVT__regVec_1071 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__29, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10000000U & __Vtemp_h34d96581__29[0x22U])) {
            vlSelf->__PVT__regVec_1116 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
    }
}

VL_INLINE_OPT void VTopAxiMasterWandRWithSlave_Axi4_transmission___sequent__TOP__TopAxiMasterWandRWithSlave__axiSlave__180(VTopAxiMasterWandRWithSlave_Axi4_transmission* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTopAxiMasterWandRWithSlave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTopAxiMasterWandRWithSlave_Axi4_transmission___sequent__TOP__TopAxiMasterWandRWithSlave__axiSlave__180\n"); );
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
        vlSelf->__PVT__regVec_1073 = 0U;
        vlSelf->__PVT__regVec_1118 = 0U;
        vlSelf->__PVT__regVec_1075 = 0U;
        vlSelf->__PVT__regVec_1120 = 0U;
        vlSelf->__PVT__regVec_1077 = 0U;
        vlSelf->__PVT__regVec_1122 = 0U;
        vlSelf->__PVT__regVec_1079 = 0U;
        vlSelf->__PVT__regVec_1124 = 0U;
        vlSelf->__PVT__regVec_1081 = 0U;
        vlSelf->__PVT__regVec_1126 = 0U;
        vlSelf->__PVT__regVec_1083 = 0U;
        vlSelf->__PVT__regVec_1128 = 0U;
        vlSelf->__PVT__regVec_1085 = 0U;
        vlSelf->__PVT__regVec_1130 = 0U;
        vlSelf->__PVT__regVec_1087 = 0U;
        vlSelf->__PVT__regVec_1132 = 0U;
        vlSelf->__PVT__regVec_1089 = 0U;
        vlSelf->__PVT__regVec_1134 = 0U;
        vlSelf->__PVT__regVec_1091 = 0U;
        vlSelf->__PVT__regVec_1136 = 0U;
        vlSelf->__PVT__regVec_1093 = 0U;
        vlSelf->__PVT__regVec_1138 = 0U;
        vlSelf->__PVT__regVec_1095 = 0U;
        vlSelf->__PVT__regVec_1140 = 0U;
        vlSelf->__PVT__regVec_1097 = 0U;
        vlSelf->__PVT__regVec_1142 = 0U;
        vlSelf->__PVT__regVec_1099 = 0U;
        vlSelf->__PVT__regVec_1144 = 0U;
        vlSelf->__PVT__regVec_1101 = 0U;
        vlSelf->__PVT__regVec_1146 = 0U;
    } else if (vlSelf->__PVT__when_Axi4_transmission_l91) {
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__0, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x20000U & __Vtemp_h34d96581__0[0x21U])) {
            vlSelf->__PVT__regVec_1073 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__1, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40000000U & __Vtemp_h34d96581__1[0x22U])) {
            vlSelf->__PVT__regVec_1118 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__2, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x80000U & __Vtemp_h34d96581__2[0x21U])) {
            vlSelf->__PVT__regVec_1075 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__3, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((1U & __Vtemp_h34d96581__3[0x23U])) {
            vlSelf->__PVT__regVec_1120 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__4, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x200000U & __Vtemp_h34d96581__4[0x21U])) {
            vlSelf->__PVT__regVec_1077 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__5, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((4U & __Vtemp_h34d96581__5[0x23U])) {
            vlSelf->__PVT__regVec_1122 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__6, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x800000U & __Vtemp_h34d96581__6[0x21U])) {
            vlSelf->__PVT__regVec_1079 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__7, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10U & __Vtemp_h34d96581__7[0x23U])) {
            vlSelf->__PVT__regVec_1124 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__8, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x2000000U & __Vtemp_h34d96581__8[0x21U])) {
            vlSelf->__PVT__regVec_1081 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__9, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40U & __Vtemp_h34d96581__9[0x23U])) {
            vlSelf->__PVT__regVec_1126 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__10, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x8000000U & __Vtemp_h34d96581__10[0x21U])) {
            vlSelf->__PVT__regVec_1083 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__11, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x100U & __Vtemp_h34d96581__11[0x23U])) {
            vlSelf->__PVT__regVec_1128 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__12, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x20000000U & __Vtemp_h34d96581__12[0x21U])) {
            vlSelf->__PVT__regVec_1085 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__13, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x400U & __Vtemp_h34d96581__13[0x23U])) {
            vlSelf->__PVT__regVec_1130 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__14, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((__Vtemp_h34d96581__14[0x21U] >> 0x1fU)) {
            vlSelf->__PVT__regVec_1087 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__15, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x1000U & __Vtemp_h34d96581__15[0x23U])) {
            vlSelf->__PVT__regVec_1132 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__16, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((2U & __Vtemp_h34d96581__16[0x22U])) {
            vlSelf->__PVT__regVec_1089 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__17, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x4000U & __Vtemp_h34d96581__17[0x23U])) {
            vlSelf->__PVT__regVec_1134 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__18, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((8U & __Vtemp_h34d96581__18[0x22U])) {
            vlSelf->__PVT__regVec_1091 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__19, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10000U & __Vtemp_h34d96581__19[0x23U])) {
            vlSelf->__PVT__regVec_1136 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__20, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x20U & __Vtemp_h34d96581__20[0x22U])) {
            vlSelf->__PVT__regVec_1093 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__21, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40000U & __Vtemp_h34d96581__21[0x23U])) {
            vlSelf->__PVT__regVec_1138 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__22, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x80U & __Vtemp_h34d96581__22[0x22U])) {
            vlSelf->__PVT__regVec_1095 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__23, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x100000U & __Vtemp_h34d96581__23[0x23U])) {
            vlSelf->__PVT__regVec_1140 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__24, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x200U & __Vtemp_h34d96581__24[0x22U])) {
            vlSelf->__PVT__regVec_1097 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__25, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x400000U & __Vtemp_h34d96581__25[0x23U])) {
            vlSelf->__PVT__regVec_1142 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__26, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x800U & __Vtemp_h34d96581__26[0x22U])) {
            vlSelf->__PVT__regVec_1099 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__27, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x1000000U & __Vtemp_h34d96581__27[0x23U])) {
            vlSelf->__PVT__regVec_1144 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__28, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x2000U & __Vtemp_h34d96581__28[0x22U])) {
            vlSelf->__PVT__regVec_1101 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__29, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x4000000U & __Vtemp_h34d96581__29[0x23U])) {
            vlSelf->__PVT__regVec_1146 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
    }
}

VL_INLINE_OPT void VTopAxiMasterWandRWithSlave_Axi4_transmission___sequent__TOP__TopAxiMasterWandRWithSlave__axiSlave__181(VTopAxiMasterWandRWithSlave_Axi4_transmission* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTopAxiMasterWandRWithSlave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTopAxiMasterWandRWithSlave_Axi4_transmission___sequent__TOP__TopAxiMasterWandRWithSlave__axiSlave__181\n"); );
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
        vlSelf->__PVT__regVec_1103 = 0U;
        vlSelf->__PVT__regVec_1148 = 0U;
        vlSelf->__PVT__regVec_1105 = 0U;
        vlSelf->__PVT__regVec_1150 = 0U;
        vlSelf->__PVT__regVec_1107 = 0U;
        vlSelf->__PVT__regVec_1152 = 0U;
        vlSelf->__PVT__regVec_1109 = 0U;
        vlSelf->__PVT__regVec_1154 = 0U;
        vlSelf->__PVT__regVec_1111 = 0U;
        vlSelf->__PVT__regVec_1156 = 0U;
        vlSelf->__PVT__regVec_1113 = 0U;
        vlSelf->__PVT__regVec_1158 = 0U;
        vlSelf->__PVT__regVec_1115 = 0U;
        vlSelf->__PVT__regVec_1160 = 0U;
        vlSelf->__PVT__regVec_1117 = 0U;
        vlSelf->__PVT__regVec_1162 = 0U;
        vlSelf->__PVT__regVec_1119 = 0U;
        vlSelf->__PVT__regVec_1164 = 0U;
        vlSelf->__PVT__regVec_1121 = 0U;
        vlSelf->__PVT__regVec_1166 = 0U;
        vlSelf->__PVT__regVec_1123 = 0U;
        vlSelf->__PVT__regVec_1168 = 0U;
        vlSelf->__PVT__regVec_1125 = 0U;
        vlSelf->__PVT__regVec_1170 = 0U;
        vlSelf->__PVT__regVec_1127 = 0U;
        vlSelf->__PVT__regVec_1172 = 0U;
        vlSelf->__PVT__regVec_1129 = 0U;
        vlSelf->__PVT__regVec_1174 = 0U;
        vlSelf->__PVT__regVec_1131 = 0U;
        vlSelf->__PVT__regVec_1176 = 0U;
    } else if (vlSelf->__PVT__when_Axi4_transmission_l91) {
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__0, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x8000U & __Vtemp_h34d96581__0[0x22U])) {
            vlSelf->__PVT__regVec_1103 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__1, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10000000U & __Vtemp_h34d96581__1[0x23U])) {
            vlSelf->__PVT__regVec_1148 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__2, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x20000U & __Vtemp_h34d96581__2[0x22U])) {
            vlSelf->__PVT__regVec_1105 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__3, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40000000U & __Vtemp_h34d96581__3[0x23U])) {
            vlSelf->__PVT__regVec_1150 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__4, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x80000U & __Vtemp_h34d96581__4[0x22U])) {
            vlSelf->__PVT__regVec_1107 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__5, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((1U & __Vtemp_h34d96581__5[0x24U])) {
            vlSelf->__PVT__regVec_1152 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__6, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x200000U & __Vtemp_h34d96581__6[0x22U])) {
            vlSelf->__PVT__regVec_1109 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__7, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((4U & __Vtemp_h34d96581__7[0x24U])) {
            vlSelf->__PVT__regVec_1154 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__8, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x800000U & __Vtemp_h34d96581__8[0x22U])) {
            vlSelf->__PVT__regVec_1111 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__9, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10U & __Vtemp_h34d96581__9[0x24U])) {
            vlSelf->__PVT__regVec_1156 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__10, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x2000000U & __Vtemp_h34d96581__10[0x22U])) {
            vlSelf->__PVT__regVec_1113 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__11, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40U & __Vtemp_h34d96581__11[0x24U])) {
            vlSelf->__PVT__regVec_1158 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__12, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x8000000U & __Vtemp_h34d96581__12[0x22U])) {
            vlSelf->__PVT__regVec_1115 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__13, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x100U & __Vtemp_h34d96581__13[0x24U])) {
            vlSelf->__PVT__regVec_1160 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__14, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x20000000U & __Vtemp_h34d96581__14[0x22U])) {
            vlSelf->__PVT__regVec_1117 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__15, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x400U & __Vtemp_h34d96581__15[0x24U])) {
            vlSelf->__PVT__regVec_1162 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__16, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((__Vtemp_h34d96581__16[0x22U] >> 0x1fU)) {
            vlSelf->__PVT__regVec_1119 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__17, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x1000U & __Vtemp_h34d96581__17[0x24U])) {
            vlSelf->__PVT__regVec_1164 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__18, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((2U & __Vtemp_h34d96581__18[0x23U])) {
            vlSelf->__PVT__regVec_1121 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__19, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x4000U & __Vtemp_h34d96581__19[0x24U])) {
            vlSelf->__PVT__regVec_1166 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__20, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((8U & __Vtemp_h34d96581__20[0x23U])) {
            vlSelf->__PVT__regVec_1123 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__21, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10000U & __Vtemp_h34d96581__21[0x24U])) {
            vlSelf->__PVT__regVec_1168 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__22, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x20U & __Vtemp_h34d96581__22[0x23U])) {
            vlSelf->__PVT__regVec_1125 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__23, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40000U & __Vtemp_h34d96581__23[0x24U])) {
            vlSelf->__PVT__regVec_1170 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__24, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x80U & __Vtemp_h34d96581__24[0x23U])) {
            vlSelf->__PVT__regVec_1127 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__25, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x100000U & __Vtemp_h34d96581__25[0x24U])) {
            vlSelf->__PVT__regVec_1172 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__26, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x200U & __Vtemp_h34d96581__26[0x23U])) {
            vlSelf->__PVT__regVec_1129 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__27, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x400000U & __Vtemp_h34d96581__27[0x24U])) {
            vlSelf->__PVT__regVec_1174 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__28, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x800U & __Vtemp_h34d96581__28[0x23U])) {
            vlSelf->__PVT__regVec_1131 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__29, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x1000000U & __Vtemp_h34d96581__29[0x24U])) {
            vlSelf->__PVT__regVec_1176 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
    }
}

VL_INLINE_OPT void VTopAxiMasterWandRWithSlave_Axi4_transmission___sequent__TOP__TopAxiMasterWandRWithSlave__axiSlave__182(VTopAxiMasterWandRWithSlave_Axi4_transmission* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTopAxiMasterWandRWithSlave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTopAxiMasterWandRWithSlave_Axi4_transmission___sequent__TOP__TopAxiMasterWandRWithSlave__axiSlave__182\n"); );
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
        vlSelf->__PVT__regVec_1133 = 0U;
        vlSelf->__PVT__regVec_1178 = 0U;
        vlSelf->__PVT__regVec_1135 = 0U;
        vlSelf->__PVT__regVec_1180 = 0U;
        vlSelf->__PVT__regVec_1137 = 0U;
        vlSelf->__PVT__regVec_1182 = 0U;
        vlSelf->__PVT__regVec_1139 = 0U;
        vlSelf->__PVT__regVec_1184 = 0U;
        vlSelf->__PVT__regVec_1141 = 0U;
        vlSelf->__PVT__regVec_1186 = 0U;
        vlSelf->__PVT__regVec_1143 = 0U;
        vlSelf->__PVT__regVec_1188 = 0U;
        vlSelf->__PVT__regVec_1145 = 0U;
        vlSelf->__PVT__regVec_1190 = 0U;
        vlSelf->__PVT__regVec_1147 = 0U;
        vlSelf->__PVT__regVec_1192 = 0U;
        vlSelf->__PVT__regVec_1149 = 0U;
        vlSelf->__PVT__regVec_1194 = 0U;
        vlSelf->__PVT__regVec_1151 = 0U;
        vlSelf->__PVT__regVec_1196 = 0U;
        vlSelf->__PVT__regVec_1153 = 0U;
        vlSelf->__PVT__regVec_1198 = 0U;
        vlSelf->__PVT__regVec_1155 = 0U;
        vlSelf->__PVT__regVec_1200 = 0U;
        vlSelf->__PVT__regVec_1157 = 0U;
        vlSelf->__PVT__regVec_1202 = 0U;
        vlSelf->__PVT__regVec_1159 = 0U;
        vlSelf->__PVT__regVec_1204 = 0U;
        vlSelf->__PVT__regVec_1161 = 0U;
        vlSelf->__PVT__regVec_1206 = 0U;
    } else if (vlSelf->__PVT__when_Axi4_transmission_l91) {
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__0, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x2000U & __Vtemp_h34d96581__0[0x23U])) {
            vlSelf->__PVT__regVec_1133 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__1, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x4000000U & __Vtemp_h34d96581__1[0x24U])) {
            vlSelf->__PVT__regVec_1178 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__2, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x8000U & __Vtemp_h34d96581__2[0x23U])) {
            vlSelf->__PVT__regVec_1135 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__3, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10000000U & __Vtemp_h34d96581__3[0x24U])) {
            vlSelf->__PVT__regVec_1180 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__4, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x20000U & __Vtemp_h34d96581__4[0x23U])) {
            vlSelf->__PVT__regVec_1137 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__5, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40000000U & __Vtemp_h34d96581__5[0x24U])) {
            vlSelf->__PVT__regVec_1182 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__6, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x80000U & __Vtemp_h34d96581__6[0x23U])) {
            vlSelf->__PVT__regVec_1139 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__7, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((1U & __Vtemp_h34d96581__7[0x25U])) {
            vlSelf->__PVT__regVec_1184 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__8, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x200000U & __Vtemp_h34d96581__8[0x23U])) {
            vlSelf->__PVT__regVec_1141 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__9, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((4U & __Vtemp_h34d96581__9[0x25U])) {
            vlSelf->__PVT__regVec_1186 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__10, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x800000U & __Vtemp_h34d96581__10[0x23U])) {
            vlSelf->__PVT__regVec_1143 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__11, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10U & __Vtemp_h34d96581__11[0x25U])) {
            vlSelf->__PVT__regVec_1188 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__12, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x2000000U & __Vtemp_h34d96581__12[0x23U])) {
            vlSelf->__PVT__regVec_1145 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__13, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40U & __Vtemp_h34d96581__13[0x25U])) {
            vlSelf->__PVT__regVec_1190 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__14, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x8000000U & __Vtemp_h34d96581__14[0x23U])) {
            vlSelf->__PVT__regVec_1147 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__15, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x100U & __Vtemp_h34d96581__15[0x25U])) {
            vlSelf->__PVT__regVec_1192 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__16, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x20000000U & __Vtemp_h34d96581__16[0x23U])) {
            vlSelf->__PVT__regVec_1149 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__17, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x400U & __Vtemp_h34d96581__17[0x25U])) {
            vlSelf->__PVT__regVec_1194 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__18, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((__Vtemp_h34d96581__18[0x23U] >> 0x1fU)) {
            vlSelf->__PVT__regVec_1151 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__19, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x1000U & __Vtemp_h34d96581__19[0x25U])) {
            vlSelf->__PVT__regVec_1196 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__20, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((2U & __Vtemp_h34d96581__20[0x24U])) {
            vlSelf->__PVT__regVec_1153 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__21, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x4000U & __Vtemp_h34d96581__21[0x25U])) {
            vlSelf->__PVT__regVec_1198 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__22, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((8U & __Vtemp_h34d96581__22[0x24U])) {
            vlSelf->__PVT__regVec_1155 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__23, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10000U & __Vtemp_h34d96581__23[0x25U])) {
            vlSelf->__PVT__regVec_1200 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__24, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x20U & __Vtemp_h34d96581__24[0x24U])) {
            vlSelf->__PVT__regVec_1157 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__25, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40000U & __Vtemp_h34d96581__25[0x25U])) {
            vlSelf->__PVT__regVec_1202 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__26, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x80U & __Vtemp_h34d96581__26[0x24U])) {
            vlSelf->__PVT__regVec_1159 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__27, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x100000U & __Vtemp_h34d96581__27[0x25U])) {
            vlSelf->__PVT__regVec_1204 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__28, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x200U & __Vtemp_h34d96581__28[0x24U])) {
            vlSelf->__PVT__regVec_1161 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__29, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x400000U & __Vtemp_h34d96581__29[0x25U])) {
            vlSelf->__PVT__regVec_1206 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
    }
}

VL_INLINE_OPT void VTopAxiMasterWandRWithSlave_Axi4_transmission___sequent__TOP__TopAxiMasterWandRWithSlave__axiSlave__183(VTopAxiMasterWandRWithSlave_Axi4_transmission* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTopAxiMasterWandRWithSlave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTopAxiMasterWandRWithSlave_Axi4_transmission___sequent__TOP__TopAxiMasterWandRWithSlave__axiSlave__183\n"); );
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
        vlSelf->__PVT__regVec_1163 = 0U;
        vlSelf->__PVT__regVec_1208 = 0U;
        vlSelf->__PVT__regVec_1165 = 0U;
        vlSelf->__PVT__regVec_1210 = 0U;
        vlSelf->__PVT__regVec_1167 = 0U;
        vlSelf->__PVT__regVec_1212 = 0U;
        vlSelf->__PVT__regVec_1169 = 0U;
        vlSelf->__PVT__regVec_1214 = 0U;
        vlSelf->__PVT__regVec_1171 = 0U;
        vlSelf->__PVT__regVec_1216 = 0U;
        vlSelf->__PVT__regVec_1173 = 0U;
        vlSelf->__PVT__regVec_1218 = 0U;
        vlSelf->__PVT__regVec_1175 = 0U;
        vlSelf->__PVT__regVec_1220 = 0U;
        vlSelf->__PVT__regVec_1177 = 0U;
        vlSelf->__PVT__regVec_1222 = 0U;
        vlSelf->__PVT__regVec_1179 = 0U;
        vlSelf->__PVT__regVec_1224 = 0U;
        vlSelf->__PVT__regVec_1181 = 0U;
        vlSelf->__PVT__regVec_1226 = 0U;
        vlSelf->__PVT__regVec_1183 = 0U;
        vlSelf->__PVT__regVec_1228 = 0U;
        vlSelf->__PVT__regVec_1185 = 0U;
        vlSelf->__PVT__regVec_1230 = 0U;
        vlSelf->__PVT__regVec_1187 = 0U;
        vlSelf->__PVT__regVec_1232 = 0U;
        vlSelf->__PVT__regVec_1189 = 0U;
        vlSelf->__PVT__regVec_1234 = 0U;
        vlSelf->__PVT__regVec_1191 = 0U;
        vlSelf->__PVT__regVec_1236 = 0U;
    } else if (vlSelf->__PVT__when_Axi4_transmission_l91) {
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__0, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x800U & __Vtemp_h34d96581__0[0x24U])) {
            vlSelf->__PVT__regVec_1163 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__1, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x1000000U & __Vtemp_h34d96581__1[0x25U])) {
            vlSelf->__PVT__regVec_1208 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__2, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x2000U & __Vtemp_h34d96581__2[0x24U])) {
            vlSelf->__PVT__regVec_1165 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__3, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x4000000U & __Vtemp_h34d96581__3[0x25U])) {
            vlSelf->__PVT__regVec_1210 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__4, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x8000U & __Vtemp_h34d96581__4[0x24U])) {
            vlSelf->__PVT__regVec_1167 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__5, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10000000U & __Vtemp_h34d96581__5[0x25U])) {
            vlSelf->__PVT__regVec_1212 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__6, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x20000U & __Vtemp_h34d96581__6[0x24U])) {
            vlSelf->__PVT__regVec_1169 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__7, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40000000U & __Vtemp_h34d96581__7[0x25U])) {
            vlSelf->__PVT__regVec_1214 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__8, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x80000U & __Vtemp_h34d96581__8[0x24U])) {
            vlSelf->__PVT__regVec_1171 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__9, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((1U & __Vtemp_h34d96581__9[0x26U])) {
            vlSelf->__PVT__regVec_1216 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__10, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x200000U & __Vtemp_h34d96581__10[0x24U])) {
            vlSelf->__PVT__regVec_1173 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__11, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((4U & __Vtemp_h34d96581__11[0x26U])) {
            vlSelf->__PVT__regVec_1218 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__12, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x800000U & __Vtemp_h34d96581__12[0x24U])) {
            vlSelf->__PVT__regVec_1175 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__13, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10U & __Vtemp_h34d96581__13[0x26U])) {
            vlSelf->__PVT__regVec_1220 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__14, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x2000000U & __Vtemp_h34d96581__14[0x24U])) {
            vlSelf->__PVT__regVec_1177 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__15, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40U & __Vtemp_h34d96581__15[0x26U])) {
            vlSelf->__PVT__regVec_1222 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__16, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x8000000U & __Vtemp_h34d96581__16[0x24U])) {
            vlSelf->__PVT__regVec_1179 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__17, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x100U & __Vtemp_h34d96581__17[0x26U])) {
            vlSelf->__PVT__regVec_1224 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__18, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x20000000U & __Vtemp_h34d96581__18[0x24U])) {
            vlSelf->__PVT__regVec_1181 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__19, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x400U & __Vtemp_h34d96581__19[0x26U])) {
            vlSelf->__PVT__regVec_1226 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__20, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((__Vtemp_h34d96581__20[0x24U] >> 0x1fU)) {
            vlSelf->__PVT__regVec_1183 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__21, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x1000U & __Vtemp_h34d96581__21[0x26U])) {
            vlSelf->__PVT__regVec_1228 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__22, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((2U & __Vtemp_h34d96581__22[0x25U])) {
            vlSelf->__PVT__regVec_1185 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__23, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x4000U & __Vtemp_h34d96581__23[0x26U])) {
            vlSelf->__PVT__regVec_1230 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__24, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((8U & __Vtemp_h34d96581__24[0x25U])) {
            vlSelf->__PVT__regVec_1187 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__25, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10000U & __Vtemp_h34d96581__25[0x26U])) {
            vlSelf->__PVT__regVec_1232 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__26, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x20U & __Vtemp_h34d96581__26[0x25U])) {
            vlSelf->__PVT__regVec_1189 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__27, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40000U & __Vtemp_h34d96581__27[0x26U])) {
            vlSelf->__PVT__regVec_1234 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__28, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x80U & __Vtemp_h34d96581__28[0x25U])) {
            vlSelf->__PVT__regVec_1191 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__29, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x100000U & __Vtemp_h34d96581__29[0x26U])) {
            vlSelf->__PVT__regVec_1236 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
    }
}

VL_INLINE_OPT void VTopAxiMasterWandRWithSlave_Axi4_transmission___sequent__TOP__TopAxiMasterWandRWithSlave__axiSlave__184(VTopAxiMasterWandRWithSlave_Axi4_transmission* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTopAxiMasterWandRWithSlave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTopAxiMasterWandRWithSlave_Axi4_transmission___sequent__TOP__TopAxiMasterWandRWithSlave__axiSlave__184\n"); );
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
        vlSelf->__PVT__regVec_1193 = 0U;
        vlSelf->__PVT__regVec_1238 = 0U;
        vlSelf->__PVT__regVec_1195 = 0U;
        vlSelf->__PVT__regVec_1240 = 0U;
        vlSelf->__PVT__regVec_1197 = 0U;
        vlSelf->__PVT__regVec_1242 = 0U;
        vlSelf->__PVT__regVec_1199 = 0U;
        vlSelf->__PVT__regVec_1244 = 0U;
        vlSelf->__PVT__regVec_1201 = 0U;
        vlSelf->__PVT__regVec_1246 = 0U;
        vlSelf->__PVT__regVec_1203 = 0U;
        vlSelf->__PVT__regVec_1248 = 0U;
        vlSelf->__PVT__regVec_1205 = 0U;
        vlSelf->__PVT__regVec_1250 = 0U;
        vlSelf->__PVT__regVec_1207 = 0U;
        vlSelf->__PVT__regVec_1252 = 0U;
        vlSelf->__PVT__regVec_1209 = 0U;
        vlSelf->__PVT__regVec_1254 = 0U;
        vlSelf->__PVT__regVec_1211 = 0U;
        vlSelf->__PVT__regVec_1256 = 0U;
        vlSelf->__PVT__regVec_1213 = 0U;
        vlSelf->__PVT__regVec_1258 = 0U;
        vlSelf->__PVT__regVec_1215 = 0U;
        vlSelf->__PVT__regVec_1260 = 0U;
        vlSelf->__PVT__regVec_1217 = 0U;
        vlSelf->__PVT__regVec_1262 = 0U;
        vlSelf->__PVT__regVec_1219 = 0U;
        vlSelf->__PVT__regVec_1264 = 0U;
        vlSelf->__PVT__regVec_1221 = 0U;
        vlSelf->__PVT__regVec_1266 = 0U;
    } else if (vlSelf->__PVT__when_Axi4_transmission_l91) {
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__0, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x200U & __Vtemp_h34d96581__0[0x25U])) {
            vlSelf->__PVT__regVec_1193 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__1, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x400000U & __Vtemp_h34d96581__1[0x26U])) {
            vlSelf->__PVT__regVec_1238 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__2, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x800U & __Vtemp_h34d96581__2[0x25U])) {
            vlSelf->__PVT__regVec_1195 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__3, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x1000000U & __Vtemp_h34d96581__3[0x26U])) {
            vlSelf->__PVT__regVec_1240 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__4, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x2000U & __Vtemp_h34d96581__4[0x25U])) {
            vlSelf->__PVT__regVec_1197 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__5, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x4000000U & __Vtemp_h34d96581__5[0x26U])) {
            vlSelf->__PVT__regVec_1242 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__6, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x8000U & __Vtemp_h34d96581__6[0x25U])) {
            vlSelf->__PVT__regVec_1199 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__7, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10000000U & __Vtemp_h34d96581__7[0x26U])) {
            vlSelf->__PVT__regVec_1244 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__8, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x20000U & __Vtemp_h34d96581__8[0x25U])) {
            vlSelf->__PVT__regVec_1201 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__9, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40000000U & __Vtemp_h34d96581__9[0x26U])) {
            vlSelf->__PVT__regVec_1246 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__10, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x80000U & __Vtemp_h34d96581__10[0x25U])) {
            vlSelf->__PVT__regVec_1203 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__11, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((1U & __Vtemp_h34d96581__11[0x27U])) {
            vlSelf->__PVT__regVec_1248 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__12, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x200000U & __Vtemp_h34d96581__12[0x25U])) {
            vlSelf->__PVT__regVec_1205 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__13, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((4U & __Vtemp_h34d96581__13[0x27U])) {
            vlSelf->__PVT__regVec_1250 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__14, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x800000U & __Vtemp_h34d96581__14[0x25U])) {
            vlSelf->__PVT__regVec_1207 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__15, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10U & __Vtemp_h34d96581__15[0x27U])) {
            vlSelf->__PVT__regVec_1252 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__16, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x2000000U & __Vtemp_h34d96581__16[0x25U])) {
            vlSelf->__PVT__regVec_1209 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__17, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40U & __Vtemp_h34d96581__17[0x27U])) {
            vlSelf->__PVT__regVec_1254 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__18, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x8000000U & __Vtemp_h34d96581__18[0x25U])) {
            vlSelf->__PVT__regVec_1211 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__19, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x100U & __Vtemp_h34d96581__19[0x27U])) {
            vlSelf->__PVT__regVec_1256 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__20, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x20000000U & __Vtemp_h34d96581__20[0x25U])) {
            vlSelf->__PVT__regVec_1213 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__21, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x400U & __Vtemp_h34d96581__21[0x27U])) {
            vlSelf->__PVT__regVec_1258 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__22, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((__Vtemp_h34d96581__22[0x25U] >> 0x1fU)) {
            vlSelf->__PVT__regVec_1215 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__23, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x1000U & __Vtemp_h34d96581__23[0x27U])) {
            vlSelf->__PVT__regVec_1260 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__24, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((2U & __Vtemp_h34d96581__24[0x26U])) {
            vlSelf->__PVT__regVec_1217 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__25, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x4000U & __Vtemp_h34d96581__25[0x27U])) {
            vlSelf->__PVT__regVec_1262 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__26, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((8U & __Vtemp_h34d96581__26[0x26U])) {
            vlSelf->__PVT__regVec_1219 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__27, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10000U & __Vtemp_h34d96581__27[0x27U])) {
            vlSelf->__PVT__regVec_1264 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__28, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x20U & __Vtemp_h34d96581__28[0x26U])) {
            vlSelf->__PVT__regVec_1221 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__29, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40000U & __Vtemp_h34d96581__29[0x27U])) {
            vlSelf->__PVT__regVec_1266 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
    }
}
