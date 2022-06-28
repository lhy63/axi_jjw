// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTopAxiMasterWandRWithSlave.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTopAxiMasterWandRWithSlave_Axi4_transmission.h"
#include "VTopAxiMasterWandRWithSlave__Syms.h"

extern const VlWide<128>/*4095:0*/ VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0;

VL_INLINE_OPT void VTopAxiMasterWandRWithSlave_Axi4_transmission___sequent__TOP__TopAxiMasterWandRWithSlave__axiSlave__203(VTopAxiMasterWandRWithSlave_Axi4_transmission* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTopAxiMasterWandRWithSlave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTopAxiMasterWandRWithSlave_Axi4_transmission___sequent__TOP__TopAxiMasterWandRWithSlave__axiSlave__203\n"); );
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
        vlSelf->__PVT__regVec_3501 = 0U;
        vlSelf->__PVT__regVec_3502 = 0U;
        vlSelf->__PVT__regVec_3503 = 0U;
        vlSelf->__PVT__regVec_3504 = 0U;
        vlSelf->__PVT__regVec_3505 = 0U;
        vlSelf->__PVT__regVec_3506 = 0U;
        vlSelf->__PVT__regVec_3507 = 0U;
        vlSelf->__PVT__regVec_3508 = 0U;
        vlSelf->__PVT__regVec_3509 = 0U;
        vlSelf->__PVT__regVec_3510 = 0U;
        vlSelf->__PVT__regVec_3511 = 0U;
        vlSelf->__PVT__regVec_3512 = 0U;
        vlSelf->__PVT__regVec_3513 = 0U;
        vlSelf->__PVT__regVec_3514 = 0U;
        vlSelf->__PVT__regVec_3515 = 0U;
        vlSelf->__PVT__regVec_3516 = 0U;
        vlSelf->__PVT__regVec_3517 = 0U;
        vlSelf->__PVT__regVec_3518 = 0U;
        vlSelf->__PVT__regVec_3519 = 0U;
        vlSelf->__PVT__regVec_3520 = 0U;
        vlSelf->__PVT__regVec_3521 = 0U;
        vlSelf->__PVT__regVec_3522 = 0U;
        vlSelf->__PVT__regVec_3523 = 0U;
        vlSelf->__PVT__regVec_3524 = 0U;
        vlSelf->__PVT__regVec_3525 = 0U;
        vlSelf->__PVT__regVec_3526 = 0U;
        vlSelf->__PVT__regVec_3527 = 0U;
        vlSelf->__PVT__regVec_3528 = 0U;
        vlSelf->__PVT__regVec_3529 = 0U;
        vlSelf->__PVT__regVec_3530 = 0U;
    } else if (vlSelf->__PVT__when_Axi4_transmission_l91) {
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__0, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x2000U & __Vtemp_h34d96581__0[0x6dU])) {
            vlSelf->__PVT__regVec_3501 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__1, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x4000U & __Vtemp_h34d96581__1[0x6dU])) {
            vlSelf->__PVT__regVec_3502 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__2, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x8000U & __Vtemp_h34d96581__2[0x6dU])) {
            vlSelf->__PVT__regVec_3503 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__3, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10000U & __Vtemp_h34d96581__3[0x6dU])) {
            vlSelf->__PVT__regVec_3504 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__4, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x20000U & __Vtemp_h34d96581__4[0x6dU])) {
            vlSelf->__PVT__regVec_3505 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__5, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40000U & __Vtemp_h34d96581__5[0x6dU])) {
            vlSelf->__PVT__regVec_3506 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__6, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x80000U & __Vtemp_h34d96581__6[0x6dU])) {
            vlSelf->__PVT__regVec_3507 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__7, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x100000U & __Vtemp_h34d96581__7[0x6dU])) {
            vlSelf->__PVT__regVec_3508 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__8, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x200000U & __Vtemp_h34d96581__8[0x6dU])) {
            vlSelf->__PVT__regVec_3509 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__9, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x400000U & __Vtemp_h34d96581__9[0x6dU])) {
            vlSelf->__PVT__regVec_3510 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__10, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x800000U & __Vtemp_h34d96581__10[0x6dU])) {
            vlSelf->__PVT__regVec_3511 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__11, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x1000000U & __Vtemp_h34d96581__11[0x6dU])) {
            vlSelf->__PVT__regVec_3512 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__12, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x2000000U & __Vtemp_h34d96581__12[0x6dU])) {
            vlSelf->__PVT__regVec_3513 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__13, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x4000000U & __Vtemp_h34d96581__13[0x6dU])) {
            vlSelf->__PVT__regVec_3514 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__14, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x8000000U & __Vtemp_h34d96581__14[0x6dU])) {
            vlSelf->__PVT__regVec_3515 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__15, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10000000U & __Vtemp_h34d96581__15[0x6dU])) {
            vlSelf->__PVT__regVec_3516 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__16, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x20000000U & __Vtemp_h34d96581__16[0x6dU])) {
            vlSelf->__PVT__regVec_3517 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__17, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40000000U & __Vtemp_h34d96581__17[0x6dU])) {
            vlSelf->__PVT__regVec_3518 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__18, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((__Vtemp_h34d96581__18[0x6dU] >> 0x1fU)) {
            vlSelf->__PVT__regVec_3519 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__19, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((1U & __Vtemp_h34d96581__19[0x6eU])) {
            vlSelf->__PVT__regVec_3520 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__20, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((2U & __Vtemp_h34d96581__20[0x6eU])) {
            vlSelf->__PVT__regVec_3521 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__21, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((4U & __Vtemp_h34d96581__21[0x6eU])) {
            vlSelf->__PVT__regVec_3522 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__22, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((8U & __Vtemp_h34d96581__22[0x6eU])) {
            vlSelf->__PVT__regVec_3523 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__23, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10U & __Vtemp_h34d96581__23[0x6eU])) {
            vlSelf->__PVT__regVec_3524 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__24, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x20U & __Vtemp_h34d96581__24[0x6eU])) {
            vlSelf->__PVT__regVec_3525 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__25, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40U & __Vtemp_h34d96581__25[0x6eU])) {
            vlSelf->__PVT__regVec_3526 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__26, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x80U & __Vtemp_h34d96581__26[0x6eU])) {
            vlSelf->__PVT__regVec_3527 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__27, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x100U & __Vtemp_h34d96581__27[0x6eU])) {
            vlSelf->__PVT__regVec_3528 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__28, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x200U & __Vtemp_h34d96581__28[0x6eU])) {
            vlSelf->__PVT__regVec_3529 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__29, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x400U & __Vtemp_h34d96581__29[0x6eU])) {
            vlSelf->__PVT__regVec_3530 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
    }
}

VL_INLINE_OPT void VTopAxiMasterWandRWithSlave_Axi4_transmission___sequent__TOP__TopAxiMasterWandRWithSlave__axiSlave__204(VTopAxiMasterWandRWithSlave_Axi4_transmission* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTopAxiMasterWandRWithSlave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTopAxiMasterWandRWithSlave_Axi4_transmission___sequent__TOP__TopAxiMasterWandRWithSlave__axiSlave__204\n"); );
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
        vlSelf->__PVT__regVec_3531 = 0U;
        vlSelf->__PVT__regVec_3532 = 0U;
        vlSelf->__PVT__regVec_3533 = 0U;
        vlSelf->__PVT__regVec_3534 = 0U;
        vlSelf->__PVT__regVec_3535 = 0U;
        vlSelf->__PVT__regVec_3536 = 0U;
        vlSelf->__PVT__regVec_3537 = 0U;
        vlSelf->__PVT__regVec_3538 = 0U;
        vlSelf->__PVT__regVec_3539 = 0U;
        vlSelf->__PVT__regVec_3540 = 0U;
        vlSelf->__PVT__regVec_3541 = 0U;
        vlSelf->__PVT__regVec_3542 = 0U;
        vlSelf->__PVT__regVec_3543 = 0U;
        vlSelf->__PVT__regVec_3544 = 0U;
        vlSelf->__PVT__regVec_3545 = 0U;
        vlSelf->__PVT__regVec_3546 = 0U;
        vlSelf->__PVT__regVec_3547 = 0U;
        vlSelf->__PVT__regVec_3548 = 0U;
        vlSelf->__PVT__regVec_3549 = 0U;
        vlSelf->__PVT__regVec_3550 = 0U;
        vlSelf->__PVT__regVec_3551 = 0U;
        vlSelf->__PVT__regVec_3552 = 0U;
        vlSelf->__PVT__regVec_3553 = 0U;
        vlSelf->__PVT__regVec_3554 = 0U;
        vlSelf->__PVT__regVec_3555 = 0U;
        vlSelf->__PVT__regVec_3556 = 0U;
        vlSelf->__PVT__regVec_3557 = 0U;
        vlSelf->__PVT__regVec_3558 = 0U;
        vlSelf->__PVT__regVec_3559 = 0U;
        vlSelf->__PVT__regVec_3560 = 0U;
    } else if (vlSelf->__PVT__when_Axi4_transmission_l91) {
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__0, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x800U & __Vtemp_h34d96581__0[0x6eU])) {
            vlSelf->__PVT__regVec_3531 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__1, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x1000U & __Vtemp_h34d96581__1[0x6eU])) {
            vlSelf->__PVT__regVec_3532 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__2, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x2000U & __Vtemp_h34d96581__2[0x6eU])) {
            vlSelf->__PVT__regVec_3533 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__3, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x4000U & __Vtemp_h34d96581__3[0x6eU])) {
            vlSelf->__PVT__regVec_3534 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__4, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x8000U & __Vtemp_h34d96581__4[0x6eU])) {
            vlSelf->__PVT__regVec_3535 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__5, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10000U & __Vtemp_h34d96581__5[0x6eU])) {
            vlSelf->__PVT__regVec_3536 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__6, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x20000U & __Vtemp_h34d96581__6[0x6eU])) {
            vlSelf->__PVT__regVec_3537 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__7, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40000U & __Vtemp_h34d96581__7[0x6eU])) {
            vlSelf->__PVT__regVec_3538 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__8, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x80000U & __Vtemp_h34d96581__8[0x6eU])) {
            vlSelf->__PVT__regVec_3539 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__9, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x100000U & __Vtemp_h34d96581__9[0x6eU])) {
            vlSelf->__PVT__regVec_3540 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__10, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x200000U & __Vtemp_h34d96581__10[0x6eU])) {
            vlSelf->__PVT__regVec_3541 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__11, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x400000U & __Vtemp_h34d96581__11[0x6eU])) {
            vlSelf->__PVT__regVec_3542 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__12, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x800000U & __Vtemp_h34d96581__12[0x6eU])) {
            vlSelf->__PVT__regVec_3543 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__13, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x1000000U & __Vtemp_h34d96581__13[0x6eU])) {
            vlSelf->__PVT__regVec_3544 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__14, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x2000000U & __Vtemp_h34d96581__14[0x6eU])) {
            vlSelf->__PVT__regVec_3545 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__15, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x4000000U & __Vtemp_h34d96581__15[0x6eU])) {
            vlSelf->__PVT__regVec_3546 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__16, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x8000000U & __Vtemp_h34d96581__16[0x6eU])) {
            vlSelf->__PVT__regVec_3547 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__17, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10000000U & __Vtemp_h34d96581__17[0x6eU])) {
            vlSelf->__PVT__regVec_3548 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__18, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x20000000U & __Vtemp_h34d96581__18[0x6eU])) {
            vlSelf->__PVT__regVec_3549 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__19, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40000000U & __Vtemp_h34d96581__19[0x6eU])) {
            vlSelf->__PVT__regVec_3550 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__20, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((__Vtemp_h34d96581__20[0x6eU] >> 0x1fU)) {
            vlSelf->__PVT__regVec_3551 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__21, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((1U & __Vtemp_h34d96581__21[0x6fU])) {
            vlSelf->__PVT__regVec_3552 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__22, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((2U & __Vtemp_h34d96581__22[0x6fU])) {
            vlSelf->__PVT__regVec_3553 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__23, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((4U & __Vtemp_h34d96581__23[0x6fU])) {
            vlSelf->__PVT__regVec_3554 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__24, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((8U & __Vtemp_h34d96581__24[0x6fU])) {
            vlSelf->__PVT__regVec_3555 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__25, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10U & __Vtemp_h34d96581__25[0x6fU])) {
            vlSelf->__PVT__regVec_3556 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__26, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x20U & __Vtemp_h34d96581__26[0x6fU])) {
            vlSelf->__PVT__regVec_3557 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__27, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40U & __Vtemp_h34d96581__27[0x6fU])) {
            vlSelf->__PVT__regVec_3558 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__28, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x80U & __Vtemp_h34d96581__28[0x6fU])) {
            vlSelf->__PVT__regVec_3559 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__29, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x100U & __Vtemp_h34d96581__29[0x6fU])) {
            vlSelf->__PVT__regVec_3560 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
    }
}

VL_INLINE_OPT void VTopAxiMasterWandRWithSlave_Axi4_transmission___sequent__TOP__TopAxiMasterWandRWithSlave__axiSlave__205(VTopAxiMasterWandRWithSlave_Axi4_transmission* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTopAxiMasterWandRWithSlave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTopAxiMasterWandRWithSlave_Axi4_transmission___sequent__TOP__TopAxiMasterWandRWithSlave__axiSlave__205\n"); );
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
        vlSelf->__PVT__regVec_3561 = 0U;
        vlSelf->__PVT__regVec_3562 = 0U;
        vlSelf->__PVT__regVec_3563 = 0U;
        vlSelf->__PVT__regVec_3564 = 0U;
        vlSelf->__PVT__regVec_3565 = 0U;
        vlSelf->__PVT__regVec_3566 = 0U;
        vlSelf->__PVT__regVec_3567 = 0U;
        vlSelf->__PVT__regVec_3568 = 0U;
        vlSelf->__PVT__regVec_3569 = 0U;
        vlSelf->__PVT__regVec_3570 = 0U;
        vlSelf->__PVT__regVec_3571 = 0U;
        vlSelf->__PVT__regVec_3572 = 0U;
        vlSelf->__PVT__regVec_3573 = 0U;
        vlSelf->__PVT__regVec_3574 = 0U;
        vlSelf->__PVT__regVec_3575 = 0U;
        vlSelf->__PVT__regVec_3576 = 0U;
        vlSelf->__PVT__regVec_3577 = 0U;
        vlSelf->__PVT__regVec_3578 = 0U;
        vlSelf->__PVT__regVec_3579 = 0U;
        vlSelf->__PVT__regVec_3580 = 0U;
        vlSelf->__PVT__regVec_3581 = 0U;
        vlSelf->__PVT__regVec_3582 = 0U;
        vlSelf->__PVT__regVec_3583 = 0U;
        vlSelf->__PVT__regVec_3584 = 0U;
        vlSelf->__PVT__regVec_3585 = 0U;
        vlSelf->__PVT__regVec_3586 = 0U;
        vlSelf->__PVT__regVec_3587 = 0U;
        vlSelf->__PVT__regVec_3588 = 0U;
        vlSelf->__PVT__regVec_3589 = 0U;
        vlSelf->__PVT__regVec_3590 = 0U;
    } else if (vlSelf->__PVT__when_Axi4_transmission_l91) {
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__0, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x200U & __Vtemp_h34d96581__0[0x6fU])) {
            vlSelf->__PVT__regVec_3561 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__1, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x400U & __Vtemp_h34d96581__1[0x6fU])) {
            vlSelf->__PVT__regVec_3562 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__2, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x800U & __Vtemp_h34d96581__2[0x6fU])) {
            vlSelf->__PVT__regVec_3563 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__3, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x1000U & __Vtemp_h34d96581__3[0x6fU])) {
            vlSelf->__PVT__regVec_3564 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__4, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x2000U & __Vtemp_h34d96581__4[0x6fU])) {
            vlSelf->__PVT__regVec_3565 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__5, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x4000U & __Vtemp_h34d96581__5[0x6fU])) {
            vlSelf->__PVT__regVec_3566 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__6, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x8000U & __Vtemp_h34d96581__6[0x6fU])) {
            vlSelf->__PVT__regVec_3567 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__7, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10000U & __Vtemp_h34d96581__7[0x6fU])) {
            vlSelf->__PVT__regVec_3568 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__8, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x20000U & __Vtemp_h34d96581__8[0x6fU])) {
            vlSelf->__PVT__regVec_3569 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__9, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40000U & __Vtemp_h34d96581__9[0x6fU])) {
            vlSelf->__PVT__regVec_3570 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__10, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x80000U & __Vtemp_h34d96581__10[0x6fU])) {
            vlSelf->__PVT__regVec_3571 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__11, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x100000U & __Vtemp_h34d96581__11[0x6fU])) {
            vlSelf->__PVT__regVec_3572 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__12, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x200000U & __Vtemp_h34d96581__12[0x6fU])) {
            vlSelf->__PVT__regVec_3573 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__13, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x400000U & __Vtemp_h34d96581__13[0x6fU])) {
            vlSelf->__PVT__regVec_3574 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__14, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x800000U & __Vtemp_h34d96581__14[0x6fU])) {
            vlSelf->__PVT__regVec_3575 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__15, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x1000000U & __Vtemp_h34d96581__15[0x6fU])) {
            vlSelf->__PVT__regVec_3576 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__16, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x2000000U & __Vtemp_h34d96581__16[0x6fU])) {
            vlSelf->__PVT__regVec_3577 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__17, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x4000000U & __Vtemp_h34d96581__17[0x6fU])) {
            vlSelf->__PVT__regVec_3578 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__18, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x8000000U & __Vtemp_h34d96581__18[0x6fU])) {
            vlSelf->__PVT__regVec_3579 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__19, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10000000U & __Vtemp_h34d96581__19[0x6fU])) {
            vlSelf->__PVT__regVec_3580 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__20, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x20000000U & __Vtemp_h34d96581__20[0x6fU])) {
            vlSelf->__PVT__regVec_3581 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__21, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40000000U & __Vtemp_h34d96581__21[0x6fU])) {
            vlSelf->__PVT__regVec_3582 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__22, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((__Vtemp_h34d96581__22[0x6fU] >> 0x1fU)) {
            vlSelf->__PVT__regVec_3583 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__23, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((1U & __Vtemp_h34d96581__23[0x70U])) {
            vlSelf->__PVT__regVec_3584 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__24, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((2U & __Vtemp_h34d96581__24[0x70U])) {
            vlSelf->__PVT__regVec_3585 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__25, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((4U & __Vtemp_h34d96581__25[0x70U])) {
            vlSelf->__PVT__regVec_3586 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__26, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((8U & __Vtemp_h34d96581__26[0x70U])) {
            vlSelf->__PVT__regVec_3587 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__27, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10U & __Vtemp_h34d96581__27[0x70U])) {
            vlSelf->__PVT__regVec_3588 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__28, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x20U & __Vtemp_h34d96581__28[0x70U])) {
            vlSelf->__PVT__regVec_3589 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__29, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40U & __Vtemp_h34d96581__29[0x70U])) {
            vlSelf->__PVT__regVec_3590 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
    }
}

VL_INLINE_OPT void VTopAxiMasterWandRWithSlave_Axi4_transmission___sequent__TOP__TopAxiMasterWandRWithSlave__axiSlave__206(VTopAxiMasterWandRWithSlave_Axi4_transmission* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTopAxiMasterWandRWithSlave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTopAxiMasterWandRWithSlave_Axi4_transmission___sequent__TOP__TopAxiMasterWandRWithSlave__axiSlave__206\n"); );
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
        vlSelf->__PVT__regVec_3591 = 0U;
        vlSelf->__PVT__regVec_3592 = 0U;
        vlSelf->__PVT__regVec_3593 = 0U;
        vlSelf->__PVT__regVec_3594 = 0U;
        vlSelf->__PVT__regVec_3595 = 0U;
        vlSelf->__PVT__regVec_3596 = 0U;
        vlSelf->__PVT__regVec_3597 = 0U;
        vlSelf->__PVT__regVec_3598 = 0U;
        vlSelf->__PVT__regVec_3599 = 0U;
        vlSelf->__PVT__regVec_3600 = 0U;
        vlSelf->__PVT__regVec_3601 = 0U;
        vlSelf->__PVT__regVec_3602 = 0U;
        vlSelf->__PVT__regVec_3603 = 0U;
        vlSelf->__PVT__regVec_3604 = 0U;
        vlSelf->__PVT__regVec_3605 = 0U;
        vlSelf->__PVT__regVec_3606 = 0U;
        vlSelf->__PVT__regVec_3607 = 0U;
        vlSelf->__PVT__regVec_3608 = 0U;
        vlSelf->__PVT__regVec_3609 = 0U;
        vlSelf->__PVT__regVec_3610 = 0U;
        vlSelf->__PVT__regVec_3611 = 0U;
        vlSelf->__PVT__regVec_3612 = 0U;
        vlSelf->__PVT__regVec_3613 = 0U;
        vlSelf->__PVT__regVec_3614 = 0U;
        vlSelf->__PVT__regVec_3615 = 0U;
        vlSelf->__PVT__regVec_3616 = 0U;
        vlSelf->__PVT__regVec_3617 = 0U;
        vlSelf->__PVT__regVec_3618 = 0U;
        vlSelf->__PVT__regVec_3619 = 0U;
        vlSelf->__PVT__regVec_3620 = 0U;
    } else if (vlSelf->__PVT__when_Axi4_transmission_l91) {
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__0, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x80U & __Vtemp_h34d96581__0[0x70U])) {
            vlSelf->__PVT__regVec_3591 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__1, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x100U & __Vtemp_h34d96581__1[0x70U])) {
            vlSelf->__PVT__regVec_3592 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__2, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x200U & __Vtemp_h34d96581__2[0x70U])) {
            vlSelf->__PVT__regVec_3593 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__3, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x400U & __Vtemp_h34d96581__3[0x70U])) {
            vlSelf->__PVT__regVec_3594 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__4, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x800U & __Vtemp_h34d96581__4[0x70U])) {
            vlSelf->__PVT__regVec_3595 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__5, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x1000U & __Vtemp_h34d96581__5[0x70U])) {
            vlSelf->__PVT__regVec_3596 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__6, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x2000U & __Vtemp_h34d96581__6[0x70U])) {
            vlSelf->__PVT__regVec_3597 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__7, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x4000U & __Vtemp_h34d96581__7[0x70U])) {
            vlSelf->__PVT__regVec_3598 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__8, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x8000U & __Vtemp_h34d96581__8[0x70U])) {
            vlSelf->__PVT__regVec_3599 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__9, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10000U & __Vtemp_h34d96581__9[0x70U])) {
            vlSelf->__PVT__regVec_3600 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__10, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x20000U & __Vtemp_h34d96581__10[0x70U])) {
            vlSelf->__PVT__regVec_3601 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__11, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40000U & __Vtemp_h34d96581__11[0x70U])) {
            vlSelf->__PVT__regVec_3602 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__12, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x80000U & __Vtemp_h34d96581__12[0x70U])) {
            vlSelf->__PVT__regVec_3603 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__13, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x100000U & __Vtemp_h34d96581__13[0x70U])) {
            vlSelf->__PVT__regVec_3604 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__14, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x200000U & __Vtemp_h34d96581__14[0x70U])) {
            vlSelf->__PVT__regVec_3605 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__15, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x400000U & __Vtemp_h34d96581__15[0x70U])) {
            vlSelf->__PVT__regVec_3606 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__16, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x800000U & __Vtemp_h34d96581__16[0x70U])) {
            vlSelf->__PVT__regVec_3607 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__17, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x1000000U & __Vtemp_h34d96581__17[0x70U])) {
            vlSelf->__PVT__regVec_3608 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__18, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x2000000U & __Vtemp_h34d96581__18[0x70U])) {
            vlSelf->__PVT__regVec_3609 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__19, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x4000000U & __Vtemp_h34d96581__19[0x70U])) {
            vlSelf->__PVT__regVec_3610 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__20, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x8000000U & __Vtemp_h34d96581__20[0x70U])) {
            vlSelf->__PVT__regVec_3611 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__21, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10000000U & __Vtemp_h34d96581__21[0x70U])) {
            vlSelf->__PVT__regVec_3612 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__22, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x20000000U & __Vtemp_h34d96581__22[0x70U])) {
            vlSelf->__PVT__regVec_3613 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__23, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40000000U & __Vtemp_h34d96581__23[0x70U])) {
            vlSelf->__PVT__regVec_3614 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__24, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((__Vtemp_h34d96581__24[0x70U] >> 0x1fU)) {
            vlSelf->__PVT__regVec_3615 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__25, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((1U & __Vtemp_h34d96581__25[0x71U])) {
            vlSelf->__PVT__regVec_3616 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__26, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((2U & __Vtemp_h34d96581__26[0x71U])) {
            vlSelf->__PVT__regVec_3617 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__27, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((4U & __Vtemp_h34d96581__27[0x71U])) {
            vlSelf->__PVT__regVec_3618 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__28, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((8U & __Vtemp_h34d96581__28[0x71U])) {
            vlSelf->__PVT__regVec_3619 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__29, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10U & __Vtemp_h34d96581__29[0x71U])) {
            vlSelf->__PVT__regVec_3620 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
    }
}

VL_INLINE_OPT void VTopAxiMasterWandRWithSlave_Axi4_transmission___sequent__TOP__TopAxiMasterWandRWithSlave__axiSlave__207(VTopAxiMasterWandRWithSlave_Axi4_transmission* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTopAxiMasterWandRWithSlave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTopAxiMasterWandRWithSlave_Axi4_transmission___sequent__TOP__TopAxiMasterWandRWithSlave__axiSlave__207\n"); );
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
        vlSelf->__PVT__regVec_3621 = 0U;
        vlSelf->__PVT__regVec_3622 = 0U;
        vlSelf->__PVT__regVec_3623 = 0U;
        vlSelf->__PVT__regVec_3624 = 0U;
        vlSelf->__PVT__regVec_3625 = 0U;
        vlSelf->__PVT__regVec_3626 = 0U;
        vlSelf->__PVT__regVec_3627 = 0U;
        vlSelf->__PVT__regVec_3628 = 0U;
        vlSelf->__PVT__regVec_3629 = 0U;
        vlSelf->__PVT__regVec_3630 = 0U;
        vlSelf->__PVT__regVec_3631 = 0U;
        vlSelf->__PVT__regVec_3632 = 0U;
        vlSelf->__PVT__regVec_3633 = 0U;
        vlSelf->__PVT__regVec_3634 = 0U;
        vlSelf->__PVT__regVec_3635 = 0U;
        vlSelf->__PVT__regVec_3636 = 0U;
        vlSelf->__PVT__regVec_3637 = 0U;
        vlSelf->__PVT__regVec_3638 = 0U;
        vlSelf->__PVT__regVec_3639 = 0U;
        vlSelf->__PVT__regVec_3640 = 0U;
        vlSelf->__PVT__regVec_3641 = 0U;
        vlSelf->__PVT__regVec_3642 = 0U;
        vlSelf->__PVT__regVec_3643 = 0U;
        vlSelf->__PVT__regVec_3644 = 0U;
        vlSelf->__PVT__regVec_3645 = 0U;
        vlSelf->__PVT__regVec_3646 = 0U;
        vlSelf->__PVT__regVec_3647 = 0U;
        vlSelf->__PVT__regVec_3648 = 0U;
        vlSelf->__PVT__regVec_3649 = 0U;
        vlSelf->__PVT__regVec_3650 = 0U;
    } else if (vlSelf->__PVT__when_Axi4_transmission_l91) {
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__0, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x20U & __Vtemp_h34d96581__0[0x71U])) {
            vlSelf->__PVT__regVec_3621 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__1, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40U & __Vtemp_h34d96581__1[0x71U])) {
            vlSelf->__PVT__regVec_3622 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__2, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x80U & __Vtemp_h34d96581__2[0x71U])) {
            vlSelf->__PVT__regVec_3623 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__3, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x100U & __Vtemp_h34d96581__3[0x71U])) {
            vlSelf->__PVT__regVec_3624 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__4, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x200U & __Vtemp_h34d96581__4[0x71U])) {
            vlSelf->__PVT__regVec_3625 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__5, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x400U & __Vtemp_h34d96581__5[0x71U])) {
            vlSelf->__PVT__regVec_3626 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__6, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x800U & __Vtemp_h34d96581__6[0x71U])) {
            vlSelf->__PVT__regVec_3627 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__7, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x1000U & __Vtemp_h34d96581__7[0x71U])) {
            vlSelf->__PVT__regVec_3628 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__8, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x2000U & __Vtemp_h34d96581__8[0x71U])) {
            vlSelf->__PVT__regVec_3629 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__9, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x4000U & __Vtemp_h34d96581__9[0x71U])) {
            vlSelf->__PVT__regVec_3630 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__10, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x8000U & __Vtemp_h34d96581__10[0x71U])) {
            vlSelf->__PVT__regVec_3631 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__11, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10000U & __Vtemp_h34d96581__11[0x71U])) {
            vlSelf->__PVT__regVec_3632 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__12, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x20000U & __Vtemp_h34d96581__12[0x71U])) {
            vlSelf->__PVT__regVec_3633 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__13, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40000U & __Vtemp_h34d96581__13[0x71U])) {
            vlSelf->__PVT__regVec_3634 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__14, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x80000U & __Vtemp_h34d96581__14[0x71U])) {
            vlSelf->__PVT__regVec_3635 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__15, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x100000U & __Vtemp_h34d96581__15[0x71U])) {
            vlSelf->__PVT__regVec_3636 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__16, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x200000U & __Vtemp_h34d96581__16[0x71U])) {
            vlSelf->__PVT__regVec_3637 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__17, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x400000U & __Vtemp_h34d96581__17[0x71U])) {
            vlSelf->__PVT__regVec_3638 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__18, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x800000U & __Vtemp_h34d96581__18[0x71U])) {
            vlSelf->__PVT__regVec_3639 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__19, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x1000000U & __Vtemp_h34d96581__19[0x71U])) {
            vlSelf->__PVT__regVec_3640 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__20, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x2000000U & __Vtemp_h34d96581__20[0x71U])) {
            vlSelf->__PVT__regVec_3641 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__21, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x4000000U & __Vtemp_h34d96581__21[0x71U])) {
            vlSelf->__PVT__regVec_3642 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__22, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x8000000U & __Vtemp_h34d96581__22[0x71U])) {
            vlSelf->__PVT__regVec_3643 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__23, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10000000U & __Vtemp_h34d96581__23[0x71U])) {
            vlSelf->__PVT__regVec_3644 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__24, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x20000000U & __Vtemp_h34d96581__24[0x71U])) {
            vlSelf->__PVT__regVec_3645 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__25, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40000000U & __Vtemp_h34d96581__25[0x71U])) {
            vlSelf->__PVT__regVec_3646 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__26, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((__Vtemp_h34d96581__26[0x71U] >> 0x1fU)) {
            vlSelf->__PVT__regVec_3647 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__27, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((1U & __Vtemp_h34d96581__27[0x72U])) {
            vlSelf->__PVT__regVec_3648 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__28, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((2U & __Vtemp_h34d96581__28[0x72U])) {
            vlSelf->__PVT__regVec_3649 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__29, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((4U & __Vtemp_h34d96581__29[0x72U])) {
            vlSelf->__PVT__regVec_3650 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
    }
}

VL_INLINE_OPT void VTopAxiMasterWandRWithSlave_Axi4_transmission___sequent__TOP__TopAxiMasterWandRWithSlave__axiSlave__208(VTopAxiMasterWandRWithSlave_Axi4_transmission* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTopAxiMasterWandRWithSlave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTopAxiMasterWandRWithSlave_Axi4_transmission___sequent__TOP__TopAxiMasterWandRWithSlave__axiSlave__208\n"); );
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
        vlSelf->__PVT__regVec_3651 = 0U;
        vlSelf->__PVT__regVec_3652 = 0U;
        vlSelf->__PVT__regVec_3653 = 0U;
        vlSelf->__PVT__regVec_3654 = 0U;
        vlSelf->__PVT__regVec_3655 = 0U;
        vlSelf->__PVT__regVec_3656 = 0U;
        vlSelf->__PVT__regVec_3657 = 0U;
        vlSelf->__PVT__regVec_3658 = 0U;
        vlSelf->__PVT__regVec_3659 = 0U;
        vlSelf->__PVT__regVec_3660 = 0U;
        vlSelf->__PVT__regVec_3661 = 0U;
        vlSelf->__PVT__regVec_3662 = 0U;
        vlSelf->__PVT__regVec_3663 = 0U;
        vlSelf->__PVT__regVec_3664 = 0U;
        vlSelf->__PVT__regVec_3665 = 0U;
        vlSelf->__PVT__regVec_3666 = 0U;
        vlSelf->__PVT__regVec_3667 = 0U;
        vlSelf->__PVT__regVec_3668 = 0U;
        vlSelf->__PVT__regVec_3669 = 0U;
        vlSelf->__PVT__regVec_3670 = 0U;
        vlSelf->__PVT__regVec_3671 = 0U;
        vlSelf->__PVT__regVec_3672 = 0U;
        vlSelf->__PVT__regVec_3673 = 0U;
        vlSelf->__PVT__regVec_3674 = 0U;
        vlSelf->__PVT__regVec_3675 = 0U;
        vlSelf->__PVT__regVec_3676 = 0U;
        vlSelf->__PVT__regVec_3677 = 0U;
        vlSelf->__PVT__regVec_3678 = 0U;
        vlSelf->__PVT__regVec_3679 = 0U;
        vlSelf->__PVT__regVec_3680 = 0U;
    } else if (vlSelf->__PVT__when_Axi4_transmission_l91) {
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__0, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((8U & __Vtemp_h34d96581__0[0x72U])) {
            vlSelf->__PVT__regVec_3651 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__1, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10U & __Vtemp_h34d96581__1[0x72U])) {
            vlSelf->__PVT__regVec_3652 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__2, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x20U & __Vtemp_h34d96581__2[0x72U])) {
            vlSelf->__PVT__regVec_3653 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__3, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40U & __Vtemp_h34d96581__3[0x72U])) {
            vlSelf->__PVT__regVec_3654 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__4, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x80U & __Vtemp_h34d96581__4[0x72U])) {
            vlSelf->__PVT__regVec_3655 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__5, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x100U & __Vtemp_h34d96581__5[0x72U])) {
            vlSelf->__PVT__regVec_3656 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__6, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x200U & __Vtemp_h34d96581__6[0x72U])) {
            vlSelf->__PVT__regVec_3657 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__7, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x400U & __Vtemp_h34d96581__7[0x72U])) {
            vlSelf->__PVT__regVec_3658 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__8, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x800U & __Vtemp_h34d96581__8[0x72U])) {
            vlSelf->__PVT__regVec_3659 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__9, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x1000U & __Vtemp_h34d96581__9[0x72U])) {
            vlSelf->__PVT__regVec_3660 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__10, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x2000U & __Vtemp_h34d96581__10[0x72U])) {
            vlSelf->__PVT__regVec_3661 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__11, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x4000U & __Vtemp_h34d96581__11[0x72U])) {
            vlSelf->__PVT__regVec_3662 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__12, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x8000U & __Vtemp_h34d96581__12[0x72U])) {
            vlSelf->__PVT__regVec_3663 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__13, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10000U & __Vtemp_h34d96581__13[0x72U])) {
            vlSelf->__PVT__regVec_3664 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__14, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x20000U & __Vtemp_h34d96581__14[0x72U])) {
            vlSelf->__PVT__regVec_3665 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__15, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40000U & __Vtemp_h34d96581__15[0x72U])) {
            vlSelf->__PVT__regVec_3666 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__16, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x80000U & __Vtemp_h34d96581__16[0x72U])) {
            vlSelf->__PVT__regVec_3667 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__17, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x100000U & __Vtemp_h34d96581__17[0x72U])) {
            vlSelf->__PVT__regVec_3668 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__18, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x200000U & __Vtemp_h34d96581__18[0x72U])) {
            vlSelf->__PVT__regVec_3669 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__19, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x400000U & __Vtemp_h34d96581__19[0x72U])) {
            vlSelf->__PVT__regVec_3670 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__20, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x800000U & __Vtemp_h34d96581__20[0x72U])) {
            vlSelf->__PVT__regVec_3671 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__21, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x1000000U & __Vtemp_h34d96581__21[0x72U])) {
            vlSelf->__PVT__regVec_3672 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__22, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x2000000U & __Vtemp_h34d96581__22[0x72U])) {
            vlSelf->__PVT__regVec_3673 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__23, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x4000000U & __Vtemp_h34d96581__23[0x72U])) {
            vlSelf->__PVT__regVec_3674 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__24, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x8000000U & __Vtemp_h34d96581__24[0x72U])) {
            vlSelf->__PVT__regVec_3675 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__25, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10000000U & __Vtemp_h34d96581__25[0x72U])) {
            vlSelf->__PVT__regVec_3676 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__26, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x20000000U & __Vtemp_h34d96581__26[0x72U])) {
            vlSelf->__PVT__regVec_3677 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__27, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40000000U & __Vtemp_h34d96581__27[0x72U])) {
            vlSelf->__PVT__regVec_3678 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__28, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((__Vtemp_h34d96581__28[0x72U] >> 0x1fU)) {
            vlSelf->__PVT__regVec_3679 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__29, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((1U & __Vtemp_h34d96581__29[0x73U])) {
            vlSelf->__PVT__regVec_3680 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
    }
}

VL_INLINE_OPT void VTopAxiMasterWandRWithSlave_Axi4_transmission___sequent__TOP__TopAxiMasterWandRWithSlave__axiSlave__209(VTopAxiMasterWandRWithSlave_Axi4_transmission* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTopAxiMasterWandRWithSlave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTopAxiMasterWandRWithSlave_Axi4_transmission___sequent__TOP__TopAxiMasterWandRWithSlave__axiSlave__209\n"); );
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
        vlSelf->__PVT__regVec_3681 = 0U;
        vlSelf->__PVT__regVec_3682 = 0U;
        vlSelf->__PVT__regVec_3683 = 0U;
        vlSelf->__PVT__regVec_3684 = 0U;
        vlSelf->__PVT__regVec_3685 = 0U;
        vlSelf->__PVT__regVec_3686 = 0U;
        vlSelf->__PVT__regVec_3687 = 0U;
        vlSelf->__PVT__regVec_3688 = 0U;
        vlSelf->__PVT__regVec_3689 = 0U;
        vlSelf->__PVT__regVec_3690 = 0U;
        vlSelf->__PVT__regVec_3691 = 0U;
        vlSelf->__PVT__regVec_3692 = 0U;
        vlSelf->__PVT__regVec_3693 = 0U;
        vlSelf->__PVT__regVec_3694 = 0U;
        vlSelf->__PVT__regVec_3695 = 0U;
        vlSelf->__PVT__regVec_3696 = 0U;
        vlSelf->__PVT__regVec_3697 = 0U;
        vlSelf->__PVT__regVec_3698 = 0U;
        vlSelf->__PVT__regVec_3699 = 0U;
        vlSelf->__PVT__regVec_3700 = 0U;
        vlSelf->__PVT__regVec_3701 = 0U;
        vlSelf->__PVT__regVec_3702 = 0U;
        vlSelf->__PVT__regVec_3703 = 0U;
        vlSelf->__PVT__regVec_3704 = 0U;
        vlSelf->__PVT__regVec_3705 = 0U;
        vlSelf->__PVT__regVec_3706 = 0U;
        vlSelf->__PVT__regVec_3707 = 0U;
        vlSelf->__PVT__regVec_3708 = 0U;
        vlSelf->__PVT__regVec_3709 = 0U;
        vlSelf->__PVT__regVec_3710 = 0U;
    } else if (vlSelf->__PVT__when_Axi4_transmission_l91) {
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__0, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((2U & __Vtemp_h34d96581__0[0x73U])) {
            vlSelf->__PVT__regVec_3681 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__1, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((4U & __Vtemp_h34d96581__1[0x73U])) {
            vlSelf->__PVT__regVec_3682 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__2, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((8U & __Vtemp_h34d96581__2[0x73U])) {
            vlSelf->__PVT__regVec_3683 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__3, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10U & __Vtemp_h34d96581__3[0x73U])) {
            vlSelf->__PVT__regVec_3684 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__4, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x20U & __Vtemp_h34d96581__4[0x73U])) {
            vlSelf->__PVT__regVec_3685 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__5, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40U & __Vtemp_h34d96581__5[0x73U])) {
            vlSelf->__PVT__regVec_3686 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__6, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x80U & __Vtemp_h34d96581__6[0x73U])) {
            vlSelf->__PVT__regVec_3687 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__7, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x100U & __Vtemp_h34d96581__7[0x73U])) {
            vlSelf->__PVT__regVec_3688 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__8, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x200U & __Vtemp_h34d96581__8[0x73U])) {
            vlSelf->__PVT__regVec_3689 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__9, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x400U & __Vtemp_h34d96581__9[0x73U])) {
            vlSelf->__PVT__regVec_3690 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__10, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x800U & __Vtemp_h34d96581__10[0x73U])) {
            vlSelf->__PVT__regVec_3691 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__11, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x1000U & __Vtemp_h34d96581__11[0x73U])) {
            vlSelf->__PVT__regVec_3692 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__12, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x2000U & __Vtemp_h34d96581__12[0x73U])) {
            vlSelf->__PVT__regVec_3693 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__13, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x4000U & __Vtemp_h34d96581__13[0x73U])) {
            vlSelf->__PVT__regVec_3694 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__14, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x8000U & __Vtemp_h34d96581__14[0x73U])) {
            vlSelf->__PVT__regVec_3695 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__15, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10000U & __Vtemp_h34d96581__15[0x73U])) {
            vlSelf->__PVT__regVec_3696 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__16, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x20000U & __Vtemp_h34d96581__16[0x73U])) {
            vlSelf->__PVT__regVec_3697 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__17, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40000U & __Vtemp_h34d96581__17[0x73U])) {
            vlSelf->__PVT__regVec_3698 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__18, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x80000U & __Vtemp_h34d96581__18[0x73U])) {
            vlSelf->__PVT__regVec_3699 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__19, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x100000U & __Vtemp_h34d96581__19[0x73U])) {
            vlSelf->__PVT__regVec_3700 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__20, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x200000U & __Vtemp_h34d96581__20[0x73U])) {
            vlSelf->__PVT__regVec_3701 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__21, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x400000U & __Vtemp_h34d96581__21[0x73U])) {
            vlSelf->__PVT__regVec_3702 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__22, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x800000U & __Vtemp_h34d96581__22[0x73U])) {
            vlSelf->__PVT__regVec_3703 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__23, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x1000000U & __Vtemp_h34d96581__23[0x73U])) {
            vlSelf->__PVT__regVec_3704 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__24, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x2000000U & __Vtemp_h34d96581__24[0x73U])) {
            vlSelf->__PVT__regVec_3705 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__25, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x4000000U & __Vtemp_h34d96581__25[0x73U])) {
            vlSelf->__PVT__regVec_3706 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__26, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x8000000U & __Vtemp_h34d96581__26[0x73U])) {
            vlSelf->__PVT__regVec_3707 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__27, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10000000U & __Vtemp_h34d96581__27[0x73U])) {
            vlSelf->__PVT__regVec_3708 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__28, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x20000000U & __Vtemp_h34d96581__28[0x73U])) {
            vlSelf->__PVT__regVec_3709 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__29, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40000000U & __Vtemp_h34d96581__29[0x73U])) {
            vlSelf->__PVT__regVec_3710 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
    }
}

VL_INLINE_OPT void VTopAxiMasterWandRWithSlave_Axi4_transmission___sequent__TOP__TopAxiMasterWandRWithSlave__axiSlave__210(VTopAxiMasterWandRWithSlave_Axi4_transmission* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTopAxiMasterWandRWithSlave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTopAxiMasterWandRWithSlave_Axi4_transmission___sequent__TOP__TopAxiMasterWandRWithSlave__axiSlave__210\n"); );
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
        vlSelf->__PVT__regVec_3711 = 0U;
        vlSelf->__PVT__regVec_3712 = 0U;
        vlSelf->__PVT__regVec_3713 = 0U;
        vlSelf->__PVT__regVec_3714 = 0U;
        vlSelf->__PVT__regVec_3715 = 0U;
        vlSelf->__PVT__regVec_3716 = 0U;
        vlSelf->__PVT__regVec_3717 = 0U;
        vlSelf->__PVT__regVec_3718 = 0U;
        vlSelf->__PVT__regVec_3719 = 0U;
        vlSelf->__PVT__regVec_3720 = 0U;
        vlSelf->__PVT__regVec_3721 = 0U;
        vlSelf->__PVT__regVec_3722 = 0U;
        vlSelf->__PVT__regVec_3723 = 0U;
        vlSelf->__PVT__regVec_3724 = 0U;
        vlSelf->__PVT__regVec_3725 = 0U;
        vlSelf->__PVT__regVec_3726 = 0U;
        vlSelf->__PVT__regVec_3727 = 0U;
        vlSelf->__PVT__regVec_3728 = 0U;
        vlSelf->__PVT__regVec_3729 = 0U;
        vlSelf->__PVT__regVec_3730 = 0U;
        vlSelf->__PVT__regVec_3731 = 0U;
        vlSelf->__PVT__regVec_3732 = 0U;
        vlSelf->__PVT__regVec_3733 = 0U;
        vlSelf->__PVT__regVec_3734 = 0U;
        vlSelf->__PVT__regVec_3735 = 0U;
        vlSelf->__PVT__regVec_3736 = 0U;
        vlSelf->__PVT__regVec_3737 = 0U;
        vlSelf->__PVT__regVec_3738 = 0U;
        vlSelf->__PVT__regVec_3739 = 0U;
        vlSelf->__PVT__regVec_3740 = 0U;
    } else if (vlSelf->__PVT__when_Axi4_transmission_l91) {
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__0, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((__Vtemp_h34d96581__0[0x73U] >> 0x1fU)) {
            vlSelf->__PVT__regVec_3711 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__1, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((1U & __Vtemp_h34d96581__1[0x74U])) {
            vlSelf->__PVT__regVec_3712 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__2, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((2U & __Vtemp_h34d96581__2[0x74U])) {
            vlSelf->__PVT__regVec_3713 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__3, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((4U & __Vtemp_h34d96581__3[0x74U])) {
            vlSelf->__PVT__regVec_3714 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__4, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((8U & __Vtemp_h34d96581__4[0x74U])) {
            vlSelf->__PVT__regVec_3715 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__5, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10U & __Vtemp_h34d96581__5[0x74U])) {
            vlSelf->__PVT__regVec_3716 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__6, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x20U & __Vtemp_h34d96581__6[0x74U])) {
            vlSelf->__PVT__regVec_3717 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__7, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40U & __Vtemp_h34d96581__7[0x74U])) {
            vlSelf->__PVT__regVec_3718 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__8, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x80U & __Vtemp_h34d96581__8[0x74U])) {
            vlSelf->__PVT__regVec_3719 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__9, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x100U & __Vtemp_h34d96581__9[0x74U])) {
            vlSelf->__PVT__regVec_3720 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__10, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x200U & __Vtemp_h34d96581__10[0x74U])) {
            vlSelf->__PVT__regVec_3721 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__11, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x400U & __Vtemp_h34d96581__11[0x74U])) {
            vlSelf->__PVT__regVec_3722 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__12, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x800U & __Vtemp_h34d96581__12[0x74U])) {
            vlSelf->__PVT__regVec_3723 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__13, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x1000U & __Vtemp_h34d96581__13[0x74U])) {
            vlSelf->__PVT__regVec_3724 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__14, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x2000U & __Vtemp_h34d96581__14[0x74U])) {
            vlSelf->__PVT__regVec_3725 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__15, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x4000U & __Vtemp_h34d96581__15[0x74U])) {
            vlSelf->__PVT__regVec_3726 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__16, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x8000U & __Vtemp_h34d96581__16[0x74U])) {
            vlSelf->__PVT__regVec_3727 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__17, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10000U & __Vtemp_h34d96581__17[0x74U])) {
            vlSelf->__PVT__regVec_3728 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__18, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x20000U & __Vtemp_h34d96581__18[0x74U])) {
            vlSelf->__PVT__regVec_3729 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__19, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40000U & __Vtemp_h34d96581__19[0x74U])) {
            vlSelf->__PVT__regVec_3730 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__20, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x80000U & __Vtemp_h34d96581__20[0x74U])) {
            vlSelf->__PVT__regVec_3731 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__21, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x100000U & __Vtemp_h34d96581__21[0x74U])) {
            vlSelf->__PVT__regVec_3732 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__22, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x200000U & __Vtemp_h34d96581__22[0x74U])) {
            vlSelf->__PVT__regVec_3733 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__23, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x400000U & __Vtemp_h34d96581__23[0x74U])) {
            vlSelf->__PVT__regVec_3734 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__24, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x800000U & __Vtemp_h34d96581__24[0x74U])) {
            vlSelf->__PVT__regVec_3735 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__25, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x1000000U & __Vtemp_h34d96581__25[0x74U])) {
            vlSelf->__PVT__regVec_3736 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__26, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x2000000U & __Vtemp_h34d96581__26[0x74U])) {
            vlSelf->__PVT__regVec_3737 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__27, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x4000000U & __Vtemp_h34d96581__27[0x74U])) {
            vlSelf->__PVT__regVec_3738 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__28, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x8000000U & __Vtemp_h34d96581__28[0x74U])) {
            vlSelf->__PVT__regVec_3739 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__29, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10000000U & __Vtemp_h34d96581__29[0x74U])) {
            vlSelf->__PVT__regVec_3740 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
    }
}

VL_INLINE_OPT void VTopAxiMasterWandRWithSlave_Axi4_transmission___sequent__TOP__TopAxiMasterWandRWithSlave__axiSlave__211(VTopAxiMasterWandRWithSlave_Axi4_transmission* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTopAxiMasterWandRWithSlave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTopAxiMasterWandRWithSlave_Axi4_transmission___sequent__TOP__TopAxiMasterWandRWithSlave__axiSlave__211\n"); );
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
        vlSelf->__PVT__regVec_3741 = 0U;
        vlSelf->__PVT__regVec_3742 = 0U;
        vlSelf->__PVT__regVec_3743 = 0U;
        vlSelf->__PVT__regVec_3744 = 0U;
        vlSelf->__PVT__regVec_3745 = 0U;
        vlSelf->__PVT__regVec_3746 = 0U;
        vlSelf->__PVT__regVec_3747 = 0U;
        vlSelf->__PVT__regVec_3748 = 0U;
        vlSelf->__PVT__regVec_3749 = 0U;
        vlSelf->__PVT__regVec_3750 = 0U;
        vlSelf->__PVT__regVec_3751 = 0U;
        vlSelf->__PVT__regVec_3752 = 0U;
        vlSelf->__PVT__regVec_3753 = 0U;
        vlSelf->__PVT__regVec_3754 = 0U;
        vlSelf->__PVT__regVec_3755 = 0U;
        vlSelf->__PVT__regVec_3756 = 0U;
        vlSelf->__PVT__regVec_3757 = 0U;
        vlSelf->__PVT__regVec_3758 = 0U;
        vlSelf->__PVT__regVec_3759 = 0U;
        vlSelf->__PVT__regVec_3760 = 0U;
        vlSelf->__PVT__regVec_3761 = 0U;
        vlSelf->__PVT__regVec_3762 = 0U;
        vlSelf->__PVT__regVec_3763 = 0U;
        vlSelf->__PVT__regVec_3764 = 0U;
        vlSelf->__PVT__regVec_3765 = 0U;
        vlSelf->__PVT__regVec_3766 = 0U;
        vlSelf->__PVT__regVec_3767 = 0U;
        vlSelf->__PVT__regVec_3768 = 0U;
        vlSelf->__PVT__regVec_3769 = 0U;
        vlSelf->__PVT__regVec_3770 = 0U;
    } else if (vlSelf->__PVT__when_Axi4_transmission_l91) {
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__0, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x20000000U & __Vtemp_h34d96581__0[0x74U])) {
            vlSelf->__PVT__regVec_3741 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__1, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40000000U & __Vtemp_h34d96581__1[0x74U])) {
            vlSelf->__PVT__regVec_3742 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__2, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((__Vtemp_h34d96581__2[0x74U] >> 0x1fU)) {
            vlSelf->__PVT__regVec_3743 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__3, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((1U & __Vtemp_h34d96581__3[0x75U])) {
            vlSelf->__PVT__regVec_3744 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__4, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((2U & __Vtemp_h34d96581__4[0x75U])) {
            vlSelf->__PVT__regVec_3745 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__5, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((4U & __Vtemp_h34d96581__5[0x75U])) {
            vlSelf->__PVT__regVec_3746 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__6, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((8U & __Vtemp_h34d96581__6[0x75U])) {
            vlSelf->__PVT__regVec_3747 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__7, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10U & __Vtemp_h34d96581__7[0x75U])) {
            vlSelf->__PVT__regVec_3748 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__8, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x20U & __Vtemp_h34d96581__8[0x75U])) {
            vlSelf->__PVT__regVec_3749 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__9, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40U & __Vtemp_h34d96581__9[0x75U])) {
            vlSelf->__PVT__regVec_3750 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__10, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x80U & __Vtemp_h34d96581__10[0x75U])) {
            vlSelf->__PVT__regVec_3751 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__11, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x100U & __Vtemp_h34d96581__11[0x75U])) {
            vlSelf->__PVT__regVec_3752 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__12, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x200U & __Vtemp_h34d96581__12[0x75U])) {
            vlSelf->__PVT__regVec_3753 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__13, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x400U & __Vtemp_h34d96581__13[0x75U])) {
            vlSelf->__PVT__regVec_3754 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__14, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x800U & __Vtemp_h34d96581__14[0x75U])) {
            vlSelf->__PVT__regVec_3755 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__15, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x1000U & __Vtemp_h34d96581__15[0x75U])) {
            vlSelf->__PVT__regVec_3756 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__16, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x2000U & __Vtemp_h34d96581__16[0x75U])) {
            vlSelf->__PVT__regVec_3757 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__17, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x4000U & __Vtemp_h34d96581__17[0x75U])) {
            vlSelf->__PVT__regVec_3758 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__18, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x8000U & __Vtemp_h34d96581__18[0x75U])) {
            vlSelf->__PVT__regVec_3759 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__19, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x10000U & __Vtemp_h34d96581__19[0x75U])) {
            vlSelf->__PVT__regVec_3760 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__20, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x20000U & __Vtemp_h34d96581__20[0x75U])) {
            vlSelf->__PVT__regVec_3761 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__21, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x40000U & __Vtemp_h34d96581__21[0x75U])) {
            vlSelf->__PVT__regVec_3762 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__22, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x80000U & __Vtemp_h34d96581__22[0x75U])) {
            vlSelf->__PVT__regVec_3763 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__23, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x100000U & __Vtemp_h34d96581__23[0x75U])) {
            vlSelf->__PVT__regVec_3764 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__24, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x200000U & __Vtemp_h34d96581__24[0x75U])) {
            vlSelf->__PVT__regVec_3765 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__25, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x400000U & __Vtemp_h34d96581__25[0x75U])) {
            vlSelf->__PVT__regVec_3766 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__26, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x800000U & __Vtemp_h34d96581__26[0x75U])) {
            vlSelf->__PVT__regVec_3767 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__27, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x1000000U & __Vtemp_h34d96581__27[0x75U])) {
            vlSelf->__PVT__regVec_3768 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__28, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x2000000U & __Vtemp_h34d96581__28[0x75U])) {
            vlSelf->__PVT__regVec_3769 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
        VL_SHIFTL_WWI(4096,4096,12, __Vtemp_h34d96581__29, VTopAxiMasterWandRWithSlave__ConstPool__CONST_h1958c06c_0, (IData)(vlSelf->regAwAddr));
        if ((0x4000000U & __Vtemp_h34d96581__29[0x75U])) {
            vlSelf->__PVT__regVec_3770 = vlSymsp->TOP__TopAxiMasterWandRWithSlave.__PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        }
    }
}
