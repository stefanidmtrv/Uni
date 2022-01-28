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
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgCData(oldp+0,(vlTOPp->top_tb__DOT__alu_inst__DOT__w_new),8);
            tracep->chgCData(oldp+1,(vlTOPp->top_tb__DOT__alu_inst__DOT__add),8);
            tracep->chgCData(oldp+2,(vlTOPp->top_tb__DOT__alu_inst__DOT__sub),8);
            tracep->chgCData(oldp+3,(vlTOPp->top_tb__DOT__alu_inst__DOT__and1),8);
            tracep->chgCData(oldp+4,(vlTOPp->top_tb__DOT__alu_inst__DOT__or1),8);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[2U])) {
            tracep->chgCData(oldp+5,(vlTOPp->top_tb__DOT__alu_inst__DOT__w),8);
            tracep->chgCData(oldp+6,((0xffU & ((IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__w) 
                                               >> 1U))),8);
            tracep->chgCData(oldp+7,((0xffU & ((IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__w) 
                                               << 1U))),8);
        }
        tracep->chgBit(oldp+8,(vlTOPp->clk));
        tracep->chgBit(oldp+9,(vlTOPp->rst));
        tracep->chgCData(oldp+10,(vlTOPp->a_in),8);
        tracep->chgCData(oldp+11,(vlTOPp->b_in),8);
        tracep->chgCData(oldp+12,(vlTOPp->op_in),3);
        tracep->chgCData(oldp+13,(vlTOPp->q_out),8);
    }
}

void Vtop_tb::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vtop_tb__Syms* __restrict vlSymsp = static_cast<Vtop_tb__Syms*>(userp);
    Vtop_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
        vlTOPp->__Vm_traceActivity[2U] = 0U;
    }
}
