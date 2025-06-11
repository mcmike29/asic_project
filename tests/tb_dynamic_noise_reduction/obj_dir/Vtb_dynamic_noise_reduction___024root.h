// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_dynamic_noise_reduction.h for the primary calling header

#ifndef VERILATED_VTB_DYNAMIC_NOISE_REDUCTION___024ROOT_H_
#define VERILATED_VTB_DYNAMIC_NOISE_REDUCTION___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_dynamic_noise_reduction__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_dynamic_noise_reduction___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_dynamic_noise_reduction__DOT__clk;
    CData/*0:0*/ tb_dynamic_noise_reduction__DOT__reset;
    CData/*0:0*/ tb_dynamic_noise_reduction__DOT__spi_clk;
    CData/*0:0*/ tb_dynamic_noise_reduction__DOT__spi_mosi;
    CData/*0:0*/ tb_dynamic_noise_reduction__DOT__spi_miso;
    CData/*0:0*/ tb_dynamic_noise_reduction__DOT__spi_sel;
    CData/*0:0*/ tb_dynamic_noise_reduction__DOT__dut__DOT__x_in_valid;
    CData/*0:0*/ tb_dynamic_noise_reduction__DOT__dut__DOT__filter_enabled;
    CData/*7:0*/ tb_dynamic_noise_reduction__DOT__dut__DOT__ram_addr;
    CData/*3:0*/ tb_dynamic_noise_reduction__DOT__dut__DOT__ram_we;
    CData/*0:0*/ tb_dynamic_noise_reduction__DOT__dut__DOT__ram_en;
    CData/*3:0*/ tb_dynamic_noise_reduction__DOT__dut__DOT__spi_in__DOT__bit_cnt;
    CData/*0:0*/ tb_dynamic_noise_reduction__DOT__dut__DOT__spi_in__DOT__sclk_prev;
    CData/*4:0*/ tb_dynamic_noise_reduction__DOT__dut__DOT__spi_out__DOT__bit_cnt;
    CData/*0:0*/ tb_dynamic_noise_reduction__DOT__dut__DOT__spi_out__DOT__sclk_prev;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_dynamic_noise_reduction__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_dynamic_noise_reduction__DOT__reset__0;
    CData/*0:0*/ __VactContinue;
    SData/*15:0*/ tb_dynamic_noise_reduction__DOT__sample;
    SData/*15:0*/ tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__result;
    SData/*15:0*/ tb_dynamic_noise_reduction__DOT__dut__DOT__x_in;
    SData/*15:0*/ tb_dynamic_noise_reduction__DOT__dut__DOT__y_out;
    SData/*15:0*/ tb_dynamic_noise_reduction__DOT__dut__DOT__alpha;
    SData/*15:0*/ tb_dynamic_noise_reduction__DOT__dut__DOT__filtered_out;
    SData/*15:0*/ tb_dynamic_noise_reduction__DOT__dut__DOT__spi_in__DOT__shift_reg;
    SData/*15:0*/ tb_dynamic_noise_reduction__DOT__dut__DOT__filter__DOT__y_prev;
    SData/*15:0*/ tb_dynamic_noise_reduction__DOT__dut__DOT__spi_out__DOT__shift_reg;
    IData/*31:0*/ tb_dynamic_noise_reduction__DOT__sample_file;
    IData/*31:0*/ tb_dynamic_noise_reduction__DOT__log_file;
    IData/*31:0*/ tb_dynamic_noise_reduction__DOT__i;
    IData/*31:0*/ tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index;
    IData/*31:0*/ tb_dynamic_noise_reduction__DOT__dut__DOT__ram_din;
    IData/*31:0*/ tb_dynamic_noise_reduction__DOT__dut__DOT__ram_dout;
    IData/*31:0*/ tb_dynamic_noise_reduction__DOT__dut__DOT__filter__DOT__a_x_product;
    IData/*31:0*/ tb_dynamic_noise_reduction__DOT__dut__DOT__filter__DOT__a_yprev_product;
    IData/*31:0*/ tb_dynamic_noise_reduction__DOT__dut__DOT__filter__DOT__sum_shifted;
    IData/*31:0*/ tb_dynamic_noise_reduction__DOT__dut__DOT__filter__DOT__one_fixed_ext;
    IData/*31:0*/ tb_dynamic_noise_reduction__DOT__dut__DOT__filter__DOT__alpha_ext;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 256> tb_dynamic_noise_reduction__DOT__dut__DOT__config_ram__DOT__RAM;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hd63d5a9e__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_dynamic_noise_reduction__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_dynamic_noise_reduction___024root(Vtb_dynamic_noise_reduction__Syms* symsp, const char* v__name);
    ~Vtb_dynamic_noise_reduction___024root();
    VL_UNCOPYABLE(Vtb_dynamic_noise_reduction___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
