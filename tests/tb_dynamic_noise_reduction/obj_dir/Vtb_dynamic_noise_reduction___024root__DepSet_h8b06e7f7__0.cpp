// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_dynamic_noise_reduction.h for the primary calling header

#include "Vtb_dynamic_noise_reduction__pch.h"
#include "Vtb_dynamic_noise_reduction___024root.h"

VlCoroutine Vtb_dynamic_noise_reduction___024root___eval_initial__TOP__Vtiming__0(Vtb_dynamic_noise_reduction___024root* vlSelf);
VlCoroutine Vtb_dynamic_noise_reduction___024root___eval_initial__TOP__Vtiming__1(Vtb_dynamic_noise_reduction___024root* vlSelf);
VlCoroutine Vtb_dynamic_noise_reduction___024root___eval_initial__TOP__Vtiming__2(Vtb_dynamic_noise_reduction___024root* vlSelf);

void Vtb_dynamic_noise_reduction___024root___eval_initial(Vtb_dynamic_noise_reduction___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dynamic_noise_reduction___024root___eval_initial\n"); );
    Vtb_dynamic_noise_reduction__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vtb_dynamic_noise_reduction___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_dynamic_noise_reduction___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtb_dynamic_noise_reduction___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_dynamic_noise_reduction__DOT__clk__0 
        = vlSelfRef.tb_dynamic_noise_reduction__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_dynamic_noise_reduction__DOT__reset__0 
        = vlSelfRef.tb_dynamic_noise_reduction__DOT__reset;
}

VL_INLINE_OPT VlCoroutine Vtb_dynamic_noise_reduction___024root___eval_initial__TOP__Vtiming__1(Vtb_dynamic_noise_reduction___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dynamic_noise_reduction___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_dynamic_noise_reduction__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             15);
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk 
            = (1U & (~ (IData)(vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk)));
    }
}

VL_INLINE_OPT VlCoroutine Vtb_dynamic_noise_reduction___024root___eval_initial__TOP__Vtiming__2(Vtb_dynamic_noise_reduction___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dynamic_noise_reduction___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vtb_dynamic_noise_reduction__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             14);
        vlSelfRef.tb_dynamic_noise_reduction__DOT__clk 
            = (1U & (~ (IData)(vlSelfRef.tb_dynamic_noise_reduction__DOT__clk)));
    }
}

void Vtb_dynamic_noise_reduction___024root___eval_act(Vtb_dynamic_noise_reduction___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dynamic_noise_reduction___024root___eval_act\n"); );
    Vtb_dynamic_noise_reduction__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vtb_dynamic_noise_reduction___024root___nba_sequent__TOP__0(Vtb_dynamic_noise_reduction___024root* vlSelf);
void Vtb_dynamic_noise_reduction___024root___nba_sequent__TOP__1(Vtb_dynamic_noise_reduction___024root* vlSelf);

void Vtb_dynamic_noise_reduction___024root___eval_nba(Vtb_dynamic_noise_reduction___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dynamic_noise_reduction___024root___eval_nba\n"); );
    Vtb_dynamic_noise_reduction__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_dynamic_noise_reduction___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_dynamic_noise_reduction___024root___nba_sequent__TOP__1(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_dynamic_noise_reduction___024root___nba_sequent__TOP__0(Vtb_dynamic_noise_reduction___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dynamic_noise_reduction___024root___nba_sequent__TOP__0\n"); );
    Vtb_dynamic_noise_reduction__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*15:0*/ __Vdly__tb_dynamic_noise_reduction__DOT__dut__DOT__spi_in__DOT__shift_reg;
    __Vdly__tb_dynamic_noise_reduction__DOT__dut__DOT__spi_in__DOT__shift_reg = 0;
    CData/*3:0*/ __Vdly__tb_dynamic_noise_reduction__DOT__dut__DOT__spi_in__DOT__bit_cnt;
    __Vdly__tb_dynamic_noise_reduction__DOT__dut__DOT__spi_in__DOT__bit_cnt = 0;
    SData/*15:0*/ __Vdly__tb_dynamic_noise_reduction__DOT__dut__DOT__filter__DOT__y_prev;
    __Vdly__tb_dynamic_noise_reduction__DOT__dut__DOT__filter__DOT__y_prev = 0;
    SData/*15:0*/ __Vdly__tb_dynamic_noise_reduction__DOT__dut__DOT__spi_out__DOT__shift_reg;
    __Vdly__tb_dynamic_noise_reduction__DOT__dut__DOT__spi_out__DOT__shift_reg = 0;
    CData/*4:0*/ __Vdly__tb_dynamic_noise_reduction__DOT__dut__DOT__spi_out__DOT__bit_cnt;
    __Vdly__tb_dynamic_noise_reduction__DOT__dut__DOT__spi_out__DOT__bit_cnt = 0;
    // Body
    __Vdly__tb_dynamic_noise_reduction__DOT__dut__DOT__spi_in__DOT__shift_reg 
        = vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__spi_in__DOT__shift_reg;
    __Vdly__tb_dynamic_noise_reduction__DOT__dut__DOT__spi_in__DOT__bit_cnt 
        = vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__spi_in__DOT__bit_cnt;
    __Vdly__tb_dynamic_noise_reduction__DOT__dut__DOT__spi_out__DOT__shift_reg 
        = vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__spi_out__DOT__shift_reg;
    __Vdly__tb_dynamic_noise_reduction__DOT__dut__DOT__spi_out__DOT__bit_cnt 
        = vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__spi_out__DOT__bit_cnt;
    __Vdly__tb_dynamic_noise_reduction__DOT__dut__DOT__filter__DOT__y_prev 
        = vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__filter__DOT__y_prev;
    if ((1U & (~ (IData)(vlSelfRef.tb_dynamic_noise_reduction__DOT__reset)))) {
        vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__filter__DOT__one_fixed_ext = 0x7fffU;
    }
    if (vlSelfRef.tb_dynamic_noise_reduction__DOT__reset) {
        vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__filter_enabled = 1U;
        __Vdly__tb_dynamic_noise_reduction__DOT__dut__DOT__spi_out__DOT__shift_reg = 0U;
        __Vdly__tb_dynamic_noise_reduction__DOT__dut__DOT__spi_out__DOT__bit_cnt = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_miso = 0U;
        __Vdly__tb_dynamic_noise_reduction__DOT__dut__DOT__filter__DOT__y_prev = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__filtered_out = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__alpha = 0x2000U;
        __Vdly__tb_dynamic_noise_reduction__DOT__dut__DOT__spi_in__DOT__shift_reg = 0U;
        __Vdly__tb_dynamic_noise_reduction__DOT__dut__DOT__spi_in__DOT__bit_cnt = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__x_in = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__x_in_valid = 0U;
    } else {
        if ((1U & (~ (IData)(vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_sel)))) {
            if (((IData)(vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__x_in_valid) 
                 & (0U == (IData)(vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__spi_out__DOT__bit_cnt)))) {
                __Vdly__tb_dynamic_noise_reduction__DOT__dut__DOT__spi_out__DOT__shift_reg 
                    = vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__y_out;
                vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_miso 
                    = (1U & ((IData)(vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__y_out) 
                             >> 0xfU));
                __Vdly__tb_dynamic_noise_reduction__DOT__dut__DOT__spi_out__DOT__bit_cnt = 1U;
            } else if ((((IData)(vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__spi_out__DOT__sclk_prev) 
                         & (~ (IData)(vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk))) 
                        & (0U != (IData)(vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__spi_out__DOT__bit_cnt)))) {
                __Vdly__tb_dynamic_noise_reduction__DOT__dut__DOT__spi_out__DOT__shift_reg 
                    = (0xfffeU & ((IData)(vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__spi_out__DOT__shift_reg) 
                                  << 1U));
                __Vdly__tb_dynamic_noise_reduction__DOT__dut__DOT__spi_out__DOT__bit_cnt 
                    = ((0x10U == (IData)(vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__spi_out__DOT__bit_cnt))
                        ? 0U : (0x1fU & ((IData)(1U) 
                                         + (IData)(vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__spi_out__DOT__bit_cnt))));
                vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_miso 
                    = (1U & ((IData)(vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__spi_out__DOT__shift_reg) 
                             >> 0xeU));
            }
        }
        vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__filter__DOT__alpha_ext 
            = (((- (IData)((1U & ((IData)(vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__alpha) 
                                  >> 0xfU)))) << 0x10U) 
               | (IData)(vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__alpha));
        vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__filter__DOT__a_x_product 
            = VL_MULS_III(32, VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__x_in)), 
                          VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__alpha)));
        if (((IData)(vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__ram_en) 
             & (0U == (IData)(vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__ram_we)))) {
            if ((0U != (IData)(vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__ram_addr))) {
                if ((1U == (IData)(vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__ram_addr))) {
                    vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__filter_enabled 
                        = (1U & vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__ram_dout);
                }
            }
            if ((0U == (IData)(vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__ram_addr))) {
                vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__alpha 
                    = (0xffffU & vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__ram_dout);
            }
        }
        vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__filter__DOT__a_yprev_product 
            = VL_MULS_III(32, VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__filter__DOT__y_prev)), 
                          ((IData)(0x7fffU) - vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__filter__DOT__alpha_ext));
        vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__filter__DOT__sum_shifted 
            = VL_SHIFTRS_III(32,32,32, (vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__filter__DOT__a_x_product 
                                        + vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__filter__DOT__a_yprev_product), 0xfU);
        vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__filtered_out 
            = (0xffffU & vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__filter__DOT__sum_shifted);
        __Vdly__tb_dynamic_noise_reduction__DOT__dut__DOT__filter__DOT__y_prev 
            = (0xffffU & vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__filter__DOT__sum_shifted);
        vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__x_in_valid = 0U;
        if ((((~ (IData)(vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_sel)) 
              & (~ (IData)(vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__spi_in__DOT__sclk_prev))) 
             & (IData)(vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk))) {
            __Vdly__tb_dynamic_noise_reduction__DOT__dut__DOT__spi_in__DOT__shift_reg 
                = ((0xfffeU & ((IData)(vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__spi_in__DOT__shift_reg) 
                               << 1U)) | (IData)(vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi));
            __Vdly__tb_dynamic_noise_reduction__DOT__dut__DOT__spi_in__DOT__bit_cnt 
                = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__spi_in__DOT__bit_cnt)));
            if ((0xfU == (IData)(vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__spi_in__DOT__bit_cnt))) {
                vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__x_in 
                    = ((0xfffeU & ((IData)(vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__spi_in__DOT__shift_reg) 
                                   << 1U)) | (IData)(vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi));
                vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__x_in_valid = 1U;
                __Vdly__tb_dynamic_noise_reduction__DOT__dut__DOT__spi_in__DOT__bit_cnt = 0U;
            }
        }
    }
    vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__spi_out__DOT__shift_reg 
        = __Vdly__tb_dynamic_noise_reduction__DOT__dut__DOT__spi_out__DOT__shift_reg;
    vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__spi_out__DOT__bit_cnt 
        = __Vdly__tb_dynamic_noise_reduction__DOT__dut__DOT__spi_out__DOT__bit_cnt;
    vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__filter__DOT__y_prev 
        = __Vdly__tb_dynamic_noise_reduction__DOT__dut__DOT__filter__DOT__y_prev;
    vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__spi_out__DOT__sclk_prev 
        = ((1U & (~ (IData)(vlSelfRef.tb_dynamic_noise_reduction__DOT__reset))) 
           && (IData)(vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk));
    vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__spi_in__DOT__shift_reg 
        = __Vdly__tb_dynamic_noise_reduction__DOT__dut__DOT__spi_in__DOT__shift_reg;
    vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__spi_in__DOT__bit_cnt 
        = __Vdly__tb_dynamic_noise_reduction__DOT__dut__DOT__spi_in__DOT__bit_cnt;
    vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__y_out 
        = ((IData)(vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__filter_enabled)
            ? (IData)(vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__filtered_out)
            : (IData)(vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__x_in));
    vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__spi_in__DOT__sclk_prev 
        = ((1U & (~ (IData)(vlSelfRef.tb_dynamic_noise_reduction__DOT__reset))) 
           && (IData)(vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk));
}

VL_INLINE_OPT void Vtb_dynamic_noise_reduction___024root___nba_sequent__TOP__1(Vtb_dynamic_noise_reduction___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dynamic_noise_reduction___024root___nba_sequent__TOP__1\n"); );
    Vtb_dynamic_noise_reduction__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __VdlyVal__tb_dynamic_noise_reduction__DOT__dut__DOT__config_ram__DOT__RAM__v0;
    __VdlyVal__tb_dynamic_noise_reduction__DOT__dut__DOT__config_ram__DOT__RAM__v0 = 0;
    CData/*7:0*/ __VdlyDim0__tb_dynamic_noise_reduction__DOT__dut__DOT__config_ram__DOT__RAM__v0;
    __VdlyDim0__tb_dynamic_noise_reduction__DOT__dut__DOT__config_ram__DOT__RAM__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_dynamic_noise_reduction__DOT__dut__DOT__config_ram__DOT__RAM__v0;
    __VdlySet__tb_dynamic_noise_reduction__DOT__dut__DOT__config_ram__DOT__RAM__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb_dynamic_noise_reduction__DOT__dut__DOT__config_ram__DOT__RAM__v1;
    __VdlyVal__tb_dynamic_noise_reduction__DOT__dut__DOT__config_ram__DOT__RAM__v1 = 0;
    CData/*7:0*/ __VdlyDim0__tb_dynamic_noise_reduction__DOT__dut__DOT__config_ram__DOT__RAM__v1;
    __VdlyDim0__tb_dynamic_noise_reduction__DOT__dut__DOT__config_ram__DOT__RAM__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_dynamic_noise_reduction__DOT__dut__DOT__config_ram__DOT__RAM__v1;
    __VdlySet__tb_dynamic_noise_reduction__DOT__dut__DOT__config_ram__DOT__RAM__v1 = 0;
    CData/*7:0*/ __VdlyVal__tb_dynamic_noise_reduction__DOT__dut__DOT__config_ram__DOT__RAM__v2;
    __VdlyVal__tb_dynamic_noise_reduction__DOT__dut__DOT__config_ram__DOT__RAM__v2 = 0;
    CData/*7:0*/ __VdlyDim0__tb_dynamic_noise_reduction__DOT__dut__DOT__config_ram__DOT__RAM__v2;
    __VdlyDim0__tb_dynamic_noise_reduction__DOT__dut__DOT__config_ram__DOT__RAM__v2 = 0;
    CData/*0:0*/ __VdlySet__tb_dynamic_noise_reduction__DOT__dut__DOT__config_ram__DOT__RAM__v2;
    __VdlySet__tb_dynamic_noise_reduction__DOT__dut__DOT__config_ram__DOT__RAM__v2 = 0;
    CData/*7:0*/ __VdlyVal__tb_dynamic_noise_reduction__DOT__dut__DOT__config_ram__DOT__RAM__v3;
    __VdlyVal__tb_dynamic_noise_reduction__DOT__dut__DOT__config_ram__DOT__RAM__v3 = 0;
    CData/*7:0*/ __VdlyDim0__tb_dynamic_noise_reduction__DOT__dut__DOT__config_ram__DOT__RAM__v3;
    __VdlyDim0__tb_dynamic_noise_reduction__DOT__dut__DOT__config_ram__DOT__RAM__v3 = 0;
    CData/*0:0*/ __VdlySet__tb_dynamic_noise_reduction__DOT__dut__DOT__config_ram__DOT__RAM__v3;
    __VdlySet__tb_dynamic_noise_reduction__DOT__dut__DOT__config_ram__DOT__RAM__v3 = 0;
    // Body
    __VdlySet__tb_dynamic_noise_reduction__DOT__dut__DOT__config_ram__DOT__RAM__v0 = 0U;
    __VdlySet__tb_dynamic_noise_reduction__DOT__dut__DOT__config_ram__DOT__RAM__v1 = 0U;
    __VdlySet__tb_dynamic_noise_reduction__DOT__dut__DOT__config_ram__DOT__RAM__v2 = 0U;
    __VdlySet__tb_dynamic_noise_reduction__DOT__dut__DOT__config_ram__DOT__RAM__v3 = 0U;
    if (vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__ram_en) {
        if ((1U & (IData)(vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__ram_we))) {
            __VdlyVal__tb_dynamic_noise_reduction__DOT__dut__DOT__config_ram__DOT__RAM__v0 
                = (0xffU & vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__ram_din);
            __VdlyDim0__tb_dynamic_noise_reduction__DOT__dut__DOT__config_ram__DOT__RAM__v0 
                = vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__ram_addr;
            __VdlySet__tb_dynamic_noise_reduction__DOT__dut__DOT__config_ram__DOT__RAM__v0 = 1U;
        }
        if ((2U & (IData)(vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__ram_we))) {
            __VdlyVal__tb_dynamic_noise_reduction__DOT__dut__DOT__config_ram__DOT__RAM__v1 
                = (0xffU & (vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__ram_din 
                            >> 8U));
            __VdlyDim0__tb_dynamic_noise_reduction__DOT__dut__DOT__config_ram__DOT__RAM__v1 
                = vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__ram_addr;
            __VdlySet__tb_dynamic_noise_reduction__DOT__dut__DOT__config_ram__DOT__RAM__v1 = 1U;
        }
        if ((4U & (IData)(vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__ram_we))) {
            __VdlyVal__tb_dynamic_noise_reduction__DOT__dut__DOT__config_ram__DOT__RAM__v2 
                = (0xffU & (vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__ram_din 
                            >> 0x10U));
            __VdlyDim0__tb_dynamic_noise_reduction__DOT__dut__DOT__config_ram__DOT__RAM__v2 
                = vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__ram_addr;
            __VdlySet__tb_dynamic_noise_reduction__DOT__dut__DOT__config_ram__DOT__RAM__v2 = 1U;
        }
        if ((8U & (IData)(vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__ram_we))) {
            __VdlyVal__tb_dynamic_noise_reduction__DOT__dut__DOT__config_ram__DOT__RAM__v3 
                = (vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__ram_din 
                   >> 0x18U);
            __VdlyDim0__tb_dynamic_noise_reduction__DOT__dut__DOT__config_ram__DOT__RAM__v3 
                = vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__ram_addr;
            __VdlySet__tb_dynamic_noise_reduction__DOT__dut__DOT__config_ram__DOT__RAM__v3 = 1U;
        }
        vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__ram_dout 
            = vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__config_ram__DOT__RAM
            [vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__ram_addr];
    } else {
        vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__ram_dout = 0U;
    }
    if (__VdlySet__tb_dynamic_noise_reduction__DOT__dut__DOT__config_ram__DOT__RAM__v0) {
        vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__config_ram__DOT__RAM[__VdlyDim0__tb_dynamic_noise_reduction__DOT__dut__DOT__config_ram__DOT__RAM__v0] 
            = ((0xffffff00U & vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__config_ram__DOT__RAM
                [__VdlyDim0__tb_dynamic_noise_reduction__DOT__dut__DOT__config_ram__DOT__RAM__v0]) 
               | (IData)(__VdlyVal__tb_dynamic_noise_reduction__DOT__dut__DOT__config_ram__DOT__RAM__v0));
    }
    if (__VdlySet__tb_dynamic_noise_reduction__DOT__dut__DOT__config_ram__DOT__RAM__v1) {
        vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__config_ram__DOT__RAM[__VdlyDim0__tb_dynamic_noise_reduction__DOT__dut__DOT__config_ram__DOT__RAM__v1] 
            = ((0xffff00ffU & vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__config_ram__DOT__RAM
                [__VdlyDim0__tb_dynamic_noise_reduction__DOT__dut__DOT__config_ram__DOT__RAM__v1]) 
               | ((IData)(__VdlyVal__tb_dynamic_noise_reduction__DOT__dut__DOT__config_ram__DOT__RAM__v1) 
                  << 8U));
    }
    if (__VdlySet__tb_dynamic_noise_reduction__DOT__dut__DOT__config_ram__DOT__RAM__v2) {
        vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__config_ram__DOT__RAM[__VdlyDim0__tb_dynamic_noise_reduction__DOT__dut__DOT__config_ram__DOT__RAM__v2] 
            = ((0xff00ffffU & vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__config_ram__DOT__RAM
                [__VdlyDim0__tb_dynamic_noise_reduction__DOT__dut__DOT__config_ram__DOT__RAM__v2]) 
               | ((IData)(__VdlyVal__tb_dynamic_noise_reduction__DOT__dut__DOT__config_ram__DOT__RAM__v2) 
                  << 0x10U));
    }
    if (__VdlySet__tb_dynamic_noise_reduction__DOT__dut__DOT__config_ram__DOT__RAM__v3) {
        vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__config_ram__DOT__RAM[__VdlyDim0__tb_dynamic_noise_reduction__DOT__dut__DOT__config_ram__DOT__RAM__v3] 
            = ((0xffffffU & vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__config_ram__DOT__RAM
                [__VdlyDim0__tb_dynamic_noise_reduction__DOT__dut__DOT__config_ram__DOT__RAM__v3]) 
               | ((IData)(__VdlyVal__tb_dynamic_noise_reduction__DOT__dut__DOT__config_ram__DOT__RAM__v3) 
                  << 0x18U));
    }
}

void Vtb_dynamic_noise_reduction___024root___timing_resume(Vtb_dynamic_noise_reduction___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dynamic_noise_reduction___024root___timing_resume\n"); );
    Vtb_dynamic_noise_reduction__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_hd63d5a9e__0.resume(
                                                   "@(posedge tb_dynamic_noise_reduction.clk)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_dynamic_noise_reduction___024root___timing_commit(Vtb_dynamic_noise_reduction___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dynamic_noise_reduction___024root___timing_commit\n"); );
    Vtb_dynamic_noise_reduction__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_hd63d5a9e__0.commit(
                                                   "@(posedge tb_dynamic_noise_reduction.clk)");
    }
}

void Vtb_dynamic_noise_reduction___024root___eval_triggers__act(Vtb_dynamic_noise_reduction___024root* vlSelf);

bool Vtb_dynamic_noise_reduction___024root___eval_phase__act(Vtb_dynamic_noise_reduction___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dynamic_noise_reduction___024root___eval_phase__act\n"); );
    Vtb_dynamic_noise_reduction__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_dynamic_noise_reduction___024root___eval_triggers__act(vlSelf);
    Vtb_dynamic_noise_reduction___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_dynamic_noise_reduction___024root___timing_resume(vlSelf);
        Vtb_dynamic_noise_reduction___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_dynamic_noise_reduction___024root___eval_phase__nba(Vtb_dynamic_noise_reduction___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dynamic_noise_reduction___024root___eval_phase__nba\n"); );
    Vtb_dynamic_noise_reduction__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_dynamic_noise_reduction___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_dynamic_noise_reduction___024root___dump_triggers__nba(Vtb_dynamic_noise_reduction___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_dynamic_noise_reduction___024root___dump_triggers__act(Vtb_dynamic_noise_reduction___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_dynamic_noise_reduction___024root___eval(Vtb_dynamic_noise_reduction___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dynamic_noise_reduction___024root___eval\n"); );
    Vtb_dynamic_noise_reduction__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_dynamic_noise_reduction___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb_dynamic_noise_reduction.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtb_dynamic_noise_reduction___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb_dynamic_noise_reduction.sv", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_dynamic_noise_reduction___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_dynamic_noise_reduction___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_dynamic_noise_reduction___024root___eval_debug_assertions(Vtb_dynamic_noise_reduction___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dynamic_noise_reduction___024root___eval_debug_assertions\n"); );
    Vtb_dynamic_noise_reduction__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
