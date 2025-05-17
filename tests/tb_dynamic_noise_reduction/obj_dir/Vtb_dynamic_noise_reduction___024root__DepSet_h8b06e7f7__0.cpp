// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_dynamic_noise_reduction.h for the primary calling header

#include "Vtb_dynamic_noise_reduction__pch.h"
#include "Vtb_dynamic_noise_reduction___024root.h"

VlCoroutine Vtb_dynamic_noise_reduction___024root___eval_initial__TOP__Vtiming__0(Vtb_dynamic_noise_reduction___024root* vlSelf);
VlCoroutine Vtb_dynamic_noise_reduction___024root___eval_initial__TOP__Vtiming__1(Vtb_dynamic_noise_reduction___024root* vlSelf);

void Vtb_dynamic_noise_reduction___024root___eval_initial(Vtb_dynamic_noise_reduction___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dynamic_noise_reduction___024root___eval_initial\n"); );
    Vtb_dynamic_noise_reduction__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vtb_dynamic_noise_reduction___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_dynamic_noise_reduction___024root___eval_initial__TOP__Vtiming__1(vlSelf);
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
        co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             23);
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

void Vtb_dynamic_noise_reduction___024root___eval_nba(Vtb_dynamic_noise_reduction___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dynamic_noise_reduction___024root___eval_nba\n"); );
    Vtb_dynamic_noise_reduction__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_dynamic_noise_reduction___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
}

VL_INLINE_OPT void Vtb_dynamic_noise_reduction___024root___nba_sequent__TOP__0(Vtb_dynamic_noise_reduction___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dynamic_noise_reduction___024root___nba_sequent__TOP__0\n"); );
    Vtb_dynamic_noise_reduction__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*15:0*/ __Vdly__tb_dynamic_noise_reduction__DOT__dut__DOT__y_prev;
    __Vdly__tb_dynamic_noise_reduction__DOT__dut__DOT__y_prev = 0;
    // Body
    __Vdly__tb_dynamic_noise_reduction__DOT__dut__DOT__y_prev 
        = vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__y_prev;
    if ((1U & (~ (IData)(vlSelfRef.tb_dynamic_noise_reduction__DOT__reset)))) {
        vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__one_fixed_ext = 0x7fffU;
    }
    if (vlSelfRef.tb_dynamic_noise_reduction__DOT__reset) {
        __Vdly__tb_dynamic_noise_reduction__DOT__dut__DOT__y_prev = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__y_out = 0U;
    } else {
        vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__alpha_ext 
            = (((- (IData)((1U & ((IData)(vlSelfRef.tb_dynamic_noise_reduction__DOT__alpha) 
                                  >> 0xfU)))) << 0x10U) 
               | (IData)(vlSelfRef.tb_dynamic_noise_reduction__DOT__alpha));
        vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__a_x_product 
            = VL_MULS_III(32, VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_dynamic_noise_reduction__DOT__x_in)), 
                          VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_dynamic_noise_reduction__DOT__alpha)));
        vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__a_yprev_product 
            = VL_MULS_III(32, VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__y_prev)), 
                          ((IData)(0x7fffU) - vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__alpha_ext));
        vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__sum_shifted 
            = VL_SHIFTRS_III(32,32,32, (vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__a_x_product 
                                        + vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__a_yprev_product), 0xfU);
        vlSelfRef.tb_dynamic_noise_reduction__DOT__y_out 
            = (0xffffU & vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__sum_shifted);
        __Vdly__tb_dynamic_noise_reduction__DOT__dut__DOT__y_prev 
            = (0xffffU & vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__sum_shifted);
    }
    vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__y_prev 
        = __Vdly__tb_dynamic_noise_reduction__DOT__dut__DOT__y_prev;
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
