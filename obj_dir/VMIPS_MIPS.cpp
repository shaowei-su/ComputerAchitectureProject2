// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMIPS.h for the primary calling header

#include "VMIPS_MIPS.h"        // For This
#include "VMIPS__Syms.h"

#include "verilated_dpi.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VMIPS_MIPS) {
    VL_CELL (ID, VMIPS_ID);
    VL_CELL (EXE, VMIPS_EXE);
    // Reset internal values
    // Reset structure values
    RESET = VL_RAND_RESET_I(1);
    CLK = VL_RAND_RESET_I(1);
    data_address_2DM = VL_RAND_RESET_I(32);
    __PVT__MemRead_2DM = VL_RAND_RESET_I(1);
    __PVT__MemWrite_2DM = VL_RAND_RESET_I(1);
    data_read_fDM = VL_RAND_RESET_I(32);
    __PVT__data_write_2DM = VL_RAND_RESET_I(32);
    __PVT__data_write_size_2DM = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(256,block_read_fDM);
    VL_RAND_RESET_W(256,block_write_2DM);
    dBlkRead = VL_RAND_RESET_I(1);
    dBlkWrite = VL_RAND_RESET_I(1);
    block_read_fDM_valid = VL_RAND_RESET_I(1);
    block_write_fDM_valid = VL_RAND_RESET_I(1);
    Instr_address_2IM = VL_RAND_RESET_I(32);
    Instr1_fIM = VL_RAND_RESET_I(32);
    Instr2_fIM = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(256,block_read_fIM);
    block_read_fIM_valid = VL_RAND_RESET_I(1);
    iBlkRead = VL_RAND_RESET_I(1);
    SYS = VL_RAND_RESET_I(1);
    __PVT__Instr1_IFID = VL_RAND_RESET_I(32);
    __PVT__Instr_PC_IFID = VL_RAND_RESET_I(32);
    __PVT__Instr_PC_Plus4_IFID = VL_RAND_RESET_I(32);
    Instr_address_2IC = VL_RAND_RESET_I(32);
    __PVT__Instr1_fIC = VL_RAND_RESET_I(32);
    __PVT__mem_addressL1IM = VL_RAND_RESET_I(32);
    __PVT__mem_reqL1IM = VL_RAND_RESET_I(1);
    __PVT__hitL1IF = VL_RAND_RESET_I(1);
    __PVT__WriteRegister1_MEMWB = VL_RAND_RESET_I(5);
    __PVT__WriteData1_MEMWB = VL_RAND_RESET_I(32);
    __PVT__RegWrite1_MEMWB = VL_RAND_RESET_I(1);
    data_write_2DC = VL_RAND_RESET_I(32);
    data_address_2DC = VL_RAND_RESET_I(32);
    data_write_size_2DC = VL_RAND_RESET_I(2);
    data_read_fDC = VL_RAND_RESET_I(32);
    read_2DC = VL_RAND_RESET_I(1);
    write_2DC = VL_RAND_RESET_I(1);
    flush_2DC = VL_RAND_RESET_I(1);
    data_valid_fDC = VL_RAND_RESET_I(1);
    __PVT__missDCache = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<1024; ++__Vi0) {
	    VL_RAND_RESET_W(274,__PVT__instr_cache_L1__DOT__icache[__Vi0]);
    }}
    VL_RAND_RESET_W(274,__PVT__instr_cache_L1__DOT__icache_data);
    __PVT__instr_cache_L1__DOT__i = VL_RAND_RESET_I(32);
    __PVT__instr_cache_L1__DOT__counter = VL_RAND_RESET_I(32);
    __PVT__instr_cache_L1__DOT__start_count = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<512; ++__Vi0) {
	    VL_RAND_RESET_W(276,__PVT__data_cache_L1__DOT__dcache1[__Vi0]);
    }}
    { int __Vi0=0; for (; __Vi0<512; ++__Vi0) {
	    VL_RAND_RESET_W(276,__PVT__data_cache_L1__DOT__dcache2[__Vi0]);
    }}
    __PVT__data_cache_L1__DOT__wr_wait = VL_RAND_RESET_I(1);
    __PVT__data_cache_L1__DOT__saved_data = VL_RAND_RESET_I(32);
    __PVT__data_cache_L1__DOT__saved_addr = VL_RAND_RESET_I(32);
    __PVT__data_cache_L1__DOT__saved_tag = VL_RAND_RESET_I(18);
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
	    VL_RAND_RESET_W(276,__PVT__data_cache_L1__DOT__dcache_data[__Vi0]);
    }}
    __PVT__data_cache_L1__DOT__dcache_word = VL_RAND_RESET_I(32);
    __PVT__data_cache_L1__DOT__state = VL_RAND_RESET_I(2);
    __PVT__data_cache_L1__DOT__dirty1 = VL_RAND_RESET_I(1);
    __PVT__data_cache_L1__DOT__dirty2 = VL_RAND_RESET_I(1);
    __PVT__data_cache_L1__DOT__i = VL_RAND_RESET_I(32);
    __PVT__data_cache_L1__DOT__hit1 = VL_RAND_RESET_I(1);
    __PVT__data_cache_L1__DOT__hit2 = VL_RAND_RESET_I(1);
    __PVT__data_cache_L1__DOT__set_choose = VL_RAND_RESET_I(1);
    __PVT__data_cache_L1__DOT__data_req = VL_RAND_RESET_I(1);
    __PVT__data_cache_L1__DOT__start_count = VL_RAND_RESET_I(1);
    __PVT__data_cache_L1__DOT__counter = VL_RAND_RESET_I(32);
    __PVT__data_cache_L1__DOT__hit = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256,__PVT__data_cache_L1__DOT__mem_read_data_local);
    { int __Vi0=0; for (; __Vi0<512; ++__Vi0) {
	    __PVT__data_cache_L1__DOT__LRUcounter1[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<512; ++__Vi0) {
	    __PVT__data_cache_L1__DOT__LRUcounter2[__Vi0] = VL_RAND_RESET_I(32);
    }}
    __PVT__MEM__DOT__MemoryData1 = VL_RAND_RESET_I(32);
    __PVT__MEM__DOT__data_read_aligned = VL_RAND_RESET_I(32);
    __PVT__MEM__DOT__MemWriteAddress = VL_RAND_RESET_I(32);
    __PVT__MEM__DOT__WriteData1 = VL_RAND_RESET_I(32);
    __Vdly__mem_reqL1IM = VL_RAND_RESET_I(1);
    __Vdly__mem_addressL1IM = VL_RAND_RESET_I(32);
    __Vdly__instr_cache_L1__DOT__start_count = VL_RAND_RESET_I(1);
    __Vdlyvdim0__instr_cache_L1__DOT__icache__v0 = VL_RAND_RESET_I(10);
    VL_RAND_RESET_W(274,__Vdlyvval__instr_cache_L1__DOT__icache__v0);
    __Vdlyvset__instr_cache_L1__DOT__icache__v0 = VL_RAND_RESET_I(1);
    __Vdly__instr_cache_L1__DOT__counter = VL_RAND_RESET_I(32);
    __Vdly__Instr_PC_Plus4_IFID = VL_RAND_RESET_I(32);
    __Vdly__Instr1_IFID = VL_RAND_RESET_I(32);
    __Vdly__Instr_PC_IFID = VL_RAND_RESET_I(32);
    __Vdly__data_cache_L1__DOT__state = VL_RAND_RESET_I(2);
    __Vdly__data_cache_L1__DOT__start_count = VL_RAND_RESET_I(1);
    __Vdly__data_cache_L1__DOT__counter = VL_RAND_RESET_I(32);
    __Vdly__WriteRegister1_MEMWB = VL_RAND_RESET_I(5);
    __Vdly__RegWrite1_MEMWB = VL_RAND_RESET_I(1);
    __Vdly__WriteData1_MEMWB = VL_RAND_RESET_I(32);
    __Vdlyvdim0__data_cache_L1__DOT__LRUcounter1__v0 = VL_RAND_RESET_I(9);
    __Vdlyvset__data_cache_L1__DOT__LRUcounter1__v0 = VL_RAND_RESET_I(1);
    __Vdlyvdim0__data_cache_L1__DOT__LRUcounter2__v0 = VL_RAND_RESET_I(9);
    __Vdlyvval__data_cache_L1__DOT__LRUcounter2__v0 = VL_RAND_RESET_I(32);
    __Vdlyvdim0__data_cache_L1__DOT__LRUcounter2__v1 = VL_RAND_RESET_I(9);
    __Vdlyvset__data_cache_L1__DOT__LRUcounter2__v1 = VL_RAND_RESET_I(1);
    __Vdlyvdim0__data_cache_L1__DOT__LRUcounter1__v1 = VL_RAND_RESET_I(9);
    __Vdlyvval__data_cache_L1__DOT__LRUcounter1__v1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(256,__Vdly__data_cache_L1__DOT__mem_read_data_local);
    __Vdlyvdim0__data_cache_L1__DOT__dcache2__v0 = VL_RAND_RESET_I(9);
    VL_RAND_RESET_W(276,__Vdlyvval__data_cache_L1__DOT__dcache2__v0);
    __Vdlyvset__data_cache_L1__DOT__dcache2__v0 = VL_RAND_RESET_I(1);
    __Vdlyvdim0__data_cache_L1__DOT__dcache1__v0 = VL_RAND_RESET_I(9);
    VL_RAND_RESET_W(276,__Vdlyvval__data_cache_L1__DOT__dcache1__v0);
    __Vdlyvset__data_cache_L1__DOT__dcache1__v0 = VL_RAND_RESET_I(1);
    __Vdlyvdim0__data_cache_L1__DOT__dcache1__v1 = VL_RAND_RESET_I(9);
    __Vdlyvlsb__data_cache_L1__DOT__dcache1__v1 = VL_RAND_RESET_I(9);
    __Vdlyvset__data_cache_L1__DOT__dcache1__v1 = VL_RAND_RESET_I(1);
    __Vdlyvdim0__data_cache_L1__DOT__dcache1__v2 = VL_RAND_RESET_I(9);
    __Vdlyvlsb__data_cache_L1__DOT__dcache1__v2 = VL_RAND_RESET_I(9);
    __Vdlyvval__data_cache_L1__DOT__dcache1__v2 = VL_RAND_RESET_I(32);
    __Vdlyvset__data_cache_L1__DOT__dcache1__v2 = VL_RAND_RESET_I(1);
    __Vdlyvdim0__data_cache_L1__DOT__dcache1__v3 = VL_RAND_RESET_I(9);
    __Vdlyvlsb__data_cache_L1__DOT__dcache1__v3 = VL_RAND_RESET_I(9);
    __Vdlyvval__data_cache_L1__DOT__dcache1__v3 = VL_RAND_RESET_I(32);
    __Vdlyvset__data_cache_L1__DOT__dcache1__v3 = VL_RAND_RESET_I(1);
    __Vdlyvdim0__data_cache_L1__DOT__dcache1__v4 = VL_RAND_RESET_I(9);
    __Vdlyvlsb__data_cache_L1__DOT__dcache1__v4 = VL_RAND_RESET_I(9);
    __Vdlyvval__data_cache_L1__DOT__dcache1__v4 = VL_RAND_RESET_I(32);
    __Vdlyvset__data_cache_L1__DOT__dcache1__v4 = VL_RAND_RESET_I(1);
    __Vdlyvdim0__data_cache_L1__DOT__dcache1__v5 = VL_RAND_RESET_I(9);
    __Vdlyvlsb__data_cache_L1__DOT__dcache1__v5 = VL_RAND_RESET_I(9);
    __Vdlyvval__data_cache_L1__DOT__dcache1__v5 = VL_RAND_RESET_I(32);
    __Vdlyvset__data_cache_L1__DOT__dcache1__v5 = VL_RAND_RESET_I(1);
    __Vdlyvdim0__data_cache_L1__DOT__dcache1__v6 = VL_RAND_RESET_I(9);
    __Vdlyvlsb__data_cache_L1__DOT__dcache1__v6 = VL_RAND_RESET_I(9);
    __Vdlyvval__data_cache_L1__DOT__dcache1__v6 = VL_RAND_RESET_I(32);
    __Vdlyvset__data_cache_L1__DOT__dcache1__v6 = VL_RAND_RESET_I(1);
    __Vdlyvdim0__data_cache_L1__DOT__dcache1__v7 = VL_RAND_RESET_I(9);
    __Vdlyvlsb__data_cache_L1__DOT__dcache1__v7 = VL_RAND_RESET_I(9);
    __Vdlyvval__data_cache_L1__DOT__dcache1__v7 = VL_RAND_RESET_I(32);
    __Vdlyvset__data_cache_L1__DOT__dcache1__v7 = VL_RAND_RESET_I(1);
    __Vdlyvdim0__data_cache_L1__DOT__dcache1__v8 = VL_RAND_RESET_I(9);
    __Vdlyvlsb__data_cache_L1__DOT__dcache1__v8 = VL_RAND_RESET_I(9);
    __Vdlyvval__data_cache_L1__DOT__dcache1__v8 = VL_RAND_RESET_I(32);
    __Vdlyvset__data_cache_L1__DOT__dcache1__v8 = VL_RAND_RESET_I(1);
    __Vdlyvdim0__data_cache_L1__DOT__dcache1__v9 = VL_RAND_RESET_I(9);
    __Vdlyvlsb__data_cache_L1__DOT__dcache1__v9 = VL_RAND_RESET_I(9);
    __Vdlyvval__data_cache_L1__DOT__dcache1__v9 = VL_RAND_RESET_I(32);
    __Vdlyvset__data_cache_L1__DOT__dcache1__v9 = VL_RAND_RESET_I(1);
    __Vdlyvdim0__data_cache_L1__DOT__dcache1__v10 = VL_RAND_RESET_I(9);
    __Vdlyvlsb__data_cache_L1__DOT__dcache1__v10 = VL_RAND_RESET_I(9);
    __Vdlyvval__data_cache_L1__DOT__dcache1__v10 = VL_RAND_RESET_I(32);
    __Vdlyvset__data_cache_L1__DOT__dcache1__v10 = VL_RAND_RESET_I(1);
    __Vdlyvdim0__data_cache_L1__DOT__dcache2__v1 = VL_RAND_RESET_I(9);
    __Vdlyvlsb__data_cache_L1__DOT__dcache2__v1 = VL_RAND_RESET_I(9);
    __Vdlyvset__data_cache_L1__DOT__dcache2__v1 = VL_RAND_RESET_I(1);
    __Vdlyvdim0__data_cache_L1__DOT__dcache2__v2 = VL_RAND_RESET_I(9);
    __Vdlyvlsb__data_cache_L1__DOT__dcache2__v2 = VL_RAND_RESET_I(9);
    __Vdlyvval__data_cache_L1__DOT__dcache2__v2 = VL_RAND_RESET_I(32);
    __Vdlyvset__data_cache_L1__DOT__dcache2__v2 = VL_RAND_RESET_I(1);
    __Vdlyvdim0__data_cache_L1__DOT__dcache2__v3 = VL_RAND_RESET_I(9);
    __Vdlyvlsb__data_cache_L1__DOT__dcache2__v3 = VL_RAND_RESET_I(9);
    __Vdlyvval__data_cache_L1__DOT__dcache2__v3 = VL_RAND_RESET_I(32);
    __Vdlyvset__data_cache_L1__DOT__dcache2__v3 = VL_RAND_RESET_I(1);
    __Vdlyvdim0__data_cache_L1__DOT__dcache2__v4 = VL_RAND_RESET_I(9);
    __Vdlyvlsb__data_cache_L1__DOT__dcache2__v4 = VL_RAND_RESET_I(9);
    __Vdlyvval__data_cache_L1__DOT__dcache2__v4 = VL_RAND_RESET_I(32);
    __Vdlyvset__data_cache_L1__DOT__dcache2__v4 = VL_RAND_RESET_I(1);
    __Vdlyvdim0__data_cache_L1__DOT__dcache2__v5 = VL_RAND_RESET_I(9);
    __Vdlyvlsb__data_cache_L1__DOT__dcache2__v5 = VL_RAND_RESET_I(9);
    __Vdlyvval__data_cache_L1__DOT__dcache2__v5 = VL_RAND_RESET_I(32);
    __Vdlyvset__data_cache_L1__DOT__dcache2__v5 = VL_RAND_RESET_I(1);
    __Vdlyvdim0__data_cache_L1__DOT__dcache2__v6 = VL_RAND_RESET_I(9);
    __Vdlyvlsb__data_cache_L1__DOT__dcache2__v6 = VL_RAND_RESET_I(9);
    __Vdlyvval__data_cache_L1__DOT__dcache2__v6 = VL_RAND_RESET_I(32);
    __Vdlyvset__data_cache_L1__DOT__dcache2__v6 = VL_RAND_RESET_I(1);
    __Vdlyvdim0__data_cache_L1__DOT__dcache2__v7 = VL_RAND_RESET_I(9);
    __Vdlyvlsb__data_cache_L1__DOT__dcache2__v7 = VL_RAND_RESET_I(9);
    __Vdlyvval__data_cache_L1__DOT__dcache2__v7 = VL_RAND_RESET_I(32);
    __Vdlyvset__data_cache_L1__DOT__dcache2__v7 = VL_RAND_RESET_I(1);
    __Vdlyvdim0__data_cache_L1__DOT__dcache2__v8 = VL_RAND_RESET_I(9);
    __Vdlyvlsb__data_cache_L1__DOT__dcache2__v8 = VL_RAND_RESET_I(9);
    __Vdlyvval__data_cache_L1__DOT__dcache2__v8 = VL_RAND_RESET_I(32);
    __Vdlyvset__data_cache_L1__DOT__dcache2__v8 = VL_RAND_RESET_I(1);
    __Vdlyvdim0__data_cache_L1__DOT__dcache2__v9 = VL_RAND_RESET_I(9);
    __Vdlyvlsb__data_cache_L1__DOT__dcache2__v9 = VL_RAND_RESET_I(9);
    __Vdlyvval__data_cache_L1__DOT__dcache2__v9 = VL_RAND_RESET_I(32);
    __Vdlyvset__data_cache_L1__DOT__dcache2__v9 = VL_RAND_RESET_I(1);
    __Vdlyvdim0__data_cache_L1__DOT__dcache2__v10 = VL_RAND_RESET_I(9);
    __Vdlyvlsb__data_cache_L1__DOT__dcache2__v10 = VL_RAND_RESET_I(9);
    __Vdlyvval__data_cache_L1__DOT__dcache2__v10 = VL_RAND_RESET_I(32);
    __Vdlyvset__data_cache_L1__DOT__dcache2__v10 = VL_RAND_RESET_I(1);
    __Vdlyvdim0__data_cache_L1__DOT__dcache2__v11 = VL_RAND_RESET_I(9);
    __Vdlyvlsb__data_cache_L1__DOT__dcache2__v11 = VL_RAND_RESET_I(9);
    __Vdlyvset__data_cache_L1__DOT__dcache2__v11 = VL_RAND_RESET_I(1);
    __Vdlyvdim0__data_cache_L1__DOT__dcache2__v12 = VL_RAND_RESET_I(9);
    __Vdlyvlsb__data_cache_L1__DOT__dcache2__v12 = VL_RAND_RESET_I(9);
    __Vdlyvval__data_cache_L1__DOT__dcache2__v12 = VL_RAND_RESET_I(32);
    __Vdlyvset__data_cache_L1__DOT__dcache2__v12 = VL_RAND_RESET_I(1);
    __Vdlyvdim0__data_cache_L1__DOT__dcache2__v13 = VL_RAND_RESET_I(9);
    __Vdlyvlsb__data_cache_L1__DOT__dcache2__v13 = VL_RAND_RESET_I(9);
    __Vdlyvval__data_cache_L1__DOT__dcache2__v13 = VL_RAND_RESET_I(32);
    __Vdlyvset__data_cache_L1__DOT__dcache2__v13 = VL_RAND_RESET_I(1);
    __Vdlyvdim0__data_cache_L1__DOT__dcache2__v14 = VL_RAND_RESET_I(9);
    __Vdlyvlsb__data_cache_L1__DOT__dcache2__v14 = VL_RAND_RESET_I(9);
    __Vdlyvval__data_cache_L1__DOT__dcache2__v14 = VL_RAND_RESET_I(32);
    __Vdlyvset__data_cache_L1__DOT__dcache2__v14 = VL_RAND_RESET_I(1);
    __Vdlyvdim0__data_cache_L1__DOT__dcache2__v15 = VL_RAND_RESET_I(9);
    __Vdlyvlsb__data_cache_L1__DOT__dcache2__v15 = VL_RAND_RESET_I(9);
    __Vdlyvval__data_cache_L1__DOT__dcache2__v15 = VL_RAND_RESET_I(32);
    __Vdlyvset__data_cache_L1__DOT__dcache2__v15 = VL_RAND_RESET_I(1);
    __Vdlyvdim0__data_cache_L1__DOT__dcache2__v16 = VL_RAND_RESET_I(9);
    __Vdlyvlsb__data_cache_L1__DOT__dcache2__v16 = VL_RAND_RESET_I(9);
    __Vdlyvval__data_cache_L1__DOT__dcache2__v16 = VL_RAND_RESET_I(32);
    __Vdlyvset__data_cache_L1__DOT__dcache2__v16 = VL_RAND_RESET_I(1);
    __Vdlyvdim0__data_cache_L1__DOT__dcache2__v17 = VL_RAND_RESET_I(9);
    __Vdlyvlsb__data_cache_L1__DOT__dcache2__v17 = VL_RAND_RESET_I(9);
    __Vdlyvval__data_cache_L1__DOT__dcache2__v17 = VL_RAND_RESET_I(32);
    __Vdlyvset__data_cache_L1__DOT__dcache2__v17 = VL_RAND_RESET_I(1);
    __Vdlyvdim0__data_cache_L1__DOT__dcache2__v18 = VL_RAND_RESET_I(9);
    __Vdlyvlsb__data_cache_L1__DOT__dcache2__v18 = VL_RAND_RESET_I(9);
    __Vdlyvval__data_cache_L1__DOT__dcache2__v18 = VL_RAND_RESET_I(32);
    __Vdlyvset__data_cache_L1__DOT__dcache2__v18 = VL_RAND_RESET_I(1);
    __Vdlyvdim0__data_cache_L1__DOT__dcache2__v19 = VL_RAND_RESET_I(9);
    __Vdlyvlsb__data_cache_L1__DOT__dcache2__v19 = VL_RAND_RESET_I(9);
    __Vdlyvval__data_cache_L1__DOT__dcache2__v19 = VL_RAND_RESET_I(32);
    __Vdlyvset__data_cache_L1__DOT__dcache2__v19 = VL_RAND_RESET_I(1);
    __Vdlyvdim0__data_cache_L1__DOT__dcache2__v20 = VL_RAND_RESET_I(9);
    __Vdlyvlsb__data_cache_L1__DOT__dcache2__v20 = VL_RAND_RESET_I(9);
    __Vdlyvval__data_cache_L1__DOT__dcache2__v20 = VL_RAND_RESET_I(32);
    __Vdlyvset__data_cache_L1__DOT__dcache2__v20 = VL_RAND_RESET_I(1);
    __Vdlyvdim0__data_cache_L1__DOT__dcache1__v11 = VL_RAND_RESET_I(9);
    __Vdlyvlsb__data_cache_L1__DOT__dcache1__v11 = VL_RAND_RESET_I(9);
    __Vdlyvset__data_cache_L1__DOT__dcache1__v11 = VL_RAND_RESET_I(1);
    __Vdlyvdim0__data_cache_L1__DOT__dcache1__v12 = VL_RAND_RESET_I(9);
    __Vdlyvlsb__data_cache_L1__DOT__dcache1__v12 = VL_RAND_RESET_I(9);
    __Vdlyvval__data_cache_L1__DOT__dcache1__v12 = VL_RAND_RESET_I(32);
    __Vdlyvset__data_cache_L1__DOT__dcache1__v12 = VL_RAND_RESET_I(1);
    __Vdlyvdim0__data_cache_L1__DOT__dcache1__v13 = VL_RAND_RESET_I(9);
    __Vdlyvlsb__data_cache_L1__DOT__dcache1__v13 = VL_RAND_RESET_I(9);
    __Vdlyvval__data_cache_L1__DOT__dcache1__v13 = VL_RAND_RESET_I(32);
    __Vdlyvset__data_cache_L1__DOT__dcache1__v13 = VL_RAND_RESET_I(1);
    __Vdlyvdim0__data_cache_L1__DOT__dcache1__v14 = VL_RAND_RESET_I(9);
    __Vdlyvlsb__data_cache_L1__DOT__dcache1__v14 = VL_RAND_RESET_I(9);
    __Vdlyvval__data_cache_L1__DOT__dcache1__v14 = VL_RAND_RESET_I(32);
    __Vdlyvset__data_cache_L1__DOT__dcache1__v14 = VL_RAND_RESET_I(1);
    __Vdlyvdim0__data_cache_L1__DOT__dcache1__v15 = VL_RAND_RESET_I(9);
    __Vdlyvlsb__data_cache_L1__DOT__dcache1__v15 = VL_RAND_RESET_I(9);
    __Vdlyvval__data_cache_L1__DOT__dcache1__v15 = VL_RAND_RESET_I(32);
    __Vdlyvset__data_cache_L1__DOT__dcache1__v15 = VL_RAND_RESET_I(1);
    __Vdlyvdim0__data_cache_L1__DOT__dcache1__v16 = VL_RAND_RESET_I(9);
    __Vdlyvlsb__data_cache_L1__DOT__dcache1__v16 = VL_RAND_RESET_I(9);
    __Vdlyvval__data_cache_L1__DOT__dcache1__v16 = VL_RAND_RESET_I(32);
    __Vdlyvset__data_cache_L1__DOT__dcache1__v16 = VL_RAND_RESET_I(1);
    __Vdlyvdim0__data_cache_L1__DOT__dcache1__v17 = VL_RAND_RESET_I(9);
    __Vdlyvlsb__data_cache_L1__DOT__dcache1__v17 = VL_RAND_RESET_I(9);
    __Vdlyvval__data_cache_L1__DOT__dcache1__v17 = VL_RAND_RESET_I(32);
    __Vdlyvset__data_cache_L1__DOT__dcache1__v17 = VL_RAND_RESET_I(1);
    __Vdlyvdim0__data_cache_L1__DOT__dcache1__v18 = VL_RAND_RESET_I(9);
    __Vdlyvlsb__data_cache_L1__DOT__dcache1__v18 = VL_RAND_RESET_I(9);
    __Vdlyvval__data_cache_L1__DOT__dcache1__v18 = VL_RAND_RESET_I(32);
    __Vdlyvset__data_cache_L1__DOT__dcache1__v18 = VL_RAND_RESET_I(1);
    __Vdlyvdim0__data_cache_L1__DOT__dcache1__v19 = VL_RAND_RESET_I(9);
    __Vdlyvlsb__data_cache_L1__DOT__dcache1__v19 = VL_RAND_RESET_I(9);
    __Vdlyvval__data_cache_L1__DOT__dcache1__v19 = VL_RAND_RESET_I(32);
    __Vdlyvset__data_cache_L1__DOT__dcache1__v19 = VL_RAND_RESET_I(1);
    __Vdlyvdim0__data_cache_L1__DOT__dcache1__v20 = VL_RAND_RESET_I(9);
    __Vdlyvlsb__data_cache_L1__DOT__dcache1__v20 = VL_RAND_RESET_I(9);
    __Vdlyvval__data_cache_L1__DOT__dcache1__v20 = VL_RAND_RESET_I(32);
    __Vdlyvset__data_cache_L1__DOT__dcache1__v20 = VL_RAND_RESET_I(1);
}

void VMIPS_MIPS::__Vconfigure(VMIPS__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VMIPS_MIPS::~VMIPS_MIPS() {
}

//--------------------
// Internal Methods

void VMIPS_MIPS::_initial__TOP__v__1(VMIPS__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VMIPS_MIPS::_initial__TOP__v__1\n"); );
    VMIPS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // INITIAL at verilog/MIPS.v:299
    vlSymsp->TOP__v.data_valid_fDC = 1U;
    // INITIAL at verilog//instr_cache_L1.v:38
    vlSymsp->TOP__v.__PVT__instr_cache_L1__DOT__i = 0U;
    while (VL_GTS_III(1,32,32, 0x400U, vlSymsp->TOP__v.__PVT__instr_cache_L1__DOT__i)) {
	vlSymsp->TOP__v.__PVT__instr_cache_L1__DOT__icache[(0x3ffU 
							    & vlSymsp->TOP__v.__PVT__instr_cache_L1__DOT__i)][0U] = 0U;
	vlSymsp->TOP__v.__PVT__instr_cache_L1__DOT__icache[(0x3ffU 
							    & vlSymsp->TOP__v.__PVT__instr_cache_L1__DOT__i)][1U] = 0U;
	vlSymsp->TOP__v.__PVT__instr_cache_L1__DOT__icache[(0x3ffU 
							    & vlSymsp->TOP__v.__PVT__instr_cache_L1__DOT__i)][2U] = 0U;
	vlSymsp->TOP__v.__PVT__instr_cache_L1__DOT__icache[(0x3ffU 
							    & vlSymsp->TOP__v.__PVT__instr_cache_L1__DOT__i)][3U] = 0U;
	vlSymsp->TOP__v.__PVT__instr_cache_L1__DOT__icache[(0x3ffU 
							    & vlSymsp->TOP__v.__PVT__instr_cache_L1__DOT__i)][4U] = 0U;
	vlSymsp->TOP__v.__PVT__instr_cache_L1__DOT__icache[(0x3ffU 
							    & vlSymsp->TOP__v.__PVT__instr_cache_L1__DOT__i)][5U] = 0U;
	vlSymsp->TOP__v.__PVT__instr_cache_L1__DOT__icache[(0x3ffU 
							    & vlSymsp->TOP__v.__PVT__instr_cache_L1__DOT__i)][6U] = 0U;
	vlSymsp->TOP__v.__PVT__instr_cache_L1__DOT__icache[(0x3ffU 
							    & vlSymsp->TOP__v.__PVT__instr_cache_L1__DOT__i)][7U] = 0U;
	vlSymsp->TOP__v.__PVT__instr_cache_L1__DOT__icache[(0x3ffU 
							    & vlSymsp->TOP__v.__PVT__instr_cache_L1__DOT__i)][8U] = 0U;
	vlSymsp->TOP__v.__PVT__instr_cache_L1__DOT__i 
	    = ((IData)(1U) + vlSymsp->TOP__v.__PVT__instr_cache_L1__DOT__i);
    }
}

void VMIPS_MIPS::_sequent__TOP__v__2(VMIPS__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VMIPS_MIPS::_sequent__TOP__v__2\n"); );
    VMIPS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIGW(__Vtemp6,255,0,8);
    VL_SIGW(__Vtemp10,255,0,8);
    // Body
    vlSymsp->TOP__v.__Vdly__data_cache_L1__DOT__counter 
	= vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__counter;
    vlSymsp->TOP__v.__Vdly__data_cache_L1__DOT__state 
	= vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__state;
    vlSymsp->TOP__v.__Vdly__data_cache_L1__DOT__start_count 
	= vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__start_count;
    vlSymsp->TOP__v.__Vdly__instr_cache_L1__DOT__start_count 
	= vlSymsp->TOP__v.__PVT__instr_cache_L1__DOT__start_count;
    vlSymsp->TOP__v.__Vdly__mem_reqL1IM = vlSymsp->TOP__v.__PVT__mem_reqL1IM;
    vlSymsp->TOP__v.__Vdly__mem_addressL1IM = vlSymsp->TOP__v.__PVT__mem_addressL1IM;
    vlSymsp->TOP__v.__Vdly__instr_cache_L1__DOT__counter 
	= vlSymsp->TOP__v.__PVT__instr_cache_L1__DOT__counter;
    vlSymsp->TOP__v.__Vdlyvset__instr_cache_L1__DOT__icache__v0 = 0U;
    vlSymsp->TOP__v.__Vdly__Instr_PC_Plus4_IFID = vlSymsp->TOP__v.__PVT__Instr_PC_Plus4_IFID;
    vlSymsp->TOP__v.__Vdly__Instr_PC_IFID = vlSymsp->TOP__v.__PVT__Instr_PC_IFID;
    vlSymsp->TOP__v.__Vdly__Instr1_IFID = vlSymsp->TOP__v.__PVT__Instr1_IFID;
    vlSymsp->TOP__v.__Vdly__WriteRegister1_MEMWB = vlSymsp->TOP__v.__PVT__WriteRegister1_MEMWB;
    vlSymsp->TOP__v.__Vdly__RegWrite1_MEMWB = vlSymsp->TOP__v.__PVT__RegWrite1_MEMWB;
    vlSymsp->TOP__v.__Vdly__WriteData1_MEMWB = vlSymsp->TOP__v.__PVT__WriteData1_MEMWB;
    // ALWAYS at verilog//data_cache_L1.v:373
    if (vlTOPp->RESET) {
	if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__start_count)) {
	    vlSymsp->TOP__v.__Vdly__data_cache_L1__DOT__counter 
		= ((IData)(1U) + vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__counter);
	    VL_WRITEF("DCACHE:Now counter is %x, mem_read_valid is %x, data_write_size_2C is 0, mem_read_addr is %x, mem_read_req is %x\n",
		      32,((IData)(1U) + vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__counter),
		      1,(IData)(vlTOPp->block_read_fDM_valid),
		      32,vlSymsp->TOP__v.data_address_2DM,
		      1,(2U == (IData)(vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__state)));
	    fflush (stdout);
	}
    } else {
	vlSymsp->TOP__v.__Vdly__data_cache_L1__DOT__counter = 0U;
    }
    if ((8U == vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__counter)) {
	vlSymsp->TOP__v.__Vdly__data_cache_L1__DOT__start_count = 0U;
	vlSymsp->TOP__v.__Vdly__data_cache_L1__DOT__counter = 0U;
    }
    // ALWAYS at verilog//data_cache_L1.v:293
    if (vlTOPp->RESET) {
	if ((0U == (IData)(vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__state))) {
	    if (((((~ (IData)(vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__hit)) 
		   & (~ (IData)(vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__set_choose))) 
		  & (IData)(vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dirty1)) 
		 | ((((~ (IData)(vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__hit)) 
		      & (IData)(vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__set_choose)) 
		     & (IData)(vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dirty2)) 
		    & (IData)(vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__data_req)))) {
		vlSymsp->TOP__v.__Vdly__data_cache_L1__DOT__state = 1U;
	    } else {
		if (((~ (IData)(vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__hit)) 
		     & (IData)(vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__data_req))) {
		    vlSymsp->TOP__v.__Vdly__data_cache_L1__DOT__state = 2U;
		    vlSymsp->TOP__v.__Vdly__data_cache_L1__DOT__start_count = 1U;
		} else {
		    vlSymsp->TOP__v.__Vdly__data_cache_L1__DOT__state = 0U;
		}
	    }
	} else {
	    if ((1U == (IData)(vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__state))) {
		if (vlTOPp->block_write_fDM_valid) {
		    vlSymsp->TOP__v.__Vdly__data_cache_L1__DOT__state = 2U;
		    vlSymsp->TOP__v.__Vdly__data_cache_L1__DOT__start_count = 1U;
		} else {
		    vlSymsp->TOP__v.__Vdly__data_cache_L1__DOT__state = 1U;
		}
	    } else {
		vlSymsp->TOP__v.__Vdly__data_cache_L1__DOT__state 
		    = ((2U == (IData)(vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__state))
		        ? ((7U == vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__counter)
			    ? 0U : 2U) : 0U);
	    }
	}
    } else {
	vlSymsp->TOP__v.__Vdly__data_cache_L1__DOT__state = 0U;
    }
    // ALWAYS at verilog//instr_cache_L1.v:102
    if (vlTOPp->RESET) {
	if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__instr_cache_L1__DOT__start_count)) {
	    vlSymsp->TOP__v.__Vdly__instr_cache_L1__DOT__counter 
		= ((IData)(1U) + vlSymsp->TOP__v.__PVT__instr_cache_L1__DOT__counter);
	    VL_WRITEF("ICACHE:Now counter is %x\n",
		      32,((IData)(1U) + vlSymsp->TOP__v.__PVT__instr_cache_L1__DOT__counter));
	    fflush (stdout);
	}
    } else {
	vlSymsp->TOP__v.__Vdly__instr_cache_L1__DOT__counter = 0U;
    }
    // ALWAYS at verilog//instr_cache_L1.v:48
    if (VL_UNLIKELY(vlTOPp->RESET)) {
	if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP__v.__PVT__hitL1IF)) 
			 & (0U == vlSymsp->TOP__v.__PVT__instr_cache_L1__DOT__counter)))) {
	    vlSymsp->TOP__v.__Vdly__mem_reqL1IM = 1U;
	    vlSymsp->TOP__v.__Vdly__mem_addressL1IM 
		= (0xffffffe0U & vlSymsp->TOP__v.Instr_address_2IC);
	    VL_WRITEF("ICACHE:Now read from address %x, and start_count:%x\n",
		      32,vlSymsp->TOP__v.Instr_address_2IC,
		      1,(IData)(vlSymsp->TOP__v.__PVT__instr_cache_L1__DOT__start_count));
	    fflush (stdout);
	    vlSymsp->TOP__v.__Vdly__instr_cache_L1__DOT__start_count = 1U;
	}
	if (VL_UNLIKELY(vlTOPp->block_read_fIM_valid)) {
	    VL_WRITEF("ICACHE: data:%x and now is valid\n",
		      256,vlTOPp->block_read_fIM);
	    fflush (stdout);
	    vlSymsp->TOP__v.__Vdly__mem_addressL1IM = 0U;
	    vlSymsp->TOP__v.__Vdly__mem_reqL1IM = 0U;
	}
	if (VL_UNLIKELY((7U == vlSymsp->TOP__v.__PVT__instr_cache_L1__DOT__counter))) {
	    vlSymsp->TOP__v.__Vdlyvval__instr_cache_L1__DOT__icache__v0[0U] 
		= vlTOPp->block_read_fIM[0U];
	    vlSymsp->TOP__v.__Vdlyvval__instr_cache_L1__DOT__icache__v0[1U] 
		= vlTOPp->block_read_fIM[1U];
	    vlSymsp->TOP__v.__Vdlyvval__instr_cache_L1__DOT__icache__v0[2U] 
		= vlTOPp->block_read_fIM[2U];
	    vlSymsp->TOP__v.__Vdlyvval__instr_cache_L1__DOT__icache__v0[3U] 
		= vlTOPp->block_read_fIM[3U];
	    vlSymsp->TOP__v.__Vdlyvval__instr_cache_L1__DOT__icache__v0[4U] 
		= vlTOPp->block_read_fIM[4U];
	    vlSymsp->TOP__v.__Vdlyvval__instr_cache_L1__DOT__icache__v0[5U] 
		= vlTOPp->block_read_fIM[5U];
	    vlSymsp->TOP__v.__Vdlyvval__instr_cache_L1__DOT__icache__v0[6U] 
		= vlTOPp->block_read_fIM[6U];
	    vlSymsp->TOP__v.__Vdlyvval__instr_cache_L1__DOT__icache__v0[7U] 
		= vlTOPp->block_read_fIM[7U];
	    vlSymsp->TOP__v.__Vdlyvval__instr_cache_L1__DOT__icache__v0[8U] 
		= (0x20000U | (0x1ffffU & (vlSymsp->TOP__v.Instr_address_2IC 
					   >> 0xfU)));
	    vlSymsp->TOP__v.__Vdlyvset__instr_cache_L1__DOT__icache__v0 = 1U;
	    vlSymsp->TOP__v.__Vdlyvdim0__instr_cache_L1__DOT__icache__v0 
		= (0x3ffU & (vlSymsp->TOP__v.Instr_address_2IC 
			     >> 5U));
	    VL_WRITEF("ICACHE:Now save data: %x to %x, it is hit:%x\n",
		      256,vlTOPp->block_read_fIM,10,
		      (0x3ffU & (vlSymsp->TOP__v.Instr_address_2IC 
				 >> 5U)),1,(IData)(vlSymsp->TOP__v.__PVT__hitL1IF));
	    fflush (stdout);
	}
	if ((8U == vlSymsp->TOP__v.__PVT__instr_cache_L1__DOT__counter)) {
	    vlSymsp->TOP__v.__Vdly__instr_cache_L1__DOT__start_count = 0U;
	    vlSymsp->TOP__v.__Vdly__instr_cache_L1__DOT__counter = 0U;
	}
	VL_WRITEF("ICACHE:Now hit is %x and mem_valid is %x, mem_req is %x, mem_address is %x\n",
		  1,vlSymsp->TOP__v.__PVT__hitL1IF,
		  1,(IData)(vlTOPp->block_read_fIM_valid),
		  1,vlSymsp->TOP__v.__PVT__mem_reqL1IM,
		  32,vlSymsp->TOP__v.__PVT__mem_addressL1IM);
	fflush (stdout);
    } else {
	vlSymsp->TOP__v.__Vdly__mem_reqL1IM = 0U;
	vlSymsp->TOP__v.__Vdly__mem_addressL1IM = 0U;
	vlSymsp->TOP__v.__Vdly__instr_cache_L1__DOT__start_count = 0U;
    }
    // ALWAYS at verilog//data_cache_L1.v:208
    if (vlTOPp->RESET) {
	if ((1U == (IData)(vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__state))) {
	    if (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__set_choose) {
		__Vtemp6[0U] = vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache2
		    [(0x1ffU & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
				>> 5U))][0U];
		__Vtemp6[1U] = vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache2
		    [(0x1ffU & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
				>> 5U))][1U];
		__Vtemp6[2U] = vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache2
		    [(0x1ffU & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
				>> 5U))][2U];
		__Vtemp6[3U] = vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache2
		    [(0x1ffU & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
				>> 5U))][3U];
		__Vtemp6[4U] = vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache2
		    [(0x1ffU & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
				>> 5U))][4U];
		__Vtemp6[5U] = vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache2
		    [(0x1ffU & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
				>> 5U))][5U];
		__Vtemp6[6U] = vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache2
		    [(0x1ffU & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
				>> 5U))][6U];
		__Vtemp6[7U] = vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache2
		    [(0x1ffU & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
				>> 5U))][7U];
		VL_WRITEF("DCACHE: write block %x to memory\n",
			  256,__Vtemp6);
		fflush (stdout);
		fflush (stdout);
		vlSymsp->TOP__v.block_write_2DM[0U] 
		    = vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache2
		    [(0x1ffU & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
				>> 5U))][0U];
		vlSymsp->TOP__v.block_write_2DM[1U] 
		    = vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache2
		    [(0x1ffU & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
				>> 5U))][1U];
		vlSymsp->TOP__v.block_write_2DM[2U] 
		    = vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache2
		    [(0x1ffU & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
				>> 5U))][2U];
		vlSymsp->TOP__v.block_write_2DM[3U] 
		    = vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache2
		    [(0x1ffU & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
				>> 5U))][3U];
		vlSymsp->TOP__v.block_write_2DM[4U] 
		    = vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache2
		    [(0x1ffU & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
				>> 5U))][4U];
		vlSymsp->TOP__v.block_write_2DM[5U] 
		    = vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache2
		    [(0x1ffU & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
				>> 5U))][5U];
		vlSymsp->TOP__v.block_write_2DM[6U] 
		    = vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache2
		    [(0x1ffU & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
				>> 5U))][6U];
		vlSymsp->TOP__v.block_write_2DM[7U] 
		    = vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache2
		    [(0x1ffU & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
				>> 5U))][7U];
	    } else {
		__Vtemp10[0U] = vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache1
		    [(0x1ffU & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
				>> 5U))][0U];
		__Vtemp10[1U] = vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache1
		    [(0x1ffU & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
				>> 5U))][1U];
		__Vtemp10[2U] = vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache1
		    [(0x1ffU & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
				>> 5U))][2U];
		__Vtemp10[3U] = vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache1
		    [(0x1ffU & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
				>> 5U))][3U];
		__Vtemp10[4U] = vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache1
		    [(0x1ffU & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
				>> 5U))][4U];
		__Vtemp10[5U] = vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache1
		    [(0x1ffU & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
				>> 5U))][5U];
		__Vtemp10[6U] = vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache1
		    [(0x1ffU & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
				>> 5U))][6U];
		__Vtemp10[7U] = vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache1
		    [(0x1ffU & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
				>> 5U))][7U];
		VL_WRITEF("DCACHE: write block %x to memory\n",
			  256,__Vtemp10);
		fflush (stdout);
		fflush (stdout);
		vlSymsp->TOP__v.block_write_2DM[0U] 
		    = vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache1
		    [(0x1ffU & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
				>> 5U))][0U];
		vlSymsp->TOP__v.block_write_2DM[1U] 
		    = vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache1
		    [(0x1ffU & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
				>> 5U))][1U];
		vlSymsp->TOP__v.block_write_2DM[2U] 
		    = vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache1
		    [(0x1ffU & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
				>> 5U))][2U];
		vlSymsp->TOP__v.block_write_2DM[3U] 
		    = vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache1
		    [(0x1ffU & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
				>> 5U))][3U];
		vlSymsp->TOP__v.block_write_2DM[4U] 
		    = vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache1
		    [(0x1ffU & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
				>> 5U))][4U];
		vlSymsp->TOP__v.block_write_2DM[5U] 
		    = vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache1
		    [(0x1ffU & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
				>> 5U))][5U];
		vlSymsp->TOP__v.block_write_2DM[6U] 
		    = vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache1
		    [(0x1ffU & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
				>> 5U))][6U];
		vlSymsp->TOP__v.block_write_2DM[7U] 
		    = vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache1
		    [(0x1ffU & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
				>> 5U))][7U];
	    }
	}
    } else {
	vlSymsp->TOP__v.block_write_2DM[0U] = 0U;
	vlSymsp->TOP__v.block_write_2DM[1U] = 0U;
	vlSymsp->TOP__v.block_write_2DM[2U] = 0U;
	vlSymsp->TOP__v.block_write_2DM[3U] = 0U;
	vlSymsp->TOP__v.block_write_2DM[4U] = 0U;
	vlSymsp->TOP__v.block_write_2DM[5U] = 0U;
	vlSymsp->TOP__v.block_write_2DM[6U] = 0U;
	vlSymsp->TOP__v.block_write_2DM[7U] = 0U;
    }
    // ALWAYS at verilog//IF.v:58
    if (VL_LIKELY(vlTOPp->RESET)) {
	if (vlTOPp->CLK) {
	    if (vlSymsp->TOP__v__ID.__PVT__WANT_FREEZE) {
		if (vlSymsp->TOP__v__ID.__PVT__Request_Alt_PC) {
		    vlSymsp->TOP__v.__Vdly__Instr_PC_Plus4_IFID 
			= vlSymsp->TOP__v.Instr_address_2IC;
		}
		if (VL_UNLIKELY((1U & (((~ (IData)(vlSymsp->TOP__v__ID.__PVT__syscal1)) 
					& (~ (IData)(vlSymsp->TOP__v__ID.__PVT__Request_Alt_PC1))) 
				       & (~ (IData)(vlSymsp->TOP__v.__PVT__missDCache)))))) {
		    VL_WRITEF("FETCH: Now clean the Instr1_OUT\n");
		    fflush (stdout);
		    vlSymsp->TOP__v.__Vdly__Instr1_IFID = 0U;
		    vlSymsp->TOP__v.__Vdly__Instr_PC_IFID = 0U;
		}
		if (VL_UNLIKELY((((IData)(vlSymsp->TOP__v__ID.__PVT__SYS) 
				  & (2U == (IData)(vlSymsp->TOP__v__ID.__PVT__sys_count))) 
				 & (~ (IData)(vlSymsp->TOP__v.__PVT__missDCache))))) {
		    VL_WRITEF("FETCH:SYSCALL IS %x\n",
			      3,vlSymsp->TOP__v__ID.__PVT__sys_count);
		    fflush (stdout);
		    vlSymsp->TOP__v.__Vdly__Instr1_IFID = 0U;
		    vlSymsp->TOP__v.__Vdly__Instr_PC_IFID = 0U;
		}
		VL_WRITEF("FETCH: Stalling; next request will be %x and sys is %x, bubble sys_count is %x\n",
			  32,vlSymsp->TOP__v.Instr_address_2IC,
			  1,(IData)(vlSymsp->TOP__v__ID.__PVT__SYS),
			  3,vlSymsp->TOP__v__ID.__PVT__sys_count);
		fflush (stdout);
	    } else {
		vlSymsp->TOP__v.__Vdly__Instr1_IFID 
		    = vlSymsp->TOP__v.__PVT__Instr1_fIC;
		vlSymsp->TOP__v.__Vdly__Instr_PC_IFID 
		    = vlSymsp->TOP__v.Instr_address_2IC;
		vlSymsp->TOP__v.__Vdly__Instr_PC_Plus4_IFID 
		    = ((IData)(4U) + vlSymsp->TOP__v.Instr_address_2IC);
		VL_WRITEF("FETCH:Instr@%x=%x;Next@%x\n",
			  32,vlSymsp->TOP__v.Instr_address_2IC,
			  32,vlSymsp->TOP__v.__PVT__Instr1_fIC,
			  32,((IData)(4U) + vlSymsp->TOP__v.Instr_address_2IC));
		fflush (stdout);
	    }
	}
    } else {
	VL_WRITEF("FETCH [RESET] Fetching @%x\n",32,
		  vlSymsp->TOP__v.__PVT__Instr_PC_Plus4_IFID);
	fflush (stdout);
	vlSymsp->TOP__v.__Vdly__Instr1_IFID = 0U;
	vlSymsp->TOP__v.__Vdly__Instr_PC_IFID = 0U;
	vlSymsp->TOP__v.__Vdly__Instr_PC_Plus4_IFID = 0xbfc00000U;
    }
    // ALWAYS at verilog//MEM.v:301
    if (VL_LIKELY(vlTOPp->RESET)) {
	if (VL_UNLIKELY(vlTOPp->CLK)) {
	    VL_WRITEF("MEM:Now miss= %x, Instr1=%x,Instr1_PC=%x,WriteData1=%x; Write?%1u to %2u\n",
		      1,vlSymsp->TOP__v.__PVT__missDCache,
		      32,vlSymsp->TOP__v__EXE.__PVT__Instr1_OUT,
		      32,vlSymsp->TOP__v__EXE.__PVT__Instr1_PC_OUT,
		      32,vlSymsp->TOP__v.__PVT__MEM__DOT__WriteData1,
		      1,(IData)(vlSymsp->TOP__v__EXE.__PVT__RegWrite1_OUT),
		      5,vlSymsp->TOP__v__EXE.__PVT__WriteRegister1_OUT);
	    fflush (stdout);
	    if (vlSymsp->TOP__v.__PVT__missDCache) {
		vlSymsp->TOP__v.__Vdly__WriteRegister1_MEMWB = 0U;
		vlSymsp->TOP__v.__Vdly__RegWrite1_MEMWB = 0U;
		vlSymsp->TOP__v.__Vdly__WriteData1_MEMWB = 0U;
	    } else {
		vlSymsp->TOP__v.__Vdly__WriteRegister1_MEMWB 
		    = vlSymsp->TOP__v__EXE.__PVT__WriteRegister1_OUT;
		vlSymsp->TOP__v.__Vdly__RegWrite1_MEMWB 
		    = vlSymsp->TOP__v__EXE.__PVT__RegWrite1_OUT;
		vlSymsp->TOP__v.__Vdly__WriteData1_MEMWB 
		    = vlSymsp->TOP__v.__PVT__MEM__DOT__WriteData1;
	    }
	    VL_WRITEF("MEM:data_address_2DM=%x; data_write_2DM(%1u)=%x(%1u); data_read_fDM(%1u)=%x\n",
		      32,vlSymsp->TOP__v.data_address_2DC,
		      1,(IData)(vlSymsp->TOP__v.write_2DC),
		      32,vlSymsp->TOP__v.data_write_2DC,
		      2,(IData)(vlSymsp->TOP__v.data_write_size_2DC),
		      1,vlSymsp->TOP__v.read_2DC,32,
		      vlSymsp->TOP__v.data_read_fDC);
	    VL_WRITEF("MEM:data_read_aligned: %x\n",
		      32,vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned);
	    fflush (stdout);
	}
    } else {
	VL_WRITEF("MEM:RESET\n");
	fflush (stdout);
	vlSymsp->TOP__v.__Vdly__WriteRegister1_MEMWB = 0U;
	vlSymsp->TOP__v.__Vdly__RegWrite1_MEMWB = 0U;
	vlSymsp->TOP__v.__Vdly__WriteData1_MEMWB = 0U;
    }
    vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__start_count 
	= vlSymsp->TOP__v.__Vdly__data_cache_L1__DOT__start_count;
    vlSymsp->TOP__v.__PVT__instr_cache_L1__DOT__counter 
	= vlSymsp->TOP__v.__Vdly__instr_cache_L1__DOT__counter;
    vlSymsp->TOP__v.__PVT__instr_cache_L1__DOT__start_count 
	= vlSymsp->TOP__v.__Vdly__instr_cache_L1__DOT__start_count;
    vlSymsp->TOP__v.__PVT__mem_reqL1IM = vlSymsp->TOP__v.__Vdly__mem_reqL1IM;
    vlSymsp->TOP__v.__PVT__mem_addressL1IM = vlSymsp->TOP__v.__Vdly__mem_addressL1IM;
    // ALWAYSPOST at verilog//instr_cache_L1.v:77
    if (vlSymsp->TOP__v.__Vdlyvset__instr_cache_L1__DOT__icache__v0) {
	vlSymsp->TOP__v.__PVT__instr_cache_L1__DOT__icache[(IData)(vlSymsp->TOP__v.__Vdlyvdim0__instr_cache_L1__DOT__icache__v0)][0U] 
	    = vlSymsp->TOP__v.__Vdlyvval__instr_cache_L1__DOT__icache__v0[0U];
	vlSymsp->TOP__v.__PVT__instr_cache_L1__DOT__icache[(IData)(vlSymsp->TOP__v.__Vdlyvdim0__instr_cache_L1__DOT__icache__v0)][1U] 
	    = vlSymsp->TOP__v.__Vdlyvval__instr_cache_L1__DOT__icache__v0[1U];
	vlSymsp->TOP__v.__PVT__instr_cache_L1__DOT__icache[(IData)(vlSymsp->TOP__v.__Vdlyvdim0__instr_cache_L1__DOT__icache__v0)][2U] 
	    = vlSymsp->TOP__v.__Vdlyvval__instr_cache_L1__DOT__icache__v0[2U];
	vlSymsp->TOP__v.__PVT__instr_cache_L1__DOT__icache[(IData)(vlSymsp->TOP__v.__Vdlyvdim0__instr_cache_L1__DOT__icache__v0)][3U] 
	    = vlSymsp->TOP__v.__Vdlyvval__instr_cache_L1__DOT__icache__v0[3U];
	vlSymsp->TOP__v.__PVT__instr_cache_L1__DOT__icache[(IData)(vlSymsp->TOP__v.__Vdlyvdim0__instr_cache_L1__DOT__icache__v0)][4U] 
	    = vlSymsp->TOP__v.__Vdlyvval__instr_cache_L1__DOT__icache__v0[4U];
	vlSymsp->TOP__v.__PVT__instr_cache_L1__DOT__icache[(IData)(vlSymsp->TOP__v.__Vdlyvdim0__instr_cache_L1__DOT__icache__v0)][5U] 
	    = vlSymsp->TOP__v.__Vdlyvval__instr_cache_L1__DOT__icache__v0[5U];
	vlSymsp->TOP__v.__PVT__instr_cache_L1__DOT__icache[(IData)(vlSymsp->TOP__v.__Vdlyvdim0__instr_cache_L1__DOT__icache__v0)][6U] 
	    = vlSymsp->TOP__v.__Vdlyvval__instr_cache_L1__DOT__icache__v0[6U];
	vlSymsp->TOP__v.__PVT__instr_cache_L1__DOT__icache[(IData)(vlSymsp->TOP__v.__Vdlyvdim0__instr_cache_L1__DOT__icache__v0)][7U] 
	    = vlSymsp->TOP__v.__Vdlyvval__instr_cache_L1__DOT__icache__v0[7U];
	vlSymsp->TOP__v.__PVT__instr_cache_L1__DOT__icache[(IData)(vlSymsp->TOP__v.__Vdlyvdim0__instr_cache_L1__DOT__icache__v0)][8U] 
	    = vlSymsp->TOP__v.__Vdlyvval__instr_cache_L1__DOT__icache__v0[8U];
    }
    vlSymsp->TOP__v.__PVT__Instr_PC_Plus4_IFID = vlSymsp->TOP__v.__Vdly__Instr_PC_Plus4_IFID;
}

void VMIPS_MIPS::_sequent__TOP__v__3(VMIPS__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VMIPS_MIPS::_sequent__TOP__v__3\n"); );
    VMIPS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__LRUcounter1__v0 = 0U;
    vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__LRUcounter2__v1 = 0U;
    vlSymsp->TOP__v.__Vdly__data_cache_L1__DOT__mem_read_data_local[0U] 
	= vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__mem_read_data_local[0U];
    vlSymsp->TOP__v.__Vdly__data_cache_L1__DOT__mem_read_data_local[1U] 
	= vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__mem_read_data_local[1U];
    vlSymsp->TOP__v.__Vdly__data_cache_L1__DOT__mem_read_data_local[2U] 
	= vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__mem_read_data_local[2U];
    vlSymsp->TOP__v.__Vdly__data_cache_L1__DOT__mem_read_data_local[3U] 
	= vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__mem_read_data_local[3U];
    vlSymsp->TOP__v.__Vdly__data_cache_L1__DOT__mem_read_data_local[4U] 
	= vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__mem_read_data_local[4U];
    vlSymsp->TOP__v.__Vdly__data_cache_L1__DOT__mem_read_data_local[5U] 
	= vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__mem_read_data_local[5U];
    vlSymsp->TOP__v.__Vdly__data_cache_L1__DOT__mem_read_data_local[6U] 
	= vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__mem_read_data_local[6U];
    vlSymsp->TOP__v.__Vdly__data_cache_L1__DOT__mem_read_data_local[7U] 
	= vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__mem_read_data_local[7U];
    vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache2__v0 = 0U;
    vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache2__v1 = 0U;
    vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache2__v2 = 0U;
    vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache2__v3 = 0U;
    vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache2__v4 = 0U;
    vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache2__v5 = 0U;
    vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache2__v6 = 0U;
    vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache2__v7 = 0U;
    vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache2__v8 = 0U;
    vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache2__v9 = 0U;
    vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache2__v10 = 0U;
    vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache2__v11 = 0U;
    vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache2__v12 = 0U;
    vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache2__v13 = 0U;
    vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache2__v14 = 0U;
    vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache2__v15 = 0U;
    vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache2__v16 = 0U;
    vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache2__v17 = 0U;
    vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache2__v18 = 0U;
    vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache2__v19 = 0U;
    vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache2__v20 = 0U;
    vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache1__v0 = 0U;
    vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache1__v1 = 0U;
    vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache1__v2 = 0U;
    vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache1__v3 = 0U;
    vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache1__v4 = 0U;
    vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache1__v5 = 0U;
    vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache1__v6 = 0U;
    vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache1__v7 = 0U;
    vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache1__v8 = 0U;
    vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache1__v9 = 0U;
    vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache1__v10 = 0U;
    vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache1__v11 = 0U;
    vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache1__v12 = 0U;
    vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache1__v13 = 0U;
    vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache1__v14 = 0U;
    vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache1__v15 = 0U;
    vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache1__v16 = 0U;
    vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache1__v17 = 0U;
    vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache1__v18 = 0U;
    vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache1__v19 = 0U;
    vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache1__v20 = 0U;
    // ALWAYS at verilog//data_cache_L1.v:98
    if (((IData)(vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__hit1) 
	 & (IData)(vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__data_req))) {
	vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__LRUcounter1__v0 = 1U;
	vlSymsp->TOP__v.__Vdlyvdim0__data_cache_L1__DOT__LRUcounter1__v0 
	    = (0x1ffU & (vlSymsp->TOP__v.data_address_2DC 
			 >> 5U));
	vlSymsp->TOP__v.__Vdlyvval__data_cache_L1__DOT__LRUcounter2__v0 
	    = ((IData)(1U) + vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__LRUcounter2
	       [(0x1ffU & (vlSymsp->TOP__v.data_address_2DC 
			   >> 5U))]);
	vlSymsp->TOP__v.__Vdlyvdim0__data_cache_L1__DOT__LRUcounter2__v0 
	    = (0x1ffU & (vlSymsp->TOP__v.data_address_2DC 
			 >> 5U));
    } else {
	if (((IData)(vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__hit2) 
	     & (IData)(vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__data_req))) {
	    vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__LRUcounter2__v1 = 1U;
	    vlSymsp->TOP__v.__Vdlyvdim0__data_cache_L1__DOT__LRUcounter2__v1 
		= (0x1ffU & (vlSymsp->TOP__v.data_address_2DC 
			     >> 5U));
	    vlSymsp->TOP__v.__Vdlyvval__data_cache_L1__DOT__LRUcounter1__v1 
		= ((IData)(1U) + vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__LRUcounter1
		   [(0x1ffU & (vlSymsp->TOP__v.data_address_2DC 
			       >> 5U))]);
	    vlSymsp->TOP__v.__Vdlyvdim0__data_cache_L1__DOT__LRUcounter1__v1 
		= (0x1ffU & (vlSymsp->TOP__v.data_address_2DC 
			     >> 5U));
	}
    }
    // ALWAYS at verilog//data_cache_L1.v:112
    if (VL_UNLIKELY(vlTOPp->block_read_fDM_valid)) {
	vlSymsp->TOP__v.__Vdly__data_cache_L1__DOT__mem_read_data_local[0U] 
	    = vlTOPp->block_read_fDM[0U];
	vlSymsp->TOP__v.__Vdly__data_cache_L1__DOT__mem_read_data_local[1U] 
	    = vlTOPp->block_read_fDM[1U];
	vlSymsp->TOP__v.__Vdly__data_cache_L1__DOT__mem_read_data_local[2U] 
	    = vlTOPp->block_read_fDM[2U];
	vlSymsp->TOP__v.__Vdly__data_cache_L1__DOT__mem_read_data_local[3U] 
	    = vlTOPp->block_read_fDM[3U];
	vlSymsp->TOP__v.__Vdly__data_cache_L1__DOT__mem_read_data_local[4U] 
	    = vlTOPp->block_read_fDM[4U];
	vlSymsp->TOP__v.__Vdly__data_cache_L1__DOT__mem_read_data_local[5U] 
	    = vlTOPp->block_read_fDM[5U];
	vlSymsp->TOP__v.__Vdly__data_cache_L1__DOT__mem_read_data_local[6U] 
	    = vlTOPp->block_read_fDM[6U];
	vlSymsp->TOP__v.__Vdly__data_cache_L1__DOT__mem_read_data_local[7U] 
	    = vlTOPp->block_read_fDM[7U];
	VL_WRITEF("DCACHE: now get block %x\n",256,
		  vlTOPp->block_read_fDM);
	fflush (stdout);
    }
    if (VL_UNLIKELY((7U == vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__counter))) {
	if (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__set_choose) {
	    vlSymsp->TOP__v.__Vdlyvval__data_cache_L1__DOT__dcache2__v0[0U] 
		= vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__mem_read_data_local[0U];
	    vlSymsp->TOP__v.__Vdlyvval__data_cache_L1__DOT__dcache2__v0[1U] 
		= vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__mem_read_data_local[1U];
	    vlSymsp->TOP__v.__Vdlyvval__data_cache_L1__DOT__dcache2__v0[2U] 
		= vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__mem_read_data_local[2U];
	    vlSymsp->TOP__v.__Vdlyvval__data_cache_L1__DOT__dcache2__v0[3U] 
		= vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__mem_read_data_local[3U];
	    vlSymsp->TOP__v.__Vdlyvval__data_cache_L1__DOT__dcache2__v0[4U] 
		= vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__mem_read_data_local[4U];
	    vlSymsp->TOP__v.__Vdlyvval__data_cache_L1__DOT__dcache2__v0[5U] 
		= vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__mem_read_data_local[5U];
	    vlSymsp->TOP__v.__Vdlyvval__data_cache_L1__DOT__dcache2__v0[6U] 
		= vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__mem_read_data_local[6U];
	    vlSymsp->TOP__v.__Vdlyvval__data_cache_L1__DOT__dcache2__v0[7U] 
		= vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__mem_read_data_local[7U];
	    vlSymsp->TOP__v.__Vdlyvval__data_cache_L1__DOT__dcache2__v0[8U] 
		= (0x80000U | (0x3ffffU & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
					   >> 0xeU)));
	    vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache2__v0 = 1U;
	    vlSymsp->TOP__v.__Vdlyvdim0__data_cache_L1__DOT__dcache2__v0 
		= (0x1ffU & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
			     >> 5U));
	} else {
	    vlSymsp->TOP__v.__Vdlyvval__data_cache_L1__DOT__dcache1__v0[0U] 
		= vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__mem_read_data_local[0U];
	    vlSymsp->TOP__v.__Vdlyvval__data_cache_L1__DOT__dcache1__v0[1U] 
		= vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__mem_read_data_local[1U];
	    vlSymsp->TOP__v.__Vdlyvval__data_cache_L1__DOT__dcache1__v0[2U] 
		= vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__mem_read_data_local[2U];
	    vlSymsp->TOP__v.__Vdlyvval__data_cache_L1__DOT__dcache1__v0[3U] 
		= vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__mem_read_data_local[3U];
	    vlSymsp->TOP__v.__Vdlyvval__data_cache_L1__DOT__dcache1__v0[4U] 
		= vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__mem_read_data_local[4U];
	    vlSymsp->TOP__v.__Vdlyvval__data_cache_L1__DOT__dcache1__v0[5U] 
		= vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__mem_read_data_local[5U];
	    vlSymsp->TOP__v.__Vdlyvval__data_cache_L1__DOT__dcache1__v0[6U] 
		= vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__mem_read_data_local[6U];
	    vlSymsp->TOP__v.__Vdlyvval__data_cache_L1__DOT__dcache1__v0[7U] 
		= vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__mem_read_data_local[7U];
	    vlSymsp->TOP__v.__Vdlyvval__data_cache_L1__DOT__dcache1__v0[8U] 
		= (0x80000U | (0x3ffffU & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
					   >> 0xeU)));
	    vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache1__v0 = 1U;
	    vlSymsp->TOP__v.__Vdlyvdim0__data_cache_L1__DOT__dcache1__v0 
		= (0x1ffU & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
			     >> 5U));
	}
	VL_WRITEF("DCACHE: store block %x to data cache at addr %x\n",
		  256,vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__mem_read_data_local,
		  32,vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr);
	fflush (stdout);
    } else {
	if (VL_UNLIKELY(((IData)(vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__hit) 
			 & (IData)(vlSymsp->TOP__v.write_2DC)))) {
	    VL_WRITEF("DCACHE: store word %x to data cache\n",
		      32,vlSymsp->TOP__v.data_write_2DC);
	    fflush (stdout);
	    if (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__hit1) {
		vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache1__v1 = 1U;
		vlSymsp->TOP__v.__Vdlyvlsb__data_cache_L1__DOT__dcache1__v1 = 0x112U;
		vlSymsp->TOP__v.__Vdlyvdim0__data_cache_L1__DOT__dcache1__v1 
		    = (0x1ffU & (vlSymsp->TOP__v.data_address_2DC 
				 >> 5U));
		if (((((((((0U == (7U & (vlSymsp->TOP__v.data_address_2DC 
					 >> 2U))) | 
			   (1U == (7U & (vlSymsp->TOP__v.data_address_2DC 
					 >> 2U)))) 
			  | (2U == (7U & (vlSymsp->TOP__v.data_address_2DC 
					  >> 2U)))) 
			 | (3U == (7U & (vlSymsp->TOP__v.data_address_2DC 
					 >> 2U)))) 
			| (4U == (7U & (vlSymsp->TOP__v.data_address_2DC 
					>> 2U)))) | 
		       (5U == (7U & (vlSymsp->TOP__v.data_address_2DC 
				     >> 2U)))) | (6U 
						  == 
						  (7U 
						   & (vlSymsp->TOP__v.data_address_2DC 
						      >> 2U)))) 
		     | (7U == (7U & (vlSymsp->TOP__v.data_address_2DC 
				     >> 2U))))) {
		    if ((0U == (7U & (vlSymsp->TOP__v.data_address_2DC 
				      >> 2U)))) {
			vlSymsp->TOP__v.__Vdlyvval__data_cache_L1__DOT__dcache1__v2 
			    = vlSymsp->TOP__v.data_write_2DC;
			vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache1__v2 = 1U;
			vlSymsp->TOP__v.__Vdlyvlsb__data_cache_L1__DOT__dcache1__v2 = 0xe0U;
			vlSymsp->TOP__v.__Vdlyvdim0__data_cache_L1__DOT__dcache1__v2 
			    = (0x1ffU & (vlSymsp->TOP__v.data_address_2DC 
					 >> 5U));
		    } else {
			if ((1U == (7U & (vlSymsp->TOP__v.data_address_2DC 
					  >> 2U)))) {
			    vlSymsp->TOP__v.__Vdlyvval__data_cache_L1__DOT__dcache1__v3 
				= vlSymsp->TOP__v.data_write_2DC;
			    vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache1__v3 = 1U;
			    vlSymsp->TOP__v.__Vdlyvlsb__data_cache_L1__DOT__dcache1__v3 = 0xc0U;
			    vlSymsp->TOP__v.__Vdlyvdim0__data_cache_L1__DOT__dcache1__v3 
				= (0x1ffU & (vlSymsp->TOP__v.data_address_2DC 
					     >> 5U));
			} else {
			    if ((2U == (7U & (vlSymsp->TOP__v.data_address_2DC 
					      >> 2U)))) {
				vlSymsp->TOP__v.__Vdlyvval__data_cache_L1__DOT__dcache1__v4 
				    = vlSymsp->TOP__v.data_write_2DC;
				vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache1__v4 = 1U;
				vlSymsp->TOP__v.__Vdlyvlsb__data_cache_L1__DOT__dcache1__v4 = 0xa0U;
				vlSymsp->TOP__v.__Vdlyvdim0__data_cache_L1__DOT__dcache1__v4 
				    = (0x1ffU & (vlSymsp->TOP__v.data_address_2DC 
						 >> 5U));
			    } else {
				if ((3U == (7U & (vlSymsp->TOP__v.data_address_2DC 
						  >> 2U)))) {
				    vlSymsp->TOP__v.__Vdlyvval__data_cache_L1__DOT__dcache1__v5 
					= vlSymsp->TOP__v.data_write_2DC;
				    vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache1__v5 = 1U;
				    vlSymsp->TOP__v.__Vdlyvlsb__data_cache_L1__DOT__dcache1__v5 = 0x80U;
				    vlSymsp->TOP__v.__Vdlyvdim0__data_cache_L1__DOT__dcache1__v5 
					= (0x1ffU & 
					   (vlSymsp->TOP__v.data_address_2DC 
					    >> 5U));
				} else {
				    if ((4U == (7U 
						& (vlSymsp->TOP__v.data_address_2DC 
						   >> 2U)))) {
					vlSymsp->TOP__v.__Vdlyvval__data_cache_L1__DOT__dcache1__v6 
					    = vlSymsp->TOP__v.data_write_2DC;
					vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache1__v6 = 1U;
					vlSymsp->TOP__v.__Vdlyvlsb__data_cache_L1__DOT__dcache1__v6 = 0x60U;
					vlSymsp->TOP__v.__Vdlyvdim0__data_cache_L1__DOT__dcache1__v6 
					    = (0x1ffU 
					       & (vlSymsp->TOP__v.data_address_2DC 
						  >> 5U));
				    } else {
					if ((5U == 
					     (7U & 
					      (vlSymsp->TOP__v.data_address_2DC 
					       >> 2U)))) {
					    vlSymsp->TOP__v.__Vdlyvval__data_cache_L1__DOT__dcache1__v7 
						= vlSymsp->TOP__v.data_write_2DC;
					    vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache1__v7 = 1U;
					    vlSymsp->TOP__v.__Vdlyvlsb__data_cache_L1__DOT__dcache1__v7 = 0x40U;
					    vlSymsp->TOP__v.__Vdlyvdim0__data_cache_L1__DOT__dcache1__v7 
						= (0x1ffU 
						   & (vlSymsp->TOP__v.data_address_2DC 
						      >> 5U));
					} else {
					    if ((6U 
						 == 
						 (7U 
						  & (vlSymsp->TOP__v.data_address_2DC 
						     >> 2U)))) {
						vlSymsp->TOP__v.__Vdlyvval__data_cache_L1__DOT__dcache1__v8 
						    = vlSymsp->TOP__v.data_write_2DC;
						vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache1__v8 = 1U;
						vlSymsp->TOP__v.__Vdlyvlsb__data_cache_L1__DOT__dcache1__v8 = 0x20U;
						vlSymsp->TOP__v.__Vdlyvdim0__data_cache_L1__DOT__dcache1__v8 
						    = 
						    (0x1ffU 
						     & (vlSymsp->TOP__v.data_address_2DC 
							>> 5U));
					    } else {
						vlSymsp->TOP__v.__Vdlyvval__data_cache_L1__DOT__dcache1__v9 
						    = vlSymsp->TOP__v.data_write_2DC;
						vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache1__v9 = 1U;
						vlSymsp->TOP__v.__Vdlyvlsb__data_cache_L1__DOT__dcache1__v9 = 0U;
						vlSymsp->TOP__v.__Vdlyvdim0__data_cache_L1__DOT__dcache1__v9 
						    = 
						    (0x1ffU 
						     & (vlSymsp->TOP__v.data_address_2DC 
							>> 5U));
					    }
					}
				    }
				}
			    }
			}
		    }
		} else {
		    vlSymsp->TOP__v.__Vdlyvval__data_cache_L1__DOT__dcache1__v10 
			= vlSymsp->TOP__v.data_write_2DC;
		    vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache1__v10 = 1U;
		    vlSymsp->TOP__v.__Vdlyvlsb__data_cache_L1__DOT__dcache1__v10 = 0xe0U;
		    vlSymsp->TOP__v.__Vdlyvdim0__data_cache_L1__DOT__dcache1__v10 
			= (0x1ffU & (vlSymsp->TOP__v.data_address_2DC 
				     >> 5U));
		}
	    } else {
		if (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__hit2) {
		    vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache2__v1 = 1U;
		    vlSymsp->TOP__v.__Vdlyvlsb__data_cache_L1__DOT__dcache2__v1 = 0x112U;
		    vlSymsp->TOP__v.__Vdlyvdim0__data_cache_L1__DOT__dcache2__v1 
			= (0x1ffU & (vlSymsp->TOP__v.data_address_2DC 
				     >> 5U));
		    if (((((((((0U == (7U & (vlSymsp->TOP__v.data_address_2DC 
					     >> 2U))) 
			       | (1U == (7U & (vlSymsp->TOP__v.data_address_2DC 
					       >> 2U)))) 
			      | (2U == (7U & (vlSymsp->TOP__v.data_address_2DC 
					      >> 2U)))) 
			     | (3U == (7U & (vlSymsp->TOP__v.data_address_2DC 
					     >> 2U)))) 
			    | (4U == (7U & (vlSymsp->TOP__v.data_address_2DC 
					    >> 2U)))) 
			   | (5U == (7U & (vlSymsp->TOP__v.data_address_2DC 
					   >> 2U)))) 
			  | (6U == (7U & (vlSymsp->TOP__v.data_address_2DC 
					  >> 2U)))) 
			 | (7U == (7U & (vlSymsp->TOP__v.data_address_2DC 
					 >> 2U))))) {
			if ((0U == (7U & (vlSymsp->TOP__v.data_address_2DC 
					  >> 2U)))) {
			    vlSymsp->TOP__v.__Vdlyvval__data_cache_L1__DOT__dcache2__v2 
				= vlSymsp->TOP__v.data_write_2DC;
			    vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache2__v2 = 1U;
			    vlSymsp->TOP__v.__Vdlyvlsb__data_cache_L1__DOT__dcache2__v2 = 0xe0U;
			    vlSymsp->TOP__v.__Vdlyvdim0__data_cache_L1__DOT__dcache2__v2 
				= (0x1ffU & (vlSymsp->TOP__v.data_address_2DC 
					     >> 5U));
			} else {
			    if ((1U == (7U & (vlSymsp->TOP__v.data_address_2DC 
					      >> 2U)))) {
				vlSymsp->TOP__v.__Vdlyvval__data_cache_L1__DOT__dcache2__v3 
				    = vlSymsp->TOP__v.data_write_2DC;
				vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache2__v3 = 1U;
				vlSymsp->TOP__v.__Vdlyvlsb__data_cache_L1__DOT__dcache2__v3 = 0xc0U;
				vlSymsp->TOP__v.__Vdlyvdim0__data_cache_L1__DOT__dcache2__v3 
				    = (0x1ffU & (vlSymsp->TOP__v.data_address_2DC 
						 >> 5U));
			    } else {
				if ((2U == (7U & (vlSymsp->TOP__v.data_address_2DC 
						  >> 2U)))) {
				    vlSymsp->TOP__v.__Vdlyvval__data_cache_L1__DOT__dcache2__v4 
					= vlSymsp->TOP__v.data_write_2DC;
				    vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache2__v4 = 1U;
				    vlSymsp->TOP__v.__Vdlyvlsb__data_cache_L1__DOT__dcache2__v4 = 0xa0U;
				    vlSymsp->TOP__v.__Vdlyvdim0__data_cache_L1__DOT__dcache2__v4 
					= (0x1ffU & 
					   (vlSymsp->TOP__v.data_address_2DC 
					    >> 5U));
				} else {
				    if ((3U == (7U 
						& (vlSymsp->TOP__v.data_address_2DC 
						   >> 2U)))) {
					vlSymsp->TOP__v.__Vdlyvval__data_cache_L1__DOT__dcache2__v5 
					    = vlSymsp->TOP__v.data_write_2DC;
					vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache2__v5 = 1U;
					vlSymsp->TOP__v.__Vdlyvlsb__data_cache_L1__DOT__dcache2__v5 = 0x80U;
					vlSymsp->TOP__v.__Vdlyvdim0__data_cache_L1__DOT__dcache2__v5 
					    = (0x1ffU 
					       & (vlSymsp->TOP__v.data_address_2DC 
						  >> 5U));
				    } else {
					if ((4U == 
					     (7U & 
					      (vlSymsp->TOP__v.data_address_2DC 
					       >> 2U)))) {
					    vlSymsp->TOP__v.__Vdlyvval__data_cache_L1__DOT__dcache2__v6 
						= vlSymsp->TOP__v.data_write_2DC;
					    vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache2__v6 = 1U;
					    vlSymsp->TOP__v.__Vdlyvlsb__data_cache_L1__DOT__dcache2__v6 = 0x60U;
					    vlSymsp->TOP__v.__Vdlyvdim0__data_cache_L1__DOT__dcache2__v6 
						= (0x1ffU 
						   & (vlSymsp->TOP__v.data_address_2DC 
						      >> 5U));
					} else {
					    if ((5U 
						 == 
						 (7U 
						  & (vlSymsp->TOP__v.data_address_2DC 
						     >> 2U)))) {
						vlSymsp->TOP__v.__Vdlyvval__data_cache_L1__DOT__dcache2__v7 
						    = vlSymsp->TOP__v.data_write_2DC;
						vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache2__v7 = 1U;
						vlSymsp->TOP__v.__Vdlyvlsb__data_cache_L1__DOT__dcache2__v7 = 0x40U;
						vlSymsp->TOP__v.__Vdlyvdim0__data_cache_L1__DOT__dcache2__v7 
						    = 
						    (0x1ffU 
						     & (vlSymsp->TOP__v.data_address_2DC 
							>> 5U));
					    } else {
						if (
						    (6U 
						     == 
						     (7U 
						      & (vlSymsp->TOP__v.data_address_2DC 
							 >> 2U)))) {
						    vlSymsp->TOP__v.__Vdlyvval__data_cache_L1__DOT__dcache2__v8 
							= vlSymsp->TOP__v.data_write_2DC;
						    vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache2__v8 = 1U;
						    vlSymsp->TOP__v.__Vdlyvlsb__data_cache_L1__DOT__dcache2__v8 = 0x20U;
						    vlSymsp->TOP__v.__Vdlyvdim0__data_cache_L1__DOT__dcache2__v8 
							= 
							(0x1ffU 
							 & (vlSymsp->TOP__v.data_address_2DC 
							    >> 5U));
						} else {
						    vlSymsp->TOP__v.__Vdlyvval__data_cache_L1__DOT__dcache2__v9 
							= vlSymsp->TOP__v.data_write_2DC;
						    vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache2__v9 = 1U;
						    vlSymsp->TOP__v.__Vdlyvlsb__data_cache_L1__DOT__dcache2__v9 = 0U;
						    vlSymsp->TOP__v.__Vdlyvdim0__data_cache_L1__DOT__dcache2__v9 
							= 
							(0x1ffU 
							 & (vlSymsp->TOP__v.data_address_2DC 
							    >> 5U));
						}
					    }
					}
				    }
				}
			    }
			}
		    } else {
			vlSymsp->TOP__v.__Vdlyvval__data_cache_L1__DOT__dcache2__v10 
			    = vlSymsp->TOP__v.data_write_2DC;
			vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache2__v10 = 1U;
			vlSymsp->TOP__v.__Vdlyvlsb__data_cache_L1__DOT__dcache2__v10 = 0xe0U;
			vlSymsp->TOP__v.__Vdlyvdim0__data_cache_L1__DOT__dcache2__v10 
			    = (0x1ffU & (vlSymsp->TOP__v.data_address_2DC 
					 >> 5U));
		    }
		}
	    }
	}
    }
    if (VL_UNLIKELY(((IData)(vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__wr_wait) 
		     & (8U == vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__counter)))) {
	VL_WRITEF("DCACHE: store saved data %x to cache\n",
		  32,vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_data);
	fflush (stdout);
	if (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__set_choose) {
	    vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache2__v11 = 1U;
	    vlSymsp->TOP__v.__Vdlyvlsb__data_cache_L1__DOT__dcache2__v11 = 0x112U;
	    vlSymsp->TOP__v.__Vdlyvdim0__data_cache_L1__DOT__dcache2__v11 
		= (0x1ffU & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
			     >> 5U));
	    if (((((((((0U == (7U & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
				     >> 2U))) | (1U 
						 == 
						 (7U 
						  & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
						     >> 2U)))) 
		      | (2U == (7U & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
				      >> 2U)))) | (3U 
						   == 
						   (7U 
						    & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
						       >> 2U)))) 
		    | (4U == (7U & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
				    >> 2U)))) | (5U 
						 == 
						 (7U 
						  & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
						     >> 2U)))) 
		  | (6U == (7U & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
				  >> 2U)))) | (7U == 
					       (7U 
						& (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
						   >> 2U))))) {
		if ((0U == (7U & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
				  >> 2U)))) {
		    vlSymsp->TOP__v.__Vdlyvval__data_cache_L1__DOT__dcache2__v12 
			= vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_data;
		    vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache2__v12 = 1U;
		    vlSymsp->TOP__v.__Vdlyvlsb__data_cache_L1__DOT__dcache2__v12 = 0xe0U;
		    vlSymsp->TOP__v.__Vdlyvdim0__data_cache_L1__DOT__dcache2__v12 
			= (0x1ffU & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
				     >> 5U));
		} else {
		    if ((1U == (7U & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
				      >> 2U)))) {
			vlSymsp->TOP__v.__Vdlyvval__data_cache_L1__DOT__dcache2__v13 
			    = vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_data;
			vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache2__v13 = 1U;
			vlSymsp->TOP__v.__Vdlyvlsb__data_cache_L1__DOT__dcache2__v13 = 0xc0U;
			vlSymsp->TOP__v.__Vdlyvdim0__data_cache_L1__DOT__dcache2__v13 
			    = (0x1ffU & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
					 >> 5U));
		    } else {
			if ((2U == (7U & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
					  >> 2U)))) {
			    vlSymsp->TOP__v.__Vdlyvval__data_cache_L1__DOT__dcache2__v14 
				= vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_data;
			    vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache2__v14 = 1U;
			    vlSymsp->TOP__v.__Vdlyvlsb__data_cache_L1__DOT__dcache2__v14 = 0xa0U;
			    vlSymsp->TOP__v.__Vdlyvdim0__data_cache_L1__DOT__dcache2__v14 
				= (0x1ffU & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
					     >> 5U));
			} else {
			    if ((3U == (7U & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
					      >> 2U)))) {
				vlSymsp->TOP__v.__Vdlyvval__data_cache_L1__DOT__dcache2__v15 
				    = vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_data;
				vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache2__v15 = 1U;
				vlSymsp->TOP__v.__Vdlyvlsb__data_cache_L1__DOT__dcache2__v15 = 0x80U;
				vlSymsp->TOP__v.__Vdlyvdim0__data_cache_L1__DOT__dcache2__v15 
				    = (0x1ffU & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
						 >> 5U));
			    } else {
				if ((4U == (7U & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
						  >> 2U)))) {
				    vlSymsp->TOP__v.__Vdlyvval__data_cache_L1__DOT__dcache2__v16 
					= vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_data;
				    vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache2__v16 = 1U;
				    vlSymsp->TOP__v.__Vdlyvlsb__data_cache_L1__DOT__dcache2__v16 = 0x60U;
				    vlSymsp->TOP__v.__Vdlyvdim0__data_cache_L1__DOT__dcache2__v16 
					= (0x1ffU & 
					   (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
					    >> 5U));
				} else {
				    if ((5U == (7U 
						& (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
						   >> 2U)))) {
					vlSymsp->TOP__v.__Vdlyvval__data_cache_L1__DOT__dcache2__v17 
					    = vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_data;
					vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache2__v17 = 1U;
					vlSymsp->TOP__v.__Vdlyvlsb__data_cache_L1__DOT__dcache2__v17 = 0x40U;
					vlSymsp->TOP__v.__Vdlyvdim0__data_cache_L1__DOT__dcache2__v17 
					    = (0x1ffU 
					       & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
						  >> 5U));
				    } else {
					if ((6U == 
					     (7U & 
					      (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
					       >> 2U)))) {
					    vlSymsp->TOP__v.__Vdlyvval__data_cache_L1__DOT__dcache2__v18 
						= vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_data;
					    vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache2__v18 = 1U;
					    vlSymsp->TOP__v.__Vdlyvlsb__data_cache_L1__DOT__dcache2__v18 = 0x20U;
					    vlSymsp->TOP__v.__Vdlyvdim0__data_cache_L1__DOT__dcache2__v18 
						= (0x1ffU 
						   & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
						      >> 5U));
					} else {
					    vlSymsp->TOP__v.__Vdlyvval__data_cache_L1__DOT__dcache2__v19 
						= vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_data;
					    vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache2__v19 = 1U;
					    vlSymsp->TOP__v.__Vdlyvlsb__data_cache_L1__DOT__dcache2__v19 = 0U;
					    vlSymsp->TOP__v.__Vdlyvdim0__data_cache_L1__DOT__dcache2__v19 
						= (0x1ffU 
						   & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
						      >> 5U));
					}
				    }
				}
			    }
			}
		    }
		}
	    } else {
		vlSymsp->TOP__v.__Vdlyvval__data_cache_L1__DOT__dcache2__v20 
		    = vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_data;
		vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache2__v20 = 1U;
		vlSymsp->TOP__v.__Vdlyvlsb__data_cache_L1__DOT__dcache2__v20 = 0xe0U;
		vlSymsp->TOP__v.__Vdlyvdim0__data_cache_L1__DOT__dcache2__v20 
		    = (0x1ffU & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
				 >> 5U));
	    }
	} else {
	    vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache1__v11 = 1U;
	    vlSymsp->TOP__v.__Vdlyvlsb__data_cache_L1__DOT__dcache1__v11 = 0x112U;
	    vlSymsp->TOP__v.__Vdlyvdim0__data_cache_L1__DOT__dcache1__v11 
		= (0x1ffU & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
			     >> 5U));
	    if (((((((((0U == (7U & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
				     >> 2U))) | (1U 
						 == 
						 (7U 
						  & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
						     >> 2U)))) 
		      | (2U == (7U & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
				      >> 2U)))) | (3U 
						   == 
						   (7U 
						    & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
						       >> 2U)))) 
		    | (4U == (7U & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
				    >> 2U)))) | (5U 
						 == 
						 (7U 
						  & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
						     >> 2U)))) 
		  | (6U == (7U & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
				  >> 2U)))) | (7U == 
					       (7U 
						& (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
						   >> 2U))))) {
		if ((0U == (7U & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
				  >> 2U)))) {
		    vlSymsp->TOP__v.__Vdlyvval__data_cache_L1__DOT__dcache1__v12 
			= vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_data;
		    vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache1__v12 = 1U;
		    vlSymsp->TOP__v.__Vdlyvlsb__data_cache_L1__DOT__dcache1__v12 = 0xe0U;
		    vlSymsp->TOP__v.__Vdlyvdim0__data_cache_L1__DOT__dcache1__v12 
			= (0x1ffU & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
				     >> 5U));
		} else {
		    if ((1U == (7U & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
				      >> 2U)))) {
			vlSymsp->TOP__v.__Vdlyvval__data_cache_L1__DOT__dcache1__v13 
			    = vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_data;
			vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache1__v13 = 1U;
			vlSymsp->TOP__v.__Vdlyvlsb__data_cache_L1__DOT__dcache1__v13 = 0xc0U;
			vlSymsp->TOP__v.__Vdlyvdim0__data_cache_L1__DOT__dcache1__v13 
			    = (0x1ffU & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
					 >> 5U));
		    } else {
			if ((2U == (7U & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
					  >> 2U)))) {
			    vlSymsp->TOP__v.__Vdlyvval__data_cache_L1__DOT__dcache1__v14 
				= vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_data;
			    vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache1__v14 = 1U;
			    vlSymsp->TOP__v.__Vdlyvlsb__data_cache_L1__DOT__dcache1__v14 = 0xa0U;
			    vlSymsp->TOP__v.__Vdlyvdim0__data_cache_L1__DOT__dcache1__v14 
				= (0x1ffU & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
					     >> 5U));
			} else {
			    if ((3U == (7U & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
					      >> 2U)))) {
				vlSymsp->TOP__v.__Vdlyvval__data_cache_L1__DOT__dcache1__v15 
				    = vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_data;
				vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache1__v15 = 1U;
				vlSymsp->TOP__v.__Vdlyvlsb__data_cache_L1__DOT__dcache1__v15 = 0x80U;
				vlSymsp->TOP__v.__Vdlyvdim0__data_cache_L1__DOT__dcache1__v15 
				    = (0x1ffU & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
						 >> 5U));
			    } else {
				if ((4U == (7U & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
						  >> 2U)))) {
				    vlSymsp->TOP__v.__Vdlyvval__data_cache_L1__DOT__dcache1__v16 
					= vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_data;
				    vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache1__v16 = 1U;
				    vlSymsp->TOP__v.__Vdlyvlsb__data_cache_L1__DOT__dcache1__v16 = 0x60U;
				    vlSymsp->TOP__v.__Vdlyvdim0__data_cache_L1__DOT__dcache1__v16 
					= (0x1ffU & 
					   (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
					    >> 5U));
				} else {
				    if ((5U == (7U 
						& (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
						   >> 2U)))) {
					vlSymsp->TOP__v.__Vdlyvval__data_cache_L1__DOT__dcache1__v17 
					    = vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_data;
					vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache1__v17 = 1U;
					vlSymsp->TOP__v.__Vdlyvlsb__data_cache_L1__DOT__dcache1__v17 = 0x40U;
					vlSymsp->TOP__v.__Vdlyvdim0__data_cache_L1__DOT__dcache1__v17 
					    = (0x1ffU 
					       & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
						  >> 5U));
				    } else {
					if ((6U == 
					     (7U & 
					      (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
					       >> 2U)))) {
					    vlSymsp->TOP__v.__Vdlyvval__data_cache_L1__DOT__dcache1__v18 
						= vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_data;
					    vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache1__v18 = 1U;
					    vlSymsp->TOP__v.__Vdlyvlsb__data_cache_L1__DOT__dcache1__v18 = 0x20U;
					    vlSymsp->TOP__v.__Vdlyvdim0__data_cache_L1__DOT__dcache1__v18 
						= (0x1ffU 
						   & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
						      >> 5U));
					} else {
					    vlSymsp->TOP__v.__Vdlyvval__data_cache_L1__DOT__dcache1__v19 
						= vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_data;
					    vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache1__v19 = 1U;
					    vlSymsp->TOP__v.__Vdlyvlsb__data_cache_L1__DOT__dcache1__v19 = 0U;
					    vlSymsp->TOP__v.__Vdlyvdim0__data_cache_L1__DOT__dcache1__v19 
						= (0x1ffU 
						   & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
						      >> 5U));
					}
				    }
				}
			    }
			}
		    }
		}
	    } else {
		vlSymsp->TOP__v.__Vdlyvval__data_cache_L1__DOT__dcache1__v20 
		    = vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_data;
		vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache1__v20 = 1U;
		vlSymsp->TOP__v.__Vdlyvlsb__data_cache_L1__DOT__dcache1__v20 = 0xe0U;
		vlSymsp->TOP__v.__Vdlyvdim0__data_cache_L1__DOT__dcache1__v20 
		    = (0x1ffU & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
				 >> 5U));
	    }
	}
    }
    // ALWAYSPOST at verilog//data_cache_L1.v:102
    if (vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__LRUcounter1__v0) {
	vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__LRUcounter1[(IData)(vlSymsp->TOP__v.__Vdlyvdim0__data_cache_L1__DOT__LRUcounter1__v0)] = 0U;
    }
    if (vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__LRUcounter2__v1) {
	vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__LRUcounter1[(IData)(vlSymsp->TOP__v.__Vdlyvdim0__data_cache_L1__DOT__LRUcounter1__v1)] 
	    = vlSymsp->TOP__v.__Vdlyvval__data_cache_L1__DOT__LRUcounter1__v1;
    }
    // ALWAYSPOST at verilog//data_cache_L1.v:103
    if (vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__LRUcounter1__v0) {
	vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__LRUcounter2[(IData)(vlSymsp->TOP__v.__Vdlyvdim0__data_cache_L1__DOT__LRUcounter2__v0)] 
	    = vlSymsp->TOP__v.__Vdlyvval__data_cache_L1__DOT__LRUcounter2__v0;
    }
    if (vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__LRUcounter2__v1) {
	vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__LRUcounter2[(IData)(vlSymsp->TOP__v.__Vdlyvdim0__data_cache_L1__DOT__LRUcounter2__v1)] = 0U;
    }
    vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__mem_read_data_local[0U] 
	= vlSymsp->TOP__v.__Vdly__data_cache_L1__DOT__mem_read_data_local[0U];
    vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__mem_read_data_local[1U] 
	= vlSymsp->TOP__v.__Vdly__data_cache_L1__DOT__mem_read_data_local[1U];
    vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__mem_read_data_local[2U] 
	= vlSymsp->TOP__v.__Vdly__data_cache_L1__DOT__mem_read_data_local[2U];
    vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__mem_read_data_local[3U] 
	= vlSymsp->TOP__v.__Vdly__data_cache_L1__DOT__mem_read_data_local[3U];
    vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__mem_read_data_local[4U] 
	= vlSymsp->TOP__v.__Vdly__data_cache_L1__DOT__mem_read_data_local[4U];
    vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__mem_read_data_local[5U] 
	= vlSymsp->TOP__v.__Vdly__data_cache_L1__DOT__mem_read_data_local[5U];
    vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__mem_read_data_local[6U] 
	= vlSymsp->TOP__v.__Vdly__data_cache_L1__DOT__mem_read_data_local[6U];
    vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__mem_read_data_local[7U] 
	= vlSymsp->TOP__v.__Vdly__data_cache_L1__DOT__mem_read_data_local[7U];
    // ALWAYSPOST at verilog//data_cache_L1.v:125
    if (vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache2__v0) {
	vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache2[(IData)(vlSymsp->TOP__v.__Vdlyvdim0__data_cache_L1__DOT__dcache2__v0)][0U] 
	    = vlSymsp->TOP__v.__Vdlyvval__data_cache_L1__DOT__dcache2__v0[0U];
	vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache2[(IData)(vlSymsp->TOP__v.__Vdlyvdim0__data_cache_L1__DOT__dcache2__v0)][1U] 
	    = vlSymsp->TOP__v.__Vdlyvval__data_cache_L1__DOT__dcache2__v0[1U];
	vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache2[(IData)(vlSymsp->TOP__v.__Vdlyvdim0__data_cache_L1__DOT__dcache2__v0)][2U] 
	    = vlSymsp->TOP__v.__Vdlyvval__data_cache_L1__DOT__dcache2__v0[2U];
	vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache2[(IData)(vlSymsp->TOP__v.__Vdlyvdim0__data_cache_L1__DOT__dcache2__v0)][3U] 
	    = vlSymsp->TOP__v.__Vdlyvval__data_cache_L1__DOT__dcache2__v0[3U];
	vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache2[(IData)(vlSymsp->TOP__v.__Vdlyvdim0__data_cache_L1__DOT__dcache2__v0)][4U] 
	    = vlSymsp->TOP__v.__Vdlyvval__data_cache_L1__DOT__dcache2__v0[4U];
	vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache2[(IData)(vlSymsp->TOP__v.__Vdlyvdim0__data_cache_L1__DOT__dcache2__v0)][5U] 
	    = vlSymsp->TOP__v.__Vdlyvval__data_cache_L1__DOT__dcache2__v0[5U];
	vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache2[(IData)(vlSymsp->TOP__v.__Vdlyvdim0__data_cache_L1__DOT__dcache2__v0)][6U] 
	    = vlSymsp->TOP__v.__Vdlyvval__data_cache_L1__DOT__dcache2__v0[6U];
	vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache2[(IData)(vlSymsp->TOP__v.__Vdlyvdim0__data_cache_L1__DOT__dcache2__v0)][7U] 
	    = vlSymsp->TOP__v.__Vdlyvval__data_cache_L1__DOT__dcache2__v0[7U];
	vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache2[(IData)(vlSymsp->TOP__v.__Vdlyvdim0__data_cache_L1__DOT__dcache2__v0)][8U] 
	    = vlSymsp->TOP__v.__Vdlyvval__data_cache_L1__DOT__dcache2__v0[8U];
    }
    if (vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache2__v1) {
	vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache2[(IData)(vlSymsp->TOP__v.__Vdlyvdim0__data_cache_L1__DOT__dcache2__v1)][((IData)(vlSymsp->TOP__v.__Vdlyvlsb__data_cache_L1__DOT__dcache2__v1) 
										>> 5U)] 
	    = (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache2
	       [(IData)(vlSymsp->TOP__v.__Vdlyvdim0__data_cache_L1__DOT__dcache2__v1)][
	       ((IData)(vlSymsp->TOP__v.__Vdlyvlsb__data_cache_L1__DOT__dcache2__v1) 
		>> 5U)] | ((IData)(1U) << (0x1fU & (IData)(vlSymsp->TOP__v.__Vdlyvlsb__data_cache_L1__DOT__dcache2__v1))));
    }
    if (vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache2__v2) {
	VL_ASSIGNSEL_WIII(32,(IData)(vlSymsp->TOP__v.__Vdlyvlsb__data_cache_L1__DOT__dcache2__v2), 
			  vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache2
			  [(IData)(vlSymsp->TOP__v.__Vdlyvdim0__data_cache_L1__DOT__dcache2__v2)], vlSymsp->TOP__v.__Vdlyvval__data_cache_L1__DOT__dcache2__v2);
    }
    if (vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache2__v3) {
	VL_ASSIGNSEL_WIII(32,(IData)(vlSymsp->TOP__v.__Vdlyvlsb__data_cache_L1__DOT__dcache2__v3), 
			  vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache2
			  [(IData)(vlSymsp->TOP__v.__Vdlyvdim0__data_cache_L1__DOT__dcache2__v3)], vlSymsp->TOP__v.__Vdlyvval__data_cache_L1__DOT__dcache2__v3);
    }
    if (vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache2__v4) {
	VL_ASSIGNSEL_WIII(32,(IData)(vlSymsp->TOP__v.__Vdlyvlsb__data_cache_L1__DOT__dcache2__v4), 
			  vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache2
			  [(IData)(vlSymsp->TOP__v.__Vdlyvdim0__data_cache_L1__DOT__dcache2__v4)], vlSymsp->TOP__v.__Vdlyvval__data_cache_L1__DOT__dcache2__v4);
    }
    if (vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache2__v5) {
	VL_ASSIGNSEL_WIII(32,(IData)(vlSymsp->TOP__v.__Vdlyvlsb__data_cache_L1__DOT__dcache2__v5), 
			  vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache2
			  [(IData)(vlSymsp->TOP__v.__Vdlyvdim0__data_cache_L1__DOT__dcache2__v5)], vlSymsp->TOP__v.__Vdlyvval__data_cache_L1__DOT__dcache2__v5);
    }
    if (vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache2__v6) {
	VL_ASSIGNSEL_WIII(32,(IData)(vlSymsp->TOP__v.__Vdlyvlsb__data_cache_L1__DOT__dcache2__v6), 
			  vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache2
			  [(IData)(vlSymsp->TOP__v.__Vdlyvdim0__data_cache_L1__DOT__dcache2__v6)], vlSymsp->TOP__v.__Vdlyvval__data_cache_L1__DOT__dcache2__v6);
    }
    if (vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache2__v7) {
	VL_ASSIGNSEL_WIII(32,(IData)(vlSymsp->TOP__v.__Vdlyvlsb__data_cache_L1__DOT__dcache2__v7), 
			  vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache2
			  [(IData)(vlSymsp->TOP__v.__Vdlyvdim0__data_cache_L1__DOT__dcache2__v7)], vlSymsp->TOP__v.__Vdlyvval__data_cache_L1__DOT__dcache2__v7);
    }
    if (vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache2__v8) {
	VL_ASSIGNSEL_WIII(32,(IData)(vlSymsp->TOP__v.__Vdlyvlsb__data_cache_L1__DOT__dcache2__v8), 
			  vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache2
			  [(IData)(vlSymsp->TOP__v.__Vdlyvdim0__data_cache_L1__DOT__dcache2__v8)], vlSymsp->TOP__v.__Vdlyvval__data_cache_L1__DOT__dcache2__v8);
    }
    if (vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache2__v9) {
	VL_ASSIGNSEL_WIII(32,(IData)(vlSymsp->TOP__v.__Vdlyvlsb__data_cache_L1__DOT__dcache2__v9), 
			  vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache2
			  [(IData)(vlSymsp->TOP__v.__Vdlyvdim0__data_cache_L1__DOT__dcache2__v9)], vlSymsp->TOP__v.__Vdlyvval__data_cache_L1__DOT__dcache2__v9);
    }
    if (vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache2__v10) {
	VL_ASSIGNSEL_WIII(32,(IData)(vlSymsp->TOP__v.__Vdlyvlsb__data_cache_L1__DOT__dcache2__v10), 
			  vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache2
			  [(IData)(vlSymsp->TOP__v.__Vdlyvdim0__data_cache_L1__DOT__dcache2__v10)], vlSymsp->TOP__v.__Vdlyvval__data_cache_L1__DOT__dcache2__v10);
    }
    if (vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache2__v11) {
	vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache2[(IData)(vlSymsp->TOP__v.__Vdlyvdim0__data_cache_L1__DOT__dcache2__v11)][((IData)(vlSymsp->TOP__v.__Vdlyvlsb__data_cache_L1__DOT__dcache2__v11) 
										>> 5U)] 
	    = (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache2
	       [(IData)(vlSymsp->TOP__v.__Vdlyvdim0__data_cache_L1__DOT__dcache2__v11)][
	       ((IData)(vlSymsp->TOP__v.__Vdlyvlsb__data_cache_L1__DOT__dcache2__v11) 
		>> 5U)] | ((IData)(1U) << (0x1fU & (IData)(vlSymsp->TOP__v.__Vdlyvlsb__data_cache_L1__DOT__dcache2__v11))));
    }
    if (vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache2__v12) {
	VL_ASSIGNSEL_WIII(32,(IData)(vlSymsp->TOP__v.__Vdlyvlsb__data_cache_L1__DOT__dcache2__v12), 
			  vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache2
			  [(IData)(vlSymsp->TOP__v.__Vdlyvdim0__data_cache_L1__DOT__dcache2__v12)], vlSymsp->TOP__v.__Vdlyvval__data_cache_L1__DOT__dcache2__v12);
    }
    if (vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache2__v13) {
	VL_ASSIGNSEL_WIII(32,(IData)(vlSymsp->TOP__v.__Vdlyvlsb__data_cache_L1__DOT__dcache2__v13), 
			  vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache2
			  [(IData)(vlSymsp->TOP__v.__Vdlyvdim0__data_cache_L1__DOT__dcache2__v13)], vlSymsp->TOP__v.__Vdlyvval__data_cache_L1__DOT__dcache2__v13);
    }
    if (vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache2__v14) {
	VL_ASSIGNSEL_WIII(32,(IData)(vlSymsp->TOP__v.__Vdlyvlsb__data_cache_L1__DOT__dcache2__v14), 
			  vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache2
			  [(IData)(vlSymsp->TOP__v.__Vdlyvdim0__data_cache_L1__DOT__dcache2__v14)], vlSymsp->TOP__v.__Vdlyvval__data_cache_L1__DOT__dcache2__v14);
    }
    if (vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache2__v15) {
	VL_ASSIGNSEL_WIII(32,(IData)(vlSymsp->TOP__v.__Vdlyvlsb__data_cache_L1__DOT__dcache2__v15), 
			  vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache2
			  [(IData)(vlSymsp->TOP__v.__Vdlyvdim0__data_cache_L1__DOT__dcache2__v15)], vlSymsp->TOP__v.__Vdlyvval__data_cache_L1__DOT__dcache2__v15);
    }
    if (vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache2__v16) {
	VL_ASSIGNSEL_WIII(32,(IData)(vlSymsp->TOP__v.__Vdlyvlsb__data_cache_L1__DOT__dcache2__v16), 
			  vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache2
			  [(IData)(vlSymsp->TOP__v.__Vdlyvdim0__data_cache_L1__DOT__dcache2__v16)], vlSymsp->TOP__v.__Vdlyvval__data_cache_L1__DOT__dcache2__v16);
    }
    if (vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache2__v17) {
	VL_ASSIGNSEL_WIII(32,(IData)(vlSymsp->TOP__v.__Vdlyvlsb__data_cache_L1__DOT__dcache2__v17), 
			  vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache2
			  [(IData)(vlSymsp->TOP__v.__Vdlyvdim0__data_cache_L1__DOT__dcache2__v17)], vlSymsp->TOP__v.__Vdlyvval__data_cache_L1__DOT__dcache2__v17);
    }
    if (vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache2__v18) {
	VL_ASSIGNSEL_WIII(32,(IData)(vlSymsp->TOP__v.__Vdlyvlsb__data_cache_L1__DOT__dcache2__v18), 
			  vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache2
			  [(IData)(vlSymsp->TOP__v.__Vdlyvdim0__data_cache_L1__DOT__dcache2__v18)], vlSymsp->TOP__v.__Vdlyvval__data_cache_L1__DOT__dcache2__v18);
    }
    if (vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache2__v19) {
	VL_ASSIGNSEL_WIII(32,(IData)(vlSymsp->TOP__v.__Vdlyvlsb__data_cache_L1__DOT__dcache2__v19), 
			  vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache2
			  [(IData)(vlSymsp->TOP__v.__Vdlyvdim0__data_cache_L1__DOT__dcache2__v19)], vlSymsp->TOP__v.__Vdlyvval__data_cache_L1__DOT__dcache2__v19);
    }
    if (vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache2__v20) {
	VL_ASSIGNSEL_WIII(32,(IData)(vlSymsp->TOP__v.__Vdlyvlsb__data_cache_L1__DOT__dcache2__v20), 
			  vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache2
			  [(IData)(vlSymsp->TOP__v.__Vdlyvdim0__data_cache_L1__DOT__dcache2__v20)], vlSymsp->TOP__v.__Vdlyvval__data_cache_L1__DOT__dcache2__v20);
    }
    // ALWAYSPOST at verilog//data_cache_L1.v:123
    if (vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache1__v0) {
	vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache1[(IData)(vlSymsp->TOP__v.__Vdlyvdim0__data_cache_L1__DOT__dcache1__v0)][0U] 
	    = vlSymsp->TOP__v.__Vdlyvval__data_cache_L1__DOT__dcache1__v0[0U];
	vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache1[(IData)(vlSymsp->TOP__v.__Vdlyvdim0__data_cache_L1__DOT__dcache1__v0)][1U] 
	    = vlSymsp->TOP__v.__Vdlyvval__data_cache_L1__DOT__dcache1__v0[1U];
	vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache1[(IData)(vlSymsp->TOP__v.__Vdlyvdim0__data_cache_L1__DOT__dcache1__v0)][2U] 
	    = vlSymsp->TOP__v.__Vdlyvval__data_cache_L1__DOT__dcache1__v0[2U];
	vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache1[(IData)(vlSymsp->TOP__v.__Vdlyvdim0__data_cache_L1__DOT__dcache1__v0)][3U] 
	    = vlSymsp->TOP__v.__Vdlyvval__data_cache_L1__DOT__dcache1__v0[3U];
	vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache1[(IData)(vlSymsp->TOP__v.__Vdlyvdim0__data_cache_L1__DOT__dcache1__v0)][4U] 
	    = vlSymsp->TOP__v.__Vdlyvval__data_cache_L1__DOT__dcache1__v0[4U];
	vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache1[(IData)(vlSymsp->TOP__v.__Vdlyvdim0__data_cache_L1__DOT__dcache1__v0)][5U] 
	    = vlSymsp->TOP__v.__Vdlyvval__data_cache_L1__DOT__dcache1__v0[5U];
	vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache1[(IData)(vlSymsp->TOP__v.__Vdlyvdim0__data_cache_L1__DOT__dcache1__v0)][6U] 
	    = vlSymsp->TOP__v.__Vdlyvval__data_cache_L1__DOT__dcache1__v0[6U];
	vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache1[(IData)(vlSymsp->TOP__v.__Vdlyvdim0__data_cache_L1__DOT__dcache1__v0)][7U] 
	    = vlSymsp->TOP__v.__Vdlyvval__data_cache_L1__DOT__dcache1__v0[7U];
	vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache1[(IData)(vlSymsp->TOP__v.__Vdlyvdim0__data_cache_L1__DOT__dcache1__v0)][8U] 
	    = vlSymsp->TOP__v.__Vdlyvval__data_cache_L1__DOT__dcache1__v0[8U];
    }
    if (vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache1__v1) {
	vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache1[(IData)(vlSymsp->TOP__v.__Vdlyvdim0__data_cache_L1__DOT__dcache1__v1)][((IData)(vlSymsp->TOP__v.__Vdlyvlsb__data_cache_L1__DOT__dcache1__v1) 
										>> 5U)] 
	    = (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache1
	       [(IData)(vlSymsp->TOP__v.__Vdlyvdim0__data_cache_L1__DOT__dcache1__v1)][
	       ((IData)(vlSymsp->TOP__v.__Vdlyvlsb__data_cache_L1__DOT__dcache1__v1) 
		>> 5U)] | ((IData)(1U) << (0x1fU & (IData)(vlSymsp->TOP__v.__Vdlyvlsb__data_cache_L1__DOT__dcache1__v1))));
    }
    if (vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache1__v2) {
	VL_ASSIGNSEL_WIII(32,(IData)(vlSymsp->TOP__v.__Vdlyvlsb__data_cache_L1__DOT__dcache1__v2), 
			  vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache1
			  [(IData)(vlSymsp->TOP__v.__Vdlyvdim0__data_cache_L1__DOT__dcache1__v2)], vlSymsp->TOP__v.__Vdlyvval__data_cache_L1__DOT__dcache1__v2);
    }
    if (vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache1__v3) {
	VL_ASSIGNSEL_WIII(32,(IData)(vlSymsp->TOP__v.__Vdlyvlsb__data_cache_L1__DOT__dcache1__v3), 
			  vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache1
			  [(IData)(vlSymsp->TOP__v.__Vdlyvdim0__data_cache_L1__DOT__dcache1__v3)], vlSymsp->TOP__v.__Vdlyvval__data_cache_L1__DOT__dcache1__v3);
    }
    if (vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache1__v4) {
	VL_ASSIGNSEL_WIII(32,(IData)(vlSymsp->TOP__v.__Vdlyvlsb__data_cache_L1__DOT__dcache1__v4), 
			  vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache1
			  [(IData)(vlSymsp->TOP__v.__Vdlyvdim0__data_cache_L1__DOT__dcache1__v4)], vlSymsp->TOP__v.__Vdlyvval__data_cache_L1__DOT__dcache1__v4);
    }
    if (vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache1__v5) {
	VL_ASSIGNSEL_WIII(32,(IData)(vlSymsp->TOP__v.__Vdlyvlsb__data_cache_L1__DOT__dcache1__v5), 
			  vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache1
			  [(IData)(vlSymsp->TOP__v.__Vdlyvdim0__data_cache_L1__DOT__dcache1__v5)], vlSymsp->TOP__v.__Vdlyvval__data_cache_L1__DOT__dcache1__v5);
    }
    if (vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache1__v6) {
	VL_ASSIGNSEL_WIII(32,(IData)(vlSymsp->TOP__v.__Vdlyvlsb__data_cache_L1__DOT__dcache1__v6), 
			  vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache1
			  [(IData)(vlSymsp->TOP__v.__Vdlyvdim0__data_cache_L1__DOT__dcache1__v6)], vlSymsp->TOP__v.__Vdlyvval__data_cache_L1__DOT__dcache1__v6);
    }
    if (vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache1__v7) {
	VL_ASSIGNSEL_WIII(32,(IData)(vlSymsp->TOP__v.__Vdlyvlsb__data_cache_L1__DOT__dcache1__v7), 
			  vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache1
			  [(IData)(vlSymsp->TOP__v.__Vdlyvdim0__data_cache_L1__DOT__dcache1__v7)], vlSymsp->TOP__v.__Vdlyvval__data_cache_L1__DOT__dcache1__v7);
    }
    if (vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache1__v8) {
	VL_ASSIGNSEL_WIII(32,(IData)(vlSymsp->TOP__v.__Vdlyvlsb__data_cache_L1__DOT__dcache1__v8), 
			  vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache1
			  [(IData)(vlSymsp->TOP__v.__Vdlyvdim0__data_cache_L1__DOT__dcache1__v8)], vlSymsp->TOP__v.__Vdlyvval__data_cache_L1__DOT__dcache1__v8);
    }
    if (vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache1__v9) {
	VL_ASSIGNSEL_WIII(32,(IData)(vlSymsp->TOP__v.__Vdlyvlsb__data_cache_L1__DOT__dcache1__v9), 
			  vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache1
			  [(IData)(vlSymsp->TOP__v.__Vdlyvdim0__data_cache_L1__DOT__dcache1__v9)], vlSymsp->TOP__v.__Vdlyvval__data_cache_L1__DOT__dcache1__v9);
    }
    if (vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache1__v10) {
	VL_ASSIGNSEL_WIII(32,(IData)(vlSymsp->TOP__v.__Vdlyvlsb__data_cache_L1__DOT__dcache1__v10), 
			  vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache1
			  [(IData)(vlSymsp->TOP__v.__Vdlyvdim0__data_cache_L1__DOT__dcache1__v10)], vlSymsp->TOP__v.__Vdlyvval__data_cache_L1__DOT__dcache1__v10);
    }
    if (vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache1__v11) {
	vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache1[(IData)(vlSymsp->TOP__v.__Vdlyvdim0__data_cache_L1__DOT__dcache1__v11)][((IData)(vlSymsp->TOP__v.__Vdlyvlsb__data_cache_L1__DOT__dcache1__v11) 
										>> 5U)] 
	    = (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache1
	       [(IData)(vlSymsp->TOP__v.__Vdlyvdim0__data_cache_L1__DOT__dcache1__v11)][
	       ((IData)(vlSymsp->TOP__v.__Vdlyvlsb__data_cache_L1__DOT__dcache1__v11) 
		>> 5U)] | ((IData)(1U) << (0x1fU & (IData)(vlSymsp->TOP__v.__Vdlyvlsb__data_cache_L1__DOT__dcache1__v11))));
    }
    if (vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache1__v12) {
	VL_ASSIGNSEL_WIII(32,(IData)(vlSymsp->TOP__v.__Vdlyvlsb__data_cache_L1__DOT__dcache1__v12), 
			  vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache1
			  [(IData)(vlSymsp->TOP__v.__Vdlyvdim0__data_cache_L1__DOT__dcache1__v12)], vlSymsp->TOP__v.__Vdlyvval__data_cache_L1__DOT__dcache1__v12);
    }
    if (vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache1__v13) {
	VL_ASSIGNSEL_WIII(32,(IData)(vlSymsp->TOP__v.__Vdlyvlsb__data_cache_L1__DOT__dcache1__v13), 
			  vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache1
			  [(IData)(vlSymsp->TOP__v.__Vdlyvdim0__data_cache_L1__DOT__dcache1__v13)], vlSymsp->TOP__v.__Vdlyvval__data_cache_L1__DOT__dcache1__v13);
    }
    if (vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache1__v14) {
	VL_ASSIGNSEL_WIII(32,(IData)(vlSymsp->TOP__v.__Vdlyvlsb__data_cache_L1__DOT__dcache1__v14), 
			  vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache1
			  [(IData)(vlSymsp->TOP__v.__Vdlyvdim0__data_cache_L1__DOT__dcache1__v14)], vlSymsp->TOP__v.__Vdlyvval__data_cache_L1__DOT__dcache1__v14);
    }
    if (vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache1__v15) {
	VL_ASSIGNSEL_WIII(32,(IData)(vlSymsp->TOP__v.__Vdlyvlsb__data_cache_L1__DOT__dcache1__v15), 
			  vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache1
			  [(IData)(vlSymsp->TOP__v.__Vdlyvdim0__data_cache_L1__DOT__dcache1__v15)], vlSymsp->TOP__v.__Vdlyvval__data_cache_L1__DOT__dcache1__v15);
    }
    if (vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache1__v16) {
	VL_ASSIGNSEL_WIII(32,(IData)(vlSymsp->TOP__v.__Vdlyvlsb__data_cache_L1__DOT__dcache1__v16), 
			  vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache1
			  [(IData)(vlSymsp->TOP__v.__Vdlyvdim0__data_cache_L1__DOT__dcache1__v16)], vlSymsp->TOP__v.__Vdlyvval__data_cache_L1__DOT__dcache1__v16);
    }
    if (vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache1__v17) {
	VL_ASSIGNSEL_WIII(32,(IData)(vlSymsp->TOP__v.__Vdlyvlsb__data_cache_L1__DOT__dcache1__v17), 
			  vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache1
			  [(IData)(vlSymsp->TOP__v.__Vdlyvdim0__data_cache_L1__DOT__dcache1__v17)], vlSymsp->TOP__v.__Vdlyvval__data_cache_L1__DOT__dcache1__v17);
    }
    if (vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache1__v18) {
	VL_ASSIGNSEL_WIII(32,(IData)(vlSymsp->TOP__v.__Vdlyvlsb__data_cache_L1__DOT__dcache1__v18), 
			  vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache1
			  [(IData)(vlSymsp->TOP__v.__Vdlyvdim0__data_cache_L1__DOT__dcache1__v18)], vlSymsp->TOP__v.__Vdlyvval__data_cache_L1__DOT__dcache1__v18);
    }
    if (vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache1__v19) {
	VL_ASSIGNSEL_WIII(32,(IData)(vlSymsp->TOP__v.__Vdlyvlsb__data_cache_L1__DOT__dcache1__v19), 
			  vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache1
			  [(IData)(vlSymsp->TOP__v.__Vdlyvdim0__data_cache_L1__DOT__dcache1__v19)], vlSymsp->TOP__v.__Vdlyvval__data_cache_L1__DOT__dcache1__v19);
    }
    if (vlSymsp->TOP__v.__Vdlyvset__data_cache_L1__DOT__dcache1__v20) {
	VL_ASSIGNSEL_WIII(32,(IData)(vlSymsp->TOP__v.__Vdlyvlsb__data_cache_L1__DOT__dcache1__v20), 
			  vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache1
			  [(IData)(vlSymsp->TOP__v.__Vdlyvdim0__data_cache_L1__DOT__dcache1__v20)], vlSymsp->TOP__v.__Vdlyvval__data_cache_L1__DOT__dcache1__v20);
    }
}

void VMIPS_MIPS::_initial__TOP__v__4(VMIPS__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VMIPS_MIPS::_initial__TOP__v__4\n"); );
    VMIPS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // INITIAL at verilog//data_cache_L1.v:87
    vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__i = 0U;
    while (VL_GTS_III(1,32,32, 0x200U, vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__i)) {
	vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache1[(0x1ffU 
							    & vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__i)][0U] = 0U;
	vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache1[(0x1ffU 
							    & vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__i)][1U] = 0U;
	vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache1[(0x1ffU 
							    & vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__i)][2U] = 0U;
	vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache1[(0x1ffU 
							    & vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__i)][3U] = 0U;
	vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache1[(0x1ffU 
							    & vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__i)][4U] = 0U;
	vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache1[(0x1ffU 
							    & vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__i)][5U] = 0U;
	vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache1[(0x1ffU 
							    & vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__i)][6U] = 0U;
	vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache1[(0x1ffU 
							    & vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__i)][7U] = 0U;
	vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache1[(0x1ffU 
							    & vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__i)][8U] = 0U;
	vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache2[(0x1ffU 
							    & vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__i)][0U] = 0U;
	vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache2[(0x1ffU 
							    & vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__i)][1U] = 0U;
	vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache2[(0x1ffU 
							    & vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__i)][2U] = 0U;
	vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache2[(0x1ffU 
							    & vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__i)][3U] = 0U;
	vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache2[(0x1ffU 
							    & vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__i)][4U] = 0U;
	vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache2[(0x1ffU 
							    & vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__i)][5U] = 0U;
	vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache2[(0x1ffU 
							    & vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__i)][6U] = 0U;
	vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache2[(0x1ffU 
							    & vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__i)][7U] = 0U;
	vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache2[(0x1ffU 
							    & vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__i)][8U] = 0U;
	vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__LRUcounter1[(0x1ffU 
								& vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__i)] = 0U;
	vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__LRUcounter2[(0x1ffU 
								& vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__i)] = 0U;
	vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__i 
	    = ((IData)(1U) + vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__i);
    }
}

void VMIPS_MIPS::_sequent__TOP__v__5(VMIPS__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VMIPS_MIPS::_sequent__TOP__v__5\n"); );
    VMIPS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__counter 
	= vlSymsp->TOP__v.__Vdly__data_cache_L1__DOT__counter;
    // ALWAYS at verilog//data_cache_L1.v:362
    if (vlTOPp->RESET) {
	if (((~ (IData)(vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__hit)) 
	     & (IData)(vlSymsp->TOP__v.write_2DC))) {
	    vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__wr_wait = 1U;
	} else {
	    if (((2U != (IData)(vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__state)) 
		 & (1U != (IData)(vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__state)))) {
		vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__wr_wait = 0U;
	    }
	}
    } else {
	vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__wr_wait = 0U;
    }
    // ALWAYS at verilog//data_cache_L1.v:326
    if (vlTOPp->RESET) {
	if (VL_UNLIKELY(((((((~ (IData)(vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__hit)) 
			     & (~ (IData)(vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__set_choose))) 
			    & (IData)(vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dirty1)) 
			   & (1U != (IData)(vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__state))) 
			  & (2U != (IData)(vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__state))) 
			 & (IData)(vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__data_req)))) {
	    VL_WRITEF("DCACHE:save tag %x\n",18,(0x3ffffU 
						 & vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data
						 [0U][8U]));
	    fflush (stdout);
	    fflush (stdout);
	    vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_tag 
		= (0x3ffffU & vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data
		   [0U][8U]);
	} else {
	    if (VL_UNLIKELY(((((((~ (IData)(vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__hit)) 
				 & (IData)(vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__set_choose)) 
				& (IData)(vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dirty2)) 
			       & (1U != (IData)(vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__state))) 
			      & (2U != (IData)(vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__state))) 
			     & (IData)(vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__data_req)))) {
		VL_WRITEF("DCACHE:save tag %x\n",18,
			  (0x3ffffU & vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data
			   [1U][8U]));
		fflush (stdout);
		fflush (stdout);
		vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_tag 
		    = (0x3ffffU & vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data
		       [1U][8U]);
	    }
	}
	if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__hit)) 
			 & (IData)(vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__data_req)))) {
	    vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
		= vlSymsp->TOP__v.data_address_2DC;
	    VL_WRITEF("DCACHE:save addr %x\n",32,vlSymsp->TOP__v.data_address_2DC);
	    fflush (stdout);
	}
	if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__hit)) 
			 & (IData)(vlSymsp->TOP__v.write_2DC)))) {
	    vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_data 
		= vlSymsp->TOP__v.data_write_2DC;
	    VL_WRITEF("DCACHE:save data %x\n",32,vlSymsp->TOP__v.data_write_2DC);
	    fflush (stdout);
	}
    } else {
	vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr = 0U;
	vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_data = 0U;
	vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_tag = 0U;
    }
    vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__state 
	= vlSymsp->TOP__v.__Vdly__data_cache_L1__DOT__state;
    vlSymsp->TOP__v.data_address_2DM = ((vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_tag 
					 << 0xeU) | 
					(0x3fe0U & vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr));
}

void VMIPS_MIPS::_sequent__TOP__v__6(VMIPS__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VMIPS_MIPS::_sequent__TOP__v__6\n"); );
    VMIPS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v.read_2DC = vlSymsp->TOP__v__EXE.__PVT__MemRead1_OUT;
    vlSymsp->TOP__v.write_2DC = vlSymsp->TOP__v__EXE.__PVT__MemWrite1_OUT;
    vlSymsp->TOP__v.__PVT__Instr_PC_IFID = vlSymsp->TOP__v.__Vdly__Instr_PC_IFID;
    vlSymsp->TOP__v.__PVT__Instr1_IFID = vlSymsp->TOP__v.__Vdly__Instr1_IFID;
    vlSymsp->TOP__v.__PVT__WriteRegister1_MEMWB = vlSymsp->TOP__v.__Vdly__WriteRegister1_MEMWB;
    vlSymsp->TOP__v.__PVT__RegWrite1_MEMWB = vlSymsp->TOP__v.__Vdly__RegWrite1_MEMWB;
    vlSymsp->TOP__v.__PVT__WriteData1_MEMWB = vlSymsp->TOP__v.__Vdly__WriteData1_MEMWB;
    vlSymsp->TOP__v.Instr_address_2IC = ((IData)(vlSymsp->TOP__v__ID.__PVT__Request_Alt_PC)
					  ? vlSymsp->TOP__v__ID.__PVT__Alt_PC
					  : vlSymsp->TOP__v.__PVT__Instr_PC_Plus4_IFID);
}

void VMIPS_MIPS::_sequent__TOP__v__7(VMIPS__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VMIPS_MIPS::_sequent__TOP__v__7\n"); );
    VMIPS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v.__PVT__MEM__DOT__MemoryData1 = 
	((((IData)(vlSymsp->TOP__v__EXE.__PVT__WriteRegister1_OUT) 
	   == (IData)(vlSymsp->TOP__v.__PVT__WriteRegister1_MEMWB)) 
	  & (IData)(vlSymsp->TOP__v.__PVT__RegWrite1_MEMWB))
	  ? vlSymsp->TOP__v.__PVT__WriteData1_MEMWB
	  : vlSymsp->TOP__v__EXE.__PVT__MemWriteData1_OUT);
}

void VMIPS_MIPS::_settle__TOP__v__8(VMIPS__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VMIPS_MIPS::_settle__TOP__v__8\n"); );
    VMIPS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v.read_2DC = vlSymsp->TOP__v__EXE.__PVT__MemRead1_OUT;
    vlSymsp->TOP__v.write_2DC = vlSymsp->TOP__v__EXE.__PVT__MemWrite1_OUT;
    vlSymsp->TOP__v.Instr_address_2IC = ((IData)(vlSymsp->TOP__v__ID.__PVT__Request_Alt_PC)
					  ? vlSymsp->TOP__v__ID.__PVT__Alt_PC
					  : vlSymsp->TOP__v.__PVT__Instr_PC_Plus4_IFID);
    vlSymsp->TOP__v.__PVT__MEM__DOT__MemoryData1 = 
	((((IData)(vlSymsp->TOP__v__EXE.__PVT__WriteRegister1_OUT) 
	   == (IData)(vlSymsp->TOP__v.__PVT__WriteRegister1_MEMWB)) 
	  & (IData)(vlSymsp->TOP__v.__PVT__RegWrite1_MEMWB))
	  ? vlSymsp->TOP__v.__PVT__WriteData1_MEMWB
	  : vlSymsp->TOP__v__EXE.__PVT__MemWriteData1_OUT);
    vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__data_req 
	= ((IData)(vlSymsp->TOP__v.write_2DC) | (IData)(vlSymsp->TOP__v.read_2DC));
    vlSymsp->TOP__v.__PVT__instr_cache_L1__DOT__icache_data[0U] 
	= vlSymsp->TOP__v.__PVT__instr_cache_L1__DOT__icache
	[(0x3ffU & (vlSymsp->TOP__v.Instr_address_2IC 
		    >> 5U))][0U];
    vlSymsp->TOP__v.__PVT__instr_cache_L1__DOT__icache_data[1U] 
	= vlSymsp->TOP__v.__PVT__instr_cache_L1__DOT__icache
	[(0x3ffU & (vlSymsp->TOP__v.Instr_address_2IC 
		    >> 5U))][1U];
    vlSymsp->TOP__v.__PVT__instr_cache_L1__DOT__icache_data[2U] 
	= vlSymsp->TOP__v.__PVT__instr_cache_L1__DOT__icache
	[(0x3ffU & (vlSymsp->TOP__v.Instr_address_2IC 
		    >> 5U))][2U];
    vlSymsp->TOP__v.__PVT__instr_cache_L1__DOT__icache_data[3U] 
	= vlSymsp->TOP__v.__PVT__instr_cache_L1__DOT__icache
	[(0x3ffU & (vlSymsp->TOP__v.Instr_address_2IC 
		    >> 5U))][3U];
    vlSymsp->TOP__v.__PVT__instr_cache_L1__DOT__icache_data[4U] 
	= vlSymsp->TOP__v.__PVT__instr_cache_L1__DOT__icache
	[(0x3ffU & (vlSymsp->TOP__v.Instr_address_2IC 
		    >> 5U))][4U];
    vlSymsp->TOP__v.__PVT__instr_cache_L1__DOT__icache_data[5U] 
	= vlSymsp->TOP__v.__PVT__instr_cache_L1__DOT__icache
	[(0x3ffU & (vlSymsp->TOP__v.Instr_address_2IC 
		    >> 5U))][5U];
    vlSymsp->TOP__v.__PVT__instr_cache_L1__DOT__icache_data[6U] 
	= vlSymsp->TOP__v.__PVT__instr_cache_L1__DOT__icache
	[(0x3ffU & (vlSymsp->TOP__v.Instr_address_2IC 
		    >> 5U))][6U];
    vlSymsp->TOP__v.__PVT__instr_cache_L1__DOT__icache_data[7U] 
	= vlSymsp->TOP__v.__PVT__instr_cache_L1__DOT__icache
	[(0x3ffU & (vlSymsp->TOP__v.Instr_address_2IC 
		    >> 5U))][7U];
    vlSymsp->TOP__v.__PVT__instr_cache_L1__DOT__icache_data[8U] 
	= vlSymsp->TOP__v.__PVT__instr_cache_L1__DOT__icache
	[(0x3ffU & (vlSymsp->TOP__v.Instr_address_2IC 
		    >> 5U))][8U];
    // ALWAYS at verilog//MEM.v:206
    vlSymsp->TOP__v.__PVT__MEM__DOT__MemWriteAddress 
	= vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT;
    if ((0x20U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
	if ((0x10U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
	    if ((8U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
		vlSymsp->TOP__v.data_write_size_2DC = 0U;
	    } else {
		if ((4U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
		    if ((2U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
			if ((1U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
			    vlSymsp->TOP__v.data_write_size_2DC = 0U;
			} else {
			    vlSymsp->TOP__v.data_write_size_2DC = 0U;
			    vlSymsp->TOP__v.data_write_2DC 
				= vlSymsp->TOP__v.__PVT__MEM__DOT__MemoryData1;
			}
		    } else {
			vlSymsp->TOP__v.data_write_size_2DC = 0U;
		    }
		} else {
		    if ((2U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
			if ((1U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
			    vlSymsp->TOP__v.__PVT__MEM__DOT__MemWriteAddress 
				= (0xfffffffcU & vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT);
			    if ((0U == (3U & vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT))) {
				vlSymsp->TOP__v.data_write_2DC 
				    = ((0xffffff00U 
					& vlSymsp->TOP__v.data_write_2DC) 
				       | (0xffU & vlSymsp->TOP__v.__PVT__MEM__DOT__MemoryData1));
				vlSymsp->TOP__v.data_write_size_2DC = 1U;
			    } else {
				if ((1U == (3U & vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT))) {
				    vlSymsp->TOP__v.data_write_2DC 
					= ((0xffff0000U 
					    & vlSymsp->TOP__v.data_write_2DC) 
					   | (0xffffU 
					      & vlSymsp->TOP__v.__PVT__MEM__DOT__MemoryData1));
				    vlSymsp->TOP__v.data_write_size_2DC = 2U;
				} else {
				    if ((2U == (3U 
						& vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT))) {
					vlSymsp->TOP__v.data_write_2DC 
					    = ((0xff000000U 
						& vlSymsp->TOP__v.data_write_2DC) 
					       | (0xffffffU 
						  & vlSymsp->TOP__v.__PVT__MEM__DOT__MemoryData1));
					vlSymsp->TOP__v.data_write_size_2DC = 3U;
				    } else {
					if ((3U == 
					     (3U & vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT))) {
					    vlSymsp->TOP__v.data_write_2DC 
						= vlSymsp->TOP__v.__PVT__MEM__DOT__MemoryData1;
					    vlSymsp->TOP__v.data_write_size_2DC = 0U;
					}
				    }
				}
			    }
			} else {
			    vlSymsp->TOP__v.__PVT__MEM__DOT__MemWriteAddress 
				= vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT;
			    if ((0U == (3U & vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT))) {
				vlSymsp->TOP__v.data_write_2DC 
				    = vlSymsp->TOP__v.__PVT__MEM__DOT__MemoryData1;
				vlSymsp->TOP__v.data_write_size_2DC = 0U;
			    } else {
				if ((1U == (3U & vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT))) {
				    vlSymsp->TOP__v.data_write_2DC 
					= ((0xff000000U 
					    & vlSymsp->TOP__v.data_write_2DC) 
					   | (0xffffffU 
					      & (vlSymsp->TOP__v.__PVT__MEM__DOT__MemoryData1 
						 >> 8U)));
				    vlSymsp->TOP__v.data_write_size_2DC = 3U;
				} else {
				    if ((2U == (3U 
						& vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT))) {
					vlSymsp->TOP__v.data_write_2DC 
					    = ((0xffff0000U 
						& vlSymsp->TOP__v.data_write_2DC) 
					       | (0xffffU 
						  & (vlSymsp->TOP__v.__PVT__MEM__DOT__MemoryData1 
						     >> 0x10U)));
					vlSymsp->TOP__v.data_write_size_2DC = 2U;
				    } else {
					if ((3U == 
					     (3U & vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT))) {
					    vlSymsp->TOP__v.data_write_2DC 
						= (
						   (0xffffff00U 
						    & vlSymsp->TOP__v.data_write_2DC) 
						   | (0xffU 
						      & (vlSymsp->TOP__v.__PVT__MEM__DOT__MemoryData1 
							 >> 0x18U)));
					    vlSymsp->TOP__v.data_write_size_2DC = 1U;
					}
				    }
				}
			    }
			}
		    } else {
			if ((1U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
			    vlSymsp->TOP__v.data_write_size_2DC = 0U;
			    vlSymsp->TOP__v.data_write_2DC 
				= vlSymsp->TOP__v.__PVT__MEM__DOT__MemoryData1;
			} else {
			    vlSymsp->TOP__v.data_write_size_2DC = 2U;
			    vlSymsp->TOP__v.data_write_2DC 
				= ((0xffff0000U & vlSymsp->TOP__v.data_write_2DC) 
				   | (0xffffU & vlSymsp->TOP__v.__PVT__MEM__DOT__MemoryData1));
			}
		    }
		}
	    }
	} else {
	    if ((8U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
		if ((4U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
		    if ((2U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
			if ((1U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
			    vlSymsp->TOP__v.data_write_size_2DC = 1U;
			    vlSymsp->TOP__v.data_write_2DC 
				= ((0xffffff00U & vlSymsp->TOP__v.data_write_2DC) 
				   | (0xffU & vlSymsp->TOP__v.__PVT__MEM__DOT__MemoryData1));
			} else {
			    vlSymsp->TOP__v.data_write_size_2DC = 0U;
			}
		    } else {
			vlSymsp->TOP__v.data_write_size_2DC = 0U;
		    }
		} else {
		    vlSymsp->TOP__v.data_write_size_2DC = 0U;
		}
	    } else {
		vlSymsp->TOP__v.data_write_size_2DC = 0U;
	    }
	}
    } else {
	vlSymsp->TOP__v.data_write_size_2DC = 0U;
    }
}

void VMIPS_MIPS::_sequent__TOP__v__9(VMIPS__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VMIPS_MIPS::_sequent__TOP__v__9\n"); );
    VMIPS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__data_req 
	= ((IData)(vlSymsp->TOP__v.write_2DC) | (IData)(vlSymsp->TOP__v.read_2DC));
    vlSymsp->TOP__v.__PVT__instr_cache_L1__DOT__icache_data[0U] 
	= vlSymsp->TOP__v.__PVT__instr_cache_L1__DOT__icache
	[(0x3ffU & (vlSymsp->TOP__v.Instr_address_2IC 
		    >> 5U))][0U];
    vlSymsp->TOP__v.__PVT__instr_cache_L1__DOT__icache_data[1U] 
	= vlSymsp->TOP__v.__PVT__instr_cache_L1__DOT__icache
	[(0x3ffU & (vlSymsp->TOP__v.Instr_address_2IC 
		    >> 5U))][1U];
    vlSymsp->TOP__v.__PVT__instr_cache_L1__DOT__icache_data[2U] 
	= vlSymsp->TOP__v.__PVT__instr_cache_L1__DOT__icache
	[(0x3ffU & (vlSymsp->TOP__v.Instr_address_2IC 
		    >> 5U))][2U];
    vlSymsp->TOP__v.__PVT__instr_cache_L1__DOT__icache_data[3U] 
	= vlSymsp->TOP__v.__PVT__instr_cache_L1__DOT__icache
	[(0x3ffU & (vlSymsp->TOP__v.Instr_address_2IC 
		    >> 5U))][3U];
    vlSymsp->TOP__v.__PVT__instr_cache_L1__DOT__icache_data[4U] 
	= vlSymsp->TOP__v.__PVT__instr_cache_L1__DOT__icache
	[(0x3ffU & (vlSymsp->TOP__v.Instr_address_2IC 
		    >> 5U))][4U];
    vlSymsp->TOP__v.__PVT__instr_cache_L1__DOT__icache_data[5U] 
	= vlSymsp->TOP__v.__PVT__instr_cache_L1__DOT__icache
	[(0x3ffU & (vlSymsp->TOP__v.Instr_address_2IC 
		    >> 5U))][5U];
    vlSymsp->TOP__v.__PVT__instr_cache_L1__DOT__icache_data[6U] 
	= vlSymsp->TOP__v.__PVT__instr_cache_L1__DOT__icache
	[(0x3ffU & (vlSymsp->TOP__v.Instr_address_2IC 
		    >> 5U))][6U];
    vlSymsp->TOP__v.__PVT__instr_cache_L1__DOT__icache_data[7U] 
	= vlSymsp->TOP__v.__PVT__instr_cache_L1__DOT__icache
	[(0x3ffU & (vlSymsp->TOP__v.Instr_address_2IC 
		    >> 5U))][7U];
    vlSymsp->TOP__v.__PVT__instr_cache_L1__DOT__icache_data[8U] 
	= vlSymsp->TOP__v.__PVT__instr_cache_L1__DOT__icache
	[(0x3ffU & (vlSymsp->TOP__v.Instr_address_2IC 
		    >> 5U))][8U];
    // ALWAYS at verilog//MEM.v:206
    vlSymsp->TOP__v.__PVT__MEM__DOT__MemWriteAddress 
	= vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT;
    if ((0x20U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
	if ((0x10U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
	    if ((8U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
		vlSymsp->TOP__v.data_write_size_2DC = 0U;
	    } else {
		if ((4U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
		    if ((2U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
			if ((1U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
			    vlSymsp->TOP__v.data_write_size_2DC = 0U;
			} else {
			    vlSymsp->TOP__v.data_write_size_2DC = 0U;
			    vlSymsp->TOP__v.data_write_2DC 
				= vlSymsp->TOP__v.__PVT__MEM__DOT__MemoryData1;
			}
		    } else {
			vlSymsp->TOP__v.data_write_size_2DC = 0U;
		    }
		} else {
		    if ((2U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
			if ((1U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
			    vlSymsp->TOP__v.__PVT__MEM__DOT__MemWriteAddress 
				= (0xfffffffcU & vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT);
			    if ((0U == (3U & vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT))) {
				vlSymsp->TOP__v.data_write_2DC 
				    = ((0xffffff00U 
					& vlSymsp->TOP__v.data_write_2DC) 
				       | (0xffU & vlSymsp->TOP__v.__PVT__MEM__DOT__MemoryData1));
				vlSymsp->TOP__v.data_write_size_2DC = 1U;
			    } else {
				if ((1U == (3U & vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT))) {
				    vlSymsp->TOP__v.data_write_2DC 
					= ((0xffff0000U 
					    & vlSymsp->TOP__v.data_write_2DC) 
					   | (0xffffU 
					      & vlSymsp->TOP__v.__PVT__MEM__DOT__MemoryData1));
				    vlSymsp->TOP__v.data_write_size_2DC = 2U;
				} else {
				    if ((2U == (3U 
						& vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT))) {
					vlSymsp->TOP__v.data_write_2DC 
					    = ((0xff000000U 
						& vlSymsp->TOP__v.data_write_2DC) 
					       | (0xffffffU 
						  & vlSymsp->TOP__v.__PVT__MEM__DOT__MemoryData1));
					vlSymsp->TOP__v.data_write_size_2DC = 3U;
				    } else {
					if ((3U == 
					     (3U & vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT))) {
					    vlSymsp->TOP__v.data_write_2DC 
						= vlSymsp->TOP__v.__PVT__MEM__DOT__MemoryData1;
					    vlSymsp->TOP__v.data_write_size_2DC = 0U;
					}
				    }
				}
			    }
			} else {
			    vlSymsp->TOP__v.__PVT__MEM__DOT__MemWriteAddress 
				= vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT;
			    if ((0U == (3U & vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT))) {
				vlSymsp->TOP__v.data_write_2DC 
				    = vlSymsp->TOP__v.__PVT__MEM__DOT__MemoryData1;
				vlSymsp->TOP__v.data_write_size_2DC = 0U;
			    } else {
				if ((1U == (3U & vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT))) {
				    vlSymsp->TOP__v.data_write_2DC 
					= ((0xff000000U 
					    & vlSymsp->TOP__v.data_write_2DC) 
					   | (0xffffffU 
					      & (vlSymsp->TOP__v.__PVT__MEM__DOT__MemoryData1 
						 >> 8U)));
				    vlSymsp->TOP__v.data_write_size_2DC = 3U;
				} else {
				    if ((2U == (3U 
						& vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT))) {
					vlSymsp->TOP__v.data_write_2DC 
					    = ((0xffff0000U 
						& vlSymsp->TOP__v.data_write_2DC) 
					       | (0xffffU 
						  & (vlSymsp->TOP__v.__PVT__MEM__DOT__MemoryData1 
						     >> 0x10U)));
					vlSymsp->TOP__v.data_write_size_2DC = 2U;
				    } else {
					if ((3U == 
					     (3U & vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT))) {
					    vlSymsp->TOP__v.data_write_2DC 
						= (
						   (0xffffff00U 
						    & vlSymsp->TOP__v.data_write_2DC) 
						   | (0xffU 
						      & (vlSymsp->TOP__v.__PVT__MEM__DOT__MemoryData1 
							 >> 0x18U)));
					    vlSymsp->TOP__v.data_write_size_2DC = 1U;
					}
				    }
				}
			    }
			}
		    } else {
			if ((1U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
			    vlSymsp->TOP__v.data_write_size_2DC = 0U;
			    vlSymsp->TOP__v.data_write_2DC 
				= vlSymsp->TOP__v.__PVT__MEM__DOT__MemoryData1;
			} else {
			    vlSymsp->TOP__v.data_write_size_2DC = 2U;
			    vlSymsp->TOP__v.data_write_2DC 
				= ((0xffff0000U & vlSymsp->TOP__v.data_write_2DC) 
				   | (0xffffU & vlSymsp->TOP__v.__PVT__MEM__DOT__MemoryData1));
			}
		    }
		}
	    }
	} else {
	    if ((8U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
		if ((4U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
		    if ((2U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
			if ((1U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
			    vlSymsp->TOP__v.data_write_size_2DC = 1U;
			    vlSymsp->TOP__v.data_write_2DC 
				= ((0xffffff00U & vlSymsp->TOP__v.data_write_2DC) 
				   | (0xffU & vlSymsp->TOP__v.__PVT__MEM__DOT__MemoryData1));
			} else {
			    vlSymsp->TOP__v.data_write_size_2DC = 0U;
			}
		    } else {
			vlSymsp->TOP__v.data_write_size_2DC = 0U;
		    }
		} else {
		    vlSymsp->TOP__v.data_write_size_2DC = 0U;
		}
	    } else {
		vlSymsp->TOP__v.data_write_size_2DC = 0U;
	    }
	}
    } else {
	vlSymsp->TOP__v.data_write_size_2DC = 0U;
    }
    // ALWAYS at verilog//instr_cache_L1.v:89
    vlSymsp->TOP__v.__PVT__Instr1_fIC = (((((((((7U 
						 == 
						 (7U 
						  & (vlSymsp->TOP__v.Instr_address_2IC 
						     >> 2U))) 
						| (6U 
						   == 
						   (7U 
						    & (vlSymsp->TOP__v.Instr_address_2IC 
						       >> 2U)))) 
					       | (5U 
						  == 
						  (7U 
						   & (vlSymsp->TOP__v.Instr_address_2IC 
						      >> 2U)))) 
					      | (4U 
						 == 
						 (7U 
						  & (vlSymsp->TOP__v.Instr_address_2IC 
						     >> 2U)))) 
					     | (3U 
						== 
						(7U 
						 & (vlSymsp->TOP__v.Instr_address_2IC 
						    >> 2U)))) 
					    | (2U == 
					       (7U 
						& (vlSymsp->TOP__v.Instr_address_2IC 
						   >> 2U)))) 
					   | (1U == 
					      (7U & 
					       (vlSymsp->TOP__v.Instr_address_2IC 
						>> 2U)))) 
					  | (0U == 
					     (7U & 
					      (vlSymsp->TOP__v.Instr_address_2IC 
					       >> 2U))))
					  ? ((7U == 
					      (7U & 
					       (vlSymsp->TOP__v.Instr_address_2IC 
						>> 2U)))
					      ? vlSymsp->TOP__v.__PVT__instr_cache_L1__DOT__icache_data[0U]
					      : ((6U 
						  == 
						  (7U 
						   & (vlSymsp->TOP__v.Instr_address_2IC 
						      >> 2U)))
						  ? 
						 vlSymsp->TOP__v.__PVT__instr_cache_L1__DOT__icache_data[1U]
						  : 
						 ((5U 
						   == 
						   (7U 
						    & (vlSymsp->TOP__v.Instr_address_2IC 
						       >> 2U)))
						   ? 
						  vlSymsp->TOP__v.__PVT__instr_cache_L1__DOT__icache_data[2U]
						   : 
						  ((4U 
						    == 
						    (7U 
						     & (vlSymsp->TOP__v.Instr_address_2IC 
							>> 2U)))
						    ? 
						   vlSymsp->TOP__v.__PVT__instr_cache_L1__DOT__icache_data[3U]
						    : 
						   ((3U 
						     == 
						     (7U 
						      & (vlSymsp->TOP__v.Instr_address_2IC 
							 >> 2U)))
						     ? 
						    vlSymsp->TOP__v.__PVT__instr_cache_L1__DOT__icache_data[4U]
						     : 
						    ((2U 
						      == 
						      (7U 
						       & (vlSymsp->TOP__v.Instr_address_2IC 
							  >> 2U)))
						      ? 
						     vlSymsp->TOP__v.__PVT__instr_cache_L1__DOT__icache_data[5U]
						      : 
						     ((1U 
						       == 
						       (7U 
							& (vlSymsp->TOP__v.Instr_address_2IC 
							   >> 2U)))
						       ? 
						      vlSymsp->TOP__v.__PVT__instr_cache_L1__DOT__icache_data[6U]
						       : 
						      vlSymsp->TOP__v.__PVT__instr_cache_L1__DOT__icache_data[7U])))))))
					  : vlSymsp->TOP__v.__PVT__instr_cache_L1__DOT__icache_data[7U]);
    vlSymsp->TOP__v.__PVT__hitL1IF = ((vlSymsp->TOP__v.__PVT__instr_cache_L1__DOT__icache_data[8U] 
				       >> 0x11U) & 
				      ((0x1ffffU & 
					(vlSymsp->TOP__v.Instr_address_2IC 
					 >> 0xfU)) 
				       == (0x1ffffU 
					   & vlSymsp->TOP__v.__PVT__instr_cache_L1__DOT__icache_data[8U])));
    vlSymsp->TOP__v.data_address_2DC = ((IData)(vlSymsp->TOP__v__EXE.__PVT__MemWrite1_OUT)
					 ? vlSymsp->TOP__v.__PVT__MEM__DOT__MemWriteAddress
					 : (0xfffffffcU 
					    & vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT));
}

void VMIPS_MIPS::_settle__TOP__v__10(VMIPS__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VMIPS_MIPS::_settle__TOP__v__10\n"); );
    VMIPS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at verilog//instr_cache_L1.v:89
    vlSymsp->TOP__v.__PVT__Instr1_fIC = (((((((((7U 
						 == 
						 (7U 
						  & (vlSymsp->TOP__v.Instr_address_2IC 
						     >> 2U))) 
						| (6U 
						   == 
						   (7U 
						    & (vlSymsp->TOP__v.Instr_address_2IC 
						       >> 2U)))) 
					       | (5U 
						  == 
						  (7U 
						   & (vlSymsp->TOP__v.Instr_address_2IC 
						      >> 2U)))) 
					      | (4U 
						 == 
						 (7U 
						  & (vlSymsp->TOP__v.Instr_address_2IC 
						     >> 2U)))) 
					     | (3U 
						== 
						(7U 
						 & (vlSymsp->TOP__v.Instr_address_2IC 
						    >> 2U)))) 
					    | (2U == 
					       (7U 
						& (vlSymsp->TOP__v.Instr_address_2IC 
						   >> 2U)))) 
					   | (1U == 
					      (7U & 
					       (vlSymsp->TOP__v.Instr_address_2IC 
						>> 2U)))) 
					  | (0U == 
					     (7U & 
					      (vlSymsp->TOP__v.Instr_address_2IC 
					       >> 2U))))
					  ? ((7U == 
					      (7U & 
					       (vlSymsp->TOP__v.Instr_address_2IC 
						>> 2U)))
					      ? vlSymsp->TOP__v.__PVT__instr_cache_L1__DOT__icache_data[0U]
					      : ((6U 
						  == 
						  (7U 
						   & (vlSymsp->TOP__v.Instr_address_2IC 
						      >> 2U)))
						  ? 
						 vlSymsp->TOP__v.__PVT__instr_cache_L1__DOT__icache_data[1U]
						  : 
						 ((5U 
						   == 
						   (7U 
						    & (vlSymsp->TOP__v.Instr_address_2IC 
						       >> 2U)))
						   ? 
						  vlSymsp->TOP__v.__PVT__instr_cache_L1__DOT__icache_data[2U]
						   : 
						  ((4U 
						    == 
						    (7U 
						     & (vlSymsp->TOP__v.Instr_address_2IC 
							>> 2U)))
						    ? 
						   vlSymsp->TOP__v.__PVT__instr_cache_L1__DOT__icache_data[3U]
						    : 
						   ((3U 
						     == 
						     (7U 
						      & (vlSymsp->TOP__v.Instr_address_2IC 
							 >> 2U)))
						     ? 
						    vlSymsp->TOP__v.__PVT__instr_cache_L1__DOT__icache_data[4U]
						     : 
						    ((2U 
						      == 
						      (7U 
						       & (vlSymsp->TOP__v.Instr_address_2IC 
							  >> 2U)))
						      ? 
						     vlSymsp->TOP__v.__PVT__instr_cache_L1__DOT__icache_data[5U]
						      : 
						     ((1U 
						       == 
						       (7U 
							& (vlSymsp->TOP__v.Instr_address_2IC 
							   >> 2U)))
						       ? 
						      vlSymsp->TOP__v.__PVT__instr_cache_L1__DOT__icache_data[6U]
						       : 
						      vlSymsp->TOP__v.__PVT__instr_cache_L1__DOT__icache_data[7U])))))))
					  : vlSymsp->TOP__v.__PVT__instr_cache_L1__DOT__icache_data[7U]);
    vlSymsp->TOP__v.__PVT__hitL1IF = ((vlSymsp->TOP__v.__PVT__instr_cache_L1__DOT__icache_data[8U] 
				       >> 0x11U) & 
				      ((0x1ffffU & 
					(vlSymsp->TOP__v.Instr_address_2IC 
					 >> 0xfU)) 
				       == (0x1ffffU 
					   & vlSymsp->TOP__v.__PVT__instr_cache_L1__DOT__icache_data[8U])));
    vlSymsp->TOP__v.data_address_2DC = ((IData)(vlSymsp->TOP__v__EXE.__PVT__MemWrite1_OUT)
					 ? vlSymsp->TOP__v.__PVT__MEM__DOT__MemWriteAddress
					 : (0xfffffffcU 
					    & vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT));
    // ALWAYS at verilog//data_cache_L1.v:392
    vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__set_choose 
	= (1U & ((vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__LRUcounter1
		  [(0x1ffU & (vlSymsp->TOP__v.data_address_2DC 
			      >> 5U))] >= vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__LRUcounter2
		  [(0x1ffU & (vlSymsp->TOP__v.data_address_2DC 
			      >> 5U))]) ? 0U : 1U));
    vlSymsp->TOP__v.data_address_2DM = (0xffffffe0U 
					& vlSymsp->TOP__v.data_address_2DC);
    vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data[0U][0U] 
	= vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache1
	[(0x1ffU & (vlSymsp->TOP__v.data_address_2DC 
		    >> 5U))][0U];
    vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data[0U][1U] 
	= vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache1
	[(0x1ffU & (vlSymsp->TOP__v.data_address_2DC 
		    >> 5U))][1U];
    vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data[0U][2U] 
	= vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache1
	[(0x1ffU & (vlSymsp->TOP__v.data_address_2DC 
		    >> 5U))][2U];
    vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data[0U][3U] 
	= vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache1
	[(0x1ffU & (vlSymsp->TOP__v.data_address_2DC 
		    >> 5U))][3U];
    vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data[0U][4U] 
	= vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache1
	[(0x1ffU & (vlSymsp->TOP__v.data_address_2DC 
		    >> 5U))][4U];
    vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data[0U][5U] 
	= vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache1
	[(0x1ffU & (vlSymsp->TOP__v.data_address_2DC 
		    >> 5U))][5U];
    vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data[0U][6U] 
	= vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache1
	[(0x1ffU & (vlSymsp->TOP__v.data_address_2DC 
		    >> 5U))][6U];
    vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data[0U][7U] 
	= vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache1
	[(0x1ffU & (vlSymsp->TOP__v.data_address_2DC 
		    >> 5U))][7U];
    vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data[0U][8U] 
	= vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache1
	[(0x1ffU & (vlSymsp->TOP__v.data_address_2DC 
		    >> 5U))][8U];
    vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data[1U][0U] 
	= vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache2
	[(0x1ffU & (vlSymsp->TOP__v.data_address_2DC 
		    >> 5U))][0U];
    vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data[1U][1U] 
	= vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache2
	[(0x1ffU & (vlSymsp->TOP__v.data_address_2DC 
		    >> 5U))][1U];
    vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data[1U][2U] 
	= vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache2
	[(0x1ffU & (vlSymsp->TOP__v.data_address_2DC 
		    >> 5U))][2U];
    vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data[1U][3U] 
	= vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache2
	[(0x1ffU & (vlSymsp->TOP__v.data_address_2DC 
		    >> 5U))][3U];
    vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data[1U][4U] 
	= vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache2
	[(0x1ffU & (vlSymsp->TOP__v.data_address_2DC 
		    >> 5U))][4U];
    vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data[1U][5U] 
	= vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache2
	[(0x1ffU & (vlSymsp->TOP__v.data_address_2DC 
		    >> 5U))][5U];
    vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data[1U][6U] 
	= vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache2
	[(0x1ffU & (vlSymsp->TOP__v.data_address_2DC 
		    >> 5U))][6U];
    vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data[1U][7U] 
	= vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache2
	[(0x1ffU & (vlSymsp->TOP__v.data_address_2DC 
		    >> 5U))][7U];
    vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data[1U][8U] 
	= vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache2
	[(0x1ffU & (vlSymsp->TOP__v.data_address_2DC 
		    >> 5U))][8U];
}

void VMIPS_MIPS::_sequent__TOP__v__11(VMIPS__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VMIPS_MIPS::_sequent__TOP__v__11\n"); );
    VMIPS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at verilog//data_cache_L1.v:392
    vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__set_choose 
	= (1U & ((vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__LRUcounter1
		  [(0x1ffU & (vlSymsp->TOP__v.data_address_2DC 
			      >> 5U))] >= vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__LRUcounter2
		  [(0x1ffU & (vlSymsp->TOP__v.data_address_2DC 
			      >> 5U))]) ? 0U : 1U));
    vlSymsp->TOP__v.data_address_2DM = (0xffffffe0U 
					& vlSymsp->TOP__v.data_address_2DC);
    vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data[0U][0U] 
	= vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache1
	[(0x1ffU & (vlSymsp->TOP__v.data_address_2DC 
		    >> 5U))][0U];
    vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data[0U][1U] 
	= vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache1
	[(0x1ffU & (vlSymsp->TOP__v.data_address_2DC 
		    >> 5U))][1U];
    vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data[0U][2U] 
	= vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache1
	[(0x1ffU & (vlSymsp->TOP__v.data_address_2DC 
		    >> 5U))][2U];
    vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data[0U][3U] 
	= vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache1
	[(0x1ffU & (vlSymsp->TOP__v.data_address_2DC 
		    >> 5U))][3U];
    vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data[0U][4U] 
	= vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache1
	[(0x1ffU & (vlSymsp->TOP__v.data_address_2DC 
		    >> 5U))][4U];
    vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data[0U][5U] 
	= vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache1
	[(0x1ffU & (vlSymsp->TOP__v.data_address_2DC 
		    >> 5U))][5U];
    vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data[0U][6U] 
	= vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache1
	[(0x1ffU & (vlSymsp->TOP__v.data_address_2DC 
		    >> 5U))][6U];
    vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data[0U][7U] 
	= vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache1
	[(0x1ffU & (vlSymsp->TOP__v.data_address_2DC 
		    >> 5U))][7U];
    vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data[0U][8U] 
	= vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache1
	[(0x1ffU & (vlSymsp->TOP__v.data_address_2DC 
		    >> 5U))][8U];
    vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data[1U][0U] 
	= vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache2
	[(0x1ffU & (vlSymsp->TOP__v.data_address_2DC 
		    >> 5U))][0U];
    vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data[1U][1U] 
	= vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache2
	[(0x1ffU & (vlSymsp->TOP__v.data_address_2DC 
		    >> 5U))][1U];
    vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data[1U][2U] 
	= vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache2
	[(0x1ffU & (vlSymsp->TOP__v.data_address_2DC 
		    >> 5U))][2U];
    vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data[1U][3U] 
	= vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache2
	[(0x1ffU & (vlSymsp->TOP__v.data_address_2DC 
		    >> 5U))][3U];
    vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data[1U][4U] 
	= vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache2
	[(0x1ffU & (vlSymsp->TOP__v.data_address_2DC 
		    >> 5U))][4U];
    vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data[1U][5U] 
	= vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache2
	[(0x1ffU & (vlSymsp->TOP__v.data_address_2DC 
		    >> 5U))][5U];
    vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data[1U][6U] 
	= vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache2
	[(0x1ffU & (vlSymsp->TOP__v.data_address_2DC 
		    >> 5U))][6U];
    vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data[1U][7U] 
	= vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache2
	[(0x1ffU & (vlSymsp->TOP__v.data_address_2DC 
		    >> 5U))][7U];
    vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data[1U][8U] 
	= vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache2
	[(0x1ffU & (vlSymsp->TOP__v.data_address_2DC 
		    >> 5U))][8U];
    vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dirty1 
	= (1U & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data
		 [0U][8U] >> 0x12U));
    vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dirty2 
	= (1U & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data
		 [1U][8U] >> 0x12U));
    vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__hit1 
	= ((vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data
	    [0U][8U] >> 0x13U) & ((0x3ffffU & (vlSymsp->TOP__v.data_address_2DC 
					       >> 0xeU)) 
				  == (0x3ffffU & vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data
				      [0U][8U])));
    vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__hit2 
	= ((vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data
	    [1U][8U] >> 0x13U) & ((0x3ffffU & (vlSymsp->TOP__v.data_address_2DC 
					       >> 0xeU)) 
				  == (0x3ffffU & vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data
				      [1U][8U])));
}

void VMIPS_MIPS::_settle__TOP__v__12(VMIPS__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VMIPS_MIPS::_settle__TOP__v__12\n"); );
    VMIPS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIGW(__Vtemp42,275,0,9);
    //char	__VpadToAlign324[4];
    VL_SIGW(__Vtemp52,275,0,9);
    // Body
    vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dirty1 
	= (1U & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data
		 [0U][8U] >> 0x12U));
    vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dirty2 
	= (1U & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data
		 [1U][8U] >> 0x12U));
    vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__hit1 
	= ((vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data
	    [0U][8U] >> 0x13U) & ((0x3ffffU & (vlSymsp->TOP__v.data_address_2DC 
					       >> 0xeU)) 
				  == (0x3ffffU & vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data
				      [0U][8U])));
    vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__hit2 
	= ((vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data
	    [1U][8U] >> 0x13U) & ((0x3ffffU & (vlSymsp->TOP__v.data_address_2DC 
					       >> 0xeU)) 
				  == (0x3ffffU & vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data
				      [1U][8U])));
    vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__hit 
	= ((IData)(vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__hit1) 
	   | (IData)(vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__hit2));
    // ALWAYS at verilog//data_cache_L1.v:228
    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__hit1)) {
	__Vtemp42[0U] = vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data
	    [0U][0U];
	__Vtemp42[1U] = vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data
	    [0U][1U];
	__Vtemp42[2U] = vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data
	    [0U][2U];
	__Vtemp42[3U] = vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data
	    [0U][3U];
	__Vtemp42[4U] = vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data
	    [0U][4U];
	__Vtemp42[5U] = vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data
	    [0U][5U];
	__Vtemp42[6U] = vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data
	    [0U][6U];
	__Vtemp42[7U] = vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data
	    [0U][7U];
	__Vtemp42[8U] = vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data
	    [0U][8U];
	VL_WRITEF("DCACHE: now get the data %x at hit1\n",
		  276,__Vtemp42);
	fflush (stdout);
	fflush (stdout);
	vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_word 
	    = (((((((((0U == (7U & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
				    >> 2U))) | (1U 
						== 
						(7U 
						 & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
						    >> 2U)))) 
		     | (2U == (7U & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
				     >> 2U)))) | (3U 
						  == 
						  (7U 
						   & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
						      >> 2U)))) 
		   | (4U == (7U & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
				   >> 2U)))) | (5U 
						== 
						(7U 
						 & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
						    >> 2U)))) 
		 | (6U == (7U & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
				 >> 2U)))) | (7U == 
					      (7U & 
					       (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
						>> 2U))))
	        ? ((0U == (7U & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
				 >> 2U))) ? vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data
		   [0U][7U] : ((1U == (7U & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
					     >> 2U)))
			        ? vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data
			       [0U][6U] : ((2U == (7U 
						   & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
						      >> 2U)))
					    ? vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data
					   [0U][5U]
					    : ((3U 
						== 
						(7U 
						 & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
						    >> 2U)))
					        ? vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data
					       [0U][4U]
					        : (
						   (4U 
						    == 
						    (7U 
						     & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
							>> 2U)))
						    ? 
						   vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data
						   [0U][3U]
						    : 
						   ((5U 
						     == 
						     (7U 
						      & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
							 >> 2U)))
						     ? 
						    vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data
						    [0U][2U]
						     : 
						    ((6U 
						      == 
						      (7U 
						       & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
							  >> 2U)))
						      ? 
						     vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data
						     [0U][1U]
						      : 
						     vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data
						     [0U][0U])))))))
	        : vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data
	       [0U][7U]);
    }
    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__hit2)) {
	__Vtemp52[0U] = vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data
	    [1U][0U];
	__Vtemp52[1U] = vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data
	    [1U][1U];
	__Vtemp52[2U] = vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data
	    [1U][2U];
	__Vtemp52[3U] = vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data
	    [1U][3U];
	__Vtemp52[4U] = vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data
	    [1U][4U];
	__Vtemp52[5U] = vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data
	    [1U][5U];
	__Vtemp52[6U] = vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data
	    [1U][6U];
	__Vtemp52[7U] = vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data
	    [1U][7U];
	__Vtemp52[8U] = vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data
	    [1U][8U];
	VL_WRITEF("DCACHE: now get the data %x at hit2\n",
		  276,__Vtemp52);
	fflush (stdout);
	fflush (stdout);
	vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_word 
	    = (((((((((0U == (7U & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
				    >> 2U))) | (1U 
						== 
						(7U 
						 & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
						    >> 2U)))) 
		     | (2U == (7U & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
				     >> 2U)))) | (3U 
						  == 
						  (7U 
						   & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
						      >> 2U)))) 
		   | (4U == (7U & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
				   >> 2U)))) | (5U 
						== 
						(7U 
						 & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
						    >> 2U)))) 
		 | (6U == (7U & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
				 >> 2U)))) | (7U == 
					      (7U & 
					       (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
						>> 2U))))
	        ? ((0U == (7U & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
				 >> 2U))) ? vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data
		   [1U][7U] : ((1U == (7U & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
					     >> 2U)))
			        ? vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data
			       [1U][6U] : ((2U == (7U 
						   & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
						      >> 2U)))
					    ? vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data
					   [1U][5U]
					    : ((3U 
						== 
						(7U 
						 & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
						    >> 2U)))
					        ? vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data
					       [1U][4U]
					        : (
						   (4U 
						    == 
						    (7U 
						     & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
							>> 2U)))
						    ? 
						   vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data
						   [1U][3U]
						    : 
						   ((5U 
						     == 
						     (7U 
						      & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
							 >> 2U)))
						     ? 
						    vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data
						    [1U][2U]
						     : 
						    ((6U 
						      == 
						      (7U 
						       & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
							  >> 2U)))
						      ? 
						     vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data
						     [1U][1U]
						      : 
						     vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data
						     [1U][0U])))))))
	        : vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data
	       [1U][7U]);
    }
}

void VMIPS_MIPS::_sequent__TOP__v__13(VMIPS__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VMIPS_MIPS::_sequent__TOP__v__13\n"); );
    VMIPS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIGW(__Vtemp62,275,0,9);
    //char	__VpadToAlign420[4];
    VL_SIGW(__Vtemp72,275,0,9);
    // Body
    vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__hit 
	= ((IData)(vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__hit1) 
	   | (IData)(vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__hit2));
    // ALWAYS at verilog//data_cache_L1.v:228
    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__hit1)) {
	__Vtemp62[0U] = vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data
	    [0U][0U];
	__Vtemp62[1U] = vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data
	    [0U][1U];
	__Vtemp62[2U] = vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data
	    [0U][2U];
	__Vtemp62[3U] = vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data
	    [0U][3U];
	__Vtemp62[4U] = vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data
	    [0U][4U];
	__Vtemp62[5U] = vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data
	    [0U][5U];
	__Vtemp62[6U] = vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data
	    [0U][6U];
	__Vtemp62[7U] = vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data
	    [0U][7U];
	__Vtemp62[8U] = vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data
	    [0U][8U];
	VL_WRITEF("DCACHE: now get the data %x at hit1\n",
		  276,__Vtemp62);
	fflush (stdout);
	fflush (stdout);
	vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_word 
	    = (((((((((0U == (7U & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
				    >> 2U))) | (1U 
						== 
						(7U 
						 & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
						    >> 2U)))) 
		     | (2U == (7U & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
				     >> 2U)))) | (3U 
						  == 
						  (7U 
						   & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
						      >> 2U)))) 
		   | (4U == (7U & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
				   >> 2U)))) | (5U 
						== 
						(7U 
						 & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
						    >> 2U)))) 
		 | (6U == (7U & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
				 >> 2U)))) | (7U == 
					      (7U & 
					       (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
						>> 2U))))
	        ? ((0U == (7U & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
				 >> 2U))) ? vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data
		   [0U][7U] : ((1U == (7U & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
					     >> 2U)))
			        ? vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data
			       [0U][6U] : ((2U == (7U 
						   & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
						      >> 2U)))
					    ? vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data
					   [0U][5U]
					    : ((3U 
						== 
						(7U 
						 & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
						    >> 2U)))
					        ? vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data
					       [0U][4U]
					        : (
						   (4U 
						    == 
						    (7U 
						     & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
							>> 2U)))
						    ? 
						   vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data
						   [0U][3U]
						    : 
						   ((5U 
						     == 
						     (7U 
						      & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
							 >> 2U)))
						     ? 
						    vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data
						    [0U][2U]
						     : 
						    ((6U 
						      == 
						      (7U 
						       & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
							  >> 2U)))
						      ? 
						     vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data
						     [0U][1U]
						      : 
						     vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data
						     [0U][0U])))))))
	        : vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data
	       [0U][7U]);
    }
    if (VL_UNLIKELY(vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__hit2)) {
	__Vtemp72[0U] = vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data
	    [1U][0U];
	__Vtemp72[1U] = vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data
	    [1U][1U];
	__Vtemp72[2U] = vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data
	    [1U][2U];
	__Vtemp72[3U] = vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data
	    [1U][3U];
	__Vtemp72[4U] = vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data
	    [1U][4U];
	__Vtemp72[5U] = vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data
	    [1U][5U];
	__Vtemp72[6U] = vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data
	    [1U][6U];
	__Vtemp72[7U] = vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data
	    [1U][7U];
	__Vtemp72[8U] = vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data
	    [1U][8U];
	VL_WRITEF("DCACHE: now get the data %x at hit2\n",
		  276,__Vtemp72);
	fflush (stdout);
	fflush (stdout);
	vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_word 
	    = (((((((((0U == (7U & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
				    >> 2U))) | (1U 
						== 
						(7U 
						 & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
						    >> 2U)))) 
		     | (2U == (7U & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
				     >> 2U)))) | (3U 
						  == 
						  (7U 
						   & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
						      >> 2U)))) 
		   | (4U == (7U & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
				   >> 2U)))) | (5U 
						== 
						(7U 
						 & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
						    >> 2U)))) 
		 | (6U == (7U & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
				 >> 2U)))) | (7U == 
					      (7U & 
					       (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
						>> 2U))))
	        ? ((0U == (7U & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
				 >> 2U))) ? vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data
		   [1U][7U] : ((1U == (7U & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
					     >> 2U)))
			        ? vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data
			       [1U][6U] : ((2U == (7U 
						   & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
						      >> 2U)))
					    ? vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data
					   [1U][5U]
					    : ((3U 
						== 
						(7U 
						 & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
						    >> 2U)))
					        ? vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data
					       [1U][4U]
					        : (
						   (4U 
						    == 
						    (7U 
						     & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
							>> 2U)))
						    ? 
						   vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data
						   [1U][3U]
						    : 
						   ((5U 
						     == 
						     (7U 
						      & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
							 >> 2U)))
						     ? 
						    vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data
						    [1U][2U]
						     : 
						    ((6U 
						      == 
						      (7U 
						       & (vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__saved_addr 
							  >> 2U)))
						      ? 
						     vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data
						     [1U][1U]
						      : 
						     vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data
						     [1U][0U])))))))
	        : vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_data
	       [1U][7U]);
    }
    vlSymsp->TOP__v.__PVT__missDCache = ((~ (IData)(vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__hit)) 
					 & (IData)(vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__data_req));
    vlSymsp->TOP__v.data_read_fDC = vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_word;
}

void VMIPS_MIPS::_settle__TOP__v__14(VMIPS__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VMIPS_MIPS::_settle__TOP__v__14\n"); );
    VMIPS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v.__PVT__missDCache = ((~ (IData)(vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__hit)) 
					 & (IData)(vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__data_req));
    vlSymsp->TOP__v.data_read_fDC = vlSymsp->TOP__v.__PVT__data_cache_L1__DOT__dcache_word;
    // ALWAYS at verilog//MEM.v:105
    vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
	= vlSymsp->TOP__v.__PVT__MEM__DOT__MemoryData1;
    if ((0x20U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
	if ((0x10U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
	    if ((4U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
		if ((2U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
		    vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
			= vlSymsp->TOP__v.data_read_fDC;
		} else {
		    if ((1U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
			vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
			    = vlSymsp->TOP__v.data_read_fDC;
			vlSymsp->TOP__v.data_write_size_2DC = 0U;
		    } else {
			vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
			    = vlSymsp->TOP__v.data_read_fDC;
		    }
		}
	    } else {
		vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
		    = vlSymsp->TOP__v.data_read_fDC;
	    }
	} else {
	    if ((8U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
		if ((4U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
		    if ((2U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
			if ((1U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
			    vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
				= vlSymsp->TOP__v.data_read_fDC;
			} else {
			    if ((0U == (3U & vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT))) {
				vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
				    = ((0xffffff00U 
					& vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned) 
				       | (0xffU & (vlSymsp->TOP__v.data_read_fDC 
						   >> 0x18U)));
			    } else {
				if ((1U == (3U & vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT))) {
				    vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
					= ((0xffff0000U 
					    & vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned) 
					   | (0xffffU 
					      & (vlSymsp->TOP__v.data_read_fDC 
						 >> 0x10U)));
				} else {
				    if ((2U == (3U 
						& vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT))) {
					vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
					    = ((0xff000000U 
						& vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned) 
					       | (0xffffffU 
						  & (vlSymsp->TOP__v.data_read_fDC 
						     >> 8U)));
				    } else {
					if ((3U == 
					     (3U & vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT))) {
					    vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
						= vlSymsp->TOP__v.data_read_fDC;
					}
				    }
				}
			    }
			    vlSymsp->TOP__v.data_write_size_2DC = 0U;
			}
		    } else {
			if ((1U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
			    if ((0U == (3U & vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT))) {
				vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
				    = vlSymsp->TOP__v.data_read_fDC;
			    } else {
				if ((1U == (3U & vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT))) {
				    vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
					= ((0xffU & vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned) 
					   | (0xffffff00U 
					      & (vlSymsp->TOP__v.data_read_fDC 
						 << 8U)));
				} else {
				    if ((2U == (3U 
						& vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT))) {
					vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
					    = ((0xffffU 
						& vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned) 
					       | (0xffff0000U 
						  & (vlSymsp->TOP__v.data_read_fDC 
						     << 0x10U)));
				    } else {
					if ((3U == 
					     (3U & vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT))) {
					    vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
						= (
						   (0xffffffU 
						    & vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned) 
						   | (0xff000000U 
						      & (vlSymsp->TOP__v.data_read_fDC 
							 << 0x18U)));
					}
				    }
				}
			    }
			    vlSymsp->TOP__v.data_write_size_2DC = 0U;
			} else {
			    if ((0U == (3U & vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT))) {
				vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
				    = (0xffffU & (vlSymsp->TOP__v.data_read_fDC 
						  >> 0x10U));
			    } else {
				if ((2U == (3U & vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT))) {
				    vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
					= (0xffffU 
					   & vlSymsp->TOP__v.data_read_fDC);
				}
			    }
			    vlSymsp->TOP__v.data_write_size_2DC = 0U;
			}
		    }
		} else {
		    if ((2U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
			if ((1U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
			    if ((0U == (3U & vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT))) {
				vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
				    = ((0xffff0000U 
					& (VL_NEGATE_I((IData)(
							       (1U 
								& (vlSymsp->TOP__v.data_read_fDC 
								   >> 0x1fU)))) 
					   << 0x10U)) 
				       | (0xffffU & 
					  (vlSymsp->TOP__v.data_read_fDC 
					   >> 0x10U)));
			    } else {
				if ((2U == (3U & vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT))) {
				    vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
					= ((0xffff0000U 
					    & (VL_NEGATE_I((IData)(
								   (1U 
								    & (vlSymsp->TOP__v.data_read_fDC 
								       >> 0xfU)))) 
					       << 0x10U)) 
					   | (0xffffU 
					      & vlSymsp->TOP__v.data_read_fDC));
				}
			    }
			    vlSymsp->TOP__v.data_write_size_2DC = 0U;
			} else {
			    if ((0U == (3U & vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT))) {
				vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
				    = (0xffU & (vlSymsp->TOP__v.data_read_fDC 
						>> 0x18U));
			    } else {
				if ((1U == (3U & vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT))) {
				    vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
					= (0xffU & 
					   (vlSymsp->TOP__v.data_read_fDC 
					    >> 0x10U));
				} else {
				    if ((2U == (3U 
						& vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT))) {
					vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
					    = (0xffU 
					       & (vlSymsp->TOP__v.data_read_fDC 
						  >> 8U));
				    } else {
					if ((3U == 
					     (3U & vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT))) {
					    vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
						= (0xffU 
						   & vlSymsp->TOP__v.data_read_fDC);
					}
				    }
				}
			    }
			    vlSymsp->TOP__v.data_write_size_2DC = 0U;
			}
		    } else {
			if ((1U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
			    vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
				= vlSymsp->TOP__v.data_read_fDC;
			} else {
			    vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
				= vlSymsp->TOP__v.data_read_fDC;
			    vlSymsp->TOP__v.data_write_size_2DC = 0U;
			}
		    }
		}
	    } else {
		if ((4U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
		    vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
			= vlSymsp->TOP__v.data_read_fDC;
		} else {
		    if ((2U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
			vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
			    = vlSymsp->TOP__v.data_read_fDC;
		    } else {
			if ((1U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
			    if ((0U == (3U & vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT))) {
				vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
				    = ((0xffffff00U 
					& (VL_NEGATE_I((IData)(
							       (1U 
								& (vlSymsp->TOP__v.data_read_fDC 
								   >> 0x1fU)))) 
					   << 8U)) 
				       | (0xffU & (vlSymsp->TOP__v.data_read_fDC 
						   >> 0x18U)));
			    } else {
				if ((1U == (3U & vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT))) {
				    vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
					= ((0xffffff00U 
					    & (VL_NEGATE_I((IData)(
								   (1U 
								    & (vlSymsp->TOP__v.data_read_fDC 
								       >> 0x17U)))) 
					       << 8U)) 
					   | (0xffU 
					      & (vlSymsp->TOP__v.data_read_fDC 
						 >> 0x10U)));
				} else {
				    if ((2U == (3U 
						& vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT))) {
					vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
					    = ((0xffffff00U 
						& (VL_NEGATE_I((IData)(
								       (1U 
									& (vlSymsp->TOP__v.data_read_fDC 
									   >> 0xfU)))) 
						   << 8U)) 
					       | (0xffU 
						  & (vlSymsp->TOP__v.data_read_fDC 
						     >> 8U)));
				    } else {
					if ((3U == 
					     (3U & vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT))) {
					    vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
						= (
						   (0xffffff00U 
						    & (VL_NEGATE_I((IData)(
									   (1U 
									    & (vlSymsp->TOP__v.data_read_fDC 
									       >> 7U)))) 
						       << 8U)) 
						   | (0xffU 
						      & vlSymsp->TOP__v.data_read_fDC));
					}
				    }
				}
			    }
			    vlSymsp->TOP__v.data_write_size_2DC = 0U;
			} else {
			    vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
				= vlSymsp->TOP__v.data_read_fDC;
			}
		    }
		}
	    }
	}
    } else {
	if ((0x10U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
	    vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
		= vlSymsp->TOP__v.data_read_fDC;
	} else {
	    if ((8U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
		vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
		    = vlSymsp->TOP__v.data_read_fDC;
	    } else {
		if ((4U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
		    vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
			= vlSymsp->TOP__v.data_read_fDC;
		} else {
		    if ((2U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
			vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
			    = vlSymsp->TOP__v.data_read_fDC;
		    } else {
			if ((1U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
			    vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
				= vlSymsp->TOP__v.data_read_fDC;
			} else {
			    vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
				= vlSymsp->TOP__v.data_read_fDC;
			    vlSymsp->TOP__v.data_write_size_2DC = 0U;
			}
		    }
		}
	    }
	}
    }
}

void VMIPS_MIPS::_sequent__TOP__v__15(VMIPS__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VMIPS_MIPS::_sequent__TOP__v__15\n"); );
    VMIPS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at verilog//MEM.v:105
    vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
	= vlSymsp->TOP__v.__PVT__MEM__DOT__MemoryData1;
    if ((0x20U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
	if ((0x10U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
	    if ((4U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
		if ((2U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
		    vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
			= vlSymsp->TOP__v.data_read_fDC;
		} else {
		    if ((1U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
			vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
			    = vlSymsp->TOP__v.data_read_fDC;
			vlSymsp->TOP__v.data_write_size_2DC = 0U;
		    } else {
			vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
			    = vlSymsp->TOP__v.data_read_fDC;
		    }
		}
	    } else {
		vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
		    = vlSymsp->TOP__v.data_read_fDC;
	    }
	} else {
	    if ((8U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
		if ((4U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
		    if ((2U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
			if ((1U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
			    vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
				= vlSymsp->TOP__v.data_read_fDC;
			} else {
			    if ((0U == (3U & vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT))) {
				vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
				    = ((0xffffff00U 
					& vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned) 
				       | (0xffU & (vlSymsp->TOP__v.data_read_fDC 
						   >> 0x18U)));
			    } else {
				if ((1U == (3U & vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT))) {
				    vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
					= ((0xffff0000U 
					    & vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned) 
					   | (0xffffU 
					      & (vlSymsp->TOP__v.data_read_fDC 
						 >> 0x10U)));
				} else {
				    if ((2U == (3U 
						& vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT))) {
					vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
					    = ((0xff000000U 
						& vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned) 
					       | (0xffffffU 
						  & (vlSymsp->TOP__v.data_read_fDC 
						     >> 8U)));
				    } else {
					if ((3U == 
					     (3U & vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT))) {
					    vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
						= vlSymsp->TOP__v.data_read_fDC;
					}
				    }
				}
			    }
			    vlSymsp->TOP__v.data_write_size_2DC = 0U;
			}
		    } else {
			if ((1U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
			    if ((0U == (3U & vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT))) {
				vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
				    = vlSymsp->TOP__v.data_read_fDC;
			    } else {
				if ((1U == (3U & vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT))) {
				    vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
					= ((0xffU & vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned) 
					   | (0xffffff00U 
					      & (vlSymsp->TOP__v.data_read_fDC 
						 << 8U)));
				} else {
				    if ((2U == (3U 
						& vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT))) {
					vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
					    = ((0xffffU 
						& vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned) 
					       | (0xffff0000U 
						  & (vlSymsp->TOP__v.data_read_fDC 
						     << 0x10U)));
				    } else {
					if ((3U == 
					     (3U & vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT))) {
					    vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
						= (
						   (0xffffffU 
						    & vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned) 
						   | (0xff000000U 
						      & (vlSymsp->TOP__v.data_read_fDC 
							 << 0x18U)));
					}
				    }
				}
			    }
			    vlSymsp->TOP__v.data_write_size_2DC = 0U;
			} else {
			    if ((0U == (3U & vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT))) {
				vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
				    = (0xffffU & (vlSymsp->TOP__v.data_read_fDC 
						  >> 0x10U));
			    } else {
				if ((2U == (3U & vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT))) {
				    vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
					= (0xffffU 
					   & vlSymsp->TOP__v.data_read_fDC);
				}
			    }
			    vlSymsp->TOP__v.data_write_size_2DC = 0U;
			}
		    }
		} else {
		    if ((2U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
			if ((1U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
			    if ((0U == (3U & vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT))) {
				vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
				    = ((0xffff0000U 
					& (VL_NEGATE_I((IData)(
							       (1U 
								& (vlSymsp->TOP__v.data_read_fDC 
								   >> 0x1fU)))) 
					   << 0x10U)) 
				       | (0xffffU & 
					  (vlSymsp->TOP__v.data_read_fDC 
					   >> 0x10U)));
			    } else {
				if ((2U == (3U & vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT))) {
				    vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
					= ((0xffff0000U 
					    & (VL_NEGATE_I((IData)(
								   (1U 
								    & (vlSymsp->TOP__v.data_read_fDC 
								       >> 0xfU)))) 
					       << 0x10U)) 
					   | (0xffffU 
					      & vlSymsp->TOP__v.data_read_fDC));
				}
			    }
			    vlSymsp->TOP__v.data_write_size_2DC = 0U;
			} else {
			    if ((0U == (3U & vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT))) {
				vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
				    = (0xffU & (vlSymsp->TOP__v.data_read_fDC 
						>> 0x18U));
			    } else {
				if ((1U == (3U & vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT))) {
				    vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
					= (0xffU & 
					   (vlSymsp->TOP__v.data_read_fDC 
					    >> 0x10U));
				} else {
				    if ((2U == (3U 
						& vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT))) {
					vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
					    = (0xffU 
					       & (vlSymsp->TOP__v.data_read_fDC 
						  >> 8U));
				    } else {
					if ((3U == 
					     (3U & vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT))) {
					    vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
						= (0xffU 
						   & vlSymsp->TOP__v.data_read_fDC);
					}
				    }
				}
			    }
			    vlSymsp->TOP__v.data_write_size_2DC = 0U;
			}
		    } else {
			if ((1U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
			    vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
				= vlSymsp->TOP__v.data_read_fDC;
			} else {
			    vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
				= vlSymsp->TOP__v.data_read_fDC;
			    vlSymsp->TOP__v.data_write_size_2DC = 0U;
			}
		    }
		}
	    } else {
		if ((4U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
		    vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
			= vlSymsp->TOP__v.data_read_fDC;
		} else {
		    if ((2U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
			vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
			    = vlSymsp->TOP__v.data_read_fDC;
		    } else {
			if ((1U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
			    if ((0U == (3U & vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT))) {
				vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
				    = ((0xffffff00U 
					& (VL_NEGATE_I((IData)(
							       (1U 
								& (vlSymsp->TOP__v.data_read_fDC 
								   >> 0x1fU)))) 
					   << 8U)) 
				       | (0xffU & (vlSymsp->TOP__v.data_read_fDC 
						   >> 0x18U)));
			    } else {
				if ((1U == (3U & vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT))) {
				    vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
					= ((0xffffff00U 
					    & (VL_NEGATE_I((IData)(
								   (1U 
								    & (vlSymsp->TOP__v.data_read_fDC 
								       >> 0x17U)))) 
					       << 8U)) 
					   | (0xffU 
					      & (vlSymsp->TOP__v.data_read_fDC 
						 >> 0x10U)));
				} else {
				    if ((2U == (3U 
						& vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT))) {
					vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
					    = ((0xffffff00U 
						& (VL_NEGATE_I((IData)(
								       (1U 
									& (vlSymsp->TOP__v.data_read_fDC 
									   >> 0xfU)))) 
						   << 8U)) 
					       | (0xffU 
						  & (vlSymsp->TOP__v.data_read_fDC 
						     >> 8U)));
				    } else {
					if ((3U == 
					     (3U & vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT))) {
					    vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
						= (
						   (0xffffff00U 
						    & (VL_NEGATE_I((IData)(
									   (1U 
									    & (vlSymsp->TOP__v.data_read_fDC 
									       >> 7U)))) 
						       << 8U)) 
						   | (0xffU 
						      & vlSymsp->TOP__v.data_read_fDC));
					}
				    }
				}
			    }
			    vlSymsp->TOP__v.data_write_size_2DC = 0U;
			} else {
			    vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
				= vlSymsp->TOP__v.data_read_fDC;
			}
		    }
		}
	    }
	}
    } else {
	if ((0x10U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
	    vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
		= vlSymsp->TOP__v.data_read_fDC;
	} else {
	    if ((8U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
		vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
		    = vlSymsp->TOP__v.data_read_fDC;
	    } else {
		if ((4U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
		    vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
			= vlSymsp->TOP__v.data_read_fDC;
		} else {
		    if ((2U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
			vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
			    = vlSymsp->TOP__v.data_read_fDC;
		    } else {
			if ((1U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
			    vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
				= vlSymsp->TOP__v.data_read_fDC;
			} else {
			    vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
				= vlSymsp->TOP__v.data_read_fDC;
			    vlSymsp->TOP__v.data_write_size_2DC = 0U;
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at verilog//MEM.v:271
    vlSymsp->TOP__v.__PVT__MEM__DOT__WriteData1 = ((IData)(vlSymsp->TOP__v__EXE.__PVT__MemRead1_OUT)
						    ? vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned
						    : vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT);
}

void VMIPS_MIPS::_settle__TOP__v__16(VMIPS__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VMIPS_MIPS::_settle__TOP__v__16\n"); );
    VMIPS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at verilog//MEM.v:271
    vlSymsp->TOP__v.__PVT__MEM__DOT__WriteData1 = ((IData)(vlSymsp->TOP__v__EXE.__PVT__MemRead1_OUT)
						    ? vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned
						    : vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT);
}
