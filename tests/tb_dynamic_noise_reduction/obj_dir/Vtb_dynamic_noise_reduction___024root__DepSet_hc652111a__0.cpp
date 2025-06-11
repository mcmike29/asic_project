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
    // Init
    SData/*15:0*/ __Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word;
    __Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word = 0;
    VlWide<6>/*191:0*/ __Vtemp_1;
    VlWide<5>/*159:0*/ __Vtemp_2;
    // Body
    vlSymsp->_vm_contextp__->dumpfile(std::string{"wave.vcd"});
    vlSymsp->_traceDumpOpen();
    vlSelfRef.tb_dynamic_noise_reduction__DOT__reset = 1U;
    vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_sel = 1U;
    vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi = 0U;
    co_await vlSelfRef.__VtrigSched_hd63d5a9e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_dynamic_noise_reduction.clk)", 
                                                         "tb_dynamic_noise_reduction.sv", 
                                                         41);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_hd63d5a9e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_dynamic_noise_reduction.clk)", 
                                                         "tb_dynamic_noise_reduction.sv", 
                                                         41);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_hd63d5a9e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_dynamic_noise_reduction.clk)", 
                                                         "tb_dynamic_noise_reduction.sv", 
                                                         41);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_hd63d5a9e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_dynamic_noise_reduction.clk)", 
                                                         "tb_dynamic_noise_reduction.sv", 
                                                         41);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_hd63d5a9e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_dynamic_noise_reduction.clk)", 
                                                         "tb_dynamic_noise_reduction.sv", 
                                                         41);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_dynamic_noise_reduction__DOT__reset = 0U;
    __Vtemp_1[0U] = 0x2e747874U;
    __Vtemp_1[1U] = 0x6e707574U;
    __Vtemp_1[2U] = 0x696f5f69U;
    __Vtemp_1[3U] = 0x5f617564U;
    __Vtemp_1[4U] = 0x686f7274U;
    __Vtemp_1[5U] = 0x73U;
    vlSelfRef.tb_dynamic_noise_reduction__DOT__sample_file 
        = VL_FOPEN_NN(VL_CVT_PACK_STR_NW(6, __Vtemp_1)
                      , std::string{"r"});
    ;
    __Vtemp_2[0U] = 0x2e747874U;
    __Vtemp_2[1U] = 0x5f6c6f67U;
    __Vtemp_2[2U] = 0x74707574U;
    __Vtemp_2[3U] = 0x695f6f75U;
    __Vtemp_2[4U] = 0x7370U;
    vlSelfRef.tb_dynamic_noise_reduction__DOT__log_file 
        = VL_FOPEN_NN(VL_CVT_PACK_STR_NW(5, __Vtemp_2)
                      , std::string{"w"});
    ;
    if (VL_UNLIKELY(((0U == vlSelfRef.tb_dynamic_noise_reduction__DOT__sample_file)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_dynamic_noise_reduction.sv:49: Assertion failed in %Ntb_dynamic_noise_reduction: Failed to open short_audio_input.txt\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_dynamic_noise_reduction.sv", 49, "", false);
    }
    if (VL_UNLIKELY(((vlSelfRef.tb_dynamic_noise_reduction__DOT__sample_file ? feof(VL_CVT_I_FP(vlSelfRef.tb_dynamic_noise_reduction__DOT__sample_file)) : true)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_dynamic_noise_reduction.sv:58: Assertion failed in %Ntb_dynamic_noise_reduction: Reached end of file before 16 samples\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_dynamic_noise_reduction.sv", 58, "", false);
    } else {
        (void)VL_FSCANF_INX(vlSelfRef.tb_dynamic_noise_reduction__DOT__sample_file,"%#\n",0,
                            16,&(vlSelfRef.tb_dynamic_noise_reduction__DOT__sample)) ;
        __Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word 
            = vlSelfRef.tb_dynamic_noise_reduction__DOT__sample;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__result = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_sel = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 0xfU));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 0xeU;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 0xeU));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 0xdU;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 0xdU));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 0xcU;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 0xcU));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 0xbU;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 0xbU));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 0xaU;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 0xaU));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 9U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 9U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 8U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 8U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 7U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 7U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 6U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 6U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 5U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 5U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 4U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 4U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 3U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 3U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 2U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 2U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 1U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & (IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 0xffffffffU;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_sel = 1U;
        VL_FWRITEF_NX(vlSelfRef.tb_dynamic_noise_reduction__DOT__log_file,"%0#\n",0,
                      1,vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_miso);
        co_await vlSelfRef.__VdlySched.delay(0x30d40ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             93);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.tb_dynamic_noise_reduction__DOT__i = 1U;
    if (VL_UNLIKELY(((vlSelfRef.tb_dynamic_noise_reduction__DOT__sample_file ? feof(VL_CVT_I_FP(vlSelfRef.tb_dynamic_noise_reduction__DOT__sample_file)) : true)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_dynamic_noise_reduction.sv:58: Assertion failed in %Ntb_dynamic_noise_reduction: Reached end of file before 16 samples\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_dynamic_noise_reduction.sv", 58, "", false);
    } else {
        (void)VL_FSCANF_INX(vlSelfRef.tb_dynamic_noise_reduction__DOT__sample_file,"%#\n",0,
                            16,&(vlSelfRef.tb_dynamic_noise_reduction__DOT__sample)) ;
        __Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word 
            = vlSelfRef.tb_dynamic_noise_reduction__DOT__sample;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__result = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_sel = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 0xfU));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 0xeU;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 0xeU));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 0xdU;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 0xdU));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 0xcU;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 0xcU));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 0xbU;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 0xbU));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 0xaU;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 0xaU));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 9U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 9U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 8U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 8U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 7U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 7U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 6U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 6U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 5U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 5U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 4U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 4U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 3U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 3U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 2U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 2U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 1U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & (IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 0xffffffffU;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_sel = 1U;
        VL_FWRITEF_NX(vlSelfRef.tb_dynamic_noise_reduction__DOT__log_file,"%0#\n",0,
                      1,vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_miso);
        co_await vlSelfRef.__VdlySched.delay(0x30d40ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             93);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.tb_dynamic_noise_reduction__DOT__i = 2U;
    if (VL_UNLIKELY(((vlSelfRef.tb_dynamic_noise_reduction__DOT__sample_file ? feof(VL_CVT_I_FP(vlSelfRef.tb_dynamic_noise_reduction__DOT__sample_file)) : true)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_dynamic_noise_reduction.sv:58: Assertion failed in %Ntb_dynamic_noise_reduction: Reached end of file before 16 samples\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_dynamic_noise_reduction.sv", 58, "", false);
    } else {
        (void)VL_FSCANF_INX(vlSelfRef.tb_dynamic_noise_reduction__DOT__sample_file,"%#\n",0,
                            16,&(vlSelfRef.tb_dynamic_noise_reduction__DOT__sample)) ;
        __Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word 
            = vlSelfRef.tb_dynamic_noise_reduction__DOT__sample;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__result = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_sel = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 0xfU));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 0xeU;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 0xeU));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 0xdU;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 0xdU));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 0xcU;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 0xcU));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 0xbU;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 0xbU));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 0xaU;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 0xaU));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 9U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 9U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 8U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 8U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 7U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 7U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 6U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 6U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 5U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 5U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 4U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 4U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 3U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 3U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 2U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 2U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 1U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & (IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 0xffffffffU;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_sel = 1U;
        VL_FWRITEF_NX(vlSelfRef.tb_dynamic_noise_reduction__DOT__log_file,"%0#\n",0,
                      1,vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_miso);
        co_await vlSelfRef.__VdlySched.delay(0x30d40ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             93);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.tb_dynamic_noise_reduction__DOT__i = 3U;
    if (VL_UNLIKELY(((vlSelfRef.tb_dynamic_noise_reduction__DOT__sample_file ? feof(VL_CVT_I_FP(vlSelfRef.tb_dynamic_noise_reduction__DOT__sample_file)) : true)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_dynamic_noise_reduction.sv:58: Assertion failed in %Ntb_dynamic_noise_reduction: Reached end of file before 16 samples\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_dynamic_noise_reduction.sv", 58, "", false);
    } else {
        (void)VL_FSCANF_INX(vlSelfRef.tb_dynamic_noise_reduction__DOT__sample_file,"%#\n",0,
                            16,&(vlSelfRef.tb_dynamic_noise_reduction__DOT__sample)) ;
        __Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word 
            = vlSelfRef.tb_dynamic_noise_reduction__DOT__sample;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__result = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_sel = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 0xfU));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 0xeU;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 0xeU));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 0xdU;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 0xdU));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 0xcU;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 0xcU));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 0xbU;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 0xbU));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 0xaU;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 0xaU));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 9U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 9U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 8U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 8U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 7U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 7U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 6U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 6U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 5U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 5U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 4U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 4U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 3U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 3U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 2U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 2U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 1U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & (IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 0xffffffffU;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_sel = 1U;
        VL_FWRITEF_NX(vlSelfRef.tb_dynamic_noise_reduction__DOT__log_file,"%0#\n",0,
                      1,vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_miso);
        co_await vlSelfRef.__VdlySched.delay(0x30d40ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             93);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.tb_dynamic_noise_reduction__DOT__i = 4U;
    if (VL_UNLIKELY(((vlSelfRef.tb_dynamic_noise_reduction__DOT__sample_file ? feof(VL_CVT_I_FP(vlSelfRef.tb_dynamic_noise_reduction__DOT__sample_file)) : true)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_dynamic_noise_reduction.sv:58: Assertion failed in %Ntb_dynamic_noise_reduction: Reached end of file before 16 samples\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_dynamic_noise_reduction.sv", 58, "", false);
    } else {
        (void)VL_FSCANF_INX(vlSelfRef.tb_dynamic_noise_reduction__DOT__sample_file,"%#\n",0,
                            16,&(vlSelfRef.tb_dynamic_noise_reduction__DOT__sample)) ;
        __Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word 
            = vlSelfRef.tb_dynamic_noise_reduction__DOT__sample;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__result = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_sel = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 0xfU));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 0xeU;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 0xeU));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 0xdU;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 0xdU));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 0xcU;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 0xcU));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 0xbU;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 0xbU));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 0xaU;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 0xaU));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 9U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 9U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 8U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 8U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 7U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 7U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 6U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 6U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 5U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 5U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 4U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 4U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 3U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 3U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 2U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 2U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 1U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & (IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 0xffffffffU;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_sel = 1U;
        VL_FWRITEF_NX(vlSelfRef.tb_dynamic_noise_reduction__DOT__log_file,"%0#\n",0,
                      1,vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_miso);
        co_await vlSelfRef.__VdlySched.delay(0x30d40ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             93);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.tb_dynamic_noise_reduction__DOT__i = 5U;
    if (VL_UNLIKELY(((vlSelfRef.tb_dynamic_noise_reduction__DOT__sample_file ? feof(VL_CVT_I_FP(vlSelfRef.tb_dynamic_noise_reduction__DOT__sample_file)) : true)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_dynamic_noise_reduction.sv:58: Assertion failed in %Ntb_dynamic_noise_reduction: Reached end of file before 16 samples\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_dynamic_noise_reduction.sv", 58, "", false);
    } else {
        (void)VL_FSCANF_INX(vlSelfRef.tb_dynamic_noise_reduction__DOT__sample_file,"%#\n",0,
                            16,&(vlSelfRef.tb_dynamic_noise_reduction__DOT__sample)) ;
        __Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word 
            = vlSelfRef.tb_dynamic_noise_reduction__DOT__sample;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__result = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_sel = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 0xfU));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 0xeU;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 0xeU));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 0xdU;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 0xdU));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 0xcU;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 0xcU));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 0xbU;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 0xbU));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 0xaU;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 0xaU));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 9U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 9U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 8U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 8U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 7U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 7U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 6U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 6U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 5U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 5U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 4U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 4U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 3U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 3U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 2U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 2U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 1U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & (IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 0xffffffffU;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_sel = 1U;
        VL_FWRITEF_NX(vlSelfRef.tb_dynamic_noise_reduction__DOT__log_file,"%0#\n",0,
                      1,vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_miso);
        co_await vlSelfRef.__VdlySched.delay(0x30d40ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             93);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.tb_dynamic_noise_reduction__DOT__i = 6U;
    if (VL_UNLIKELY(((vlSelfRef.tb_dynamic_noise_reduction__DOT__sample_file ? feof(VL_CVT_I_FP(vlSelfRef.tb_dynamic_noise_reduction__DOT__sample_file)) : true)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_dynamic_noise_reduction.sv:58: Assertion failed in %Ntb_dynamic_noise_reduction: Reached end of file before 16 samples\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_dynamic_noise_reduction.sv", 58, "", false);
    } else {
        (void)VL_FSCANF_INX(vlSelfRef.tb_dynamic_noise_reduction__DOT__sample_file,"%#\n",0,
                            16,&(vlSelfRef.tb_dynamic_noise_reduction__DOT__sample)) ;
        __Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word 
            = vlSelfRef.tb_dynamic_noise_reduction__DOT__sample;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__result = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_sel = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 0xfU));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 0xeU;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 0xeU));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 0xdU;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 0xdU));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 0xcU;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 0xcU));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 0xbU;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 0xbU));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 0xaU;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 0xaU));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 9U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 9U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 8U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 8U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 7U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 7U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 6U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 6U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 5U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 5U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 4U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 4U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 3U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 3U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 2U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 2U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 1U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & (IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 0xffffffffU;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_sel = 1U;
        VL_FWRITEF_NX(vlSelfRef.tb_dynamic_noise_reduction__DOT__log_file,"%0#\n",0,
                      1,vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_miso);
        co_await vlSelfRef.__VdlySched.delay(0x30d40ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             93);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.tb_dynamic_noise_reduction__DOT__i = 7U;
    if (VL_UNLIKELY(((vlSelfRef.tb_dynamic_noise_reduction__DOT__sample_file ? feof(VL_CVT_I_FP(vlSelfRef.tb_dynamic_noise_reduction__DOT__sample_file)) : true)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_dynamic_noise_reduction.sv:58: Assertion failed in %Ntb_dynamic_noise_reduction: Reached end of file before 16 samples\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_dynamic_noise_reduction.sv", 58, "", false);
    } else {
        (void)VL_FSCANF_INX(vlSelfRef.tb_dynamic_noise_reduction__DOT__sample_file,"%#\n",0,
                            16,&(vlSelfRef.tb_dynamic_noise_reduction__DOT__sample)) ;
        __Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word 
            = vlSelfRef.tb_dynamic_noise_reduction__DOT__sample;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__result = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_sel = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 0xfU));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 0xeU;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 0xeU));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 0xdU;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 0xdU));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 0xcU;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 0xcU));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 0xbU;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 0xbU));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 0xaU;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 0xaU));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 9U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 9U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 8U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 8U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 7U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 7U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 6U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 6U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 5U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 5U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 4U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 4U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 3U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 3U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 2U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 2U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 1U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & (IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 0xffffffffU;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_sel = 1U;
        VL_FWRITEF_NX(vlSelfRef.tb_dynamic_noise_reduction__DOT__log_file,"%0#\n",0,
                      1,vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_miso);
        co_await vlSelfRef.__VdlySched.delay(0x30d40ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             93);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.tb_dynamic_noise_reduction__DOT__i = 8U;
    if (VL_UNLIKELY(((vlSelfRef.tb_dynamic_noise_reduction__DOT__sample_file ? feof(VL_CVT_I_FP(vlSelfRef.tb_dynamic_noise_reduction__DOT__sample_file)) : true)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_dynamic_noise_reduction.sv:58: Assertion failed in %Ntb_dynamic_noise_reduction: Reached end of file before 16 samples\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_dynamic_noise_reduction.sv", 58, "", false);
    } else {
        (void)VL_FSCANF_INX(vlSelfRef.tb_dynamic_noise_reduction__DOT__sample_file,"%#\n",0,
                            16,&(vlSelfRef.tb_dynamic_noise_reduction__DOT__sample)) ;
        __Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word 
            = vlSelfRef.tb_dynamic_noise_reduction__DOT__sample;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__result = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_sel = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 0xfU));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 0xeU;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 0xeU));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 0xdU;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 0xdU));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 0xcU;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 0xcU));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 0xbU;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 0xbU));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 0xaU;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 0xaU));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 9U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 9U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 8U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 8U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 7U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 7U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 6U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 6U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 5U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 5U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 4U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 4U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 3U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 3U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 2U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 2U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 1U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & (IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 0xffffffffU;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_sel = 1U;
        VL_FWRITEF_NX(vlSelfRef.tb_dynamic_noise_reduction__DOT__log_file,"%0#\n",0,
                      1,vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_miso);
        co_await vlSelfRef.__VdlySched.delay(0x30d40ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             93);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.tb_dynamic_noise_reduction__DOT__i = 9U;
    if (VL_UNLIKELY(((vlSelfRef.tb_dynamic_noise_reduction__DOT__sample_file ? feof(VL_CVT_I_FP(vlSelfRef.tb_dynamic_noise_reduction__DOT__sample_file)) : true)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_dynamic_noise_reduction.sv:58: Assertion failed in %Ntb_dynamic_noise_reduction: Reached end of file before 16 samples\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_dynamic_noise_reduction.sv", 58, "", false);
    } else {
        (void)VL_FSCANF_INX(vlSelfRef.tb_dynamic_noise_reduction__DOT__sample_file,"%#\n",0,
                            16,&(vlSelfRef.tb_dynamic_noise_reduction__DOT__sample)) ;
        __Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word 
            = vlSelfRef.tb_dynamic_noise_reduction__DOT__sample;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__result = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_sel = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 0xfU));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 0xeU;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 0xeU));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 0xdU;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 0xdU));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 0xcU;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 0xcU));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 0xbU;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 0xbU));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 0xaU;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 0xaU));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 9U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 9U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 8U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 8U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 7U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 7U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 6U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 6U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 5U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 5U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 4U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 4U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 3U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 3U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 2U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 2U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 1U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & (IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 0xffffffffU;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_sel = 1U;
        VL_FWRITEF_NX(vlSelfRef.tb_dynamic_noise_reduction__DOT__log_file,"%0#\n",0,
                      1,vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_miso);
        co_await vlSelfRef.__VdlySched.delay(0x30d40ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             93);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.tb_dynamic_noise_reduction__DOT__i = 0xaU;
    if (VL_UNLIKELY(((vlSelfRef.tb_dynamic_noise_reduction__DOT__sample_file ? feof(VL_CVT_I_FP(vlSelfRef.tb_dynamic_noise_reduction__DOT__sample_file)) : true)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_dynamic_noise_reduction.sv:58: Assertion failed in %Ntb_dynamic_noise_reduction: Reached end of file before 16 samples\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_dynamic_noise_reduction.sv", 58, "", false);
    } else {
        (void)VL_FSCANF_INX(vlSelfRef.tb_dynamic_noise_reduction__DOT__sample_file,"%#\n",0,
                            16,&(vlSelfRef.tb_dynamic_noise_reduction__DOT__sample)) ;
        __Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word 
            = vlSelfRef.tb_dynamic_noise_reduction__DOT__sample;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__result = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_sel = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 0xfU));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 0xeU;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 0xeU));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 0xdU;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 0xdU));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 0xcU;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 0xcU));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 0xbU;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 0xbU));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 0xaU;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 0xaU));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 9U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 9U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 8U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 8U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 7U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 7U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 6U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 6U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 5U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 5U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 4U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 4U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 3U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 3U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 2U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 2U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 1U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & (IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 0xffffffffU;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_sel = 1U;
        VL_FWRITEF_NX(vlSelfRef.tb_dynamic_noise_reduction__DOT__log_file,"%0#\n",0,
                      1,vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_miso);
        co_await vlSelfRef.__VdlySched.delay(0x30d40ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             93);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.tb_dynamic_noise_reduction__DOT__i = 0xbU;
    if (VL_UNLIKELY(((vlSelfRef.tb_dynamic_noise_reduction__DOT__sample_file ? feof(VL_CVT_I_FP(vlSelfRef.tb_dynamic_noise_reduction__DOT__sample_file)) : true)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_dynamic_noise_reduction.sv:58: Assertion failed in %Ntb_dynamic_noise_reduction: Reached end of file before 16 samples\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_dynamic_noise_reduction.sv", 58, "", false);
    } else {
        (void)VL_FSCANF_INX(vlSelfRef.tb_dynamic_noise_reduction__DOT__sample_file,"%#\n",0,
                            16,&(vlSelfRef.tb_dynamic_noise_reduction__DOT__sample)) ;
        __Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word 
            = vlSelfRef.tb_dynamic_noise_reduction__DOT__sample;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__result = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_sel = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 0xfU));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 0xeU;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 0xeU));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 0xdU;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 0xdU));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 0xcU;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 0xcU));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 0xbU;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 0xbU));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 0xaU;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 0xaU));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 9U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 9U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 8U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 8U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 7U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 7U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 6U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 6U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 5U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 5U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 4U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 4U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 3U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 3U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 2U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 2U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 1U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & (IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 0xffffffffU;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_sel = 1U;
        VL_FWRITEF_NX(vlSelfRef.tb_dynamic_noise_reduction__DOT__log_file,"%0#\n",0,
                      1,vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_miso);
        co_await vlSelfRef.__VdlySched.delay(0x30d40ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             93);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.tb_dynamic_noise_reduction__DOT__i = 0xcU;
    if (VL_UNLIKELY(((vlSelfRef.tb_dynamic_noise_reduction__DOT__sample_file ? feof(VL_CVT_I_FP(vlSelfRef.tb_dynamic_noise_reduction__DOT__sample_file)) : true)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_dynamic_noise_reduction.sv:58: Assertion failed in %Ntb_dynamic_noise_reduction: Reached end of file before 16 samples\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_dynamic_noise_reduction.sv", 58, "", false);
    } else {
        (void)VL_FSCANF_INX(vlSelfRef.tb_dynamic_noise_reduction__DOT__sample_file,"%#\n",0,
                            16,&(vlSelfRef.tb_dynamic_noise_reduction__DOT__sample)) ;
        __Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word 
            = vlSelfRef.tb_dynamic_noise_reduction__DOT__sample;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__result = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_sel = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 0xfU));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 0xeU;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 0xeU));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 0xdU;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 0xdU));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 0xcU;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 0xcU));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 0xbU;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 0xbU));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 0xaU;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 0xaU));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 9U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 9U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 8U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 8U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 7U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 7U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 6U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 6U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 5U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 5U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 4U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 4U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 3U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 3U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 2U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 2U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 1U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & (IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 0xffffffffU;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_sel = 1U;
        VL_FWRITEF_NX(vlSelfRef.tb_dynamic_noise_reduction__DOT__log_file,"%0#\n",0,
                      1,vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_miso);
        co_await vlSelfRef.__VdlySched.delay(0x30d40ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             93);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.tb_dynamic_noise_reduction__DOT__i = 0xdU;
    if (VL_UNLIKELY(((vlSelfRef.tb_dynamic_noise_reduction__DOT__sample_file ? feof(VL_CVT_I_FP(vlSelfRef.tb_dynamic_noise_reduction__DOT__sample_file)) : true)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_dynamic_noise_reduction.sv:58: Assertion failed in %Ntb_dynamic_noise_reduction: Reached end of file before 16 samples\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_dynamic_noise_reduction.sv", 58, "", false);
    } else {
        (void)VL_FSCANF_INX(vlSelfRef.tb_dynamic_noise_reduction__DOT__sample_file,"%#\n",0,
                            16,&(vlSelfRef.tb_dynamic_noise_reduction__DOT__sample)) ;
        __Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word 
            = vlSelfRef.tb_dynamic_noise_reduction__DOT__sample;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__result = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_sel = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 0xfU));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 0xeU;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 0xeU));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 0xdU;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 0xdU));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 0xcU;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 0xcU));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 0xbU;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 0xbU));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 0xaU;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 0xaU));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 9U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 9U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 8U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 8U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 7U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 7U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 6U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 6U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 5U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 5U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 4U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 4U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 3U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 3U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 2U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 2U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 1U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & (IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 0xffffffffU;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_sel = 1U;
        VL_FWRITEF_NX(vlSelfRef.tb_dynamic_noise_reduction__DOT__log_file,"%0#\n",0,
                      1,vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_miso);
        co_await vlSelfRef.__VdlySched.delay(0x30d40ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             93);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.tb_dynamic_noise_reduction__DOT__i = 0xeU;
    if (VL_UNLIKELY(((vlSelfRef.tb_dynamic_noise_reduction__DOT__sample_file ? feof(VL_CVT_I_FP(vlSelfRef.tb_dynamic_noise_reduction__DOT__sample_file)) : true)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_dynamic_noise_reduction.sv:58: Assertion failed in %Ntb_dynamic_noise_reduction: Reached end of file before 16 samples\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_dynamic_noise_reduction.sv", 58, "", false);
    } else {
        (void)VL_FSCANF_INX(vlSelfRef.tb_dynamic_noise_reduction__DOT__sample_file,"%#\n",0,
                            16,&(vlSelfRef.tb_dynamic_noise_reduction__DOT__sample)) ;
        __Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word 
            = vlSelfRef.tb_dynamic_noise_reduction__DOT__sample;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__result = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_sel = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 0xfU));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 0xeU;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 0xeU));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 0xdU;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 0xdU));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 0xcU;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 0xcU));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 0xbU;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 0xbU));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 0xaU;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 0xaU));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 9U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 9U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 8U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 8U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 7U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 7U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 6U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 6U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 5U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 5U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 4U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 4U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 3U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 3U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 2U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 2U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 1U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & (IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 0xffffffffU;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_sel = 1U;
        VL_FWRITEF_NX(vlSelfRef.tb_dynamic_noise_reduction__DOT__log_file,"%0#\n",0,
                      1,vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_miso);
        co_await vlSelfRef.__VdlySched.delay(0x30d40ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             93);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.tb_dynamic_noise_reduction__DOT__i = 0xfU;
    if (VL_UNLIKELY(((vlSelfRef.tb_dynamic_noise_reduction__DOT__sample_file ? feof(VL_CVT_I_FP(vlSelfRef.tb_dynamic_noise_reduction__DOT__sample_file)) : true)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_dynamic_noise_reduction.sv:58: Assertion failed in %Ntb_dynamic_noise_reduction: Reached end of file before 16 samples\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_dynamic_noise_reduction.sv", 58, "", false);
    } else {
        (void)VL_FSCANF_INX(vlSelfRef.tb_dynamic_noise_reduction__DOT__sample_file,"%#\n",0,
                            16,&(vlSelfRef.tb_dynamic_noise_reduction__DOT__sample)) ;
        __Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word 
            = vlSelfRef.tb_dynamic_noise_reduction__DOT__sample;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__result = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_sel = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 0xfU));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 0xeU;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 0xeU));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 0xdU;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 0xdU));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 0xcU;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 0xcU));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 0xbU;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 0xbU));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 0xaU;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 0xaU));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 9U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 9U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 8U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 8U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 7U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 7U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 6U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 6U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 5U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 5U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 4U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 4U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 3U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 3U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 2U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 2U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & ((IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word) 
                     >> 1U));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_mosi 
            = (1U & (IData)(__Vtask_tb_dynamic_noise_reduction__DOT__send_spi_word__0__word));
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_clk = 0U;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__send_spi_word__Vstatic__bit_index = 0xffffffffU;
        vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_sel = 1U;
        VL_FWRITEF_NX(vlSelfRef.tb_dynamic_noise_reduction__DOT__log_file,"%0#\n",0,
                      1,vlSelfRef.tb_dynamic_noise_reduction__DOT__spi_miso);
        co_await vlSelfRef.__VdlySched.delay(0x30d40ULL, 
                                             nullptr, 
                                             "tb_dynamic_noise_reduction.sv", 
                                             93);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.tb_dynamic_noise_reduction__DOT__i = 0x10U;
    VL_FCLOSE_I(vlSelfRef.tb_dynamic_noise_reduction__DOT__sample_file); VL_FCLOSE_I(vlSelfRef.tb_dynamic_noise_reduction__DOT__log_file); co_await vlSelfRef.__VdlySched.delay(0xf4240ULL, 
                                                                                nullptr, 
                                                                                "tb_dynamic_noise_reduction.sv", 
                                                                                70);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_FINISH_MT("tb_dynamic_noise_reduction.sv", 71, "");
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
