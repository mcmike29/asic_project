// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_dynamic_noise_reduction.h for the primary calling header

#include "Vtb_dynamic_noise_reduction__pch.h"
#include "Vtb_dynamic_noise_reduction__Syms.h"
#include "Vtb_dynamic_noise_reduction___024root.h"

void Vtb_dynamic_noise_reduction___024root___ctor_var_reset(Vtb_dynamic_noise_reduction___024root* vlSelf);

Vtb_dynamic_noise_reduction___024root::Vtb_dynamic_noise_reduction___024root(Vtb_dynamic_noise_reduction__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_dynamic_noise_reduction___024root___ctor_var_reset(this);
}

void Vtb_dynamic_noise_reduction___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_dynamic_noise_reduction___024root::~Vtb_dynamic_noise_reduction___024root() {
}
