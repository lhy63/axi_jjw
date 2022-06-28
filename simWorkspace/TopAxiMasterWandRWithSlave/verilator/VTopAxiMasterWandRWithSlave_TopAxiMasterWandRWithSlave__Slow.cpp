// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTopAxiMasterWandRWithSlave.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTopAxiMasterWandRWithSlave_TopAxiMasterWandRWithSlave.h"
#include "VTopAxiMasterWandRWithSlave__Syms.h"

void VTopAxiMasterWandRWithSlave_TopAxiMasterWandRWithSlave___ctor_var_reset(VTopAxiMasterWandRWithSlave_TopAxiMasterWandRWithSlave* vlSelf);

VTopAxiMasterWandRWithSlave_TopAxiMasterWandRWithSlave::VTopAxiMasterWandRWithSlave_TopAxiMasterWandRWithSlave(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VTopAxiMasterWandRWithSlave_TopAxiMasterWandRWithSlave___ctor_var_reset(this);
}

void VTopAxiMasterWandRWithSlave_TopAxiMasterWandRWithSlave::__Vconfigure(VTopAxiMasterWandRWithSlave__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VTopAxiMasterWandRWithSlave_TopAxiMasterWandRWithSlave::~VTopAxiMasterWandRWithSlave_TopAxiMasterWandRWithSlave() {
}
