// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop_tb__Syms.h"


void Vtop_tb::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vtop_tb__Syms* __restrict vlSymsp = static_cast<Vtop_tb__Syms*>(userp);
    Vtop_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vtop_tb::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vtop_tb__Syms* __restrict vlSymsp = static_cast<Vtop_tb__Syms*>(userp);
    Vtop_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgBit(oldp+0,(vlTOPp->clk));
        tracep->chgBit(oldp+1,(vlTOPp->rst));
        tracep->chgCData(oldp+2,(vlTOPp->a_in),8);
        tracep->chgCData(oldp+3,(vlTOPp->b_in),8);
        tracep->chgCData(oldp+4,(vlTOPp->op_in),3);
        tracep->chgCData(oldp+5,(vlTOPp->q_out),8);
    }
}

void Vtop_tb::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vtop_tb__Syms* __restrict vlSymsp = static_cast<Vtop_tb__Syms*>(userp);
    Vtop_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
    }
}
