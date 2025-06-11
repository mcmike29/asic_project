// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_dynamic_noise_reduction__Syms.h"


VL_ATTR_COLD void Vtb_dynamic_noise_reduction___024root__trace_init_sub__TOP__0(Vtb_dynamic_noise_reduction___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dynamic_noise_reduction___024root__trace_init_sub__TOP__0\n"); );
    Vtb_dynamic_noise_reduction__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("tb_dynamic_noise_reduction", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+29,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"spi_clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"spi_mosi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"spi_miso",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"spi_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"sample_file",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+5,0,"log_file",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+6,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+7,0,"sample",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+8,0,"send_spi_word__Vstatic__bit_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+9,0,"send_spi_word__Vstatic__result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+29,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"spi_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"spi_sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"spi_mosi",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"spi_miso",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+11,0,"x_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+12,0,"x_in_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+13,0,"y_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+12,0,"y_out_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+14,0,"alpha",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+15,0,"filter_enabled",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+32,0,"ram_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+33,0,"ram_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+34,0,"ram_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+35,0,"ram_din",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+31,0,"ram_dout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+36,0,"ALPHA_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+37,0,"ENABLE_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+16,0,"filtered_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("config_ram", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+38,0,"A_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"NUM_WORDS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+29,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+33,0,"WE0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+34,0,"EN0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+35,0,"Di0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+31,0,"Do0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+32,0,"A0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("filter", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+40,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+29,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+11,0,"x_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+14,0,"alpha",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+16,0,"y_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+17,0,"y_prev",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+18,0,"a_x_product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"a_yprev_product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+20,0,"sum_shifted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+41,0,"one_fixed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+21,0,"one_fixed_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+22,0,"alpha_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("spi_in", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+29,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"sclk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"mosi",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+11,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+12,0,"valid_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+23,0,"shift_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+24,0,"bit_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+25,0,"sclk_prev",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("spi_out", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+29,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"sclk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+13,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+12,0,"valid_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"miso",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+26,0,"shift_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+27,0,"bit_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+28,0,"sclk_prev",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_dynamic_noise_reduction___024root__trace_init_top(Vtb_dynamic_noise_reduction___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dynamic_noise_reduction___024root__trace_init_top\n"); );
    Vtb_dynamic_noise_reduction__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_dynamic_noise_reduction___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_dynamic_noise_reduction___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb_dynamic_noise_reduction___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_dynamic_noise_reduction___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_dynamic_noise_reduction___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_dynamic_noise_reduction___024root__trace_register(Vtb_dynamic_noise_reduction___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dynamic_noise_reduction___024root__trace_register\n"); );
    Vtb_dynamic_noise_reduction__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtb_dynamic_noise_reduction___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtb_dynamic_noise_reduction___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtb_dynamic_noise_reduction___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtb_dynamic_noise_reduction___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_dynamic_noise_reduction___024root__trace_const_0_sub_0(Vtb_dynamic_noise_reduction___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_dynamic_noise_reduction___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dynamic_noise_reduction___024root__trace_const_0\n"); );
    // Init
    Vtb_dynamic_noise_reduction___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_dynamic_noise_reduction___024root*>(voidSelf);
    Vtb_dynamic_noise_reduction__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_dynamic_noise_reduction___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_dynamic_noise_reduction___024root__trace_const_0_sub_0(Vtb_dynamic_noise_reduction___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dynamic_noise_reduction___024root__trace_const_0_sub_0\n"); );
    Vtb_dynamic_noise_reduction__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+32,(vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__ram_addr),8);
    bufp->fullCData(oldp+33,(vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__ram_we),4);
    bufp->fullBit(oldp+34,(vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__ram_en));
    bufp->fullIData(oldp+35,(vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__ram_din),32);
    bufp->fullCData(oldp+36,(0U),8);
    bufp->fullCData(oldp+37,(1U),8);
    bufp->fullIData(oldp+38,(8U),32);
    bufp->fullIData(oldp+39,(0x100U),32);
    bufp->fullIData(oldp+40,(0x10U),32);
    bufp->fullSData(oldp+41,(0x7fffU),16);
}

VL_ATTR_COLD void Vtb_dynamic_noise_reduction___024root__trace_full_0_sub_0(Vtb_dynamic_noise_reduction___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_dynamic_noise_reduction___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dynamic_noise_reduction___024root__trace_full_0\n"); );
    // Init
    Vtb_dynamic_noise_reduction___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_dynamic_noise_reduction___024root*>(voidSelf);
    Vtb_dynamic_noise_reduction__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_dynamic_noise_reduction___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_dynamic_noise_reduction___024root__trace_full_0_sub_0(Vtb_dynamic_noise_reduction___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dynamic_noise_reduction___024root__trace_full_0_sub_0\n"); );
    Vtb_dynamic_noise_reduction__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.tb_dynamic_noise_reduction__DOT__reset));
    bufp->fullBit(oldp+2,(vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi));
    bufp->fullBit(oldp+3,(vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_sel));
    bufp->fullIData(oldp+4,(vlSelfRef.tb_dynamic_noise_reduction__DOT__sample_file),32);
    bufp->fullIData(oldp+5,(vlSelfRef.tb_dynamic_noise_reduction__DOT__log_file),32);
    bufp->fullIData(oldp+6,(vlSelfRef.tb_dynamic_noise_reduction__DOT__i),32);
    bufp->fullSData(oldp+7,(vlSelfRef.tb_dynamic_noise_reduction__DOT__sample),16);
    bufp->fullIData(oldp+8,(vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index),32);
    bufp->fullSData(oldp+9,(vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__result),16);
    bufp->fullBit(oldp+10,(vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_miso));
    bufp->fullSData(oldp+11,(vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__x_in),16);
    bufp->fullBit(oldp+12,(vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__x_in_valid));
    bufp->fullSData(oldp+13,(vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__y_out),16);
    bufp->fullSData(oldp+14,(vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__alpha),16);
    bufp->fullBit(oldp+15,(vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__filter_enabled));
    bufp->fullSData(oldp+16,(vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__filtered_out),16);
    bufp->fullSData(oldp+17,(vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__filter__DOT__y_prev),16);
    bufp->fullIData(oldp+18,(vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__filter__DOT__a_x_product),32);
    bufp->fullIData(oldp+19,(vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__filter__DOT__a_yprev_product),32);
    bufp->fullIData(oldp+20,(vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__filter__DOT__sum_shifted),32);
    bufp->fullIData(oldp+21,(vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__filter__DOT__one_fixed_ext),32);
    bufp->fullIData(oldp+22,(vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__filter__DOT__alpha_ext),32);
    bufp->fullSData(oldp+23,(vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__spi_in__DOT__shift_reg),16);
    bufp->fullCData(oldp+24,(vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__spi_in__DOT__bit_cnt),4);
    bufp->fullBit(oldp+25,(vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__spi_in__DOT__sclk_prev));
    bufp->fullSData(oldp+26,(vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__spi_out__DOT__shift_reg),16);
    bufp->fullCData(oldp+27,(vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__spi_out__DOT__bit_cnt),5);
    bufp->fullBit(oldp+28,(vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__spi_out__DOT__sclk_prev));
    bufp->fullBit(oldp+29,(vlSelfRef.tb_dynamic_noise_reduction__DOT__clk));
    bufp->fullBit(oldp+30,(vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk));
    bufp->fullIData(oldp+31,(vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__ram_dout),32);
}
