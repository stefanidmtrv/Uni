// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_tb.h for the primary calling header

#include "Vtop_tb.h"
#include "Vtop_tb__Syms.h"

//==========

void Vtop_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtop_tb::eval\n"); );
    Vtop_tb__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vtop_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        vlSymsp->__Vm_activity = true;
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("top_tb.sv", 5, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vtop_tb::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Vtop_tb::eval_end_step\n"); );
#ifdef VM_TRACE
    Vtop_tb__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vtop_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) _traceDump();
#endif  // VM_TRACE
}

void Vtop_tb::_eval_initial_loop(Vtop_tb__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("top_tb.sv", 5, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vtop_tb::_combo__TOP__2(Vtop_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb::_combo__TOP__2\n"); );
    Vtop_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) ^ vlTOPp->top_tb__DOT____Vtogcov__clk)) {
        ++(vlSymsp->__Vcoverage[0]);
        vlTOPp->top_tb__DOT____Vtogcov__clk = vlTOPp->clk;
    }
    if (((IData)(vlTOPp->rst) ^ vlTOPp->top_tb__DOT____Vtogcov__rst)) {
        ++(vlSymsp->__Vcoverage[1]);
        vlTOPp->top_tb__DOT____Vtogcov__rst = vlTOPp->rst;
    }
    if ((1U & ((IData)(vlTOPp->op_in) ^ vlTOPp->top_tb__DOT____Vtogcov__op_in))) {
        ++(vlSymsp->__Vcoverage[18]);
        vlTOPp->top_tb__DOT____Vtogcov__op_in = ((6U 
                                                  & (IData)(vlTOPp->top_tb__DOT____Vtogcov__op_in)) 
                                                 | (1U 
                                                    & (IData)(vlTOPp->op_in)));
    }
    if ((2U & ((IData)(vlTOPp->op_in) ^ vlTOPp->top_tb__DOT____Vtogcov__op_in))) {
        ++(vlSymsp->__Vcoverage[19]);
        vlTOPp->top_tb__DOT____Vtogcov__op_in = ((5U 
                                                  & (IData)(vlTOPp->top_tb__DOT____Vtogcov__op_in)) 
                                                 | (2U 
                                                    & (IData)(vlTOPp->op_in)));
    }
    if ((4U & ((IData)(vlTOPp->op_in) ^ vlTOPp->top_tb__DOT____Vtogcov__op_in))) {
        ++(vlSymsp->__Vcoverage[20]);
        vlTOPp->top_tb__DOT____Vtogcov__op_in = ((3U 
                                                  & (IData)(vlTOPp->top_tb__DOT____Vtogcov__op_in)) 
                                                 | (4U 
                                                    & (IData)(vlTOPp->op_in)));
    }
    if ((1U & ((IData)(vlTOPp->a_in) ^ vlTOPp->top_tb__DOT____Vtogcov__a_in))) {
        ++(vlSymsp->__Vcoverage[2]);
        vlTOPp->top_tb__DOT____Vtogcov__a_in = ((0xfeU 
                                                 & (IData)(vlTOPp->top_tb__DOT____Vtogcov__a_in)) 
                                                | (1U 
                                                   & (IData)(vlTOPp->a_in)));
    }
    if ((2U & ((IData)(vlTOPp->a_in) ^ vlTOPp->top_tb__DOT____Vtogcov__a_in))) {
        ++(vlSymsp->__Vcoverage[3]);
        vlTOPp->top_tb__DOT____Vtogcov__a_in = ((0xfdU 
                                                 & (IData)(vlTOPp->top_tb__DOT____Vtogcov__a_in)) 
                                                | (2U 
                                                   & (IData)(vlTOPp->a_in)));
    }
    if ((4U & ((IData)(vlTOPp->a_in) ^ vlTOPp->top_tb__DOT____Vtogcov__a_in))) {
        ++(vlSymsp->__Vcoverage[4]);
        vlTOPp->top_tb__DOT____Vtogcov__a_in = ((0xfbU 
                                                 & (IData)(vlTOPp->top_tb__DOT____Vtogcov__a_in)) 
                                                | (4U 
                                                   & (IData)(vlTOPp->a_in)));
    }
    if ((8U & ((IData)(vlTOPp->a_in) ^ vlTOPp->top_tb__DOT____Vtogcov__a_in))) {
        ++(vlSymsp->__Vcoverage[5]);
        vlTOPp->top_tb__DOT____Vtogcov__a_in = ((0xf7U 
                                                 & (IData)(vlTOPp->top_tb__DOT____Vtogcov__a_in)) 
                                                | (8U 
                                                   & (IData)(vlTOPp->a_in)));
    }
    if ((0x10U & ((IData)(vlTOPp->a_in) ^ vlTOPp->top_tb__DOT____Vtogcov__a_in))) {
        ++(vlSymsp->__Vcoverage[6]);
        vlTOPp->top_tb__DOT____Vtogcov__a_in = ((0xefU 
                                                 & (IData)(vlTOPp->top_tb__DOT____Vtogcov__a_in)) 
                                                | (0x10U 
                                                   & (IData)(vlTOPp->a_in)));
    }
    if ((0x20U & ((IData)(vlTOPp->a_in) ^ vlTOPp->top_tb__DOT____Vtogcov__a_in))) {
        ++(vlSymsp->__Vcoverage[7]);
        vlTOPp->top_tb__DOT____Vtogcov__a_in = ((0xdfU 
                                                 & (IData)(vlTOPp->top_tb__DOT____Vtogcov__a_in)) 
                                                | (0x20U 
                                                   & (IData)(vlTOPp->a_in)));
    }
    if ((0x40U & ((IData)(vlTOPp->a_in) ^ vlTOPp->top_tb__DOT____Vtogcov__a_in))) {
        ++(vlSymsp->__Vcoverage[8]);
        vlTOPp->top_tb__DOT____Vtogcov__a_in = ((0xbfU 
                                                 & (IData)(vlTOPp->top_tb__DOT____Vtogcov__a_in)) 
                                                | (0x40U 
                                                   & (IData)(vlTOPp->a_in)));
    }
    if ((0x80U & ((IData)(vlTOPp->a_in) ^ vlTOPp->top_tb__DOT____Vtogcov__a_in))) {
        ++(vlSymsp->__Vcoverage[9]);
        vlTOPp->top_tb__DOT____Vtogcov__a_in = ((0x7fU 
                                                 & (IData)(vlTOPp->top_tb__DOT____Vtogcov__a_in)) 
                                                | (0x80U 
                                                   & (IData)(vlTOPp->a_in)));
    }
    if ((1U & ((IData)(vlTOPp->b_in) ^ vlTOPp->top_tb__DOT____Vtogcov__b_in))) {
        ++(vlSymsp->__Vcoverage[10]);
        vlTOPp->top_tb__DOT____Vtogcov__b_in = ((0xfeU 
                                                 & (IData)(vlTOPp->top_tb__DOT____Vtogcov__b_in)) 
                                                | (1U 
                                                   & (IData)(vlTOPp->b_in)));
    }
    if ((2U & ((IData)(vlTOPp->b_in) ^ vlTOPp->top_tb__DOT____Vtogcov__b_in))) {
        ++(vlSymsp->__Vcoverage[11]);
        vlTOPp->top_tb__DOT____Vtogcov__b_in = ((0xfdU 
                                                 & (IData)(vlTOPp->top_tb__DOT____Vtogcov__b_in)) 
                                                | (2U 
                                                   & (IData)(vlTOPp->b_in)));
    }
    if ((4U & ((IData)(vlTOPp->b_in) ^ vlTOPp->top_tb__DOT____Vtogcov__b_in))) {
        ++(vlSymsp->__Vcoverage[12]);
        vlTOPp->top_tb__DOT____Vtogcov__b_in = ((0xfbU 
                                                 & (IData)(vlTOPp->top_tb__DOT____Vtogcov__b_in)) 
                                                | (4U 
                                                   & (IData)(vlTOPp->b_in)));
    }
    if ((8U & ((IData)(vlTOPp->b_in) ^ vlTOPp->top_tb__DOT____Vtogcov__b_in))) {
        ++(vlSymsp->__Vcoverage[13]);
        vlTOPp->top_tb__DOT____Vtogcov__b_in = ((0xf7U 
                                                 & (IData)(vlTOPp->top_tb__DOT____Vtogcov__b_in)) 
                                                | (8U 
                                                   & (IData)(vlTOPp->b_in)));
    }
    if ((0x10U & ((IData)(vlTOPp->b_in) ^ vlTOPp->top_tb__DOT____Vtogcov__b_in))) {
        ++(vlSymsp->__Vcoverage[14]);
        vlTOPp->top_tb__DOT____Vtogcov__b_in = ((0xefU 
                                                 & (IData)(vlTOPp->top_tb__DOT____Vtogcov__b_in)) 
                                                | (0x10U 
                                                   & (IData)(vlTOPp->b_in)));
    }
    if ((0x20U & ((IData)(vlTOPp->b_in) ^ vlTOPp->top_tb__DOT____Vtogcov__b_in))) {
        ++(vlSymsp->__Vcoverage[15]);
        vlTOPp->top_tb__DOT____Vtogcov__b_in = ((0xdfU 
                                                 & (IData)(vlTOPp->top_tb__DOT____Vtogcov__b_in)) 
                                                | (0x20U 
                                                   & (IData)(vlTOPp->b_in)));
    }
    if ((0x40U & ((IData)(vlTOPp->b_in) ^ vlTOPp->top_tb__DOT____Vtogcov__b_in))) {
        ++(vlSymsp->__Vcoverage[16]);
        vlTOPp->top_tb__DOT____Vtogcov__b_in = ((0xbfU 
                                                 & (IData)(vlTOPp->top_tb__DOT____Vtogcov__b_in)) 
                                                | (0x40U 
                                                   & (IData)(vlTOPp->b_in)));
    }
    if ((0x80U & ((IData)(vlTOPp->b_in) ^ vlTOPp->top_tb__DOT____Vtogcov__b_in))) {
        ++(vlSymsp->__Vcoverage[17]);
        vlTOPp->top_tb__DOT____Vtogcov__b_in = ((0x7fU 
                                                 & (IData)(vlTOPp->top_tb__DOT____Vtogcov__b_in)) 
                                                | (0x80U 
                                                   & (IData)(vlTOPp->b_in)));
    }
}

VL_INLINE_OPT void Vtop_tb::_sequent__TOP__4(Vtop_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb::_sequent__TOP__4\n"); );
    Vtop_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    ++(vlSymsp->__Vcoverage[29]);
    VL_WRITEF("opcode=%b, a=%3#, b=%3#, q=%3# \n",3,
              vlTOPp->op_in,8,(IData)(vlTOPp->a_in),
              8,vlTOPp->b_in,8,(IData)(vlTOPp->q_out));
}

VL_INLINE_OPT void Vtop_tb::_combo__TOP__5(Vtop_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb::_combo__TOP__5\n"); );
    Vtop_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    ++(vlSymsp->__Vcoverage[40]);
    if ((4U & (IData)(vlTOPp->op_in))) {
        if ((2U & (IData)(vlTOPp->op_in))) {
            ++(vlSymsp->__Vcoverage[39]);
            vlTOPp->q_out = 0U;
        } else {
            if ((1U & (IData)(vlTOPp->op_in))) {
                ++(vlSymsp->__Vcoverage[38]);
                vlTOPp->q_out = ((IData)(vlTOPp->a_in) 
                                 | (IData)(vlTOPp->b_in));
            } else {
                ++(vlSymsp->__Vcoverage[36]);
                vlTOPp->q_out = ((IData)(vlTOPp->a_in) 
                                 & (IData)(vlTOPp->b_in));
            }
        }
    } else {
        if ((2U & (IData)(vlTOPp->op_in))) {
            if ((1U & (IData)(vlTOPp->op_in))) {
                ++(vlSymsp->__Vcoverage[37]);
                vlTOPp->q_out = (0xffU & ((IData)(vlTOPp->a_in) 
                                          << 1U));
            } else {
                ++(vlSymsp->__Vcoverage[35]);
                vlTOPp->q_out = (0xffU & ((IData)(vlTOPp->a_in) 
                                          >> 1U));
            }
        } else {
            if ((1U & (IData)(vlTOPp->op_in))) {
                ++(vlSymsp->__Vcoverage[34]);
                vlTOPp->q_out = (0xffU & ((IData)(vlTOPp->a_in) 
                                          - (IData)(vlTOPp->b_in)));
            } else {
                ++(vlSymsp->__Vcoverage[33]);
                vlTOPp->q_out = (0xffU & ((IData)(vlTOPp->a_in) 
                                          + (IData)(vlTOPp->b_in)));
            }
        }
    }
    if ((1U & ((IData)(vlTOPp->q_out) ^ vlTOPp->top_tb__DOT____Vtogcov__q_out))) {
        ++(vlSymsp->__Vcoverage[21]);
        vlTOPp->top_tb__DOT____Vtogcov__q_out = ((0xfeU 
                                                  & (IData)(vlTOPp->top_tb__DOT____Vtogcov__q_out)) 
                                                 | (1U 
                                                    & (IData)(vlTOPp->q_out)));
    }
    if ((2U & ((IData)(vlTOPp->q_out) ^ vlTOPp->top_tb__DOT____Vtogcov__q_out))) {
        ++(vlSymsp->__Vcoverage[22]);
        vlTOPp->top_tb__DOT____Vtogcov__q_out = ((0xfdU 
                                                  & (IData)(vlTOPp->top_tb__DOT____Vtogcov__q_out)) 
                                                 | (2U 
                                                    & (IData)(vlTOPp->q_out)));
    }
    if ((4U & ((IData)(vlTOPp->q_out) ^ vlTOPp->top_tb__DOT____Vtogcov__q_out))) {
        ++(vlSymsp->__Vcoverage[23]);
        vlTOPp->top_tb__DOT____Vtogcov__q_out = ((0xfbU 
                                                  & (IData)(vlTOPp->top_tb__DOT____Vtogcov__q_out)) 
                                                 | (4U 
                                                    & (IData)(vlTOPp->q_out)));
    }
    if ((8U & ((IData)(vlTOPp->q_out) ^ vlTOPp->top_tb__DOT____Vtogcov__q_out))) {
        ++(vlSymsp->__Vcoverage[24]);
        vlTOPp->top_tb__DOT____Vtogcov__q_out = ((0xf7U 
                                                  & (IData)(vlTOPp->top_tb__DOT____Vtogcov__q_out)) 
                                                 | (8U 
                                                    & (IData)(vlTOPp->q_out)));
    }
    if ((0x10U & ((IData)(vlTOPp->q_out) ^ vlTOPp->top_tb__DOT____Vtogcov__q_out))) {
        ++(vlSymsp->__Vcoverage[25]);
        vlTOPp->top_tb__DOT____Vtogcov__q_out = ((0xefU 
                                                  & (IData)(vlTOPp->top_tb__DOT____Vtogcov__q_out)) 
                                                 | (0x10U 
                                                    & (IData)(vlTOPp->q_out)));
    }
    if ((0x20U & ((IData)(vlTOPp->q_out) ^ vlTOPp->top_tb__DOT____Vtogcov__q_out))) {
        ++(vlSymsp->__Vcoverage[26]);
        vlTOPp->top_tb__DOT____Vtogcov__q_out = ((0xdfU 
                                                  & (IData)(vlTOPp->top_tb__DOT____Vtogcov__q_out)) 
                                                 | (0x20U 
                                                    & (IData)(vlTOPp->q_out)));
    }
    if ((0x40U & ((IData)(vlTOPp->q_out) ^ vlTOPp->top_tb__DOT____Vtogcov__q_out))) {
        ++(vlSymsp->__Vcoverage[27]);
        vlTOPp->top_tb__DOT____Vtogcov__q_out = ((0xbfU 
                                                  & (IData)(vlTOPp->top_tb__DOT____Vtogcov__q_out)) 
                                                 | (0x40U 
                                                    & (IData)(vlTOPp->q_out)));
    }
    if ((0x80U & ((IData)(vlTOPp->q_out) ^ vlTOPp->top_tb__DOT____Vtogcov__q_out))) {
        ++(vlSymsp->__Vcoverage[28]);
        vlTOPp->top_tb__DOT____Vtogcov__q_out = ((0x7fU 
                                                  & (IData)(vlTOPp->top_tb__DOT____Vtogcov__q_out)) 
                                                 | (0x80U 
                                                    & (IData)(vlTOPp->q_out)));
    }
}

void Vtop_tb::_eval(Vtop_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb::_eval\n"); );
    Vtop_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__2(vlSymsp);
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__4(vlSymsp);
    }
    vlTOPp->_combo__TOP__5(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

VL_INLINE_OPT QData Vtop_tb::_change_request(Vtop_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb::_change_request\n"); );
    Vtop_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Vtop_tb::_change_request_1(Vtop_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb::_change_request_1\n"); );
    Vtop_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vtop_tb::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((op_in & 0xf8U))) {
        Verilated::overWidthError("op_in");}
}
#endif  // VL_DEBUG
