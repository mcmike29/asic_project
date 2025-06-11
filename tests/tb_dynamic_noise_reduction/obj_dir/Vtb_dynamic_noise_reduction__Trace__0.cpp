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
        bufp->chgBit(oldp+1,(vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi));
        bufp->chgBit(oldp+2,(vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_sel));
        bufp->chgIData(oldp+3,(vlSelfRef.tb_dynamic_noise_reduction__DOT__sample_file),32);
        bufp->chgIData(oldp+4,(vlSelfRef.tb_dynamic_noise_reduction__DOT__log_file),32);
        bufp->chgIData(oldp+5,(vlSelfRef.tb_dynamic_noise_reduction__DOT__i),32);
        bufp->chgSData(oldp+6,(vlSelfRef.tb_dynamic_noise_reduction__DOT__sample),16);
        bufp->chgIData(oldp+7,(vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index),32);
        bufp->chgSData(oldp+8,(vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__result),16);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgBit(oldp+9,(vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_miso));
        bufp->chgSData(oldp+10,(vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__x_in),16);
        bufp->chgBit(oldp+11,(vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__x_in_valid));
        bufp->chgSData(oldp+12,(vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__y_out),16);
        bufp->chgSData(oldp+13,(vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__alpha),16);
        bufp->chgBit(oldp+14,(vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__filter_enabled));
        bufp->chgSData(oldp+15,(vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__filtered_out),16);
        bufp->chgSData(oldp+16,(vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__filter__DOT__y_prev),16);
        bufp->chgIData(oldp+17,(vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__filter__DOT__a_x_product),32);
        bufp->chgIData(oldp+18,(vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__filter__DOT__a_yprev_product),32);
        bufp->chgIData(oldp+19,(vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__filter__DOT__sum_shifted),32);
        bufp->chgIData(oldp+20,(vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__filter__DOT__one_fixed_ext),32);
        bufp->chgIData(oldp+21,(vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__filter__DOT__alpha_ext),32);
        bufp->chgSData(oldp+22,(vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__spi_in__DOT__shift_reg),16);
        bufp->chgCData(oldp+23,(vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__spi_in__DOT__bit_cnt),4);
        bufp->chgBit(oldp+24,(vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__spi_in__DOT__sclk_prev));
        bufp->chgSData(oldp+25,(vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__spi_out__DOT__shift_reg),16);
        bufp->chgCData(oldp+26,(vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__spi_out__DOT__bit_cnt),5);
        bufp->chgBit(oldp+27,(vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__spi_out__DOT__sclk_prev));
    }
    bufp->chgBit(oldp+28,(vlSelfRef.tb_dynamic_noise_reduction__DOT__clk));
    bufp->chgBit(oldp+29,(vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk));
    bufp->chgIData(oldp+30,(vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__ram_dout),32);
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
