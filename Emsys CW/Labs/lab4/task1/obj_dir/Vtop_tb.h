// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VTOP_TB_H_
#define _VTOP_TB_H_  // guard

#include "verilated_heavy.h"
#include "verilated_cov.h"

//==========

class Vtop_tb__Syms;
class Vtop_tb_VerilatedVcd;


//----------

VL_MODULE(Vtop_tb) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(a_in,7,0);
    VL_IN8(b_in,7,0);
    VL_IN8(op_in,2,0);
    VL_OUT8(q_out,7,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ top_tb__DOT____Vtogcov__clk;
    CData/*0:0*/ top_tb__DOT____Vtogcov__rst;
    CData/*7:0*/ top_tb__DOT____Vtogcov__a_in;
    CData/*7:0*/ top_tb__DOT____Vtogcov__b_in;
    CData/*2:0*/ top_tb__DOT____Vtogcov__op_in;
    CData/*7:0*/ top_tb__DOT____Vtogcov__q_out;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vm_traceActivity[1];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vtop_tb__Syms* __VlSymsp;  // Symbol table
  private:
    // Coverage
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtop_tb);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vtop_tb(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vtop_tb();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); eval_end_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
    static void _eval_initial_loop(Vtop_tb__Syms* __restrict vlSymsp);
    void _traceDump();
    void _traceDumpOpen();
    void _traceDumpClose();
    void __Vconfigure(Vtop_tb__Syms* symsp, bool first);
  private:
    static QData _change_request(Vtop_tb__Syms* __restrict vlSymsp);
    static QData _change_request_1(Vtop_tb__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__2(Vtop_tb__Syms* __restrict vlSymsp);
    static void _combo__TOP__5(Vtop_tb__Syms* __restrict vlSymsp);
  private:
    void _configure_coverage(Vtop_tb__Syms* __restrict vlSymsp, bool first) VL_ATTR_COLD;
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Vtop_tb__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(Vtop_tb__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vtop_tb__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__1(Vtop_tb__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__4(Vtop_tb__Syms* __restrict vlSymsp);
    static void _settle__TOP__3(Vtop_tb__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceChgSub0(void* userp, VerilatedVcd* tracep);
    static void traceChgTop0(void* userp, VerilatedVcd* tracep);
    static void traceCleanup(void* userp, VerilatedVcd* /*unused*/);
    static void traceFullSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceFullTop0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitTop(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    void traceRegister(VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
