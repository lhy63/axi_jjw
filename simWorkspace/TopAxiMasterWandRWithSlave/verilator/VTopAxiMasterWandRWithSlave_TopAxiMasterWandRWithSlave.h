// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTopAxiMasterWandRWithSlave.h for the primary calling header

#ifndef VERILATED_VTOPAXIMASTERWANDRWITHSLAVE_TOPAXIMASTERWANDRWITHSLAVE_H_
#define VERILATED_VTOPAXIMASTERWANDRWITHSLAVE_TOPAXIMASTERWANDRWITHSLAVE_H_  // guard

#include "verilated.h"

class VTopAxiMasterWandRWithSlave__Syms;
class VTopAxiMasterWandRWithSlave_Axi4_transmission;

VL_MODULE(VTopAxiMasterWandRWithSlave_TopAxiMasterWandRWithSlave) {
  public:
    // CELLS
    VTopAxiMasterWandRWithSlave_Axi4_transmission* axiSlave;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
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
        CData/*0:0*/ __PVT__axiSlave_apstart;
        CData/*0:0*/ __PVT__axiMasterRead_io_dataOut_valid;
        CData/*0:0*/ __PVT__axiMasterWrite_io_data_in_ready;
        CData/*0:0*/ __PVT__axiMasterRead__DOT__buffer_1_io_pop_valid;
        CData/*5:0*/ __PVT__axiMasterRead__DOT__buffer_1_io_occupancy;
        CData/*5:0*/ __PVT__axiMasterRead__DOT__buffer_1_io_availability;
        CData/*0:0*/ __PVT__axiMasterRead__DOT__regApStart;
        CData/*0:0*/ __PVT__axiMasterRead__DOT__dataCounter_willIncrement;
        CData/*0:0*/ __PVT__axiMasterRead__DOT__dataCounter_willOverflow;
        CData/*7:0*/ __PVT__axiMasterRead__DOT__regArLen;
        CData/*0:0*/ __PVT__axiMasterRead__DOT__regConfigFinish;
        CData/*0:0*/ __PVT__axiMasterRead__DOT__regApDone;
        CData/*0:0*/ __PVT__axiMasterRead__DOT__firstIn;
        CData/*0:0*/ __PVT__axiMasterRead__DOT__regReadFinsh;
        CData/*0:0*/ __PVT__axiMasterRead__DOT__when_AxiMasterRead_l47;
        CData/*0:0*/ __PVT__axiMasterRead__DOT__when_AxiMasterRead_l67;
        CData/*0:0*/ __PVT__axiMasterRead__DOT__when_AxiMasterRead_l97;
        CData/*0:0*/ __PVT__axiMasterRead__DOT__when_AxiMasterRead_l118;
        CData/*7:0*/ __PVT__axiMasterRead__DOT__buffer_1__DOT___zz_logic_ram_port0;
        CData/*0:0*/ __PVT__axiMasterRead__DOT__buffer_1__DOT___zz_1;
        CData/*0:0*/ __PVT__axiMasterRead__DOT__buffer_1__DOT__logic_pushPtr_willIncrement;
        CData/*4:0*/ __PVT__axiMasterRead__DOT__buffer_1__DOT__logic_pushPtr_valueNext;
        CData/*4:0*/ __PVT__axiMasterRead__DOT__buffer_1__DOT__logic_pushPtr_value;
        CData/*0:0*/ __PVT__axiMasterRead__DOT__buffer_1__DOT__logic_popPtr_willIncrement;
        CData/*4:0*/ __PVT__axiMasterRead__DOT__buffer_1__DOT__logic_popPtr_valueNext;
        CData/*4:0*/ __PVT__axiMasterRead__DOT__buffer_1__DOT__logic_popPtr_value;
        CData/*0:0*/ __PVT__axiMasterRead__DOT__buffer_1__DOT__logic_ptrMatch;
        CData/*0:0*/ __PVT__axiMasterRead__DOT__buffer_1__DOT__logic_risingOccupancy;
        CData/*0:0*/ __PVT__axiMasterRead__DOT__buffer_1__DOT__logic_pushing;
        CData/*0:0*/ __PVT__axiMasterRead__DOT__buffer_1__DOT__logic_popping;
        CData/*0:0*/ __PVT__axiMasterRead__DOT__buffer_1__DOT__logic_full;
        CData/*0:0*/ __PVT__axiMasterRead__DOT__buffer_1__DOT___zz_io_pop_valid;
        CData/*0:0*/ __PVT__axiMasterWrite__DOT__buffer_1_io_flush;
        CData/*0:0*/ __PVT__axiMasterWrite__DOT__buffer_1_io_pop_valid;
        CData/*0:0*/ __PVT__axiMasterWrite__DOT__regApStart;
        CData/*0:0*/ __PVT__axiMasterWrite__DOT__dataCounter_willIncrement;
        CData/*0:0*/ __PVT__axiMasterWrite__DOT__dataCounter_willClear;
        CData/*0:0*/ __PVT__axiMasterWrite__DOT__dataCounter_willOverflow;
        CData/*0:0*/ __PVT__axiMasterWrite__DOT__dataInCounter_willIncrement;
        CData/*0:0*/ __PVT__axiMasterWrite__DOT__dataInCounter_willClear;
        CData/*0:0*/ __PVT__axiMasterWrite__DOT__dataInCounter_willOverflow;
        CData/*0:0*/ __PVT__axiMasterWrite__DOT__data255flag_willIncrement;
        CData/*0:0*/ __PVT__axiMasterWrite__DOT__data255flag_willClear;
        CData/*7:0*/ __PVT__axiMasterWrite__DOT__data255flag_valueNext;
        CData/*7:0*/ __PVT__axiMasterWrite__DOT__data255flag_value;
        CData/*7:0*/ __PVT__axiMasterWrite__DOT__regAwLen;
        CData/*0:0*/ __PVT__axiMasterWrite__DOT__regConfigFinish;
        CData/*0:0*/ __PVT__axiMasterWrite__DOT__regwlast;
        CData/*0:0*/ __PVT__axiMasterWrite__DOT__regApDone;
        CData/*0:0*/ __PVT__axiMasterWrite__DOT__firstIn;
        CData/*0:0*/ __PVT__axiMasterWrite__DOT__regWriteFinish;
        CData/*0:0*/ __PVT__axiMasterWrite__DOT__when_AxiMasterWrite_l186;
    };
    struct {
        CData/*0:0*/ __PVT__axiMasterWrite__DOT__when_AxiMasterWrite_l197;
        CData/*0:0*/ __PVT__axiMasterWrite__DOT__when_AxiMasterWrite_l218;
        CData/*0:0*/ __PVT__axiMasterWrite__DOT__when_AxiMasterWrite_l276;
        CData/*7:0*/ __PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_logic_ram_port0;
        CData/*0:0*/ __PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_1;
        CData/*0:0*/ __PVT__axiMasterWrite__DOT__buffer_1__DOT__logic_pushPtr_willIncrement;
        CData/*0:0*/ __PVT__axiMasterWrite__DOT__buffer_1__DOT__logic_pushPtr_willClear;
        CData/*4:0*/ __PVT__axiMasterWrite__DOT__buffer_1__DOT__logic_pushPtr_valueNext;
        CData/*4:0*/ __PVT__axiMasterWrite__DOT__buffer_1__DOT__logic_pushPtr_value;
        CData/*0:0*/ __PVT__axiMasterWrite__DOT__buffer_1__DOT__logic_popPtr_willIncrement;
        CData/*0:0*/ __PVT__axiMasterWrite__DOT__buffer_1__DOT__logic_popPtr_willClear;
        CData/*4:0*/ __PVT__axiMasterWrite__DOT__buffer_1__DOT__logic_popPtr_valueNext;
        CData/*4:0*/ __PVT__axiMasterWrite__DOT__buffer_1__DOT__logic_popPtr_value;
        CData/*0:0*/ __PVT__axiMasterWrite__DOT__buffer_1__DOT__logic_ptrMatch;
        CData/*0:0*/ __PVT__axiMasterWrite__DOT__buffer_1__DOT__logic_risingOccupancy;
        CData/*0:0*/ __PVT__axiMasterWrite__DOT__buffer_1__DOT__logic_pushing;
        CData/*0:0*/ __PVT__axiMasterWrite__DOT__buffer_1__DOT__logic_popping;
        CData/*0:0*/ __PVT__axiMasterWrite__DOT__buffer_1__DOT__logic_full;
        CData/*0:0*/ __PVT__axiMasterWrite__DOT__buffer_1__DOT___zz_io_pop_valid;
        CData/*4:0*/ __Vdlyvdim0__axiMasterWrite__DOT__buffer_1__DOT__logic_ram__v0;
        CData/*7:0*/ __Vdlyvval__axiMasterWrite__DOT__buffer_1__DOT__logic_ram__v0;
        CData/*0:0*/ __Vdlyvset__axiMasterWrite__DOT__buffer_1__DOT__logic_ram__v0;
        SData/*8:0*/ __PVT__axiMasterRead__DOT__dataCounter_valueNext;
        SData/*8:0*/ __PVT__axiMasterRead__DOT__dataCounter_value;
        SData/*8:0*/ __PVT__axiMasterWrite__DOT__dataCounter_valueNext;
        SData/*8:0*/ __PVT__axiMasterWrite__DOT__dataCounter_value;
        SData/*8:0*/ __PVT__axiMasterWrite__DOT__dataInCounter_valueNext;
        SData/*8:0*/ __PVT__axiMasterWrite__DOT__dataInCounter_value;
        VL_IN(io_RAddrOffset,31,0);
        VL_IN(io_Rlen,31,0);
        VL_IN(io_WAddrOffset,31,0);
        VL_IN(io_Wlen,31,0);
        IData/*31:0*/ __PVT__axiMasterRead_io_axiAR_payload_addr;
        IData/*31:0*/ __PVT__axiMasterWrite_io_axiAW_payload_addr;
        IData/*31:0*/ __PVT__axiMasterRead__DOT__regRAO;
        IData/*31:0*/ __PVT__axiMasterRead__DOT__regALLRlen;
        IData/*31:0*/ __PVT__axiMasterRead__DOT__regArAddr;
        IData/*31:0*/ __PVT__axiMasterRead__DOT__resdata;
        IData/*31:0*/ __PVT__axiMasterWrite__DOT__regWAO;
        IData/*31:0*/ __PVT__axiMasterWrite__DOT__regALLWlen;
        IData/*31:0*/ __PVT__axiMasterWrite__DOT__regAwAddr;
        IData/*31:0*/ __PVT__axiMasterWrite__DOT__resdata;
        QData/*39:0*/ __PVT__axiMasterRead__DOT___zz_regArAddr;
        QData/*39:0*/ __PVT__axiMasterWrite__DOT___zz_regAwAddr;
        VlUnpacked<CData/*7:0*/, 32> __PVT__axiMasterRead__DOT__buffer_1__DOT__logic_ram;
        VlUnpacked<CData/*7:0*/, 32> __PVT__axiMasterWrite__DOT__buffer_1__DOT__logic_ram;
    };

    // INTERNAL VARIABLES
    VTopAxiMasterWandRWithSlave__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VTopAxiMasterWandRWithSlave_TopAxiMasterWandRWithSlave(const char* name);
    ~VTopAxiMasterWandRWithSlave_TopAxiMasterWandRWithSlave();
    VL_UNCOPYABLE(VTopAxiMasterWandRWithSlave_TopAxiMasterWandRWithSlave);

    // INTERNAL METHODS
    void __Vconfigure(VTopAxiMasterWandRWithSlave__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
