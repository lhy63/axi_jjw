// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTopAxiMasterWandRWithSlave.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTopAxiMasterWandRWithSlave_Axi4_transmission.h"
#include "VTopAxiMasterWandRWithSlave__Syms.h"

void VTopAxiMasterWandRWithSlave_Axi4_transmission___ctor_var_reset(VTopAxiMasterWandRWithSlave_Axi4_transmission* vlSelf);

VTopAxiMasterWandRWithSlave_Axi4_transmission::VTopAxiMasterWandRWithSlave_Axi4_transmission(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VTopAxiMasterWandRWithSlave_Axi4_transmission___ctor_var_reset(this);
}

void VTopAxiMasterWandRWithSlave_Axi4_transmission::__Vconfigure(VTopAxiMasterWandRWithSlave__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VTopAxiMasterWandRWithSlave_Axi4_transmission::~VTopAxiMasterWandRWithSlave_Axi4_transmission() {
}
