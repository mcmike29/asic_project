// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_dynamic_noise_reduction.h for the primary calling header

#include "Vtb_dynamic_noise_reduction__pch.h"
#include "Vtb_dynamic_noise_reduction___024root.h"

VL_ATTR_COLD void Vtb_dynamic_noise_reduction___024root___eval_static__TOP(Vtb_dynamic_noise_reduction___024root* vlSelf);

VL_ATTR_COLD void Vtb_dynamic_noise_reduction___024root___eval_static(Vtb_dynamic_noise_reduction___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dynamic_noise_reduction___024root___eval_static\n"); );
    Vtb_dynamic_noise_reduction__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_dynamic_noise_reduction___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void Vtb_dynamic_noise_reduction___024root___eval_static__TOP(Vtb_dynamic_noise_reduction___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dynamic_noise_reduction___024root___eval_static__TOP\n"); );
    Vtb_dynamic_noise_reduction__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_dynamic_noise_reduction__DOT__clk = 0U;
    vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
}

VL_ATTR_COLD void Vtb_dynamic_noise_reduction___024root___eval_final(Vtb_dynamic_noise_reduction___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dynamic_noise_reduction___024root___eval_final\n"); );
    Vtb_dynamic_noise_reduction__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_dynamic_noise_reduction___024root___dump_triggers__stl(Vtb_dynamic_noise_reduction___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_dynamic_noise_reduction___024root___eval_phase__stl(Vtb_dynamic_noise_reduction___024root* vlSelf);

VL_ATTR_COLD void Vtb_dynamic_noise_reduction___024root___eval_settle(Vtb_dynamic_noise_reduction___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dynamic_noise_reduction___024root___eval_settle\n"); );
    Vtb_dynamic_noise_reduction__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb_dynamic_noise_reduction___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tb_dynamic_noise_reduction.sv", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_dynamic_noise_reduction___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_dynamic_noise_reduction___024root___dump_triggers__stl(Vtb_dynamic_noise_reduction___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dynamic_noise_reduction___024root___dump_triggers__stl\n"); );
    Vtb_dynamic_noise_reduction__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_dynamic_noise_reduction___024root___stl_sequent__TOP__0(Vtb_dynamic_noise_reduction___024root* vlSelf);
VL_ATTR_COLD void Vtb_dynamic_noise_reduction___024root____Vm_traceActivitySetAll(Vtb_dynamic_noise_reduction___024root* vlSelf);

VL_ATTR_COLD void Vtb_dynamic_noise_reduction___024root___eval_stl(Vtb_dynamic_noise_reduction___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dynamic_noise_reduction___024root___eval_stl\n"); );
    Vtb_dynamic_noise_reduction__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_dynamic_noise_reduction___024root___stl_sequent__TOP__0(vlSelf);
        Vtb_dynamic_noise_reduction___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD void Vtb_dynamic_noise_reduction___024root___stl_sequent__TOP__0(Vtb_dynamic_noise_reduction___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dynamic_noise_reduction___024root___stl_sequent__TOP__0\n"); );
    Vtb_dynamic_noise_reduction__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__y_out 
        = ((IData)(vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__filter_enabled)
            ? (IData)(vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__filtered_out)
            : (IData)(vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__x_in));
}

VL_ATTR_COLD void Vtb_dynamic_noise_reduction___024root___eval_triggers__stl(Vtb_dynamic_noise_reduction___024root* vlSelf);

VL_ATTR_COLD bool Vtb_dynamic_noise_reduction___024root___eval_phase__stl(Vtb_dynamic_noise_reduction___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dynamic_noise_reduction___024root___eval_phase__stl\n"); );
    Vtb_dynamic_noise_reduction__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_dynamic_noise_reduction___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_dynamic_noise_reduction___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_dynamic_noise_reduction___024root___dump_triggers__act(Vtb_dynamic_noise_reduction___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dynamic_noise_reduction___024root___dump_triggers__act\n"); );
    Vtb_dynamic_noise_reduction__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_dynamic_noise_reduction.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge tb_dynamic_noise_reduction.reset)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_dynamic_noise_reduction___024root___dump_triggers__nba(Vtb_dynamic_noise_reduction___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dynamic_noise_reduction___024root___dump_triggers__nba\n"); );
    Vtb_dynamic_noise_reduction__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_dynamic_noise_reduction.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge tb_dynamic_noise_reduction.reset)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_dynamic_noise_reduction___024root____Vm_traceActivitySetAll(Vtb_dynamic_noise_reduction___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dynamic_noise_reduction___024root____Vm_traceActivitySetAll\n"); );
    Vtb_dynamic_noise_reduction__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
}

VL_ATTR_COLD void Vtb_dynamic_noise_reduction___024root___ctor_var_reset(Vtb_dynamic_noise_reduction___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dynamic_noise_reduction___024root___ctor_var_reset\n"); );
    Vtb_dynamic_noise_reduction__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->tb_dynamic_noise_reduction__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_dynamic_noise_reduction__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->tb_dynamic_noise_reduction__DOT__spi_clk = VL_RAND_RESET_I(1);
    vlSelf->tb_dynamic_noise_reduction__DOT__spi_mosi = VL_RAND_RESET_I(1);
    vlSelf->tb_dynamic_noise_reduction__DOT__spi_miso = VL_RAND_RESET_I(1);
    vlSelf->tb_dynamic_noise_reduction__DOT__spi_sel = VL_RAND_RESET_I(1);
    vlSelf->tb_dynamic_noise_reduction__DOT__sample_file = 0;
    vlSelf->tb_dynamic_noise_reduction__DOT__log_file = 0;
    vlSelf->tb_dynamic_noise_reduction__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->tb_dynamic_noise_reduction__DOT__sample = VL_RAND_RESET_I(16);
    vlSelf->tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = VL_RAND_RESET_I(32);
    vlSelf->tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__result = VL_RAND_RESET_I(16);
    vlSelf->tb_dynamic_noise_reduction__DOT__dut__DOT__x_in = VL_RAND_RESET_I(16);
    vlSelf->tb_dynamic_noise_reduction__DOT__dut__DOT__x_in_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_dynamic_noise_reduction__DOT__dut__DOT__y_out = VL_RAND_RESET_I(16);
    vlSelf->tb_dynamic_noise_reduction__DOT__dut__DOT__alpha = VL_RAND_RESET_I(16);
    vlSelf->tb_dynamic_noise_reduction__DOT__dut__DOT__filter_enabled = VL_RAND_RESET_I(1);
    vlSelf->tb_dynamic_noise_reduction__DOT__dut__DOT__ram_addr = VL_RAND_RESET_I(8);
    vlSelf->tb_dynamic_noise_reduction__DOT__dut__DOT__ram_we = VL_RAND_RESET_I(4);
    vlSelf->tb_dynamic_noise_reduction__DOT__dut__DOT__ram_en = VL_RAND_RESET_I(1);
    vlSelf->tb_dynamic_noise_reduction__DOT__dut__DOT__ram_din = VL_RAND_RESET_I(32);
    vlSelf->tb_dynamic_noise_reduction__DOT__dut__DOT__ram_dout = VL_RAND_RESET_I(32);
    vlSelf->tb_dynamic_noise_reduction__DOT__dut__DOT__filtered_out = VL_RAND_RESET_I(16);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->tb_dynamic_noise_reduction__DOT__dut__DOT__config_ram__DOT__RAM[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_dynamic_noise_reduction__DOT__dut__DOT__spi_in__DOT__shift_reg = VL_RAND_RESET_I(16);
    vlSelf->tb_dynamic_noise_reduction__DOT__dut__DOT__spi_in__DOT__bit_cnt = VL_RAND_RESET_I(4);
    vlSelf->tb_dynamic_noise_reduction__DOT__dut__DOT__spi_in__DOT__sclk_prev = VL_RAND_RESET_I(1);
    vlSelf->tb_dynamic_noise_reduction__DOT__dut__DOT__filter__DOT__y_prev = VL_RAND_RESET_I(16);
    vlSelf->tb_dynamic_noise_reduction__DOT__dut__DOT__filter__DOT__a_x_product = VL_RAND_RESET_I(32);
    vlSelf->tb_dynamic_noise_reduction__DOT__dut__DOT__filter__DOT__a_yprev_product = VL_RAND_RESET_I(32);
    vlSelf->tb_dynamic_noise_reduction__DOT__dut__DOT__filter__DOT__sum_shifted = VL_RAND_RESET_I(32);
    vlSelf->tb_dynamic_noise_reduction__DOT__dut__DOT__filter__DOT__one_fixed_ext = VL_RAND_RESET_I(32);
    vlSelf->tb_dynamic_noise_reduction__DOT__dut__DOT__filter__DOT__alpha_ext = VL_RAND_RESET_I(32);
    vlSelf->tb_dynamic_noise_reduction__DOT__dut__DOT__spi_out__DOT__shift_reg = VL_RAND_RESET_I(16);
    vlSelf->tb_dynamic_noise_reduction__DOT__dut__DOT__spi_out__DOT__bit_cnt = VL_RAND_RESET_I(5);
    vlSelf->tb_dynamic_noise_reduction__DOT__dut__DOT__spi_out__DOT__sclk_prev = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_dynamic_noise_reduction__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_dynamic_noise_reduction__DOT__reset__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
