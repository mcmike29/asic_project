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
    tracep->declBus(c+23,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+24,0,"CYCLES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+22,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"x_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+3,0,"alpha",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+15,0,"y_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("test_input", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 10; ++i) {
        tracep->declBus(c+4+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+23,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+22,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"x_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+3,0,"alpha",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+15,0,"y_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+16,0,"y_prev",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+17,0,"a_x_product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+18,0,"a_yprev_product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"sum_shifted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+25,0,"one_fixed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+20,0,"one_fixed_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+21,0,"alpha_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+14,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
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
    bufp->fullIData(oldp+23,(0x10U),32);
    bufp->fullIData(oldp+24,(0xaU),32);
    bufp->fullSData(oldp+25,(0x7fffU),16);
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
    bufp->fullSData(oldp+2,(vlSelfRef.tb_dynamic_noise_reduction__DOT__x_in),16);
    bufp->fullSData(oldp+3,(vlSelfRef.tb_dynamic_noise_reduction__DOT__alpha),16);
    bufp->fullSData(oldp+4,(vlSelfRef.tb_dynamic_noise_reduction__DOT__test_input[0]),16);
    bufp->fullSData(oldp+5,(vlSelfRef.tb_dynamic_noise_reduction__DOT__test_input[1]),16);
    bufp->fullSData(oldp+6,(vlSelfRef.tb_dynamic_noise_reduction__DOT__test_input[2]),16);
    bufp->fullSData(oldp+7,(vlSelfRef.tb_dynamic_noise_reduction__DOT__test_input[3]),16);
    bufp->fullSData(oldp+8,(vlSelfRef.tb_dynamic_noise_reduction__DOT__test_input[4]),16);
    bufp->fullSData(oldp+9,(vlSelfRef.tb_dynamic_noise_reduction__DOT__test_input[5]),16);
    bufp->fullSData(oldp+10,(vlSelfRef.tb_dynamic_noise_reduction__DOT__test_input[6]),16);
    bufp->fullSData(oldp+11,(vlSelfRef.tb_dynamic_noise_reduction__DOT__test_input[7]),16);
    bufp->fullSData(oldp+12,(vlSelfRef.tb_dynamic_noise_reduction__DOT__test_input[8]),16);
    bufp->fullSData(oldp+13,(vlSelfRef.tb_dynamic_noise_reduction__DOT__test_input[9]),16);
    bufp->fullIData(oldp+14,(vlSelfRef.tb_dynamic_noise_reduction__DOT__unnamedblk1__DOT__i),32);
    bufp->fullSData(oldp+15,(vlSelfRef.tb_dynamic_noise_reduction__DOT__y_out),16);
    bufp->fullSData(oldp+16,(vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__y_prev),16);
    bufp->fullIData(oldp+17,(vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__a_x_product),32);
    bufp->fullIData(oldp+18,(vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__a_yprev_product),32);
    bufp->fullIData(oldp+19,(vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__sum_shifted),32);
    bufp->fullIData(oldp+20,(vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__one_fixed_ext),32);
    bufp->fullIData(oldp+21,(vlSelfRef.tb_dynamic_noise_reduction__DOT__dut__DOT__alpha_ext),32);
    bufp->fullBit(oldp+22,(vlSelfRef.tb_dynamic_noise_reduction__DOT__clk));
}
