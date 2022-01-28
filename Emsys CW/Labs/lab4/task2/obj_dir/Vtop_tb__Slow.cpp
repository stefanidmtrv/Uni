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
        __Vtemp1[0U] = 0x2e766364U;
        __Vtemp1[1U] = 0x64756d70U;
        __Vtemp1[2U] = 0x766c745fU;
        __Vtemp1[3U] = 0x6f67732fU;
        __Vtemp1[4U] = 0x6cU;
        vl_dumpctl_filenamep(true, VL_CVT_PACK_STR_NW(5, __Vtemp1));
        vlSymsp->TOPp->_traceDumpOpen();
        ++(vlSymsp->__Vcoverage[32]);
        VL_WRITEF("[%0t] Tracing to logs/vlt_dump.vcd...\n\n",
                  64,VL_TIME_UNITED_Q(1));
    } else {
        ++(vlSymsp->__Vcoverage[33]);
    }
    VL_WRITEF("[%0t] Model running...\n\n",64,VL_TIME_UNITED_Q(1));
    ++(vlSymsp->__Vcoverage[34]);
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
    if ((1U & ((1U & ((IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__w) 
                      >> 8U)) ^ (vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__sr1 
                                 >> 7U)))) {
        ++(vlSymsp->__Vcoverage[67]);
        vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__sr1 
            = ((0x7fU & (IData)(vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__sr1)) 
               | (0x80U & ((IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__w) 
                           >> 1U)));
    }
    if ((1U & ((IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__w) 
               ^ vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__w))) {
        ++(vlSymsp->__Vcoverage[35]);
        vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__w 
            = ((0xfeU & (IData)(vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__w)) 
               | (1U & (IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__w)));
    }
    if ((2U & ((IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__w) 
               ^ vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__w))) {
        ++(vlSymsp->__Vcoverage[36]);
        vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__w 
            = ((0xfdU & (IData)(vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__w)) 
               | (2U & (IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__w)));
    }
    if ((4U & ((IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__w) 
               ^ vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__w))) {
        ++(vlSymsp->__Vcoverage[37]);
        vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__w 
            = ((0xfbU & (IData)(vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__w)) 
               | (4U & (IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__w)));
    }
    if ((8U & ((IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__w) 
               ^ vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__w))) {
        ++(vlSymsp->__Vcoverage[38]);
        vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__w 
            = ((0xf7U & (IData)(vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__w)) 
               | (8U & (IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__w)));
    }
    if ((0x10U & ((IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__w) 
                  ^ vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__w))) {
        ++(vlSymsp->__Vcoverage[39]);
        vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__w 
            = ((0xefU & (IData)(vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__w)) 
               | (0x10U & (IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__w)));
    }
    if ((0x20U & ((IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__w) 
                  ^ vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__w))) {
        ++(vlSymsp->__Vcoverage[40]);
        vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__w 
            = ((0xdfU & (IData)(vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__w)) 
               | (0x20U & (IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__w)));
    }
    if ((0x40U & ((IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__w) 
                  ^ vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__w))) {
        ++(vlSymsp->__Vcoverage[41]);
        vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__w 
            = ((0xbfU & (IData)(vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__w)) 
               | (0x40U & (IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__w)));
    }
    if ((0x80U & ((IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__w) 
                  ^ vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__w))) {
        ++(vlSymsp->__Vcoverage[42]);
        vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__w 
            = ((0x7fU & (IData)(vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__w)) 
               | (0x80U & (IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__w)));
    }
    if ((1U & ((0xffU & ((IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__w) 
                         << 1U)) ^ vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__sl1))) {
        ++(vlSymsp->__Vcoverage[68]);
        vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__sl1 
            = ((0xfeU & (IData)(vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__sl1)) 
               | (1U & ((IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__w) 
                        << 1U)));
    }
    if ((1U & ((0x7fU & (IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__w)) 
               ^ (vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__sl1 
                  >> 1U)))) {
        ++(vlSymsp->__Vcoverage[69]);
        vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__sl1 
            = ((0xfdU & (IData)(vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__sl1)) 
               | (2U & ((IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__w) 
                        << 1U)));
    }
    if ((1U & ((0x3fU & ((IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__w) 
                         >> 1U)) ^ (vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__sl1 
                                    >> 2U)))) {
        ++(vlSymsp->__Vcoverage[70]);
        vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__sl1 
            = ((0xfbU & (IData)(vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__sl1)) 
               | (4U & ((IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__w) 
                        << 1U)));
    }
    if ((1U & ((0x1fU & ((IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__w) 
                         >> 2U)) ^ (vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__sl1 
                                    >> 3U)))) {
        ++(vlSymsp->__Vcoverage[71]);
        vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__sl1 
            = ((0xf7U & (IData)(vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__sl1)) 
               | (8U & ((IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__w) 
                        << 1U)));
    }
    if ((1U & ((0xfU & ((IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__w) 
                        >> 3U)) ^ (vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__sl1 
                                   >> 4U)))) {
        ++(vlSymsp->__Vcoverage[72]);
        vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__sl1 
            = ((0xefU & (IData)(vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__sl1)) 
               | (0x10U & ((IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__w) 
                           << 1U)));
    }
    if ((1U & ((7U & ((IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__w) 
                      >> 4U)) ^ (vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__sl1 
                                 >> 5U)))) {
        ++(vlSymsp->__Vcoverage[73]);
        vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__sl1 
            = ((0xdfU & (IData)(vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__sl1)) 
               | (0x20U & ((IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__w) 
                           << 1U)));
    }
    if ((1U & ((3U & ((IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__w) 
                      >> 5U)) ^ (vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__sl1 
                                 >> 6U)))) {
        ++(vlSymsp->__Vcoverage[74]);
        vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__sl1 
            = ((0xbfU & (IData)(vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__sl1)) 
               | (0x40U & ((IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__w) 
                           << 1U)));
    }
    if ((1U & ((1U & ((IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__w) 
                      >> 6U)) ^ (vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__sl1 
                                 >> 7U)))) {
        ++(vlSymsp->__Vcoverage[75]);
        vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__sl1 
            = ((0x7fU & (IData)(vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__sl1)) 
               | (0x80U & ((IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__w) 
                           << 1U)));
    }
    vlTOPp->top_tb__DOT__alu_inst__DOT__add = (0xffU 
                                               & ((IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__w) 
                                                  + (IData)(vlTOPp->a_in)));
    vlTOPp->top_tb__DOT__alu_inst__DOT__sub = (0xffU 
                                               & ((IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__w) 
                                                  - (IData)(vlTOPp->a_in)));
    vlTOPp->top_tb__DOT__alu_inst__DOT__and1 = ((IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__w) 
                                                & (IData)(vlTOPp->a_in));
    vlTOPp->top_tb__DOT__alu_inst__DOT__or1 = ((IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__w) 
                                               | (IData)(vlTOPp->a_in));
    if ((1U & ((IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__add) 
               ^ vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__add))) {
        ++(vlSymsp->__Vcoverage[51]);
        vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__add 
            = ((0xfeU & (IData)(vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__add)) 
               | (1U & (IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__add)));
    }
    if ((2U & ((IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__add) 
               ^ vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__add))) {
        ++(vlSymsp->__Vcoverage[52]);
        vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__add 
            = ((0xfdU & (IData)(vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__add)) 
               | (2U & (IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__add)));
    }
    if ((4U & ((IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__add) 
               ^ vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__add))) {
        ++(vlSymsp->__Vcoverage[53]);
        vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__add 
            = ((0xfbU & (IData)(vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__add)) 
               | (4U & (IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__add)));
    }
    if ((8U & ((IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__add) 
               ^ vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__add))) {
        ++(vlSymsp->__Vcoverage[54]);
        vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__add 
            = ((0xf7U & (IData)(vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__add)) 
               | (8U & (IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__add)));
    }
    if ((0x10U & ((IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__add) 
                  ^ vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__add))) {
        ++(vlSymsp->__Vcoverage[55]);
        vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__add 
            = ((0xefU & (IData)(vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__add)) 
               | (0x10U & (IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__add)));
    }
    if ((0x20U & ((IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__add) 
                  ^ vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__add))) {
        ++(vlSymsp->__Vcoverage[56]);
        vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__add 
            = ((0xdfU & (IData)(vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__add)) 
               | (0x20U & (IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__add)));
    }
    if ((0x40U & ((IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__add) 
                  ^ vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__add))) {
        ++(vlSymsp->__Vcoverage[57]);
        vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__add 
            = ((0xbfU & (IData)(vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__add)) 
               | (0x40U & (IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__add)));
    }
    if ((0x80U & ((IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__add) 
                  ^ vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__add))) {
        ++(vlSymsp->__Vcoverage[58]);
        vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__add 
            = ((0x7fU & (IData)(vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__add)) 
               | (0x80U & (IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__add)));
    }
    if ((1U & ((IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__sub) 
               ^ vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[59]);
        vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__sub 
            = ((0xfeU & (IData)(vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__sub)) 
               | (1U & (IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__sub)));
    }
    if ((2U & ((IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__sub) 
               ^ vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[60]);
        vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__sub 
            = ((0xfdU & (IData)(vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__sub)) 
               | (2U & (IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__sub)));
    }
    if ((4U & ((IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__sub) 
               ^ vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[61]);
        vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__sub 
            = ((0xfbU & (IData)(vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__sub)) 
               | (4U & (IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__sub)));
    }
    if ((8U & ((IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__sub) 
               ^ vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[62]);
        vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__sub 
            = ((0xf7U & (IData)(vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__sub)) 
               | (8U & (IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__sub)));
    }
    if ((0x10U & ((IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__sub) 
                  ^ vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[63]);
        vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__sub 
            = ((0xefU & (IData)(vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__sub)) 
               | (0x10U & (IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__sub)));
    }
    if ((0x20U & ((IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__sub) 
                  ^ vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[64]);
        vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__sub 
            = ((0xdfU & (IData)(vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__sub)) 
               | (0x20U & (IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__sub)));
    }
    if ((0x40U & ((IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__sub) 
                  ^ vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[65]);
        vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__sub 
            = ((0xbfU & (IData)(vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__sub)) 
               | (0x40U & (IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__sub)));
    }
    if ((0x80U & ((IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__sub) 
                  ^ vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[66]);
        vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__sub 
            = ((0x7fU & (IData)(vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__sub)) 
               | (0x80U & (IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__sub)));
    }
    if ((1U & ((IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__and1) 
               ^ vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__and1))) {
        ++(vlSymsp->__Vcoverage[76]);
        vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__and1 
            = ((0xfeU & (IData)(vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__and1)) 
               | (1U & (IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__and1)));
    }
    if ((2U & ((IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__and1) 
               ^ vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__and1))) {
        ++(vlSymsp->__Vcoverage[77]);
        vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__and1 
            = ((0xfdU & (IData)(vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__and1)) 
               | (2U & (IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__and1)));
    }
    if ((4U & ((IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__and1) 
               ^ vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__and1))) {
        ++(vlSymsp->__Vcoverage[78]);
        vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__and1 
            = ((0xfbU & (IData)(vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__and1)) 
               | (4U & (IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__and1)));
    }
    if ((8U & ((IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__and1) 
               ^ vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__and1))) {
        ++(vlSymsp->__Vcoverage[79]);
        vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__and1 
            = ((0xf7U & (IData)(vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__and1)) 
               | (8U & (IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__and1)));
    }
    if ((0x10U & ((IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__and1) 
                  ^ vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__and1))) {
        ++(vlSymsp->__Vcoverage[80]);
        vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__and1 
            = ((0xefU & (IData)(vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__and1)) 
               | (0x10U & (IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__and1)));
    }
    if ((0x20U & ((IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__and1) 
                  ^ vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__and1))) {
        ++(vlSymsp->__Vcoverage[81]);
        vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__and1 
            = ((0xdfU & (IData)(vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__and1)) 
               | (0x20U & (IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__and1)));
    }
    if ((0x40U & ((IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__and1) 
                  ^ vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__and1))) {
        ++(vlSymsp->__Vcoverage[82]);
        vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__and1 
            = ((0xbfU & (IData)(vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__and1)) 
               | (0x40U & (IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__and1)));
    }
    if ((0x80U & ((IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__and1) 
                  ^ vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__and1))) {
        ++(vlSymsp->__Vcoverage[83]);
        vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__and1 
            = ((0x7fU & (IData)(vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__and1)) 
               | (0x80U & (IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__and1)));
    }
    if ((1U & ((IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__or1) 
               ^ vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__or1))) {
        ++(vlSymsp->__Vcoverage[84]);
        vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__or1 
            = ((0xfeU & (IData)(vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__or1)) 
               | (1U & (IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__or1)));
    }
    if ((2U & ((IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__or1) 
               ^ vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__or1))) {
        ++(vlSymsp->__Vcoverage[85]);
        vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__or1 
            = ((0xfdU & (IData)(vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__or1)) 
               | (2U & (IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__or1)));
    }
    if ((4U & ((IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__or1) 
               ^ vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__or1))) {
        ++(vlSymsp->__Vcoverage[86]);
        vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__or1 
            = ((0xfbU & (IData)(vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__or1)) 
               | (4U & (IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__or1)));
    }
    if ((8U & ((IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__or1) 
               ^ vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__or1))) {
        ++(vlSymsp->__Vcoverage[87]);
        vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__or1 
            = ((0xf7U & (IData)(vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__or1)) 
               | (8U & (IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__or1)));
    }
    if ((0x10U & ((IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__or1) 
                  ^ vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__or1))) {
        ++(vlSymsp->__Vcoverage[88]);
        vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__or1 
            = ((0xefU & (IData)(vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__or1)) 
               | (0x10U & (IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__or1)));
    }
    if ((0x20U & ((IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__or1) 
                  ^ vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__or1))) {
        ++(vlSymsp->__Vcoverage[89]);
        vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__or1 
            = ((0xdfU & (IData)(vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__or1)) 
               | (0x20U & (IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__or1)));
    }
    if ((0x40U & ((IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__or1) 
                  ^ vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__or1))) {
        ++(vlSymsp->__Vcoverage[90]);
        vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__or1 
            = ((0xbfU & (IData)(vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__or1)) 
               | (0x40U & (IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__or1)));
    }
    if ((0x80U & ((IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__or1) 
                  ^ vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__or1))) {
        ++(vlSymsp->__Vcoverage[91]);
        vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__or1 
            = ((0x7fU & (IData)(vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__or1)) 
               | (0x80U & (IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__or1)));
    }
    ++(vlSymsp->__Vcoverage[103]);
    if ((4U & (IData)(vlTOPp->op_in))) {
        if ((2U & (IData)(vlTOPp->op_in))) {
            if ((1U & (IData)(vlTOPp->op_in))) {
                ++(vlSymsp->__Vcoverage[102]);
                vlTOPp->top_tb__DOT__alu_inst__DOT__w_new 
                    = vlTOPp->top_tb__DOT__alu_inst__DOT__w;
            } else {
                ++(vlSymsp->__Vcoverage[101]);
                vlTOPp->top_tb__DOT__alu_inst__DOT__w_new 
                    = vlTOPp->a_in;
            }
        } else {
            if ((1U & (IData)(vlTOPp->op_in))) {
                ++(vlSymsp->__Vcoverage[100]);
                vlTOPp->top_tb__DOT__alu_inst__DOT__w_new 
                    = vlTOPp->top_tb__DOT__alu_inst__DOT__or1;
            } else {
                ++(vlSymsp->__Vcoverage[99]);
                vlTOPp->top_tb__DOT__alu_inst__DOT__w_new 
                    = vlTOPp->top_tb__DOT__alu_inst__DOT__and1;
            }
        }
    } else {
        if ((2U & (IData)(vlTOPp->op_in))) {
            if ((1U & (IData)(vlTOPp->op_in))) {
                ++(vlSymsp->__Vcoverage[98]);
                vlTOPp->top_tb__DOT__alu_inst__DOT__w_new 
                    = (0xffU & ((IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__w) 
                                << 1U));
            } else {
                ++(vlSymsp->__Vcoverage[97]);
                vlTOPp->top_tb__DOT__alu_inst__DOT__w_new 
                    = (0xffU & ((IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__w) 
                                >> 1U));
            }
        } else {
            if ((1U & (IData)(vlTOPp->op_in))) {
                ++(vlSymsp->__Vcoverage[96]);
                vlTOPp->top_tb__DOT__alu_inst__DOT__w_new 
                    = vlTOPp->top_tb__DOT__alu_inst__DOT__sub;
            } else {
                ++(vlSymsp->__Vcoverage[95]);
                vlTOPp->top_tb__DOT__alu_inst__DOT__w_new 
                    = vlTOPp->top_tb__DOT__alu_inst__DOT__add;
            }
        }
    }
    if ((1U & ((IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__w_new) 
               ^ vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__w_new))) {
        ++(vlSymsp->__Vcoverage[43]);
        vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__w_new 
            = ((0xfeU & (IData)(vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__w_new)) 
               | (1U & (IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__w_new)));
    }
    if ((2U & ((IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__w_new) 
               ^ vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__w_new))) {
        ++(vlSymsp->__Vcoverage[44]);
        vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__w_new 
            = ((0xfdU & (IData)(vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__w_new)) 
               | (2U & (IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__w_new)));
    }
    if ((4U & ((IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__w_new) 
               ^ vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__w_new))) {
        ++(vlSymsp->__Vcoverage[45]);
        vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__w_new 
            = ((0xfbU & (IData)(vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__w_new)) 
               | (4U & (IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__w_new)));
    }
    if ((8U & ((IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__w_new) 
               ^ vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__w_new))) {
        ++(vlSymsp->__Vcoverage[46]);
        vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__w_new 
            = ((0xf7U & (IData)(vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__w_new)) 
               | (8U & (IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__w_new)));
    }
    if ((0x10U & ((IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__w_new) 
                  ^ vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__w_new))) {
        ++(vlSymsp->__Vcoverage[47]);
        vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__w_new 
            = ((0xefU & (IData)(vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__w_new)) 
               | (0x10U & (IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__w_new)));
    }
    if ((0x20U & ((IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__w_new) 
                  ^ vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__w_new))) {
        ++(vlSymsp->__Vcoverage[48]);
        vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__w_new 
            = ((0xdfU & (IData)(vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__w_new)) 
               | (0x20U & (IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__w_new)));
    }
    if ((0x40U & ((IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__w_new) 
                  ^ vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__w_new))) {
        ++(vlSymsp->__Vcoverage[49]);
        vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__w_new 
            = ((0xbfU & (IData)(vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__w_new)) 
               | (0x40U & (IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__w_new)));
    }
    if ((0x80U & ((IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__w_new) 
                  ^ vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__w_new))) {
        ++(vlSymsp->__Vcoverage[50]);
        vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__w_new 
            = ((0x7fU & (IData)(vlTOPp->top_tb__DOT__alu_inst__DOT____Vtogcov__w_new)) 
               | (0x80U & (IData)(vlTOPp->top_tb__DOT__alu_inst__DOT__w_new)));
    }
    ++(vlSymsp->__Vcoverage[107]);
    if ((6U == (IData)(vlTOPp->op_in))) {
        ++(vlSymsp->__Vcoverage[106]);
        vlTOPp->q_out = 0U;
    } else {
        if ((7U == (IData)(vlTOPp->op_in))) {
            ++(vlSymsp->__Vcoverage[104]);
            vlTOPp->q_out = 0U;
        } else {
            ++(vlSymsp->__Vcoverage[105]);
            vlTOPp->q_out = vlTOPp->top_tb__DOT__alu_inst__DOT__w_new;
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
    vlTOPp->__Vm_traceActivity[2U] = 1U;
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
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
    top_tb__DOT__alu_inst__DOT__w = VL_RAND_RESET_I(8);
    top_tb__DOT__alu_inst__DOT__w_new = VL_RAND_RESET_I(8);
    top_tb__DOT__alu_inst__DOT__add = VL_RAND_RESET_I(8);
    top_tb__DOT__alu_inst__DOT__sub = VL_RAND_RESET_I(8);
    top_tb__DOT__alu_inst__DOT__and1 = VL_RAND_RESET_I(8);
    top_tb__DOT__alu_inst__DOT__or1 = VL_RAND_RESET_I(8);
    top_tb__DOT__alu_inst__DOT____Vtogcov__w = VL_RAND_RESET_I(8);
    top_tb__DOT__alu_inst__DOT____Vtogcov__w_new = VL_RAND_RESET_I(8);
    top_tb__DOT__alu_inst__DOT____Vtogcov__add = VL_RAND_RESET_I(8);
    top_tb__DOT__alu_inst__DOT____Vtogcov__sub = VL_RAND_RESET_I(8);
    top_tb__DOT__alu_inst__DOT____Vtogcov__sr1 = VL_RAND_RESET_I(8);
    top_tb__DOT__alu_inst__DOT____Vtogcov__sl1 = VL_RAND_RESET_I(8);
    top_tb__DOT__alu_inst__DOT____Vtogcov__and1 = VL_RAND_RESET_I(8);
    top_tb__DOT__alu_inst__DOT____Vtogcov__or1 = VL_RAND_RESET_I(8);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
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
    __vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "top_tb.sv", 29, 9, ".top_tb", "v_branch/top_tb", "if", "29-30");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "top_tb.sv", 29, 10, ".top_tb", "v_branch/top_tb", "else", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "top_tb.sv", 28, 4, ".top_tb", "v_line/top_tb", "block", "28");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "top_tb.sv", 37, 7, ".top_tb", "v_branch/top_tb", "if", "37-40");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "top_tb.sv", 37, 8, ".top_tb", "v_branch/top_tb", "else", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "top_tb.sv", 36, 4, ".top_tb", "v_line/top_tb", "block", "36,42");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "alu.sv", 5, 11, ".top_tb.alu_inst", "v_toggle/alu", "clk", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "alu.sv", 6, 11, ".top_tb.alu_inst", "v_toggle/alu", "rst", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "alu.sv", 9, 20, ".top_tb.alu_inst", "v_toggle/alu", "a[0]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "alu.sv", 9, 20, ".top_tb.alu_inst", "v_toggle/alu", "a[1]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "alu.sv", 9, 20, ".top_tb.alu_inst", "v_toggle/alu", "a[2]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "alu.sv", 9, 20, ".top_tb.alu_inst", "v_toggle/alu", "a[3]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "alu.sv", 9, 20, ".top_tb.alu_inst", "v_toggle/alu", "a[4]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "alu.sv", 9, 20, ".top_tb.alu_inst", "v_toggle/alu", "a[5]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "alu.sv", 9, 20, ".top_tb.alu_inst", "v_toggle/alu", "a[6]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "alu.sv", 9, 20, ".top_tb.alu_inst", "v_toggle/alu", "a[7]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "alu.sv", 10, 20, ".top_tb.alu_inst", "v_toggle/alu", "b[0]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "alu.sv", 10, 20, ".top_tb.alu_inst", "v_toggle/alu", "b[1]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "alu.sv", 10, 20, ".top_tb.alu_inst", "v_toggle/alu", "b[2]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "alu.sv", 10, 20, ".top_tb.alu_inst", "v_toggle/alu", "b[3]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "alu.sv", 10, 20, ".top_tb.alu_inst", "v_toggle/alu", "b[4]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "alu.sv", 10, 20, ".top_tb.alu_inst", "v_toggle/alu", "b[5]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "alu.sv", 10, 20, ".top_tb.alu_inst", "v_toggle/alu", "b[6]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "alu.sv", 10, 20, ".top_tb.alu_inst", "v_toggle/alu", "b[7]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "alu.sv", 11, 20, ".top_tb.alu_inst", "v_toggle/alu", "op[0]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "alu.sv", 11, 20, ".top_tb.alu_inst", "v_toggle/alu", "op[1]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "alu.sv", 11, 20, ".top_tb.alu_inst", "v_toggle/alu", "op[2]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "alu.sv", 14, 21, ".top_tb.alu_inst", "v_toggle/alu", "q[0]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "alu.sv", 14, 21, ".top_tb.alu_inst", "v_toggle/alu", "q[1]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "alu.sv", 14, 21, ".top_tb.alu_inst", "v_toggle/alu", "q[2]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "alu.sv", 14, 21, ".top_tb.alu_inst", "v_toggle/alu", "q[3]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "alu.sv", 14, 21, ".top_tb.alu_inst", "v_toggle/alu", "q[4]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "alu.sv", 14, 21, ".top_tb.alu_inst", "v_toggle/alu", "q[5]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "alu.sv", 14, 21, ".top_tb.alu_inst", "v_toggle/alu", "q[6]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "alu.sv", 14, 21, ".top_tb.alu_inst", "v_toggle/alu", "q[7]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "alu.sv", 18, 13, ".top_tb.alu_inst", "v_toggle/alu", "w[0]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "alu.sv", 18, 13, ".top_tb.alu_inst", "v_toggle/alu", "w[1]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "alu.sv", 18, 13, ".top_tb.alu_inst", "v_toggle/alu", "w[2]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "alu.sv", 18, 13, ".top_tb.alu_inst", "v_toggle/alu", "w[3]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "alu.sv", 18, 13, ".top_tb.alu_inst", "v_toggle/alu", "w[4]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "alu.sv", 18, 13, ".top_tb.alu_inst", "v_toggle/alu", "w[5]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "alu.sv", 18, 13, ".top_tb.alu_inst", "v_toggle/alu", "w[6]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "alu.sv", 18, 13, ".top_tb.alu_inst", "v_toggle/alu", "w[7]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "alu.sv", 19, 13, ".top_tb.alu_inst", "v_toggle/alu", "w_new[0]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "alu.sv", 19, 13, ".top_tb.alu_inst", "v_toggle/alu", "w_new[1]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "alu.sv", 19, 13, ".top_tb.alu_inst", "v_toggle/alu", "w_new[2]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "alu.sv", 19, 13, ".top_tb.alu_inst", "v_toggle/alu", "w_new[3]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "alu.sv", 19, 13, ".top_tb.alu_inst", "v_toggle/alu", "w_new[4]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "alu.sv", 19, 13, ".top_tb.alu_inst", "v_toggle/alu", "w_new[5]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "alu.sv", 19, 13, ".top_tb.alu_inst", "v_toggle/alu", "w_new[6]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "alu.sv", 19, 13, ".top_tb.alu_inst", "v_toggle/alu", "w_new[7]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "alu.sv", 20, 13, ".top_tb.alu_inst", "v_toggle/alu", "add[0]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "alu.sv", 20, 13, ".top_tb.alu_inst", "v_toggle/alu", "add[1]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "alu.sv", 20, 13, ".top_tb.alu_inst", "v_toggle/alu", "add[2]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "alu.sv", 20, 13, ".top_tb.alu_inst", "v_toggle/alu", "add[3]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "alu.sv", 20, 13, ".top_tb.alu_inst", "v_toggle/alu", "add[4]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "alu.sv", 20, 13, ".top_tb.alu_inst", "v_toggle/alu", "add[5]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "alu.sv", 20, 13, ".top_tb.alu_inst", "v_toggle/alu", "add[6]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "alu.sv", 20, 13, ".top_tb.alu_inst", "v_toggle/alu", "add[7]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "alu.sv", 21, 13, ".top_tb.alu_inst", "v_toggle/alu", "sub[0]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "alu.sv", 21, 13, ".top_tb.alu_inst", "v_toggle/alu", "sub[1]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "alu.sv", 21, 13, ".top_tb.alu_inst", "v_toggle/alu", "sub[2]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "alu.sv", 21, 13, ".top_tb.alu_inst", "v_toggle/alu", "sub[3]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "alu.sv", 21, 13, ".top_tb.alu_inst", "v_toggle/alu", "sub[4]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "alu.sv", 21, 13, ".top_tb.alu_inst", "v_toggle/alu", "sub[5]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "alu.sv", 21, 13, ".top_tb.alu_inst", "v_toggle/alu", "sub[6]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "alu.sv", 21, 13, ".top_tb.alu_inst", "v_toggle/alu", "sub[7]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "alu.sv", 22, 13, ".top_tb.alu_inst", "v_toggle/alu", "sr1[0]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "alu.sv", 22, 13, ".top_tb.alu_inst", "v_toggle/alu", "sr1[1]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "alu.sv", 22, 13, ".top_tb.alu_inst", "v_toggle/alu", "sr1[2]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "alu.sv", 22, 13, ".top_tb.alu_inst", "v_toggle/alu", "sr1[3]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "alu.sv", 22, 13, ".top_tb.alu_inst", "v_toggle/alu", "sr1[4]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "alu.sv", 22, 13, ".top_tb.alu_inst", "v_toggle/alu", "sr1[5]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "alu.sv", 22, 13, ".top_tb.alu_inst", "v_toggle/alu", "sr1[6]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "alu.sv", 22, 13, ".top_tb.alu_inst", "v_toggle/alu", "sr1[7]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "alu.sv", 23, 13, ".top_tb.alu_inst", "v_toggle/alu", "sl1[0]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "alu.sv", 23, 13, ".top_tb.alu_inst", "v_toggle/alu", "sl1[1]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[70]), first, "alu.sv", 23, 13, ".top_tb.alu_inst", "v_toggle/alu", "sl1[2]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "alu.sv", 23, 13, ".top_tb.alu_inst", "v_toggle/alu", "sl1[3]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "alu.sv", 23, 13, ".top_tb.alu_inst", "v_toggle/alu", "sl1[4]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "alu.sv", 23, 13, ".top_tb.alu_inst", "v_toggle/alu", "sl1[5]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[74]), first, "alu.sv", 23, 13, ".top_tb.alu_inst", "v_toggle/alu", "sl1[6]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[75]), first, "alu.sv", 23, 13, ".top_tb.alu_inst", "v_toggle/alu", "sl1[7]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[76]), first, "alu.sv", 24, 13, ".top_tb.alu_inst", "v_toggle/alu", "and1[0]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[77]), first, "alu.sv", 24, 13, ".top_tb.alu_inst", "v_toggle/alu", "and1[1]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[78]), first, "alu.sv", 24, 13, ".top_tb.alu_inst", "v_toggle/alu", "and1[2]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[79]), first, "alu.sv", 24, 13, ".top_tb.alu_inst", "v_toggle/alu", "and1[3]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[80]), first, "alu.sv", 24, 13, ".top_tb.alu_inst", "v_toggle/alu", "and1[4]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[81]), first, "alu.sv", 24, 13, ".top_tb.alu_inst", "v_toggle/alu", "and1[5]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[82]), first, "alu.sv", 24, 13, ".top_tb.alu_inst", "v_toggle/alu", "and1[6]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[83]), first, "alu.sv", 24, 13, ".top_tb.alu_inst", "v_toggle/alu", "and1[7]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[84]), first, "alu.sv", 25, 13, ".top_tb.alu_inst", "v_toggle/alu", "or1[0]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[85]), first, "alu.sv", 25, 13, ".top_tb.alu_inst", "v_toggle/alu", "or1[1]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[86]), first, "alu.sv", 25, 13, ".top_tb.alu_inst", "v_toggle/alu", "or1[2]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[87]), first, "alu.sv", 25, 13, ".top_tb.alu_inst", "v_toggle/alu", "or1[3]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[88]), first, "alu.sv", 25, 13, ".top_tb.alu_inst", "v_toggle/alu", "or1[4]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[89]), first, "alu.sv", 25, 13, ".top_tb.alu_inst", "v_toggle/alu", "or1[5]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[90]), first, "alu.sv", 25, 13, ".top_tb.alu_inst", "v_toggle/alu", "or1[6]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[91]), first, "alu.sv", 25, 13, ".top_tb.alu_inst", "v_toggle/alu", "or1[7]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "alu.sv", 26, 13, ".top_tb.alu_inst", "v_toggle/alu", "set[0]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "alu.sv", 26, 13, ".top_tb.alu_inst", "v_toggle/alu", "set[1]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "alu.sv", 26, 13, ".top_tb.alu_inst", "v_toggle/alu", "set[2]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "alu.sv", 26, 13, ".top_tb.alu_inst", "v_toggle/alu", "set[3]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "alu.sv", 26, 13, ".top_tb.alu_inst", "v_toggle/alu", "set[4]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "alu.sv", 26, 13, ".top_tb.alu_inst", "v_toggle/alu", "set[5]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "alu.sv", 26, 13, ".top_tb.alu_inst", "v_toggle/alu", "set[6]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "alu.sv", 26, 13, ".top_tb.alu_inst", "v_toggle/alu", "set[7]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "alu.sv", 27, 13, ".top_tb.alu_inst", "v_toggle/alu", "unchanged[0]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "alu.sv", 27, 13, ".top_tb.alu_inst", "v_toggle/alu", "unchanged[1]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "alu.sv", 27, 13, ".top_tb.alu_inst", "v_toggle/alu", "unchanged[2]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "alu.sv", 27, 13, ".top_tb.alu_inst", "v_toggle/alu", "unchanged[3]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "alu.sv", 27, 13, ".top_tb.alu_inst", "v_toggle/alu", "unchanged[4]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "alu.sv", 27, 13, ".top_tb.alu_inst", "v_toggle/alu", "unchanged[5]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "alu.sv", 27, 13, ".top_tb.alu_inst", "v_toggle/alu", "unchanged[6]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "alu.sv", 27, 13, ".top_tb.alu_inst", "v_toggle/alu", "unchanged[7]", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[92]), first, "alu.sv", 41, 5, ".top_tb.alu_inst", "v_branch/alu", "if", "41-42");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[93]), first, "alu.sv", 41, 6, ".top_tb.alu_inst", "v_branch/alu", "else", "");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[94]), first, "alu.sv", 38, 1, ".top_tb.alu_inst", "v_line/alu", "block", "38-39");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[95]), first, "alu.sv", 51, 15, ".top_tb.alu_inst", "v_line/alu", "case", "51");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[96]), first, "alu.sv", 52, 15, ".top_tb.alu_inst", "v_line/alu", "case", "52");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[97]), first, "alu.sv", 53, 15, ".top_tb.alu_inst", "v_line/alu", "case", "53");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[98]), first, "alu.sv", 54, 15, ".top_tb.alu_inst", "v_line/alu", "case", "54");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[99]), first, "alu.sv", 55, 15, ".top_tb.alu_inst", "v_line/alu", "case", "55");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[100]), first, "alu.sv", 56, 15, ".top_tb.alu_inst", "v_line/alu", "case", "56");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[101]), first, "alu.sv", 57, 15, ".top_tb.alu_inst", "v_line/alu", "case", "57");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[102]), first, "alu.sv", 58, 15, ".top_tb.alu_inst", "v_line/alu", "case", "58");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[103]), first, "alu.sv", 49, 1, ".top_tb.alu_inst", "v_line/alu", "block", "49-50");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[104]), first, "alu.sv", 68, 7, ".top_tb.alu_inst", "v_line/alu", "if", "68-69");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[105]), first, "alu.sv", 68, 8, ".top_tb.alu_inst", "v_line/alu", "else", "71-72");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[106]), first, "alu.sv", 65, 5, ".top_tb.alu_inst", "v_line/alu", "elsif", "65-66");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[107]), first, "alu.sv", 64, 1, ".top_tb.alu_inst", "v_line/alu", "block", "64");
}
