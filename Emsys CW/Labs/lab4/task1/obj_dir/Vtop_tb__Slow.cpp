// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_tb.h for the primary calling header

#include "Vtop_tb.h"
#include "Vtop_tb__Syms.h"

//==========

VL_CTOR_IMP(Vtop_tb) {
    Vtop_tb__Syms* __restrict vlSymsp = __VlSymsp = new Vtop_tb__Syms(this, name());
    Vtop_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vtop_tb::__Vconfigure(Vtop_tb__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    _configure_coverage(vlSymsp, first);
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vtop_tb::~Vtop_tb() {
#ifdef VM_TRACE
    if (VL_UNLIKELY(__VlSymsp->__Vm_dumping)) _traceDumpClose();
#endif  // VM_TRACE
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

// Coverage
void Vtop_tb::__vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
    const char* hierp, const char* pagep, const char* commentp, const char* linescovp) {
    uint32_t* count32p = countp;
    static uint32_t fake_zero_count = 0;
    if (!enable) count32p = &fake_zero_count;
    *count32p = 0;
    VL_COVER_INSERT(count32p,  "filename",filenamep,  "lineno",lineno,  "column",column,
        "hier",std::string(name())+hierp,  "page",pagep,  "comment",commentp,  (linescovp[0] ? "linescov" : ""), linescovp);
}

void Vtop_tb::_initial__TOP__1(Vtop_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb::_initial__TOP__1\n"); );
    Vtop_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*159:0*/ __Vtemp1[5];
    // Body
    if (VL_UNLIKELY((0U != VL_TESTPLUSARGS_I("trace")))) {
        VL_WRITEF("[%0t] Tracing to logs/vlt_dump.vcd...\n\n",
                  64,VL_TIME_UNITED_Q(1));
        __Vtemp1[0U] = 0x2e766364U;
        __Vtemp1[1U] = 0x64756d70U;
        __Vtemp1[2U] = 0x766c745fU;
        __Vtemp1[3U] = 0x6f67732fU;
        __Vtemp1[4U] = 0x6cU;
        vl_dumpctl_filenamep(true, VL_CVT_PACK_STR_NW(5, __Vtemp1));
        vlSymsp->TOPp->_traceDumpOpen();
        ++(vlSymsp->__Vcoverage[30]);
    } else {
        ++(vlSymsp->__Vcoverage[31]);
    }
    VL_WRITEF("[%0t] Model running...\n\n",64,VL_TIME_UNITED_Q(1));
    ++(vlSymsp->__Vcoverage[32]);
}

void Vtop_tb::_settle__TOP__3(Vtop_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb::_settle__TOP__3\n"); );
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

void Vtop_tb::_eval_initial(Vtop_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb::_eval_initial\n"); );
    Vtop_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

void Vtop_tb::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb::final\n"); );
    // Variables
    Vtop_tb__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vtop_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vtop_tb::_eval_settle(Vtop_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb::_eval_settle\n"); );
    Vtop_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__3(vlSymsp);
}

void Vtop_tb::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    rst = VL_RAND_RESET_I(1);
    a_in = VL_RAND_RESET_I(8);
    b_in = VL_RAND_RESET_I(8);
    op_in = VL_RAND_RESET_I(3);
    q_out = VL_RAND_RESET_I(8);
    top_tb__DOT____Vtogcov__clk = VL_RAND_RESET_I(1);
    top_tb__DOT____Vtogcov__rst = VL_RAND_RESET_I(1);
    top_tb__DOT____Vtogcov__a_in = VL_RAND_RESET_I(8);
    top_tb__DOT____Vtogcov__b_in = VL_RAND_RESET_I(8);
    top_tb__DOT____Vtogcov__op_in = VL_RAND_RESET_I(3);
    top_tb__DOT____Vtogcov__q_out = VL_RAND_RESET_I(8);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}

void Vtop_tb::_configure_coverage(Vtop_tb__Syms* __restrict vlSymsp, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb::_configure_coverage\n"); );
    // Body
    if (false && vlSymsp && first) {}  // Prevent unused
    __vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "top_tb.sv", 6, 11, ".top_tb", "v_toggle/top_tb", "clk", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "top_tb.sv", 7, 11, ".top_tb", "v_toggle/top_tb", "rst", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "top_tb.sv", 9, 23, ".top_tb", "v_toggle/top_tb", "a_in[0]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "top_tb.sv", 9, 23, ".top_tb", "v_toggle/top_tb", "a_in[1]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "top_tb.sv", 9, 23, ".top_tb", "v_toggle/top_tb", "a_in[2]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "top_tb.sv", 9, 23, ".top_tb", "v_toggle/top_tb", "a_in[3]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "top_tb.sv", 9, 23, ".top_tb", "v_toggle/top_tb", "a_in[4]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "top_tb.sv", 9, 23, ".top_tb", "v_toggle/top_tb", "a_in[5]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "top_tb.sv", 9, 23, ".top_tb", "v_toggle/top_tb", "a_in[6]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "top_tb.sv", 9, 23, ".top_tb", "v_toggle/top_tb", "a_in[7]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "top_tb.sv", 10, 23, ".top_tb", "v_toggle/top_tb", "b_in[0]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "top_tb.sv", 10, 23, ".top_tb", "v_toggle/top_tb", "b_in[1]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "top_tb.sv", 10, 23, ".top_tb", "v_toggle/top_tb", "b_in[2]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "top_tb.sv", 10, 23, ".top_tb", "v_toggle/top_tb", "b_in[3]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "top_tb.sv", 10, 23, ".top_tb", "v_toggle/top_tb", "b_in[4]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "top_tb.sv", 10, 23, ".top_tb", "v_toggle/top_tb", "b_in[5]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "top_tb.sv", 10, 23, ".top_tb", "v_toggle/top_tb", "b_in[6]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "top_tb.sv", 10, 23, ".top_tb", "v_toggle/top_tb", "b_in[7]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "top_tb.sv", 11, 23, ".top_tb", "v_toggle/top_tb", "op_in[0]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "top_tb.sv", 11, 23, ".top_tb", "v_toggle/top_tb", "op_in[1]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "top_tb.sv", 11, 23, ".top_tb", "v_toggle/top_tb", "op_in[2]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "top_tb.sv", 13, 24, ".top_tb", "v_toggle/top_tb", "q_out[0]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "top_tb.sv", 13, 24, ".top_tb", "v_toggle/top_tb", "q_out[1]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "top_tb.sv", 13, 24, ".top_tb", "v_toggle/top_tb", "q_out[2]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "top_tb.sv", 13, 24, ".top_tb", "v_toggle/top_tb", "q_out[3]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "top_tb.sv", 13, 24, ".top_tb", "v_toggle/top_tb", "q_out[4]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "top_tb.sv", 13, 24, ".top_tb", "v_toggle/top_tb", "q_out[5]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "top_tb.sv", 13, 24, ".top_tb", "v_toggle/top_tb", "q_out[6]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "top_tb.sv", 13, 24, ".top_tb", "v_toggle/top_tb", "q_out[7]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "top_tb.sv", 26, 4, ".top_tb", "v_line/top_tb", "block", "26-27");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "top_tb.sv", 33, 7, ".top_tb", "v_branch/top_tb", "if", "33-36");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "top_tb.sv", 33, 8, ".top_tb", "v_branch/top_tb", "else", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "top_tb.sv", 32, 4, ".top_tb", "v_line/top_tb", "block", "32,38");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "alu.sv", 6, 20, ".top_tb.alu_inst", "v_toggle/alu", "a[0]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "alu.sv", 6, 20, ".top_tb.alu_inst", "v_toggle/alu", "a[1]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "alu.sv", 6, 20, ".top_tb.alu_inst", "v_toggle/alu", "a[2]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "alu.sv", 6, 20, ".top_tb.alu_inst", "v_toggle/alu", "a[3]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "alu.sv", 6, 20, ".top_tb.alu_inst", "v_toggle/alu", "a[4]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "alu.sv", 6, 20, ".top_tb.alu_inst", "v_toggle/alu", "a[5]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "alu.sv", 6, 20, ".top_tb.alu_inst", "v_toggle/alu", "a[6]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "alu.sv", 6, 20, ".top_tb.alu_inst", "v_toggle/alu", "a[7]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "alu.sv", 7, 20, ".top_tb.alu_inst", "v_toggle/alu", "b[0]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "alu.sv", 7, 20, ".top_tb.alu_inst", "v_toggle/alu", "b[1]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "alu.sv", 7, 20, ".top_tb.alu_inst", "v_toggle/alu", "b[2]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "alu.sv", 7, 20, ".top_tb.alu_inst", "v_toggle/alu", "b[3]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "alu.sv", 7, 20, ".top_tb.alu_inst", "v_toggle/alu", "b[4]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "alu.sv", 7, 20, ".top_tb.alu_inst", "v_toggle/alu", "b[5]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "alu.sv", 7, 20, ".top_tb.alu_inst", "v_toggle/alu", "b[6]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "alu.sv", 7, 20, ".top_tb.alu_inst", "v_toggle/alu", "b[7]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "alu.sv", 9, 20, ".top_tb.alu_inst", "v_toggle/alu", "op[0]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "alu.sv", 9, 20, ".top_tb.alu_inst", "v_toggle/alu", "op[1]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "alu.sv", 9, 20, ".top_tb.alu_inst", "v_toggle/alu", "op[2]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "alu.sv", 12, 21, ".top_tb.alu_inst", "v_toggle/alu", "q[0]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "alu.sv", 12, 21, ".top_tb.alu_inst", "v_toggle/alu", "q[1]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "alu.sv", 12, 21, ".top_tb.alu_inst", "v_toggle/alu", "q[2]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "alu.sv", 12, 21, ".top_tb.alu_inst", "v_toggle/alu", "q[3]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "alu.sv", 12, 21, ".top_tb.alu_inst", "v_toggle/alu", "q[4]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "alu.sv", 12, 21, ".top_tb.alu_inst", "v_toggle/alu", "q[5]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "alu.sv", 12, 21, ".top_tb.alu_inst", "v_toggle/alu", "q[6]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "alu.sv", 12, 21, ".top_tb.alu_inst", "v_toggle/alu", "q[7]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "alu.sv", 18, 9, ".top_tb.alu_inst", "v_line/alu", "case", "18");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "alu.sv", 19, 9, ".top_tb.alu_inst", "v_line/alu", "case", "19");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "alu.sv", 20, 9, ".top_tb.alu_inst", "v_line/alu", "case", "20");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "alu.sv", 21, 9, ".top_tb.alu_inst", "v_line/alu", "case", "21");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "alu.sv", 22, 9, ".top_tb.alu_inst", "v_line/alu", "case", "22");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "alu.sv", 23, 9, ".top_tb.alu_inst", "v_line/alu", "case", "23");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "alu.sv", 25, 3, ".top_tb.alu_inst", "v_line/alu", "case", "25");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "alu.sv", 16, 1, ".top_tb.alu_inst", "v_line/alu", "block", "16-17");
}
