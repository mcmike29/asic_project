// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_dynamic_noise_reduction.h for the primary calling header

#include "Vtb_dynamic_noise_reduction__pch.h"
#include "Vtb_dynamic_noise_reduction__Syms.h"
#include "Vtb_dynamic_noise_reduction___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_dynamic_noise_reduction___024root___eval_initial__TOP__Vtiming__0(Vtb_dynamic_noise_reduction___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dynamic_noise_reduction___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_dynamic_noise_reduction__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("Starting testbench...\n",0);
    vlSymsp->_vm_contextp__->dumpfile(std::string{"wave.vcd"});
    vlSymsp->_traceDumpOpen();
    vlSelfRef.tb_dynamic_noise_reduction__DOT__clk = 0U;
    vlSelfRef.tb_dynamic_noise_reduction__DOT__reset = 1U;
    vlSelfRef.tb_dynamic_noise_reduction__DOT__alpha = 0x2000U;
    vlSelfRef.tb_dynamic_noise_reduction__DOT__x_in = 0U;
    vlSelfRef.tb_dynamic_noise_reduction__DOT__test_input[0U] = 0U;
    vlSelfRef.tb_dynamic_noise_reduction__DOT__test_input[1U] = 0x4000U;
    vlSelfRef.tb_dynamic_noise_reduction__DOT__test_input[2U] = 0x7fffU;
    vlSelfRef.tb_dynamic_noise_reduction__DOT__test_input[3U] = 0U;
    vlSelfRef.tb_dynamic_noise_reduction__DOT__test_input[4U] = 0xc000U;
    vlSelfRef.tb_dynamic_noise_reduction__DOT__test_input[5U] = 0x8001U;
    vlSelfRef.tb_dynamic_noise_reduction__DOT__test_input[6U] = 0U;
    vlSelfRef.tb_dynamic_noise_reduction__DOT__test_input[7U] = 0x2000U;
    vlSelfRef.tb_dynamic_noise_reduction__DOT__test_input[8U] = 0x2000U;
    vlSelfRef.tb_dynamic_noise_reduction__DOT__test_input[9U] = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2ee0ULL, 
                                         nullptr, "tb_dynamic_noise_reduction.sv", 
                                         51);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_dynamic_noise_reduction__DOT__reset = 0U;
    vlSelfRef.tb_dynamic_noise_reduction__DOT__x_in 
        = vlSelfRef.tb_dynamic_noise_reduction__DOT__test_input
        [0U];
    co_await vlSelfRef.__VtrigSched_hd63d5a9e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_dynamic_noise_reduction.clk)", 
                                                         "tb_dynamic_noise_reduction.sv", 
                                                         56);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Cycle 0: x_in = %0d, y_out = %0d\n",0,
                 16,vlSelfRef.tb_dynamic_noise_reduction__DOT__x_in,
                 16,(IData)(vlSelfRef.tb_dynamic_noise_reduction__DOT__y_out));
    vlSelfRef.tb_dynamic_noise_reduction__DOT__unnamedblk1__DOT__i = 1U;
    vlSelfRef.tb_dynamic_noise_reduction__DOT__x_in 
        = vlSelfRef.tb_dynamic_noise_reduction__DOT__test_input
        [1U];
    co_await vlSelfRef.__VtrigSched_hd63d5a9e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_dynamic_noise_reduction.clk)", 
                                                         "tb_dynamic_noise_reduction.sv", 
                                                         56);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Cycle 1: x_in = %0d, y_out = %0d\n",0,
                 16,vlSelfRef.tb_dynamic_noise_reduction__DOT__x_in,
                 16,(IData)(vlSelfRef.tb_dynamic_noise_reduction__DOT__y_out));
    vlSelfRef.tb_dynamic_noise_reduction__DOT__unnamedblk1__DOT__i = 2U;
    vlSelfRef.tb_dynamic_noise_reduction__DOT__x_in 
        = vlSelfRef.tb_dynamic_noise_reduction__DOT__test_input
        [2U];
    co_await vlSelfRef.__VtrigSched_hd63d5a9e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_dynamic_noise_reduction.clk)", 
                                                         "tb_dynamic_noise_reduction.sv", 
                                                         56);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Cycle 2: x_in = %0d, y_out = %0d\n",0,
                 16,vlSelfRef.tb_dynamic_noise_reduction__DOT__x_in,
                 16,(IData)(vlSelfRef.tb_dynamic_noise_reduction__DOT__y_out));
    vlSelfRef.tb_dynamic_noise_reduction__DOT__unnamedblk1__DOT__i = 3U;
    vlSelfRef.tb_dynamic_noise_reduction__DOT__x_in 
        = vlSelfRef.tb_dynamic_noise_reduction__DOT__test_input
        [3U];
    co_await vlSelfRef.__VtrigSched_hd63d5a9e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_dynamic_noise_reduction.clk)", 
                                                         "tb_dynamic_noise_reduction.sv", 
                                                         56);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Cycle 3: x_in = %0d, y_out = %0d\n",0,
                 16,vlSelfRef.tb_dynamic_noise_reduction__DOT__x_in,
                 16,(IData)(vlSelfRef.tb_dynamic_noise_reduction__DOT__y_out));
    vlSelfRef.tb_dynamic_noise_reduction__DOT__unnamedblk1__DOT__i = 4U;
    vlSelfRef.tb_dynamic_noise_reduction__DOT__x_in 
        = vlSelfRef.tb_dynamic_noise_reduction__DOT__test_input
        [4U];
    co_await vlSelfRef.__VtrigSched_hd63d5a9e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_dynamic_noise_reduction.clk)", 
                                                         "tb_dynamic_noise_reduction.sv", 
                                                         56);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Cycle 4: x_in = %0d, y_out = %0d\n",0,
                 16,vlSelfRef.tb_dynamic_noise_reduction__DOT__x_in,
                 16,(IData)(vlSelfRef.tb_dynamic_noise_reduction__DOT__y_out));
    vlSelfRef.tb_dynamic_noise_reduction__DOT__unnamedblk1__DOT__i = 5U;
    vlSelfRef.tb_dynamic_noise_reduction__DOT__x_in 
        = vlSelfRef.tb_dynamic_noise_reduction__DOT__test_input
        [5U];
    co_await vlSelfRef.__VtrigSched_hd63d5a9e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_dynamic_noise_reduction.clk)", 
                                                         "tb_dynamic_noise_reduction.sv", 
                                                         56);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Cycle 5: x_in = %0d, y_out = %0d\n",0,
                 16,vlSelfRef.tb_dynamic_noise_reduction__DOT__x_in,
                 16,(IData)(vlSelfRef.tb_dynamic_noise_reduction__DOT__y_out));
    vlSelfRef.tb_dynamic_noise_reduction__DOT__unnamedblk1__DOT__i = 6U;
    vlSelfRef.tb_dynamic_noise_reduction__DOT__x_in 
        = vlSelfRef.tb_dynamic_noise_reduction__DOT__test_input
        [6U];
    co_await vlSelfRef.__VtrigSched_hd63d5a9e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_dynamic_noise_reduction.clk)", 
                                                         "tb_dynamic_noise_reduction.sv", 
                                                         56);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Cycle 6: x_in = %0d, y_out = %0d\n",0,
                 16,vlSelfRef.tb_dynamic_noise_reduction__DOT__x_in,
                 16,(IData)(vlSelfRef.tb_dynamic_noise_reduction__DOT__y_out));
    vlSelfRef.tb_dynamic_noise_reduction__DOT__unnamedblk1__DOT__i = 7U;
    vlSelfRef.tb_dynamic_noise_reduction__DOT__x_in 
        = vlSelfRef.tb_dynamic_noise_reduction__DOT__test_input
        [7U];
    co_await vlSelfRef.__VtrigSched_hd63d5a9e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_dynamic_noise_reduction.clk)", 
                                                         "tb_dynamic_noise_reduction.sv", 
                                                         56);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Cycle 7: x_in = %0d, y_out = %0d\n",0,
                 16,vlSelfRef.tb_dynamic_noise_reduction__DOT__x_in,
                 16,(IData)(vlSelfRef.tb_dynamic_noise_reduction__DOT__y_out));
    vlSelfRef.tb_dynamic_noise_reduction__DOT__unnamedblk1__DOT__i = 8U;
    vlSelfRef.tb_dynamic_noise_reduction__DOT__x_in 
        = vlSelfRef.tb_dynamic_noise_reduction__DOT__test_input
        [8U];
    co_await vlSelfRef.__VtrigSched_hd63d5a9e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_dynamic_noise_reduction.clk)", 
                                                         "tb_dynamic_noise_reduction.sv", 
                                                         56);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Cycle 8: x_in = %0d, y_out = %0d\n",0,
                 16,vlSelfRef.tb_dynamic_noise_reduction__DOT__x_in,
                 16,(IData)(vlSelfRef.tb_dynamic_noise_reduction__DOT__y_out));
    vlSelfRef.tb_dynamic_noise_reduction__DOT__unnamedblk1__DOT__i = 9U;
    vlSelfRef.tb_dynamic_noise_reduction__DOT__x_in 
        = vlSelfRef.tb_dynamic_noise_reduction__DOT__test_input
        [9U];
    co_await vlSelfRef.__VtrigSched_hd63d5a9e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_dynamic_noise_reduction.clk)", 
                                                         "tb_dynamic_noise_reduction.sv", 
                                                         56);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Cycle 9: x_in = %0d, y_out = %0d\n",0,
                 16,vlSelfRef.tb_dynamic_noise_reduction__DOT__x_in,
                 16,(IData)(vlSelfRef.tb_dynamic_noise_reduction__DOT__y_out));
    vlSelfRef.tb_dynamic_noise_reduction__DOT__unnamedblk1__DOT__i = 0xaU;
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb_dynamic_noise_reduction.sv", 
                                         61);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_FINISH_MT("tb_dynamic_noise_reduction.sv", 62, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_dynamic_noise_reduction___024root___dump_triggers__act(Vtb_dynamic_noise_reduction___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_dynamic_noise_reduction___024root___eval_triggers__act(Vtb_dynamic_noise_reduction___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dynamic_noise_reduction___024root___eval_triggers__act\n"); );
    Vtb_dynamic_noise_reduction__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.tb_dynamic_noise_reduction__DOT__clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_dynamic_noise_reduction__DOT__clk__0))));
    vlSelfRef.__VactTriggered.set(1U, ((IData)(vlSelfRef.tb_dynamic_noise_reduction__DOT__reset) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_dynamic_noise_reduction__DOT__reset__0))));
    vlSelfRef.__VactTriggered.set(2U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__tb_dynamic_noise_reduction__DOT__clk__0 
        = vlSelfRef.tb_dynamic_noise_reduction__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_dynamic_noise_reduction__DOT__reset__0 
        = vlSelfRef.tb_dynamic_noise_reduction__DOT__reset;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_dynamic_noise_reduction___024root___dump_triggers__act(vlSelf);
    }
#endif
}
