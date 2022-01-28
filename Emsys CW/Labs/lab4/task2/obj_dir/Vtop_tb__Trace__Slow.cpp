// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop_tb__Syms.h"


//======================

void Vtop_tb::_traceDump() {
    const VerilatedLockGuard lock(__VlSymsp->__Vm_dumperMutex);
    __VlSymsp->__Vm_dumperp->dump(VL_TIME_Q());
}
void Vtop_tb::_traceDumpOpen() {
    const VerilatedLockGuard lock(__VlSymsp->__Vm_dumperMutex);
    if (VL_UNLIKELY(!__VlSymsp->__Vm_dumperp)) {
        __VlSymsp->__Vm_dumperp = new VerilatedVcdC();
        const char* cp = vl_dumpctl_filenamep();
        trace(__VlSymsp->__Vm_dumperp, 0, 0);
        __VlSymsp->__Vm_dumperp->open(vl_dumpctl_filenamep());
        __VlSymsp->__Vm_dumperp->changeThread();
        __VlSymsp->__Vm_dumping = true;
    }
}
void Vtop_tb::_traceDumpClose() {
    const VerilatedLockGuard lock(__VlSymsp->__Vm_dumperMutex);
    __VlSymsp->__Vm_dumping = false;
    VL_DO_CLEAR(delete __VlSymsp->__Vm_dumperp, __VlSymsp->__Vm_dumperp = nullptr);
}
void Vtop_tb::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vtop_tb::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtop_tb__Syms* __restrict vlSymsp = static_cast<Vtop_tb__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vtop_tb::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vtop_tb::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Vtop_tb__Syms* __restrict vlSymsp = static_cast<Vtop_tb__Syms*>(userp);
    Vtop_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vtop_tb::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Vtop_tb__Syms* __restrict vlSymsp = static_cast<Vtop_tb__Syms*>(userp);
    Vtop_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+9,"clk", false,-1);
        tracep->declBit(c+10,"rst", false,-1);
        tracep->declBus(c+11,"a_in", false,-1, 7,0);
        tracep->declBus(c+12,"b_in", false,-1, 7,0);
        tracep->declBus(c+13,"op_in", false,-1, 2,0);
        tracep->declBus(c+14,"q_out", false,-1, 7,0);
        tracep->declBit(c+9,"top_tb clk", false,-1);
        tracep->declBit(c+10,"top_tb rst", false,-1);
        tracep->declBus(c+11,"top_tb a_in", false,-1, 7,0);
        tracep->declBus(c+12,"top_tb b_in", false,-1, 7,0);
        tracep->declBus(c+13,"top_tb op_in", false,-1, 2,0);
        tracep->declBus(c+14,"top_tb q_out", false,-1, 7,0);
        tracep->declBit(c+9,"top_tb alu_inst clk", false,-1);
        tracep->declBit(c+10,"top_tb alu_inst rst", false,-1);
        tracep->declBus(c+11,"top_tb alu_inst a", false,-1, 7,0);
        tracep->declBus(c+12,"top_tb alu_inst b", false,-1, 7,0);
        tracep->declBus(c+13,"top_tb alu_inst op", false,-1, 2,0);
        tracep->declBus(c+14,"top_tb alu_inst q", false,-1, 7,0);
        tracep->declBus(c+6,"top_tb alu_inst w", false,-1, 7,0);
        tracep->declBus(c+1,"top_tb alu_inst w_new", false,-1, 7,0);
        tracep->declBus(c+2,"top_tb alu_inst add", false,-1, 7,0);
        tracep->declBus(c+3,"top_tb alu_inst sub", false,-1, 7,0);
        tracep->declBus(c+7,"top_tb alu_inst sr1", false,-1, 7,0);
        tracep->declBus(c+8,"top_tb alu_inst sl1", false,-1, 7,0);
        tracep->declBus(c+4,"top_tb alu_inst and1", false,-1, 7,0);
        tracep->declBus(c+5,"top_tb alu_inst or1", false,-1, 7,0);
        tracep->declBus(c+11,"top_tb alu_inst set", false,-1, 7,0);
        tracep->declBus(c+6,"top_tb alu_inst unchanged", false,-1, 7,0);
    }
}

void Vtop_tb::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vtop_tb::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Vtop_tb__Syms* __restrict vlSymsp = static_cast<Vtop_tb__Syms*>(userp);
    Vtop_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vtop_tb::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Vtop_tb__Syms* __restrict vlSymsp = static_cast<Vtop_tb__Syms*>(userp);
    Vtop_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,(vlTOPp->top_tb__DOT__alu_inst__DOT__w_new),8);
        tracep->fullCData(oldp+2,(vlTOPp->top_tb__DOT__alu_inst__DOT__add),8);
        tracep->fullCData(oldp+3,(vlTOPp->top_tb__DOT__alu_inst__DOT__sub),8);
        tracep->fullCData(oldp+4,(vlTOPp->top_tb__DOT__alu_inst__DOT__and1),8);
        tracep->fullCData(oldp+5,(vlTOPp->top_tb__DOT__alu_inst__DOT__or1),8);
        tracep->fullCData(oldp+6,(vlTOPp->top_tb__DOT__alu_inst__DOT__w),8);
        tracep->fullCData(oldp+7,((0xffU & ((IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__w) 
                                            >> 1U))),8);
        tracep->fullCData(oldp+8,((0xffU & ((IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__w) 
                                            << 1U))),8);
        tracep->fullBit(oldp+9,(vlTOPp->clk));
        tracep->fullBit(oldp+10,(vlTOPp->rst));
        tracep->fullCData(oldp+11,(vlTOPp->a_in),8);
        tracep->fullCData(oldp+12,(vlTOPp->b_in),8);
        tracep->fullCData(oldp+13,(vlTOPp->op_in),3);
        tracep->fullCData(oldp+14,(vlTOPp->q_out),8);
    }
}
