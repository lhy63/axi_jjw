// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTopAxiMasterWandRWithSlave.h for the primary calling header

#ifndef VERILATED_VTOPAXIMASTERWANDRWITHSLAVE___024ROOT_H_
#define VERILATED_VTOPAXIMASTERWANDRWITHSLAVE___024ROOT_H_  // guard

#include "verilated.h"

class VTopAxiMasterWandRWithSlave__Syms;
class VTopAxiMasterWandRWithSlave_TopAxiMasterWandRWithSlave;

VL_MODULE(VTopAxiMasterWandRWithSlave___024root) {
  public:
    // CELLS
    VTopAxiMasterWandRWithSlave_TopAxiMasterWandRWithSlave* TopAxiMasterWandRWithSlave;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(io_rdataOut_valid,0,0);
    VL_IN8(io_rdataOut_ready,0,0);
    VL_OUT8(io_rdataOut_payload,7,0);
    VL_IN8(io_rapStart,0,0);
    VL_OUT8(io_rapDone,0,0);
    VL_IN8(io_wapStart,0,0);
    VL_IN8(io_wdata_in_valid,0,0);
    VL_OUT8(io_wdata_in_ready,0,0);
    VL_IN8(io_wdata_in_payload,7,0);
    VL_OUT8(io_wapDone,0,0);
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__reset;
    VL_IN(io_RAddrOffset,31,0);
    VL_IN(io_Rlen,31,0);
    VL_IN(io_WAddrOffset,31,0);
    VL_IN(io_Wlen,31,0);
    VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;

    // INTERNAL VARIABLES
    VTopAxiMasterWandRWithSlave__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VTopAxiMasterWandRWithSlave___024root(const char* name);
    ~VTopAxiMasterWandRWithSlave___024root();
    VL_UNCOPYABLE(VTopAxiMasterWandRWithSlave___024root);

    // INTERNAL METHODS
    void __Vconfigure(VTopAxiMasterWandRWithSlave__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
