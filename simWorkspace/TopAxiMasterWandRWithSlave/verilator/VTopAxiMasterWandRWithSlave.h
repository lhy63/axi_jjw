// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VTOPAXIMASTERWANDRWITHSLAVE_H_
#define VERILATED_VTOPAXIMASTERWANDRWITHSLAVE_H_  // guard

#include "verilated.h"
#include "svdpi.h"

class VTopAxiMasterWandRWithSlave__Syms;
class VTopAxiMasterWandRWithSlave___024root;
class VerilatedFstC;
class VTopAxiMasterWandRWithSlave_TopAxiMasterWandRWithSlave;


// This class is the main interface to the Verilated model
class VTopAxiMasterWandRWithSlave VL_NOT_FINAL {
  private:
    // Symbol table holding complete model state (owned by this class)
    VTopAxiMasterWandRWithSlave__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clk,0,0);
    VL_IN8(&reset,0,0);
    VL_OUT8(&io_rdataOut_valid,0,0);
    VL_IN8(&io_rdataOut_ready,0,0);
    VL_OUT8(&io_rdataOut_payload,7,0);
    VL_IN8(&io_rapStart,0,0);
    VL_OUT8(&io_rapDone,0,0);
    VL_IN8(&io_wapStart,0,0);
    VL_IN8(&io_wdata_in_valid,0,0);
    VL_OUT8(&io_wdata_in_ready,0,0);
    VL_IN8(&io_wdata_in_payload,7,0);
    VL_OUT8(&io_wapDone,0,0);
    VL_IN(&io_RAddrOffset,31,0);
    VL_IN(&io_Rlen,31,0);
    VL_IN(&io_WAddrOffset,31,0);
    VL_IN(&io_Wlen,31,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    VTopAxiMasterWandRWithSlave_TopAxiMasterWandRWithSlave* const TopAxiMasterWandRWithSlave;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    VTopAxiMasterWandRWithSlave___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit VTopAxiMasterWandRWithSlave(VerilatedContext* contextp, const char* name = "TOP");
    explicit VTopAxiMasterWandRWithSlave(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~VTopAxiMasterWandRWithSlave();
  private:
    VL_UNCOPYABLE(VTopAxiMasterWandRWithSlave);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Trace signals in the model; called by application code
    void trace(VerilatedFstC* tfp, int levels, int options = 0);
    /// Return current simulation context for this model.
    /// Used to get to e.g. simulation time via contextp()->time()
    VerilatedContext* contextp() const;
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
