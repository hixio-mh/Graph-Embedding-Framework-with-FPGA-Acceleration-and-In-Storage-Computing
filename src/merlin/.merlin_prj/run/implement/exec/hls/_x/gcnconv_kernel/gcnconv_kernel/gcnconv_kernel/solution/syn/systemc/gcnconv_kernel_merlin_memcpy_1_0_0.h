// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2019.1.op
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _gcnconv_kernel_merlin_memcpy_1_0_0_HH_
#define _gcnconv_kernel_merlin_memcpy_1_0_0_HH_

#include "systemc.h"
#include "AESL_pkg.h"


namespace ap_rtl {

struct gcnconv_kernel_merlin_memcpy_1_0_0 : public sc_module {
    // Port declarations 58
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_logic > m_axi_dst_AWVALID;
    sc_in< sc_logic > m_axi_dst_AWREADY;
    sc_out< sc_lv<64> > m_axi_dst_AWADDR;
    sc_out< sc_lv<1> > m_axi_dst_AWID;
    sc_out< sc_lv<32> > m_axi_dst_AWLEN;
    sc_out< sc_lv<3> > m_axi_dst_AWSIZE;
    sc_out< sc_lv<2> > m_axi_dst_AWBURST;
    sc_out< sc_lv<2> > m_axi_dst_AWLOCK;
    sc_out< sc_lv<4> > m_axi_dst_AWCACHE;
    sc_out< sc_lv<3> > m_axi_dst_AWPROT;
    sc_out< sc_lv<4> > m_axi_dst_AWQOS;
    sc_out< sc_lv<4> > m_axi_dst_AWREGION;
    sc_out< sc_lv<1> > m_axi_dst_AWUSER;
    sc_out< sc_logic > m_axi_dst_WVALID;
    sc_in< sc_logic > m_axi_dst_WREADY;
    sc_out< sc_lv<512> > m_axi_dst_WDATA;
    sc_out< sc_lv<64> > m_axi_dst_WSTRB;
    sc_out< sc_logic > m_axi_dst_WLAST;
    sc_out< sc_lv<1> > m_axi_dst_WID;
    sc_out< sc_lv<1> > m_axi_dst_WUSER;
    sc_out< sc_logic > m_axi_dst_ARVALID;
    sc_in< sc_logic > m_axi_dst_ARREADY;
    sc_out< sc_lv<64> > m_axi_dst_ARADDR;
    sc_out< sc_lv<1> > m_axi_dst_ARID;
    sc_out< sc_lv<32> > m_axi_dst_ARLEN;
    sc_out< sc_lv<3> > m_axi_dst_ARSIZE;
    sc_out< sc_lv<2> > m_axi_dst_ARBURST;
    sc_out< sc_lv<2> > m_axi_dst_ARLOCK;
    sc_out< sc_lv<4> > m_axi_dst_ARCACHE;
    sc_out< sc_lv<3> > m_axi_dst_ARPROT;
    sc_out< sc_lv<4> > m_axi_dst_ARQOS;
    sc_out< sc_lv<4> > m_axi_dst_ARREGION;
    sc_out< sc_lv<1> > m_axi_dst_ARUSER;
    sc_in< sc_logic > m_axi_dst_RVALID;
    sc_out< sc_logic > m_axi_dst_RREADY;
    sc_in< sc_lv<512> > m_axi_dst_RDATA;
    sc_in< sc_logic > m_axi_dst_RLAST;
    sc_in< sc_lv<1> > m_axi_dst_RID;
    sc_in< sc_lv<1> > m_axi_dst_RUSER;
    sc_in< sc_lv<2> > m_axi_dst_RRESP;
    sc_in< sc_logic > m_axi_dst_BVALID;
    sc_out< sc_logic > m_axi_dst_BREADY;
    sc_in< sc_lv<2> > m_axi_dst_BRESP;
    sc_in< sc_lv<1> > m_axi_dst_BID;
    sc_in< sc_lv<1> > m_axi_dst_BUSER;
    sc_in< sc_lv<58> > dst_offset;
    sc_out< sc_lv<18> > src_address0;
    sc_out< sc_logic > src_ce0;
    sc_in< sc_lv<32> > src_q0;
    sc_out< sc_logic > ap_ext_blocking_n;
    sc_out< sc_logic > ap_str_blocking_n;
    sc_out< sc_logic > ap_int_blocking_n;


    // Module declarations
    gcnconv_kernel_merlin_memcpy_1_0_0(sc_module_name name);
    SC_HAS_PROCESS(gcnconv_kernel_merlin_memcpy_1_0_0);

    ~gcnconv_kernel_merlin_memcpy_1_0_0();

    sc_trace_file* mVcdFile;

    sc_signal< sc_lv<17> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_logic > dst_blk_n_AR;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage1;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0;
    sc_signal< bool > ap_block_pp0_stage1;
    sc_signal< sc_lv<1> > icmp_ln50_reg_286;
    sc_signal< sc_logic > dst_blk_n_R;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage8;
    sc_signal< bool > ap_block_pp0_stage8;
    sc_signal< sc_logic > dst_blk_n_AW;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage9;
    sc_signal< bool > ap_block_pp0_stage9;
    sc_signal< sc_logic > dst_blk_n_W;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage10;
    sc_signal< bool > ap_block_pp0_stage10;
    sc_signal< sc_logic > dst_blk_n_B;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage0;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter1;
    sc_signal< bool > ap_block_pp0_stage0;
    sc_signal< sc_lv<17> > i_0_reg_125;
    sc_signal< sc_lv<1> > icmp_ln50_fu_136_p2;
    sc_signal< bool > ap_block_state2_pp0_stage0_iter0;
    sc_signal< bool > ap_block_state17_pp0_stage0_iter1;
    sc_signal< bool > ap_block_pp0_stage0_11001;
    sc_signal< sc_lv<17> > i_fu_142_p2;
    sc_signal< sc_lv<17> > i_reg_290;
    sc_signal< sc_lv<59> > add_ln55_3_fu_218_p2;
    sc_signal< sc_lv<59> > add_ln55_3_reg_300;
    sc_signal< sc_lv<4> > empty_fu_224_p1;
    sc_signal< sc_lv<4> > empty_reg_305;
    sc_signal< sc_lv<32> > src_load_reg_310;
    sc_signal< bool > ap_block_state3_pp0_stage1_iter0;
    sc_signal< bool > ap_block_state3_io;
    sc_signal< bool > ap_block_pp0_stage1_11001;
    sc_signal< sc_lv<64> > dst_addr_reg_315;
    sc_signal< sc_lv<512> > dst_addr_read_reg_322;
    sc_signal< bool > ap_block_state10_pp0_stage8_iter0;
    sc_signal< bool > ap_block_pp0_stage8_11001;
    sc_signal< sc_lv<512> > or_ln55_fu_275_p2;
    sc_signal< sc_lv<512> > or_ln55_reg_327;
    sc_signal< bool > ap_block_state11_pp0_stage9_iter0;
    sc_signal< bool > ap_block_state11_io;
    sc_signal< bool > ap_block_pp0_stage9_11001;
    sc_signal< bool > ap_block_pp0_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp0_exit_iter0_state2;
    sc_signal< bool > ap_block_state16_pp0_stage14_iter0;
    sc_signal< bool > ap_block_pp0_stage14_subdone;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage14;
    sc_signal< sc_lv<17> > ap_phi_mux_i_0_phi_fu_129_p4;
    sc_signal< sc_lv<64> > zext_ln55_1_fu_190_p1;
    sc_signal< sc_lv<64> > zext_ln55_4_fu_228_p1;
    sc_signal< bool > ap_block_state12_pp0_stage10_iter0;
    sc_signal< bool > ap_block_state12_io;
    sc_signal< bool > ap_block_pp0_stage10_11001;
    sc_signal< bool > ap_block_pp0_stage10_01001;
    sc_signal< sc_lv<1> > icmp_ln55_fu_152_p2;
    sc_signal< sc_lv<17> > add_ln55_1_fu_158_p2;
    sc_signal< sc_lv<17> > select_ln55_fu_164_p3;
    sc_signal< sc_lv<18> > select_ln55_1_fu_176_p3;
    sc_signal< sc_lv<18> > zext_ln55_fu_172_p1;
    sc_signal< sc_lv<18> > add_ln55_2_fu_184_p2;
    sc_signal< sc_lv<18> > zext_ln50_fu_148_p1;
    sc_signal< sc_lv<18> > add_ln55_fu_195_p2;
    sc_signal< sc_lv<14> > tmp_7_fu_201_p4;
    sc_signal< sc_lv<59> > zext_ln55_2_fu_211_p1;
    sc_signal< sc_lv<59> > zext_ln55_3_fu_215_p1;
    sc_signal< sc_lv<9> > tmp_8_fu_238_p3;
    sc_signal< sc_lv<512> > zext_ln55_5_fu_245_p1;
    sc_signal< sc_lv<512> > shl_ln55_fu_249_p2;
    sc_signal< sc_lv<512> > xor_ln55_fu_255_p2;
    sc_signal< sc_lv<512> > zext_ln55_6_fu_266_p1;
    sc_signal< sc_lv<512> > and_ln55_fu_261_p2;
    sc_signal< sc_lv<512> > shl_ln55_1_fu_269_p2;
    sc_signal< sc_logic > ap_CS_fsm_state18;
    sc_signal< sc_lv<17> > ap_NS_fsm;
    sc_signal< bool > ap_block_pp0_stage1_subdone;
    sc_signal< bool > ap_block_state4_pp0_stage2_iter0;
    sc_signal< bool > ap_block_pp0_stage2_subdone;
    sc_signal< bool > ap_block_state5_pp0_stage3_iter0;
    sc_signal< bool > ap_block_pp0_stage3_subdone;
    sc_signal< bool > ap_block_state6_pp0_stage4_iter0;
    sc_signal< bool > ap_block_pp0_stage4_subdone;
    sc_signal< bool > ap_block_state7_pp0_stage5_iter0;
    sc_signal< bool > ap_block_pp0_stage5_subdone;
    sc_signal< bool > ap_block_state8_pp0_stage6_iter0;
    sc_signal< bool > ap_block_pp0_stage6_subdone;
    sc_signal< bool > ap_block_state9_pp0_stage7_iter0;
    sc_signal< bool > ap_block_pp0_stage7_subdone;
    sc_signal< bool > ap_block_pp0_stage8_subdone;
    sc_signal< bool > ap_block_pp0_stage9_subdone;
    sc_signal< bool > ap_block_pp0_stage10_subdone;
    sc_signal< bool > ap_block_state13_pp0_stage11_iter0;
    sc_signal< bool > ap_block_pp0_stage11_subdone;
    sc_signal< bool > ap_block_state14_pp0_stage12_iter0;
    sc_signal< bool > ap_block_pp0_stage12_subdone;
    sc_signal< bool > ap_block_state15_pp0_stage13_iter0;
    sc_signal< bool > ap_block_pp0_stage13_subdone;
    sc_signal< sc_logic > ap_ext_blocking_cur_n;
    sc_signal< sc_logic > ap_idle_pp0;
    sc_signal< sc_logic > ap_enable_pp0;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage2;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage3;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage4;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage5;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage6;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage7;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage11;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage12;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage13;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<17> ap_ST_fsm_state1;
    static const sc_lv<17> ap_ST_fsm_pp0_stage0;
    static const sc_lv<17> ap_ST_fsm_pp0_stage1;
    static const sc_lv<17> ap_ST_fsm_pp0_stage2;
    static const sc_lv<17> ap_ST_fsm_pp0_stage3;
    static const sc_lv<17> ap_ST_fsm_pp0_stage4;
    static const sc_lv<17> ap_ST_fsm_pp0_stage5;
    static const sc_lv<17> ap_ST_fsm_pp0_stage6;
    static const sc_lv<17> ap_ST_fsm_pp0_stage7;
    static const sc_lv<17> ap_ST_fsm_pp0_stage8;
    static const sc_lv<17> ap_ST_fsm_pp0_stage9;
    static const sc_lv<17> ap_ST_fsm_pp0_stage10;
    static const sc_lv<17> ap_ST_fsm_pp0_stage11;
    static const sc_lv<17> ap_ST_fsm_pp0_stage12;
    static const sc_lv<17> ap_ST_fsm_pp0_stage13;
    static const sc_lv<17> ap_ST_fsm_pp0_stage14;
    static const sc_lv<17> ap_ST_fsm_state18;
    static const bool ap_const_boolean_1;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_2;
    static const bool ap_const_boolean_0;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<32> ap_const_lv32_B;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_F;
    static const sc_lv<17> ap_const_lv17_0;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<64> ap_const_lv64_FFFFFFFFFFFFFFFF;
    static const sc_lv<17> ap_const_lv17_1F452;
    static const sc_lv<17> ap_const_lv17_1;
    static const sc_lv<17> ap_const_lv17_1A74D;
    static const sc_lv<17> ap_const_lv17_58B3;
    static const sc_lv<18> ap_const_lv18_0;
    static const sc_lv<18> ap_const_lv18_1A74D;
    static const sc_lv<18> ap_const_lv18_15A48;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_11;
    static const sc_lv<5> ap_const_lv5_0;
    static const sc_lv<512> ap_const_lv512_lc_2;
    static const sc_lv<512> ap_const_lv512_lc_3;
    static const sc_lv<32> ap_const_lv32_10;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<32> ap_const_lv32_C;
    static const sc_lv<32> ap_const_lv32_D;
    static const sc_lv<32> ap_const_lv32_E;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_add_ln55_1_fu_158_p2();
    void thread_add_ln55_2_fu_184_p2();
    void thread_add_ln55_3_fu_218_p2();
    void thread_add_ln55_fu_195_p2();
    void thread_and_ln55_fu_261_p2();
    void thread_ap_CS_fsm_pp0_stage0();
    void thread_ap_CS_fsm_pp0_stage1();
    void thread_ap_CS_fsm_pp0_stage10();
    void thread_ap_CS_fsm_pp0_stage11();
    void thread_ap_CS_fsm_pp0_stage12();
    void thread_ap_CS_fsm_pp0_stage13();
    void thread_ap_CS_fsm_pp0_stage14();
    void thread_ap_CS_fsm_pp0_stage2();
    void thread_ap_CS_fsm_pp0_stage3();
    void thread_ap_CS_fsm_pp0_stage4();
    void thread_ap_CS_fsm_pp0_stage5();
    void thread_ap_CS_fsm_pp0_stage6();
    void thread_ap_CS_fsm_pp0_stage7();
    void thread_ap_CS_fsm_pp0_stage8();
    void thread_ap_CS_fsm_pp0_stage9();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state18();
    void thread_ap_block_pp0_stage0();
    void thread_ap_block_pp0_stage0_11001();
    void thread_ap_block_pp0_stage0_subdone();
    void thread_ap_block_pp0_stage1();
    void thread_ap_block_pp0_stage10();
    void thread_ap_block_pp0_stage10_01001();
    void thread_ap_block_pp0_stage10_11001();
    void thread_ap_block_pp0_stage10_subdone();
    void thread_ap_block_pp0_stage11_subdone();
    void thread_ap_block_pp0_stage12_subdone();
    void thread_ap_block_pp0_stage13_subdone();
    void thread_ap_block_pp0_stage14_subdone();
    void thread_ap_block_pp0_stage1_11001();
    void thread_ap_block_pp0_stage1_subdone();
    void thread_ap_block_pp0_stage2_subdone();
    void thread_ap_block_pp0_stage3_subdone();
    void thread_ap_block_pp0_stage4_subdone();
    void thread_ap_block_pp0_stage5_subdone();
    void thread_ap_block_pp0_stage6_subdone();
    void thread_ap_block_pp0_stage7_subdone();
    void thread_ap_block_pp0_stage8();
    void thread_ap_block_pp0_stage8_11001();
    void thread_ap_block_pp0_stage8_subdone();
    void thread_ap_block_pp0_stage9();
    void thread_ap_block_pp0_stage9_11001();
    void thread_ap_block_pp0_stage9_subdone();
    void thread_ap_block_state10_pp0_stage8_iter0();
    void thread_ap_block_state11_io();
    void thread_ap_block_state11_pp0_stage9_iter0();
    void thread_ap_block_state12_io();
    void thread_ap_block_state12_pp0_stage10_iter0();
    void thread_ap_block_state13_pp0_stage11_iter0();
    void thread_ap_block_state14_pp0_stage12_iter0();
    void thread_ap_block_state15_pp0_stage13_iter0();
    void thread_ap_block_state16_pp0_stage14_iter0();
    void thread_ap_block_state17_pp0_stage0_iter1();
    void thread_ap_block_state2_pp0_stage0_iter0();
    void thread_ap_block_state3_io();
    void thread_ap_block_state3_pp0_stage1_iter0();
    void thread_ap_block_state4_pp0_stage2_iter0();
    void thread_ap_block_state5_pp0_stage3_iter0();
    void thread_ap_block_state6_pp0_stage4_iter0();
    void thread_ap_block_state7_pp0_stage5_iter0();
    void thread_ap_block_state8_pp0_stage6_iter0();
    void thread_ap_block_state9_pp0_stage7_iter0();
    void thread_ap_condition_pp0_exit_iter0_state2();
    void thread_ap_done();
    void thread_ap_enable_pp0();
    void thread_ap_ext_blocking_cur_n();
    void thread_ap_ext_blocking_n();
    void thread_ap_idle();
    void thread_ap_idle_pp0();
    void thread_ap_int_blocking_n();
    void thread_ap_phi_mux_i_0_phi_fu_129_p4();
    void thread_ap_ready();
    void thread_ap_str_blocking_n();
    void thread_dst_blk_n_AR();
    void thread_dst_blk_n_AW();
    void thread_dst_blk_n_B();
    void thread_dst_blk_n_R();
    void thread_dst_blk_n_W();
    void thread_empty_fu_224_p1();
    void thread_i_fu_142_p2();
    void thread_icmp_ln50_fu_136_p2();
    void thread_icmp_ln55_fu_152_p2();
    void thread_m_axi_dst_ARADDR();
    void thread_m_axi_dst_ARBURST();
    void thread_m_axi_dst_ARCACHE();
    void thread_m_axi_dst_ARID();
    void thread_m_axi_dst_ARLEN();
    void thread_m_axi_dst_ARLOCK();
    void thread_m_axi_dst_ARPROT();
    void thread_m_axi_dst_ARQOS();
    void thread_m_axi_dst_ARREGION();
    void thread_m_axi_dst_ARSIZE();
    void thread_m_axi_dst_ARUSER();
    void thread_m_axi_dst_ARVALID();
    void thread_m_axi_dst_AWADDR();
    void thread_m_axi_dst_AWBURST();
    void thread_m_axi_dst_AWCACHE();
    void thread_m_axi_dst_AWID();
    void thread_m_axi_dst_AWLEN();
    void thread_m_axi_dst_AWLOCK();
    void thread_m_axi_dst_AWPROT();
    void thread_m_axi_dst_AWQOS();
    void thread_m_axi_dst_AWREGION();
    void thread_m_axi_dst_AWSIZE();
    void thread_m_axi_dst_AWUSER();
    void thread_m_axi_dst_AWVALID();
    void thread_m_axi_dst_BREADY();
    void thread_m_axi_dst_RREADY();
    void thread_m_axi_dst_WDATA();
    void thread_m_axi_dst_WID();
    void thread_m_axi_dst_WLAST();
    void thread_m_axi_dst_WSTRB();
    void thread_m_axi_dst_WUSER();
    void thread_m_axi_dst_WVALID();
    void thread_or_ln55_fu_275_p2();
    void thread_select_ln55_1_fu_176_p3();
    void thread_select_ln55_fu_164_p3();
    void thread_shl_ln55_1_fu_269_p2();
    void thread_shl_ln55_fu_249_p2();
    void thread_src_address0();
    void thread_src_ce0();
    void thread_tmp_7_fu_201_p4();
    void thread_tmp_8_fu_238_p3();
    void thread_xor_ln55_fu_255_p2();
    void thread_zext_ln50_fu_148_p1();
    void thread_zext_ln55_1_fu_190_p1();
    void thread_zext_ln55_2_fu_211_p1();
    void thread_zext_ln55_3_fu_215_p1();
    void thread_zext_ln55_4_fu_228_p1();
    void thread_zext_ln55_5_fu_245_p1();
    void thread_zext_ln55_6_fu_266_p1();
    void thread_zext_ln55_fu_172_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif