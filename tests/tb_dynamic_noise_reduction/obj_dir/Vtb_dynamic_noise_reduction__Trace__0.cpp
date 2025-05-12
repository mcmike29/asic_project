// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_dynamic_noise_reduction__Syms.h"


void Vtb_dynamic_noise_reduction___024root__trace_chg_0_sub_0(Vtb_dynamic_noise_reduction___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_dynamic_noise_reduction___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dynamic_noise_reduction___024root__trace_chg_0\n"); );
    // Init
    Vtb_dynamic_noise_reduction___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_dynamic_noise_reduction___024root*>(voidSelf);
    Vtb_dynamic_noise_reduction__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_dynamic_noise_reduction___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_dynamic_noise_reduction___024root__trace_chg_0_sub_0(Vtb_dynamic_noise_reduction___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dynamic_noise_reduction___024root__trace_chg_0_sub_0\n"); );
    Vtb_dynamic_noise_reduction__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgBit(oldp+0,(vlSelfRef.tb_dynamic_noise_reduction__DOT__reset));
        bufp->chgSData(oldp+1,(vlSelfRef.tb_dynamic_noise_reduction__DOT__x_in),16);
        bufp->chgSData(oldp+2,(vlSelfRef.tb_dynamic_noise_reduction__DOT__alpha),16);
        bufp->chgSData(oldp+3,(vlSelfRef.tb_dynamic_noise_reduction__DOT__test_input[0]),16);
        bufp->chgSData(oldp+4,(vlSelfRef.tb_dynamic_noise_reduction__DOT__test_input[1]),16);
        bufp->chgSData(oldp+5,(vlSelfRef.tb_dynamic_noise_reduction__DOT__test_input[2]),16);
        bufp->chgSData(oldp+6,(vlSelfRef.tb_dynamic_noise_reduction__DOT__test_input[3]),16);
        bufp->chgSData(oldp+7,(vlSelfRef.tb_dynamic_noise_reduction__DOT__test_input[4]),16);
        bufp->chgSData(oldp+8,(vlSelfRef.tb_dynamic_noise_reduction__DOT__test_input[5]),16);
        bufp->chgSData(oldp+9,(vlSelfRef.tb_dynamic_noise_reduction__DOT__test_input[6]),16);
        bufp->chgSData(oldp+10,(vlSelfRef.tb_dynamic_noise_reduction__DOT__test_input[7]),16);
        bufp->chgSData(oldp+11,(vlSelfRef.tb_dynamic_noise_reduction__DOT__test_input[8]),16);
        bufp->chgSData(oldp+12,(vlSelfRef.tb_dynamic_noise_reduction__DOT__test_input[9]),16);
        bufp->chgIData(oldp+13,(vlSelfRef.tb_dynamic_noise_reduction__DOT__unnamedblk1__DOT__i),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgSData(oldp+14,(vlSelfRef.tb_dynamic_noise_reduction__DOT__y_out),16);
        bufp->chgSData(oldp+15,(vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__y_prev),16);
        bufp->chgIData(oldp+16,(vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__a_x_product),32);
        bufp->chgIData(oldp+17,(vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__a_yprev_product),32);
        bufp->chgIData(oldp+18,(vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__sum_shifted),32);
        bufp->chgIData(oldp+19,(vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__one_fixed_ext),32);
        bufp->chgIData(oldp+20,(vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__alpha_ext),32);
    }
    bufp->chgBit(oldp+21,(vlSelfRef.tb_dynamic_noise_reduction__DOT__clk));
}

void Vtb_dynamic_noise_reduction___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dynamic_noise_reduction___024root__trace_cleanup\n"); );
    // Init
    Vtb_dynamic_noise_reduction___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_dynamic_noise_reduction___024root*>(voidSelf);
    Vtb_dynamic_noise_reduction__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
