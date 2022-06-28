// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VTopAxiMasterWandRWithSlave__Syms.h"
#include "VTopAxiMasterWandRWithSlave.h"
#include "VTopAxiMasterWandRWithSlave___024root.h"
#include "VTopAxiMasterWandRWithSlave_TopAxiMasterWandRWithSlave.h"
#include "VTopAxiMasterWandRWithSlave_Axi4_transmission.h"

// FUNCTIONS
VTopAxiMasterWandRWithSlave__Syms::~VTopAxiMasterWandRWithSlave__Syms()
{
}

VTopAxiMasterWandRWithSlave__Syms::VTopAxiMasterWandRWithSlave__Syms(VerilatedContext* contextp, const char* namep,VTopAxiMasterWandRWithSlave* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP(namep)
    , TOP__TopAxiMasterWandRWithSlave(Verilated::catName(namep, "TopAxiMasterWandRWithSlave"))
    , TOP__TopAxiMasterWandRWithSlave__axiSlave(Verilated::catName(namep, "TopAxiMasterWandRWithSlave.axiSlave"))
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.TopAxiMasterWandRWithSlave = &TOP__TopAxiMasterWandRWithSlave;
    TOP__TopAxiMasterWandRWithSlave.axiSlave = &TOP__TopAxiMasterWandRWithSlave__axiSlave;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(this, true);
    TOP__TopAxiMasterWandRWithSlave.__Vconfigure(this, true);
    TOP__TopAxiMasterWandRWithSlave__axiSlave.__Vconfigure(this, true);
    // Setup scopes
    __Vscope_TopAxiMasterWandRWithSlave__axiSlave.configure(this, name(), "TopAxiMasterWandRWithSlave.axiSlave", "axiSlave", 0, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal=0; __Vfinal<2; __Vfinal++) {
        __Vscope_TopAxiMasterWandRWithSlave__axiSlave.varInsert(__Vfinal,"regAwAddr", &(TOP__TopAxiMasterWandRWithSlave__axiSlave.regAwAddr), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,11,0);
    }
}
