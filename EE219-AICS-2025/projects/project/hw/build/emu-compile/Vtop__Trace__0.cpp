// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

extern const VlWide<16>/*511:0*/ Vtop__ConstPool__CONST_h93e1b771_0;

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<16>/*511:0*/ __Vtemp_hca969ada__0;
    VlWide<16>/*511:0*/ __Vtemp_h2e8613d8__0;
    VlWide<16>/*511:0*/ __Vtemp_haeb98438__0;
    VlWide<16>/*511:0*/ __Vtemp_h93ad85a7__0;
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgQData(oldp+0,(vlSelf->top__DOT__ram_r_addr),64);
        bufp->chgQData(oldp+2,(vlSelf->top__DOT__ram_r_data),64);
        bufp->chgQData(oldp+4,(((1U == (IData)(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c))
                                 ? ((0x3fU >= (0x38U 
                                               & ((IData)(vlSelf->top__DOT__ram_r_addr) 
                                                  << 3U)))
                                     ? (((IData)(vlSelf->top__DOT__ram_w_ena)
                                          ? vlSelf->top__DOT__RV64I__DOT__MrCY1P97
                                          : 0ULL) << 
                                        (0x38U & ((IData)(vlSelf->top__DOT__ram_r_addr) 
                                                  << 3U)))
                                     : 0ULL) : ((2U 
                                                 == (IData)(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c))
                                                 ? 
                                                ((0x3fU 
                                                  >= 
                                                  (0x30U 
                                                   & ((IData)(
                                                              (vlSelf->top__DOT__ram_r_addr 
                                                               >> 1U)) 
                                                      << 4U)))
                                                  ? 
                                                 (((IData)(vlSelf->top__DOT__ram_w_ena)
                                                    ? vlSelf->top__DOT__RV64I__DOT__MrCY1P97
                                                    : 0ULL) 
                                                  << 
                                                  (0x30U 
                                                   & ((IData)(
                                                              (vlSelf->top__DOT__ram_r_addr 
                                                               >> 1U)) 
                                                      << 4U)))
                                                  : 0ULL)
                                                 : 
                                                ((3U 
                                                  == (IData)(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c))
                                                  ? 
                                                 ((0x3fU 
                                                   >= 
                                                   (0x20U 
                                                    & ((IData)(
                                                               (vlSelf->top__DOT__ram_r_addr 
                                                                >> 2U)) 
                                                       << 5U)))
                                                   ? 
                                                  (((IData)(vlSelf->top__DOT__ram_w_ena)
                                                     ? vlSelf->top__DOT__RV64I__DOT__MrCY1P97
                                                     : 0ULL) 
                                                   << 
                                                   (0x20U 
                                                    & ((IData)(
                                                               (vlSelf->top__DOT__ram_r_addr 
                                                                >> 2U)) 
                                                       << 5U)))
                                                   : 0ULL)
                                                  : 
                                                 ((7U 
                                                   == (IData)(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c))
                                                   ? 
                                                  ((IData)(vlSelf->top__DOT__ram_w_ena)
                                                    ? vlSelf->top__DOT__RV64I__DOT__MrCY1P97
                                                    : 0ULL)
                                                   : 0ULL))))),64);
        bufp->chgQData(oldp+6,(((IData)(vlSelf->top__DOT__ram_w_ena)
                                 ? ((1U == (IData)(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c))
                                     ? ((0U == (7U 
                                                & (IData)(vlSelf->top__DOT__ram_r_addr)))
                                         ? 0xffULL : 
                                        ((1U == (7U 
                                                 & (IData)(vlSelf->top__DOT__ram_r_addr)))
                                          ? 0xff00ULL
                                          : ((2U == 
                                              (7U & (IData)(vlSelf->top__DOT__ram_r_addr)))
                                              ? 0xff0000ULL
                                              : ((3U 
                                                  == 
                                                  (7U 
                                                   & (IData)(vlSelf->top__DOT__ram_r_addr)))
                                                  ? 0xff000000ULL
                                                  : 
                                                 ((4U 
                                                   == 
                                                   (7U 
                                                    & (IData)(vlSelf->top__DOT__ram_r_addr)))
                                                   ? 0xff00000000ULL
                                                   : 
                                                  ((5U 
                                                    == 
                                                    (7U 
                                                     & (IData)(vlSelf->top__DOT__ram_r_addr)))
                                                    ? 0xff0000000000ULL
                                                    : 
                                                   ((6U 
                                                     == 
                                                     (7U 
                                                      & (IData)(vlSelf->top__DOT__ram_r_addr)))
                                                     ? 0xff000000000000ULL
                                                     : 
                                                    ((7U 
                                                      == 
                                                      (7U 
                                                       & (IData)(vlSelf->top__DOT__ram_r_addr)))
                                                      ? 0xff00000000000000ULL
                                                      : 0ULL))))))))
                                     : ((2U == (IData)(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c))
                                         ? ((0U == 
                                             (3U & (IData)(
                                                           (vlSelf->top__DOT__ram_r_addr 
                                                            >> 1U))))
                                             ? 0xffffULL
                                             : ((1U 
                                                 == 
                                                 (3U 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__ram_r_addr 
                                                             >> 1U))))
                                                 ? 0xffff0000ULL
                                                 : 
                                                ((2U 
                                                  == 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__ram_r_addr 
                                                              >> 1U))))
                                                  ? 0xffff00000000ULL
                                                  : 
                                                 ((3U 
                                                   == 
                                                   (3U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__ram_r_addr 
                                                               >> 1U))))
                                                   ? 0xffff000000000000ULL
                                                   : 0ULL))))
                                         : ((3U == (IData)(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c))
                                             ? ((1U 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__ram_r_addr 
                                                            >> 2U)))
                                                 ? 0xffffffff00000000ULL
                                                 : 0xffffffffULL)
                                             : ((7U 
                                                 == (IData)(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c))
                                                 ? 0xffffffffffffffffULL
                                                 : 0ULL))))
                                 : 0ULL)),64);
        bufp->chgQData(oldp+8,(vlSelf->top__DOT__regs[0]),64);
        bufp->chgQData(oldp+10,(vlSelf->top__DOT__regs[1]),64);
        bufp->chgQData(oldp+12,(vlSelf->top__DOT__regs[2]),64);
        bufp->chgQData(oldp+14,(vlSelf->top__DOT__regs[3]),64);
        bufp->chgQData(oldp+16,(vlSelf->top__DOT__regs[4]),64);
        bufp->chgQData(oldp+18,(vlSelf->top__DOT__regs[5]),64);
        bufp->chgQData(oldp+20,(vlSelf->top__DOT__regs[6]),64);
        bufp->chgQData(oldp+22,(vlSelf->top__DOT__regs[7]),64);
        bufp->chgQData(oldp+24,(vlSelf->top__DOT__regs[8]),64);
        bufp->chgQData(oldp+26,(vlSelf->top__DOT__regs[9]),64);
        bufp->chgQData(oldp+28,(vlSelf->top__DOT__regs[10]),64);
        bufp->chgQData(oldp+30,(vlSelf->top__DOT__regs[11]),64);
        bufp->chgQData(oldp+32,(vlSelf->top__DOT__regs[12]),64);
        bufp->chgQData(oldp+34,(vlSelf->top__DOT__regs[13]),64);
        bufp->chgQData(oldp+36,(vlSelf->top__DOT__regs[14]),64);
        bufp->chgQData(oldp+38,(vlSelf->top__DOT__regs[15]),64);
        bufp->chgQData(oldp+40,(vlSelf->top__DOT__regs[16]),64);
        bufp->chgQData(oldp+42,(vlSelf->top__DOT__regs[17]),64);
        bufp->chgQData(oldp+44,(vlSelf->top__DOT__regs[18]),64);
        bufp->chgQData(oldp+46,(vlSelf->top__DOT__regs[19]),64);
        bufp->chgQData(oldp+48,(vlSelf->top__DOT__regs[20]),64);
        bufp->chgQData(oldp+50,(vlSelf->top__DOT__regs[21]),64);
        bufp->chgQData(oldp+52,(vlSelf->top__DOT__regs[22]),64);
        bufp->chgQData(oldp+54,(vlSelf->top__DOT__regs[23]),64);
        bufp->chgQData(oldp+56,(vlSelf->top__DOT__regs[24]),64);
        bufp->chgQData(oldp+58,(vlSelf->top__DOT__regs[25]),64);
        bufp->chgQData(oldp+60,(vlSelf->top__DOT__regs[26]),64);
        bufp->chgQData(oldp+62,(vlSelf->top__DOT__regs[27]),64);
        bufp->chgQData(oldp+64,(vlSelf->top__DOT__regs[28]),64);
        bufp->chgQData(oldp+66,(vlSelf->top__DOT__regs[29]),64);
        bufp->chgQData(oldp+68,(vlSelf->top__DOT__regs[30]),64);
        bufp->chgQData(oldp+70,(vlSelf->top__DOT__regs[31]),64);
        bufp->chgBit(oldp+72,(vlSelf->top__DOT__vec_rs1_r_ena));
        bufp->chgCData(oldp+73,(((IData)(vlSelf->top__DOT__vec_rs1_r_ena)
                                  ? (0x1fU & (vlSelf->top__DOT__inst 
                                              >> 0xfU))
                                  : 0U)),5);
        bufp->chgQData(oldp+74,(((IData)(vlSelf->top__DOT__vec_rs1_r_ena)
                                  ? vlSelf->top__DOT__regs
                                 [((IData)(vlSelf->top__DOT__vec_rs1_r_ena)
                                    ? (0x1fU & (vlSelf->top__DOT__inst 
                                                >> 0xfU))
                                    : 0U)] : 0ULL)),64);
        bufp->chgBit(oldp+76,(vlSelf->top__DOT__vram_r_ena));
        bufp->chgQData(oldp+77,(vlSelf->top__DOT__vram_r_addr),64);
        bufp->chgWData(oldp+79,(vlSelf->top__DOT__vram_r_data),512);
        bufp->chgQData(oldp+95,(((vlSelf->top__DOT__ram_r_addr 
                                  - 0x80000000ULL) 
                                 >> 3U)),64);
        bufp->chgQData(oldp+97,(((vlSelf->top__DOT__vram_r_addr 
                                  - 0x80000000ULL) 
                                 >> 3U)),64);
        bufp->chgQData(oldp+99,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[0]),64);
        bufp->chgQData(oldp+101,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[1]),64);
        bufp->chgQData(oldp+103,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[2]),64);
        bufp->chgQData(oldp+105,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[3]),64);
        bufp->chgQData(oldp+107,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[4]),64);
        bufp->chgQData(oldp+109,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[5]),64);
        bufp->chgQData(oldp+111,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[6]),64);
        bufp->chgQData(oldp+113,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[7]),64);
        bufp->chgQData(oldp+115,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[8]),64);
        bufp->chgQData(oldp+117,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[9]),64);
        bufp->chgQData(oldp+119,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[10]),64);
        bufp->chgQData(oldp+121,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[11]),64);
        bufp->chgQData(oldp+123,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[12]),64);
        bufp->chgQData(oldp+125,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[13]),64);
        bufp->chgQData(oldp+127,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[14]),64);
        bufp->chgQData(oldp+129,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[15]),64);
        bufp->chgQData(oldp+131,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[16]),64);
        bufp->chgQData(oldp+133,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[17]),64);
        bufp->chgQData(oldp+135,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[18]),64);
        bufp->chgQData(oldp+137,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[19]),64);
        bufp->chgQData(oldp+139,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[20]),64);
        bufp->chgQData(oldp+141,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[21]),64);
        bufp->chgQData(oldp+143,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[22]),64);
        bufp->chgQData(oldp+145,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[23]),64);
        bufp->chgQData(oldp+147,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[24]),64);
        bufp->chgQData(oldp+149,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[25]),64);
        bufp->chgQData(oldp+151,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[26]),64);
        bufp->chgQData(oldp+153,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[27]),64);
        bufp->chgQData(oldp+155,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[28]),64);
        bufp->chgQData(oldp+157,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[29]),64);
        bufp->chgQData(oldp+159,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[30]),64);
        bufp->chgQData(oldp+161,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[31]),64);
        bufp->chgBit(oldp+163,(((IData)(vlSelf->top__DOT__RV64I__DOT__yO7QPsT0y__DOT__Ha5GWqunguUc) 
                                | (IData)(vlSelf->top__DOT__RV64I__DOT__wWjUJ9g))));
        bufp->chgQData(oldp+164,(vlSelf->top__DOT__RV64I__DOT__epavvrInwBl),64);
        bufp->chgQData(oldp+166,(vlSelf->top__DOT__RV64I__DOT__X5fLoFTh),64);
        bufp->chgBit(oldp+168,(vlSelf->top__DOT__RV64I__DOT__plyN9CKEI));
        bufp->chgQData(oldp+169,(vlSelf->top__DOT__RV64I__DOT__MrCY1P97),64);
        bufp->chgBit(oldp+171,(vlSelf->top__DOT__RV64I__DOT__stsrseQpu));
        bufp->chgQData(oldp+172,(vlSelf->top__DOT__RV64I__DOT__BvitSgq1Hyw),64);
        bufp->chgQData(oldp+174,(vlSelf->top__DOT__RV64I__DOT__Lv5ku5dc93v),64);
        bufp->chgCData(oldp+176,(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1),8);
        bufp->chgQData(oldp+177,(((1U == (IData)(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c))
                                   ? (((- (QData)((IData)(
                                                          (1U 
                                                           & ((IData)(vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__ZxFtpStHVWm) 
                                                              >> 7U))))) 
                                       << 8U) | (QData)((IData)(vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__ZxFtpStHVWm)))
                                   : ((4U == (IData)(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c))
                                       ? (QData)((IData)(vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__ZxFtpStHVWm))
                                       : ((2U == (IData)(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c))
                                           ? (((- (QData)((IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__bEdFnqpLQFY) 
                                                                      >> 0xfU))))) 
                                               << 0x10U) 
                                              | (QData)((IData)(vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__bEdFnqpLQFY)))
                                           : ((5U == (IData)(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c))
                                               ? (QData)((IData)(vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__bEdFnqpLQFY))
                                               : ((3U 
                                                   == (IData)(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c))
                                                   ? 
                                                  (((QData)((IData)(
                                                                    (- (IData)(
                                                                               (vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__sKJju8Xgr7C 
                                                                                >> 0x1fU))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__sKJju8Xgr7C)))
                                                   : 
                                                  ((6U 
                                                    == (IData)(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c))
                                                    ? (QData)((IData)(vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__sKJju8Xgr7C))
                                                    : 
                                                   ((7U 
                                                     == (IData)(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c))
                                                     ? vlSelf->top__DOT__ram_r_data
                                                     : 0ULL)))))))),64);
        bufp->chgQData(oldp+179,(((IData)(vlSelf->top__DOT__ram_w_ena)
                                   ? vlSelf->top__DOT__RV64I__DOT__MrCY1P97
                                   : 0ULL)),64);
        bufp->chgBit(oldp+181,(vlSelf->top__DOT__RV64I__DOT__CP5BekSY));
        bufp->chgCData(oldp+182,(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w),5);
        bufp->chgQData(oldp+183,(vlSelf->top__DOT__RV64I__DOT__cSWijWYsS),64);
        bufp->chgIData(oldp+185,(vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__sKJju8Xgr7C),32);
        bufp->chgSData(oldp+186,(vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__bEdFnqpLQFY),16);
        bufp->chgCData(oldp+187,(vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__ZxFtpStHVWm),8);
        bufp->chgQData(oldp+188,(((1U & (IData)((vlSelf->top__DOT__ram_r_addr 
                                                 >> 2U)))
                                   ? 0xffffffff00000000ULL
                                   : 0xffffffffULL)),64);
        bufp->chgQData(oldp+190,(((0U == (3U & (IData)(
                                                       (vlSelf->top__DOT__ram_r_addr 
                                                        >> 1U))))
                                   ? 0xffffULL : ((1U 
                                                   == 
                                                   (3U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__ram_r_addr 
                                                               >> 1U))))
                                                   ? 0xffff0000ULL
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__ram_r_addr 
                                                                >> 1U))))
                                                    ? 0xffff00000000ULL
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (3U 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__ram_r_addr 
                                                                 >> 1U))))
                                                     ? 0xffff000000000000ULL
                                                     : 0ULL))))),64);
        bufp->chgQData(oldp+192,(((0U == (7U & (IData)(vlSelf->top__DOT__ram_r_addr)))
                                   ? 0xffULL : ((1U 
                                                 == 
                                                 (7U 
                                                  & (IData)(vlSelf->top__DOT__ram_r_addr)))
                                                 ? 0xff00ULL
                                                 : 
                                                ((2U 
                                                  == 
                                                  (7U 
                                                   & (IData)(vlSelf->top__DOT__ram_r_addr)))
                                                  ? 0xff0000ULL
                                                  : 
                                                 ((3U 
                                                   == 
                                                   (7U 
                                                    & (IData)(vlSelf->top__DOT__ram_r_addr)))
                                                   ? 0xff000000ULL
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (7U 
                                                     & (IData)(vlSelf->top__DOT__ram_r_addr)))
                                                    ? 0xff00000000ULL
                                                    : 
                                                   ((5U 
                                                     == 
                                                     (7U 
                                                      & (IData)(vlSelf->top__DOT__ram_r_addr)))
                                                     ? 0xff0000000000ULL
                                                     : 
                                                    ((6U 
                                                      == 
                                                      (7U 
                                                       & (IData)(vlSelf->top__DOT__ram_r_addr)))
                                                      ? 0xff000000000000ULL
                                                      : 
                                                     ((7U 
                                                       == 
                                                       (7U 
                                                        & (IData)(vlSelf->top__DOT__ram_r_addr)))
                                                       ? 0xff00000000000000ULL
                                                       : 0ULL))))))))),64);
        bufp->chgQData(oldp+194,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[0]),64);
        bufp->chgQData(oldp+196,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[1]),64);
        bufp->chgQData(oldp+198,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[2]),64);
        bufp->chgQData(oldp+200,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[3]),64);
        bufp->chgQData(oldp+202,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[4]),64);
        bufp->chgQData(oldp+204,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[5]),64);
        bufp->chgQData(oldp+206,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[6]),64);
        bufp->chgQData(oldp+208,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[7]),64);
        bufp->chgQData(oldp+210,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[8]),64);
        bufp->chgQData(oldp+212,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[9]),64);
        bufp->chgQData(oldp+214,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[10]),64);
        bufp->chgQData(oldp+216,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[11]),64);
        bufp->chgQData(oldp+218,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[12]),64);
        bufp->chgQData(oldp+220,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[13]),64);
        bufp->chgQData(oldp+222,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[14]),64);
        bufp->chgQData(oldp+224,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[15]),64);
        bufp->chgQData(oldp+226,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[16]),64);
        bufp->chgQData(oldp+228,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[17]),64);
        bufp->chgQData(oldp+230,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[18]),64);
        bufp->chgQData(oldp+232,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[19]),64);
        bufp->chgQData(oldp+234,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[20]),64);
        bufp->chgQData(oldp+236,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[21]),64);
        bufp->chgQData(oldp+238,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[22]),64);
        bufp->chgQData(oldp+240,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[23]),64);
        bufp->chgQData(oldp+242,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[24]),64);
        bufp->chgQData(oldp+244,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[25]),64);
        bufp->chgQData(oldp+246,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[26]),64);
        bufp->chgQData(oldp+248,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[27]),64);
        bufp->chgQData(oldp+250,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[28]),64);
        bufp->chgQData(oldp+252,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[29]),64);
        bufp->chgQData(oldp+254,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[30]),64);
        bufp->chgQData(oldp+256,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[31]),64);
        bufp->chgQData(oldp+258,(vlSelf->top__DOT__RV64I__DOT__yO7QPsT0y__DOT__ms6BV1DMBx),64);
        bufp->chgBit(oldp+260,(vlSelf->top__DOT__RV64I__DOT__yO7QPsT0y__DOT__Ha5GWqunguUc));
        bufp->chgBit(oldp+261,(vlSelf->top__DOT__RV_VECTOR__DOT__vs1_en));
        bufp->chgCData(oldp+262,(((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs1_en)
                                   ? (0x1fU & (vlSelf->top__DOT__inst 
                                               >> 0xfU))
                                   : 0U)),5);
        bufp->chgBit(oldp+263,(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en));
        bufp->chgCData(oldp+264,(vlSelf->top__DOT__RV_VECTOR__DOT__valu_opcode),8);
        bufp->chgWData(oldp+265,(vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1),512);
        bufp->chgWData(oldp+281,(vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2),512);
        bufp->chgBit(oldp+297,(vlSelf->top__DOT__RV_VECTOR__DOT__vid_wb_en));
        bufp->chgCData(oldp+298,(vlSelf->top__DOT__RV_VECTOR__DOT__vid_wb_addr),5);
        bufp->chgWData(oldp+299,(vlSelf->top__DOT__RV_VECTOR__DOT__valu_result),512);
        if (vlSelf->top__DOT__vram_r_ena) {
            __Vtemp_hca969ada__0[0U] = vlSelf->top__DOT__vram_r_data[0U];
            __Vtemp_hca969ada__0[1U] = vlSelf->top__DOT__vram_r_data[1U];
            __Vtemp_hca969ada__0[2U] = vlSelf->top__DOT__vram_r_data[2U];
            __Vtemp_hca969ada__0[3U] = vlSelf->top__DOT__vram_r_data[3U];
            __Vtemp_hca969ada__0[4U] = vlSelf->top__DOT__vram_r_data[4U];
            __Vtemp_hca969ada__0[5U] = vlSelf->top__DOT__vram_r_data[5U];
            __Vtemp_hca969ada__0[6U] = vlSelf->top__DOT__vram_r_data[6U];
            __Vtemp_hca969ada__0[7U] = vlSelf->top__DOT__vram_r_data[7U];
            __Vtemp_hca969ada__0[8U] = vlSelf->top__DOT__vram_r_data[8U];
            __Vtemp_hca969ada__0[9U] = vlSelf->top__DOT__vram_r_data[9U];
            __Vtemp_hca969ada__0[0xaU] = vlSelf->top__DOT__vram_r_data[0xaU];
            __Vtemp_hca969ada__0[0xbU] = vlSelf->top__DOT__vram_r_data[0xbU];
            __Vtemp_hca969ada__0[0xcU] = vlSelf->top__DOT__vram_r_data[0xcU];
            __Vtemp_hca969ada__0[0xdU] = vlSelf->top__DOT__vram_r_data[0xdU];
            __Vtemp_hca969ada__0[0xeU] = vlSelf->top__DOT__vram_r_data[0xeU];
            __Vtemp_hca969ada__0[0xfU] = vlSelf->top__DOT__vram_r_data[0xfU];
        } else {
            __Vtemp_hca969ada__0[0U] = vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[0U];
            __Vtemp_hca969ada__0[1U] = vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[1U];
            __Vtemp_hca969ada__0[2U] = vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[2U];
            __Vtemp_hca969ada__0[3U] = vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[3U];
            __Vtemp_hca969ada__0[4U] = vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[4U];
            __Vtemp_hca969ada__0[5U] = vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[5U];
            __Vtemp_hca969ada__0[6U] = vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[6U];
            __Vtemp_hca969ada__0[7U] = vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[7U];
            __Vtemp_hca969ada__0[8U] = vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[8U];
            __Vtemp_hca969ada__0[9U] = vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[9U];
            __Vtemp_hca969ada__0[0xaU] = vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[0xaU];
            __Vtemp_hca969ada__0[0xbU] = vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[0xbU];
            __Vtemp_hca969ada__0[0xcU] = vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[0xcU];
            __Vtemp_hca969ada__0[0xdU] = vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[0xdU];
            __Vtemp_hca969ada__0[0xeU] = vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[0xeU];
            __Vtemp_hca969ada__0[0xfU] = vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[0xfU];
        }
        bufp->chgWData(oldp+315,(__Vtemp_hca969ada__0),512);
        bufp->chgIData(oldp+331,(vlSelf->top__DOT__RV_VECTOR__DOT__u_execute__DOT__i),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+332,(vlSelf->top__DOT__inst),32);
        bufp->chgQData(oldp+333,(vlSelf->top__DOT__RV64I__DOT__eD5A2ng0__DOT__nlju),64);
        bufp->chgBit(oldp+335,(vlSelf->top__DOT__ram_r_ena));
        bufp->chgBit(oldp+336,(vlSelf->top__DOT__ram_w_ena));
        bufp->chgQData(oldp+337,(vlSelf->top__DOT__rom_rdata),64);
        bufp->chgQData(oldp+339,(((vlSelf->top__DOT__RV64I__DOT__eD5A2ng0__DOT__nlju 
                                   - 0x80000000ULL) 
                                  >> 3U)),64);
        bufp->chgCData(oldp+341,((0x1fU & ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_h9a5b570a__0)
                                            ? (0x1fU 
                                               & (vlSelf->top__DOT__inst 
                                                  >> 0xfU))
                                            : ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_hcca47e61__0)
                                                ? 0xaU
                                                : 0U)))),5);
        bufp->chgCData(oldp+342,((0x1fU & ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_h2869f3d5__0)
                                            ? (0x1fU 
                                               & (vlSelf->top__DOT__inst 
                                                  >> 0x14U))
                                            : ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_hcca47e61__0)
                                                ? 0xaU
                                                : 0U)))),5);
        bufp->chgBit(oldp+343,(((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__mXoVztmUwG) 
                                | ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__iBoxza85A) 
                                   | ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__sDefmLkP9) 
                                      | ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__tkNSPBbC4) 
                                         | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__dWa2lYZtw5)))))));
        bufp->chgBit(oldp+344,(vlSelf->top__DOT__RV64I__DOT__D7oya5Igy));
        bufp->chgQData(oldp+345,(vlSelf->top__DOT__RV64I__DOT__gY53pm6Uc1a5z),64);
        bufp->chgBit(oldp+347,(vlSelf->top__DOT__RV64I__DOT__wWjUJ9g));
        bufp->chgQData(oldp+348,(((IData)(vlSelf->top__DOT__RV64I__DOT__wWjUJ9g)
                                   ? vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_h79b66c0f__0
                                   : 0ULL)),64);
        bufp->chgCData(oldp+350,(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c),3);
        bufp->chgBit(oldp+351,(vlSelf->top__DOT__RV64I__DOT__z0MsdO));
        bufp->chgCData(oldp+352,(((IData)(vlSelf->top__DOT__RV64I__DOT__z0MsdO)
                                   ? (0x1fU & (vlSelf->top__DOT__inst 
                                               >> 7U))
                                   : 0U)),5);
        bufp->chgQData(oldp+353,(vlSelf->top__DOT__RV64I__DOT__eD5A2ng0__DOT__db),64);
        bufp->chgIData(oldp+355,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__H),32);
        bufp->chgQData(oldp+356,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[0]),64);
        bufp->chgQData(oldp+358,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[1]),64);
        bufp->chgQData(oldp+360,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[2]),64);
        bufp->chgQData(oldp+362,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[3]),64);
        bufp->chgQData(oldp+364,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[4]),64);
        bufp->chgQData(oldp+366,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[5]),64);
        bufp->chgQData(oldp+368,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[6]),64);
        bufp->chgQData(oldp+370,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[7]),64);
        bufp->chgQData(oldp+372,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[8]),64);
        bufp->chgQData(oldp+374,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[9]),64);
        bufp->chgQData(oldp+376,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[10]),64);
        bufp->chgQData(oldp+378,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[11]),64);
        bufp->chgQData(oldp+380,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[12]),64);
        bufp->chgQData(oldp+382,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[13]),64);
        bufp->chgQData(oldp+384,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[14]),64);
        bufp->chgQData(oldp+386,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[15]),64);
        bufp->chgQData(oldp+388,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[16]),64);
        bufp->chgQData(oldp+390,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[17]),64);
        bufp->chgQData(oldp+392,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[18]),64);
        bufp->chgQData(oldp+394,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[19]),64);
        bufp->chgQData(oldp+396,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[20]),64);
        bufp->chgQData(oldp+398,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[21]),64);
        bufp->chgQData(oldp+400,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[22]),64);
        bufp->chgQData(oldp+402,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[23]),64);
        bufp->chgQData(oldp+404,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[24]),64);
        bufp->chgQData(oldp+406,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[25]),64);
        bufp->chgQData(oldp+408,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[26]),64);
        bufp->chgQData(oldp+410,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[27]),64);
        bufp->chgQData(oldp+412,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[28]),64);
        bufp->chgQData(oldp+414,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[29]),64);
        bufp->chgQData(oldp+416,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[30]),64);
        bufp->chgQData(oldp+418,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[31]),64);
        bufp->chgIData(oldp+420,((0xfffff000U & vlSelf->top__DOT__inst)),32);
        bufp->chgIData(oldp+421,(((0x100000U & (vlSelf->top__DOT__inst 
                                                >> 0xbU)) 
                                  | ((0xff000U & vlSelf->top__DOT__inst) 
                                     | ((0x800U & (vlSelf->top__DOT__inst 
                                                   >> 9U)) 
                                        | (0x7feU & 
                                           (vlSelf->top__DOT__inst 
                                            >> 0x14U)))))),21);
        bufp->chgSData(oldp+422,(((0x1000U & (vlSelf->top__DOT__inst 
                                              >> 0x13U)) 
                                  | ((0x800U & (vlSelf->top__DOT__inst 
                                                << 4U)) 
                                     | ((0x7e0U & (vlSelf->top__DOT__inst 
                                                   >> 0x14U)) 
                                        | (0x1eU & 
                                           (vlSelf->top__DOT__inst 
                                            >> 7U)))))),13);
        bufp->chgSData(oldp+423,(((0xfe0U & (vlSelf->top__DOT__inst 
                                             >> 0x14U)) 
                                  | (0x1fU & (vlSelf->top__DOT__inst 
                                              >> 7U)))),12);
        bufp->chgSData(oldp+424,((vlSelf->top__DOT__inst 
                                  >> 0x14U)),12);
        bufp->chgCData(oldp+425,((vlSelf->top__DOT__inst 
                                  >> 0x19U)),7);
        bufp->chgCData(oldp+426,((0x1fU & (vlSelf->top__DOT__inst 
                                           >> 0x14U))),5);
        bufp->chgCData(oldp+427,((0x1fU & (vlSelf->top__DOT__inst 
                                           >> 0xfU))),5);
        bufp->chgCData(oldp+428,((7U & (vlSelf->top__DOT__inst 
                                        >> 0xcU))),3);
        bufp->chgCData(oldp+429,((0x1fU & (vlSelf->top__DOT__inst 
                                           >> 7U))),5);
        bufp->chgCData(oldp+430,((0x7fU & vlSelf->top__DOT__inst)),7);
        bufp->chgQData(oldp+431,(((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_hc944f92e__0)
                                   ? vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_h12d051ae__0
                                   : ((IData)(vlSelf->top__DOT__ram_r_ena)
                                       ? vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_h12d051ae__0
                                       : ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_hb88e4699__0)
                                           ? (QData)((IData)(
                                                             (0x3fU 
                                                              & (vlSelf->top__DOT__inst 
                                                                 >> 0x14U))))
                                           : ((IData)(vlSelf->top__DOT__ram_w_ena)
                                               ? ((
                                                   (- (QData)((IData)(
                                                                      (vlSelf->top__DOT__inst 
                                                                       >> 0x1fU)))) 
                                                   << 0xcU) 
                                                  | (QData)((IData)(
                                                                    ((0xfe0U 
                                                                      & (vlSelf->top__DOT__inst 
                                                                         >> 0x14U)) 
                                                                     | (0x1fU 
                                                                        & (vlSelf->top__DOT__inst 
                                                                           >> 7U))))))
                                               : ((0x6fU 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->top__DOT__inst))
                                                   ? vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_h79b66c0f__0
                                                   : 
                                                  ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT____VdfgTmp_hd1cd3f69__0)
                                                    ? 
                                                   (((QData)((IData)(
                                                                     (- (IData)(
                                                                                (vlSelf->top__DOT__inst 
                                                                                >> 0x1fU))))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      (0xfffff000U 
                                                                       & vlSelf->top__DOT__inst))))
                                                    : 0ULL))))))),64);
        bufp->chgBit(oldp+433,((0x37U == (0x7fU & vlSelf->top__DOT__inst))));
        bufp->chgBit(oldp+434,((0x17U == (0x7fU & vlSelf->top__DOT__inst))));
        bufp->chgBit(oldp+435,((0x6fU == (0x7fU & vlSelf->top__DOT__inst))));
        bufp->chgBit(oldp+436,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__ShXAdPB5O));
        bufp->chgBit(oldp+437,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__YWBp3rEd));
        bufp->chgBit(oldp+438,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__uP7s2O0a));
        bufp->chgBit(oldp+439,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__RA58HofI));
        bufp->chgBit(oldp+440,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__pX97QCtg));
        bufp->chgBit(oldp+441,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__IDE3hK2uz));
        bufp->chgBit(oldp+442,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__ycoCSReVj));
        bufp->chgBit(oldp+443,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__nIiCfXy));
        bufp->chgBit(oldp+444,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__INFMfFr));
        bufp->chgBit(oldp+445,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__OkydoJc));
        bufp->chgBit(oldp+446,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__G4mS4Qzt));
        bufp->chgBit(oldp+447,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__YdPZj3Dq));
        bufp->chgBit(oldp+448,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__C7aogzY));
        bufp->chgBit(oldp+449,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__voYw5no));
        bufp->chgBit(oldp+450,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__wWtUhx4));
        bufp->chgBit(oldp+451,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__SzgUUYWIJ));
        bufp->chgBit(oldp+452,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__u4KcONyV2));
        bufp->chgBit(oldp+453,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__GbT8XbTzEJ));
        bufp->chgBit(oldp+454,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__TYeqOMZzB));
        bufp->chgBit(oldp+455,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__hTsfETwt));
        bufp->chgBit(oldp+456,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__Pqvfr2zZE));
        bufp->chgBit(oldp+457,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__wa0Zzdgim));
        bufp->chgBit(oldp+458,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__QjcCGqv8V));
        bufp->chgBit(oldp+459,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__qMhxEPDIY));
        bufp->chgBit(oldp+460,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__wCAmo0T4));
        bufp->chgBit(oldp+461,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__nzJk0CYt));
        bufp->chgBit(oldp+462,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__KAZaki8Z));
        bufp->chgBit(oldp+463,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__GryHxQYb));
        bufp->chgBit(oldp+464,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__tM5lueYO1));
        bufp->chgBit(oldp+465,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__JxgCKb0r));
        bufp->chgBit(oldp+466,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__rFrUt3HA));
        bufp->chgBit(oldp+467,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__CsytHqHJ));
        bufp->chgBit(oldp+468,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__SVALFln));
        bufp->chgBit(oldp+469,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__yz2lRBz7));
        bufp->chgBit(oldp+470,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__WChG0j8I));
        bufp->chgBit(oldp+471,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__CzgHuUSI));
        bufp->chgBit(oldp+472,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__A66ucgr));
        bufp->chgBit(oldp+473,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__Ljqmq49));
        bufp->chgBit(oldp+474,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__mXoVztmUwG));
        bufp->chgBit(oldp+475,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__dWa2lYZtw5));
        bufp->chgBit(oldp+476,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__pngOwGCJUg));
        bufp->chgBit(oldp+477,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__CTHw1Tw4JF));
        bufp->chgBit(oldp+478,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__iBoxza85A));
        bufp->chgBit(oldp+479,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__sDefmLkP9));
        bufp->chgBit(oldp+480,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__tkNSPBbC4));
        bufp->chgBit(oldp+481,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__vkhuKAwC7));
        bufp->chgBit(oldp+482,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__LYUGKdPgW));
        bufp->chgBit(oldp+483,((0x6bU == vlSelf->top__DOT__inst)));
        bufp->chgBit(oldp+484,((0x5007fU == vlSelf->top__DOT__inst)));
        bufp->chgCData(oldp+485,((vlSelf->top__DOT__inst 
                                  >> 0x1aU)),6);
        bufp->chgBit(oldp+486,((1U & (vlSelf->top__DOT__inst 
                                      >> 0x19U))));
        bufp->chgBit(oldp+487,(vlSelf->top__DOT__RV_VECTOR__DOT__u_decode__DOT__inst_vle32_v));
        bufp->chgBit(oldp+488,(vlSelf->top__DOT__RV_VECTOR__DOT__u_decode__DOT__inst_vse32_v));
        bufp->chgBit(oldp+489,(vlSelf->top__DOT__RV_VECTOR__DOT__u_decode__DOT__inst_vadd_vv));
        bufp->chgBit(oldp+490,(vlSelf->top__DOT__RV_VECTOR__DOT__u_decode__DOT__inst_vmul_vv));
        bufp->chgIData(oldp+491,(vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__i),32);
        bufp->chgWData(oldp+492,(vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile[0]),512);
        bufp->chgWData(oldp+508,(vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile[1]),512);
        bufp->chgWData(oldp+524,(vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile[2]),512);
        bufp->chgWData(oldp+540,(vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile[3]),512);
        bufp->chgWData(oldp+556,(vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile[4]),512);
        bufp->chgWData(oldp+572,(vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile[5]),512);
        bufp->chgWData(oldp+588,(vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile[6]),512);
        bufp->chgWData(oldp+604,(vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile[7]),512);
        bufp->chgWData(oldp+620,(vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile[8]),512);
        bufp->chgWData(oldp+636,(vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile[9]),512);
        bufp->chgWData(oldp+652,(vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile[10]),512);
        bufp->chgWData(oldp+668,(vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile[11]),512);
        bufp->chgWData(oldp+684,(vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile[12]),512);
        bufp->chgWData(oldp+700,(vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile[13]),512);
        bufp->chgWData(oldp+716,(vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile[14]),512);
        bufp->chgWData(oldp+732,(vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile[15]),512);
        bufp->chgWData(oldp+748,(vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile[16]),512);
        bufp->chgWData(oldp+764,(vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile[17]),512);
        bufp->chgWData(oldp+780,(vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile[18]),512);
        bufp->chgWData(oldp+796,(vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile[19]),512);
        bufp->chgWData(oldp+812,(vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile[20]),512);
        bufp->chgWData(oldp+828,(vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile[21]),512);
        bufp->chgWData(oldp+844,(vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile[22]),512);
        bufp->chgWData(oldp+860,(vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile[23]),512);
        bufp->chgWData(oldp+876,(vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile[24]),512);
        bufp->chgWData(oldp+892,(vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile[25]),512);
        bufp->chgWData(oldp+908,(vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile[26]),512);
        bufp->chgWData(oldp+924,(vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile[27]),512);
        bufp->chgWData(oldp+940,(vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile[28]),512);
        bufp->chgWData(oldp+956,(vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile[29]),512);
        bufp->chgWData(oldp+972,(vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile[30]),512);
        bufp->chgWData(oldp+988,(vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile[31]),512);
    }
    bufp->chgBit(oldp+1004,(vlSelf->clock));
    bufp->chgBit(oldp+1005,(vlSelf->reset));
    bufp->chgBit(oldp+1006,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->chgBit(oldp+1007,(((~ (IData)(vlSelf->reset)) 
                             & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__u_decode__DOT__inst_vse32_v))));
    if (vlSelf->top__DOT__RV_VECTOR__DOT__u_decode__DOT__inst_vse32_v) {
        if (vlSelf->reset) {
            __Vtemp_h2e8613d8__0[0U] = Vtop__ConstPool__CONST_h93e1b771_0[0U];
            __Vtemp_h2e8613d8__0[1U] = Vtop__ConstPool__CONST_h93e1b771_0[1U];
            __Vtemp_h2e8613d8__0[2U] = Vtop__ConstPool__CONST_h93e1b771_0[2U];
            __Vtemp_h2e8613d8__0[3U] = Vtop__ConstPool__CONST_h93e1b771_0[3U];
            __Vtemp_h2e8613d8__0[4U] = Vtop__ConstPool__CONST_h93e1b771_0[4U];
            __Vtemp_h2e8613d8__0[5U] = Vtop__ConstPool__CONST_h93e1b771_0[5U];
            __Vtemp_h2e8613d8__0[6U] = Vtop__ConstPool__CONST_h93e1b771_0[6U];
            __Vtemp_h2e8613d8__0[7U] = Vtop__ConstPool__CONST_h93e1b771_0[7U];
            __Vtemp_h2e8613d8__0[8U] = Vtop__ConstPool__CONST_h93e1b771_0[8U];
            __Vtemp_h2e8613d8__0[9U] = Vtop__ConstPool__CONST_h93e1b771_0[9U];
            __Vtemp_h2e8613d8__0[0xaU] = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
            __Vtemp_h2e8613d8__0[0xbU] = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
            __Vtemp_h2e8613d8__0[0xcU] = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
            __Vtemp_h2e8613d8__0[0xdU] = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
            __Vtemp_h2e8613d8__0[0xeU] = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
            __Vtemp_h2e8613d8__0[0xfU] = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
        } else if (vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en) {
            __Vtemp_h2e8613d8__0[0U] = vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile
                [(0x1fU & (((~ (IData)(vlSelf->reset)) 
                            & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__u_decode__DOT__inst_vse32_v))
                            ? (vlSelf->top__DOT__inst 
                               >> 7U) : ((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en)
                                          ? (vlSelf->top__DOT__inst 
                                             >> 0x14U)
                                          : 0U)))][0U];
            __Vtemp_h2e8613d8__0[1U] = vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile
                [(0x1fU & (((~ (IData)(vlSelf->reset)) 
                            & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__u_decode__DOT__inst_vse32_v))
                            ? (vlSelf->top__DOT__inst 
                               >> 7U) : ((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en)
                                          ? (vlSelf->top__DOT__inst 
                                             >> 0x14U)
                                          : 0U)))][1U];
            __Vtemp_h2e8613d8__0[2U] = vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile
                [(0x1fU & (((~ (IData)(vlSelf->reset)) 
                            & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__u_decode__DOT__inst_vse32_v))
                            ? (vlSelf->top__DOT__inst 
                               >> 7U) : ((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en)
                                          ? (vlSelf->top__DOT__inst 
                                             >> 0x14U)
                                          : 0U)))][2U];
            __Vtemp_h2e8613d8__0[3U] = vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile
                [(0x1fU & (((~ (IData)(vlSelf->reset)) 
                            & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__u_decode__DOT__inst_vse32_v))
                            ? (vlSelf->top__DOT__inst 
                               >> 7U) : ((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en)
                                          ? (vlSelf->top__DOT__inst 
                                             >> 0x14U)
                                          : 0U)))][3U];
            __Vtemp_h2e8613d8__0[4U] = vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile
                [(0x1fU & (((~ (IData)(vlSelf->reset)) 
                            & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__u_decode__DOT__inst_vse32_v))
                            ? (vlSelf->top__DOT__inst 
                               >> 7U) : ((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en)
                                          ? (vlSelf->top__DOT__inst 
                                             >> 0x14U)
                                          : 0U)))][4U];
            __Vtemp_h2e8613d8__0[5U] = vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile
                [(0x1fU & (((~ (IData)(vlSelf->reset)) 
                            & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__u_decode__DOT__inst_vse32_v))
                            ? (vlSelf->top__DOT__inst 
                               >> 7U) : ((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en)
                                          ? (vlSelf->top__DOT__inst 
                                             >> 0x14U)
                                          : 0U)))][5U];
            __Vtemp_h2e8613d8__0[6U] = vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile
                [(0x1fU & (((~ (IData)(vlSelf->reset)) 
                            & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__u_decode__DOT__inst_vse32_v))
                            ? (vlSelf->top__DOT__inst 
                               >> 7U) : ((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en)
                                          ? (vlSelf->top__DOT__inst 
                                             >> 0x14U)
                                          : 0U)))][6U];
            __Vtemp_h2e8613d8__0[7U] = vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile
                [(0x1fU & (((~ (IData)(vlSelf->reset)) 
                            & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__u_decode__DOT__inst_vse32_v))
                            ? (vlSelf->top__DOT__inst 
                               >> 7U) : ((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en)
                                          ? (vlSelf->top__DOT__inst 
                                             >> 0x14U)
                                          : 0U)))][7U];
            __Vtemp_h2e8613d8__0[8U] = vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile
                [(0x1fU & (((~ (IData)(vlSelf->reset)) 
                            & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__u_decode__DOT__inst_vse32_v))
                            ? (vlSelf->top__DOT__inst 
                               >> 7U) : ((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en)
                                          ? (vlSelf->top__DOT__inst 
                                             >> 0x14U)
                                          : 0U)))][8U];
            __Vtemp_h2e8613d8__0[9U] = vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile
                [(0x1fU & (((~ (IData)(vlSelf->reset)) 
                            & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__u_decode__DOT__inst_vse32_v))
                            ? (vlSelf->top__DOT__inst 
                               >> 7U) : ((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en)
                                          ? (vlSelf->top__DOT__inst 
                                             >> 0x14U)
                                          : 0U)))][9U];
            __Vtemp_h2e8613d8__0[0xaU] = vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile
                [(0x1fU & (((~ (IData)(vlSelf->reset)) 
                            & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__u_decode__DOT__inst_vse32_v))
                            ? (vlSelf->top__DOT__inst 
                               >> 7U) : ((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en)
                                          ? (vlSelf->top__DOT__inst 
                                             >> 0x14U)
                                          : 0U)))][0xaU];
            __Vtemp_h2e8613d8__0[0xbU] = vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile
                [(0x1fU & (((~ (IData)(vlSelf->reset)) 
                            & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__u_decode__DOT__inst_vse32_v))
                            ? (vlSelf->top__DOT__inst 
                               >> 7U) : ((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en)
                                          ? (vlSelf->top__DOT__inst 
                                             >> 0x14U)
                                          : 0U)))][0xbU];
            __Vtemp_h2e8613d8__0[0xcU] = vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile
                [(0x1fU & (((~ (IData)(vlSelf->reset)) 
                            & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__u_decode__DOT__inst_vse32_v))
                            ? (vlSelf->top__DOT__inst 
                               >> 7U) : ((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en)
                                          ? (vlSelf->top__DOT__inst 
                                             >> 0x14U)
                                          : 0U)))][0xcU];
            __Vtemp_h2e8613d8__0[0xdU] = vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile
                [(0x1fU & (((~ (IData)(vlSelf->reset)) 
                            & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__u_decode__DOT__inst_vse32_v))
                            ? (vlSelf->top__DOT__inst 
                               >> 7U) : ((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en)
                                          ? (vlSelf->top__DOT__inst 
                                             >> 0x14U)
                                          : 0U)))][0xdU];
            __Vtemp_h2e8613d8__0[0xeU] = vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile
                [(0x1fU & (((~ (IData)(vlSelf->reset)) 
                            & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__u_decode__DOT__inst_vse32_v))
                            ? (vlSelf->top__DOT__inst 
                               >> 7U) : ((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en)
                                          ? (vlSelf->top__DOT__inst 
                                             >> 0x14U)
                                          : 0U)))][0xeU];
            __Vtemp_h2e8613d8__0[0xfU] = vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile
                [(0x1fU & (((~ (IData)(vlSelf->reset)) 
                            & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__u_decode__DOT__inst_vse32_v))
                            ? (vlSelf->top__DOT__inst 
                               >> 7U) : ((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en)
                                          ? (vlSelf->top__DOT__inst 
                                             >> 0x14U)
                                          : 0U)))][0xfU];
        } else {
            __Vtemp_h2e8613d8__0[0U] = Vtop__ConstPool__CONST_h93e1b771_0[0U];
            __Vtemp_h2e8613d8__0[1U] = Vtop__ConstPool__CONST_h93e1b771_0[1U];
            __Vtemp_h2e8613d8__0[2U] = Vtop__ConstPool__CONST_h93e1b771_0[2U];
            __Vtemp_h2e8613d8__0[3U] = Vtop__ConstPool__CONST_h93e1b771_0[3U];
            __Vtemp_h2e8613d8__0[4U] = Vtop__ConstPool__CONST_h93e1b771_0[4U];
            __Vtemp_h2e8613d8__0[5U] = Vtop__ConstPool__CONST_h93e1b771_0[5U];
            __Vtemp_h2e8613d8__0[6U] = Vtop__ConstPool__CONST_h93e1b771_0[6U];
            __Vtemp_h2e8613d8__0[7U] = Vtop__ConstPool__CONST_h93e1b771_0[7U];
            __Vtemp_h2e8613d8__0[8U] = Vtop__ConstPool__CONST_h93e1b771_0[8U];
            __Vtemp_h2e8613d8__0[9U] = Vtop__ConstPool__CONST_h93e1b771_0[9U];
            __Vtemp_h2e8613d8__0[0xaU] = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
            __Vtemp_h2e8613d8__0[0xbU] = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
            __Vtemp_h2e8613d8__0[0xcU] = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
            __Vtemp_h2e8613d8__0[0xdU] = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
            __Vtemp_h2e8613d8__0[0xeU] = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
            __Vtemp_h2e8613d8__0[0xfU] = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
        }
    } else {
        __Vtemp_h2e8613d8__0[0U] = Vtop__ConstPool__CONST_h93e1b771_0[0U];
        __Vtemp_h2e8613d8__0[1U] = Vtop__ConstPool__CONST_h93e1b771_0[1U];
        __Vtemp_h2e8613d8__0[2U] = Vtop__ConstPool__CONST_h93e1b771_0[2U];
        __Vtemp_h2e8613d8__0[3U] = Vtop__ConstPool__CONST_h93e1b771_0[3U];
        __Vtemp_h2e8613d8__0[4U] = Vtop__ConstPool__CONST_h93e1b771_0[4U];
        __Vtemp_h2e8613d8__0[5U] = Vtop__ConstPool__CONST_h93e1b771_0[5U];
        __Vtemp_h2e8613d8__0[6U] = Vtop__ConstPool__CONST_h93e1b771_0[6U];
        __Vtemp_h2e8613d8__0[7U] = Vtop__ConstPool__CONST_h93e1b771_0[7U];
        __Vtemp_h2e8613d8__0[8U] = Vtop__ConstPool__CONST_h93e1b771_0[8U];
        __Vtemp_h2e8613d8__0[9U] = Vtop__ConstPool__CONST_h93e1b771_0[9U];
        __Vtemp_h2e8613d8__0[0xaU] = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
        __Vtemp_h2e8613d8__0[0xbU] = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
        __Vtemp_h2e8613d8__0[0xcU] = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
        __Vtemp_h2e8613d8__0[0xdU] = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
        __Vtemp_h2e8613d8__0[0xeU] = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
        __Vtemp_h2e8613d8__0[0xfU] = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
    }
    bufp->chgWData(oldp+1008,(__Vtemp_h2e8613d8__0),512);
    if (vlSelf->reset) {
        __Vtemp_haeb98438__0[0U] = Vtop__ConstPool__CONST_h93e1b771_0[0U];
        __Vtemp_haeb98438__0[1U] = Vtop__ConstPool__CONST_h93e1b771_0[1U];
        __Vtemp_haeb98438__0[2U] = Vtop__ConstPool__CONST_h93e1b771_0[2U];
        __Vtemp_haeb98438__0[3U] = Vtop__ConstPool__CONST_h93e1b771_0[3U];
        __Vtemp_haeb98438__0[4U] = Vtop__ConstPool__CONST_h93e1b771_0[4U];
        __Vtemp_haeb98438__0[5U] = Vtop__ConstPool__CONST_h93e1b771_0[5U];
        __Vtemp_haeb98438__0[6U] = Vtop__ConstPool__CONST_h93e1b771_0[6U];
        __Vtemp_haeb98438__0[7U] = Vtop__ConstPool__CONST_h93e1b771_0[7U];
        __Vtemp_haeb98438__0[8U] = Vtop__ConstPool__CONST_h93e1b771_0[8U];
        __Vtemp_haeb98438__0[9U] = Vtop__ConstPool__CONST_h93e1b771_0[9U];
        __Vtemp_haeb98438__0[0xaU] = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
        __Vtemp_haeb98438__0[0xbU] = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
        __Vtemp_haeb98438__0[0xcU] = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
        __Vtemp_haeb98438__0[0xdU] = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
        __Vtemp_haeb98438__0[0xeU] = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
        __Vtemp_haeb98438__0[0xfU] = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
    } else if (vlSelf->top__DOT__RV_VECTOR__DOT__vs1_en) {
        __Vtemp_haeb98438__0[0U] = vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile
            [((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs1_en)
               ? (0x1fU & (vlSelf->top__DOT__inst >> 0xfU))
               : 0U)][0U];
        __Vtemp_haeb98438__0[1U] = vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile
            [((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs1_en)
               ? (0x1fU & (vlSelf->top__DOT__inst >> 0xfU))
               : 0U)][1U];
        __Vtemp_haeb98438__0[2U] = vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile
            [((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs1_en)
               ? (0x1fU & (vlSelf->top__DOT__inst >> 0xfU))
               : 0U)][2U];
        __Vtemp_haeb98438__0[3U] = vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile
            [((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs1_en)
               ? (0x1fU & (vlSelf->top__DOT__inst >> 0xfU))
               : 0U)][3U];
        __Vtemp_haeb98438__0[4U] = vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile
            [((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs1_en)
               ? (0x1fU & (vlSelf->top__DOT__inst >> 0xfU))
               : 0U)][4U];
        __Vtemp_haeb98438__0[5U] = vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile
            [((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs1_en)
               ? (0x1fU & (vlSelf->top__DOT__inst >> 0xfU))
               : 0U)][5U];
        __Vtemp_haeb98438__0[6U] = vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile
            [((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs1_en)
               ? (0x1fU & (vlSelf->top__DOT__inst >> 0xfU))
               : 0U)][6U];
        __Vtemp_haeb98438__0[7U] = vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile
            [((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs1_en)
               ? (0x1fU & (vlSelf->top__DOT__inst >> 0xfU))
               : 0U)][7U];
        __Vtemp_haeb98438__0[8U] = vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile
            [((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs1_en)
               ? (0x1fU & (vlSelf->top__DOT__inst >> 0xfU))
               : 0U)][8U];
        __Vtemp_haeb98438__0[9U] = vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile
            [((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs1_en)
               ? (0x1fU & (vlSelf->top__DOT__inst >> 0xfU))
               : 0U)][9U];
        __Vtemp_haeb98438__0[0xaU] = vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile
            [((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs1_en)
               ? (0x1fU & (vlSelf->top__DOT__inst >> 0xfU))
               : 0U)][0xaU];
        __Vtemp_haeb98438__0[0xbU] = vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile
            [((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs1_en)
               ? (0x1fU & (vlSelf->top__DOT__inst >> 0xfU))
               : 0U)][0xbU];
        __Vtemp_haeb98438__0[0xcU] = vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile
            [((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs1_en)
               ? (0x1fU & (vlSelf->top__DOT__inst >> 0xfU))
               : 0U)][0xcU];
        __Vtemp_haeb98438__0[0xdU] = vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile
            [((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs1_en)
               ? (0x1fU & (vlSelf->top__DOT__inst >> 0xfU))
               : 0U)][0xdU];
        __Vtemp_haeb98438__0[0xeU] = vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile
            [((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs1_en)
               ? (0x1fU & (vlSelf->top__DOT__inst >> 0xfU))
               : 0U)][0xeU];
        __Vtemp_haeb98438__0[0xfU] = vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile
            [((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs1_en)
               ? (0x1fU & (vlSelf->top__DOT__inst >> 0xfU))
               : 0U)][0xfU];
    } else {
        __Vtemp_haeb98438__0[0U] = Vtop__ConstPool__CONST_h93e1b771_0[0U];
        __Vtemp_haeb98438__0[1U] = Vtop__ConstPool__CONST_h93e1b771_0[1U];
        __Vtemp_haeb98438__0[2U] = Vtop__ConstPool__CONST_h93e1b771_0[2U];
        __Vtemp_haeb98438__0[3U] = Vtop__ConstPool__CONST_h93e1b771_0[3U];
        __Vtemp_haeb98438__0[4U] = Vtop__ConstPool__CONST_h93e1b771_0[4U];
        __Vtemp_haeb98438__0[5U] = Vtop__ConstPool__CONST_h93e1b771_0[5U];
        __Vtemp_haeb98438__0[6U] = Vtop__ConstPool__CONST_h93e1b771_0[6U];
        __Vtemp_haeb98438__0[7U] = Vtop__ConstPool__CONST_h93e1b771_0[7U];
        __Vtemp_haeb98438__0[8U] = Vtop__ConstPool__CONST_h93e1b771_0[8U];
        __Vtemp_haeb98438__0[9U] = Vtop__ConstPool__CONST_h93e1b771_0[9U];
        __Vtemp_haeb98438__0[0xaU] = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
        __Vtemp_haeb98438__0[0xbU] = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
        __Vtemp_haeb98438__0[0xcU] = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
        __Vtemp_haeb98438__0[0xdU] = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
        __Vtemp_haeb98438__0[0xeU] = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
        __Vtemp_haeb98438__0[0xfU] = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
    }
    bufp->chgWData(oldp+1024,(__Vtemp_haeb98438__0),512);
    bufp->chgCData(oldp+1040,((0x1fU & (((~ (IData)(vlSelf->reset)) 
                                         & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__u_decode__DOT__inst_vse32_v))
                                         ? (vlSelf->top__DOT__inst 
                                            >> 7U) : 
                                        ((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en)
                                          ? (vlSelf->top__DOT__inst 
                                             >> 0x14U)
                                          : 0U)))),5);
    if (vlSelf->reset) {
        __Vtemp_h93ad85a7__0[0U] = Vtop__ConstPool__CONST_h93e1b771_0[0U];
        __Vtemp_h93ad85a7__0[1U] = Vtop__ConstPool__CONST_h93e1b771_0[1U];
        __Vtemp_h93ad85a7__0[2U] = Vtop__ConstPool__CONST_h93e1b771_0[2U];
        __Vtemp_h93ad85a7__0[3U] = Vtop__ConstPool__CONST_h93e1b771_0[3U];
        __Vtemp_h93ad85a7__0[4U] = Vtop__ConstPool__CONST_h93e1b771_0[4U];
        __Vtemp_h93ad85a7__0[5U] = Vtop__ConstPool__CONST_h93e1b771_0[5U];
        __Vtemp_h93ad85a7__0[6U] = Vtop__ConstPool__CONST_h93e1b771_0[6U];
        __Vtemp_h93ad85a7__0[7U] = Vtop__ConstPool__CONST_h93e1b771_0[7U];
        __Vtemp_h93ad85a7__0[8U] = Vtop__ConstPool__CONST_h93e1b771_0[8U];
        __Vtemp_h93ad85a7__0[9U] = Vtop__ConstPool__CONST_h93e1b771_0[9U];
        __Vtemp_h93ad85a7__0[0xaU] = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
        __Vtemp_h93ad85a7__0[0xbU] = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
        __Vtemp_h93ad85a7__0[0xcU] = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
        __Vtemp_h93ad85a7__0[0xdU] = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
        __Vtemp_h93ad85a7__0[0xeU] = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
        __Vtemp_h93ad85a7__0[0xfU] = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
    } else if (vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en) {
        __Vtemp_h93ad85a7__0[0U] = vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile
            [(0x1fU & (((~ (IData)(vlSelf->reset)) 
                        & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__u_decode__DOT__inst_vse32_v))
                        ? (vlSelf->top__DOT__inst >> 7U)
                        : ((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en)
                            ? (vlSelf->top__DOT__inst 
                               >> 0x14U) : 0U)))][0U];
        __Vtemp_h93ad85a7__0[1U] = vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile
            [(0x1fU & (((~ (IData)(vlSelf->reset)) 
                        & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__u_decode__DOT__inst_vse32_v))
                        ? (vlSelf->top__DOT__inst >> 7U)
                        : ((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en)
                            ? (vlSelf->top__DOT__inst 
                               >> 0x14U) : 0U)))][1U];
        __Vtemp_h93ad85a7__0[2U] = vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile
            [(0x1fU & (((~ (IData)(vlSelf->reset)) 
                        & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__u_decode__DOT__inst_vse32_v))
                        ? (vlSelf->top__DOT__inst >> 7U)
                        : ((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en)
                            ? (vlSelf->top__DOT__inst 
                               >> 0x14U) : 0U)))][2U];
        __Vtemp_h93ad85a7__0[3U] = vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile
            [(0x1fU & (((~ (IData)(vlSelf->reset)) 
                        & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__u_decode__DOT__inst_vse32_v))
                        ? (vlSelf->top__DOT__inst >> 7U)
                        : ((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en)
                            ? (vlSelf->top__DOT__inst 
                               >> 0x14U) : 0U)))][3U];
        __Vtemp_h93ad85a7__0[4U] = vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile
            [(0x1fU & (((~ (IData)(vlSelf->reset)) 
                        & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__u_decode__DOT__inst_vse32_v))
                        ? (vlSelf->top__DOT__inst >> 7U)
                        : ((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en)
                            ? (vlSelf->top__DOT__inst 
                               >> 0x14U) : 0U)))][4U];
        __Vtemp_h93ad85a7__0[5U] = vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile
            [(0x1fU & (((~ (IData)(vlSelf->reset)) 
                        & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__u_decode__DOT__inst_vse32_v))
                        ? (vlSelf->top__DOT__inst >> 7U)
                        : ((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en)
                            ? (vlSelf->top__DOT__inst 
                               >> 0x14U) : 0U)))][5U];
        __Vtemp_h93ad85a7__0[6U] = vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile
            [(0x1fU & (((~ (IData)(vlSelf->reset)) 
                        & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__u_decode__DOT__inst_vse32_v))
                        ? (vlSelf->top__DOT__inst >> 7U)
                        : ((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en)
                            ? (vlSelf->top__DOT__inst 
                               >> 0x14U) : 0U)))][6U];
        __Vtemp_h93ad85a7__0[7U] = vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile
            [(0x1fU & (((~ (IData)(vlSelf->reset)) 
                        & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__u_decode__DOT__inst_vse32_v))
                        ? (vlSelf->top__DOT__inst >> 7U)
                        : ((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en)
                            ? (vlSelf->top__DOT__inst 
                               >> 0x14U) : 0U)))][7U];
        __Vtemp_h93ad85a7__0[8U] = vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile
            [(0x1fU & (((~ (IData)(vlSelf->reset)) 
                        & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__u_decode__DOT__inst_vse32_v))
                        ? (vlSelf->top__DOT__inst >> 7U)
                        : ((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en)
                            ? (vlSelf->top__DOT__inst 
                               >> 0x14U) : 0U)))][8U];
        __Vtemp_h93ad85a7__0[9U] = vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile
            [(0x1fU & (((~ (IData)(vlSelf->reset)) 
                        & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__u_decode__DOT__inst_vse32_v))
                        ? (vlSelf->top__DOT__inst >> 7U)
                        : ((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en)
                            ? (vlSelf->top__DOT__inst 
                               >> 0x14U) : 0U)))][9U];
        __Vtemp_h93ad85a7__0[0xaU] = vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile
            [(0x1fU & (((~ (IData)(vlSelf->reset)) 
                        & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__u_decode__DOT__inst_vse32_v))
                        ? (vlSelf->top__DOT__inst >> 7U)
                        : ((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en)
                            ? (vlSelf->top__DOT__inst 
                               >> 0x14U) : 0U)))][0xaU];
        __Vtemp_h93ad85a7__0[0xbU] = vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile
            [(0x1fU & (((~ (IData)(vlSelf->reset)) 
                        & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__u_decode__DOT__inst_vse32_v))
                        ? (vlSelf->top__DOT__inst >> 7U)
                        : ((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en)
                            ? (vlSelf->top__DOT__inst 
                               >> 0x14U) : 0U)))][0xbU];
        __Vtemp_h93ad85a7__0[0xcU] = vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile
            [(0x1fU & (((~ (IData)(vlSelf->reset)) 
                        & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__u_decode__DOT__inst_vse32_v))
                        ? (vlSelf->top__DOT__inst >> 7U)
                        : ((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en)
                            ? (vlSelf->top__DOT__inst 
                               >> 0x14U) : 0U)))][0xcU];
        __Vtemp_h93ad85a7__0[0xdU] = vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile
            [(0x1fU & (((~ (IData)(vlSelf->reset)) 
                        & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__u_decode__DOT__inst_vse32_v))
                        ? (vlSelf->top__DOT__inst >> 7U)
                        : ((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en)
                            ? (vlSelf->top__DOT__inst 
                               >> 0x14U) : 0U)))][0xdU];
        __Vtemp_h93ad85a7__0[0xeU] = vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile
            [(0x1fU & (((~ (IData)(vlSelf->reset)) 
                        & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__u_decode__DOT__inst_vse32_v))
                        ? (vlSelf->top__DOT__inst >> 7U)
                        : ((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en)
                            ? (vlSelf->top__DOT__inst 
                               >> 0x14U) : 0U)))][0xeU];
        __Vtemp_h93ad85a7__0[0xfU] = vlSelf->top__DOT__RV_VECTOR__DOT__u_vregfile__DOT__vregfile
            [(0x1fU & (((~ (IData)(vlSelf->reset)) 
                        & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__u_decode__DOT__inst_vse32_v))
                        ? (vlSelf->top__DOT__inst >> 7U)
                        : ((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en)
                            ? (vlSelf->top__DOT__inst 
                               >> 0x14U) : 0U)))][0xfU];
    } else {
        __Vtemp_h93ad85a7__0[0U] = Vtop__ConstPool__CONST_h93e1b771_0[0U];
        __Vtemp_h93ad85a7__0[1U] = Vtop__ConstPool__CONST_h93e1b771_0[1U];
        __Vtemp_h93ad85a7__0[2U] = Vtop__ConstPool__CONST_h93e1b771_0[2U];
        __Vtemp_h93ad85a7__0[3U] = Vtop__ConstPool__CONST_h93e1b771_0[3U];
        __Vtemp_h93ad85a7__0[4U] = Vtop__ConstPool__CONST_h93e1b771_0[4U];
        __Vtemp_h93ad85a7__0[5U] = Vtop__ConstPool__CONST_h93e1b771_0[5U];
        __Vtemp_h93ad85a7__0[6U] = Vtop__ConstPool__CONST_h93e1b771_0[6U];
        __Vtemp_h93ad85a7__0[7U] = Vtop__ConstPool__CONST_h93e1b771_0[7U];
        __Vtemp_h93ad85a7__0[8U] = Vtop__ConstPool__CONST_h93e1b771_0[8U];
        __Vtemp_h93ad85a7__0[9U] = Vtop__ConstPool__CONST_h93e1b771_0[9U];
        __Vtemp_h93ad85a7__0[0xaU] = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
        __Vtemp_h93ad85a7__0[0xbU] = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
        __Vtemp_h93ad85a7__0[0xcU] = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
        __Vtemp_h93ad85a7__0[0xdU] = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
        __Vtemp_h93ad85a7__0[0xeU] = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
        __Vtemp_h93ad85a7__0[0xfU] = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
    }
    bufp->chgWData(oldp+1041,(__Vtemp_h93ad85a7__0),512);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
