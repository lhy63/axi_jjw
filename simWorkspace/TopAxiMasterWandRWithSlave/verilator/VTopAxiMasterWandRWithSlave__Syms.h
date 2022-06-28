// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTOPAXIMASTERWANDRWITHSLAVE__SYMS_H_
#define VERILATED_VTOPAXIMASTERWANDRWITHSLAVE__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VTopAxiMasterWandRWithSlave.h"

// INCLUDE MODULE CLASSES
#include "VTopAxiMasterWandRWithSlave___024root.h"
#include "VTopAxiMasterWandRWithSlave_TopAxiMasterWandRWithSlave.h"
#include "VTopAxiMasterWandRWithSlave_Axi4_transmission.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class VTopAxiMasterWandRWithSlave__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VTopAxiMasterWandRWithSlave* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VTopAxiMasterWandRWithSlave___024root TOP;
    VTopAxiMasterWandRWithSlave_TopAxiMasterWandRWithSlave TOP__TopAxiMasterWandRWithSlave;
    VTopAxiMasterWandRWithSlave_Axi4_transmission TOP__TopAxiMasterWandRWithSlave__axiSlave;

    // SCOPE NAMES
    VerilatedScope __Vscope_TopAxiMasterWandRWithSlave__axiSlave;

    // CONSTRUCTORS
    VTopAxiMasterWandRWithSlave__Syms(VerilatedContext* contextp, const char* namep, VTopAxiMasterWandRWithSlave* modelp);
    ~VTopAxiMasterWandRWithSlave__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
