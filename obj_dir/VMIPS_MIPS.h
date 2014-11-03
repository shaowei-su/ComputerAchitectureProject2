// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VMIPS.h for the primary calling header

#ifndef _VMIPS_MIPS_H_
#define _VMIPS_MIPS_H_

#include "verilated.h"
#include "VMIPS__Dpi.h"

class VMIPS__Syms;
class VMIPS_ID;
class VMIPS_EXE;

//----------

VL_MODULE(VMIPS_MIPS) {
  public:
    // CELLS
    VMIPS_ID*          	ID;
    VMIPS_EXE*         	EXE;
    
    // PORTS
    VL_IN8(RESET,0,0);
    VL_IN8(CLK,0,0);
    VL_OUT8(__PVT__MemRead_2DM,0,0);
    VL_OUT8(__PVT__MemWrite_2DM,0,0);
    VL_OUT8(__PVT__data_write_size_2DM,1,0);
    VL_OUT8(dBlkRead,0,0);
    VL_OUT8(dBlkWrite,0,0);
    VL_IN8(block_read_fDM_valid,0,0);
    VL_IN8(block_write_fDM_valid,0,0);
    VL_IN8(block_read_fIM_valid,0,0);
    VL_OUT8(iBlkRead,0,0);
    VL_OUT8(SYS,0,0);
    VL_OUT(data_address_2DM,31,0);
    VL_IN(data_read_fDM,31,0);
    VL_OUT(__PVT__data_write_2DM,31,0);
    VL_INW(block_read_fDM,255,0,8);
    VL_OUTW(block_write_2DM,255,0,8);
    VL_OUT(Instr_address_2IM,31,0);
    VL_IN(Instr1_fIM,31,0);
    VL_IN(Instr2_fIM,31,0);
    //char	__VpadToAlign100[4];
    VL_INW(block_read_fIM,255,0,8);
    
    // LOCAL SIGNALS
    VL_SIG8(__PVT__mem_reqL1IM,0,0);
    VL_SIG8(__PVT__hitL1IF,0,0);
    VL_SIG8(__PVT__WriteRegister1_MEMWB,4,0);
    VL_SIG8(__PVT__RegWrite1_MEMWB,0,0);
    VL_SIG8(data_write_size_2DC,1,0);
    VL_SIG8(read_2DC,0,0);
    VL_SIG8(write_2DC,0,0);
    VL_SIG8(flush_2DC,0,0);
    VL_SIG8(data_valid_fDC,0,0);
    VL_SIG8(__PVT__missDCache,0,0);
    VL_SIG8(__PVT__instr_cache_L1__DOT__start_count,0,0);
    VL_SIG8(__PVT__data_cache_L1__DOT__wr_wait,0,0);
    VL_SIG8(__PVT__data_cache_L1__DOT__state,1,0);
    VL_SIG8(__PVT__data_cache_L1__DOT__dirty1,0,0);
    VL_SIG8(__PVT__data_cache_L1__DOT__dirty2,0,0);
    VL_SIG8(__PVT__data_cache_L1__DOT__hit1,0,0);
    VL_SIG8(__PVT__data_cache_L1__DOT__hit2,0,0);
    VL_SIG8(__PVT__data_cache_L1__DOT__set_choose,0,0);
    VL_SIG8(__PVT__data_cache_L1__DOT__data_req,0,0);
    VL_SIG8(__PVT__data_cache_L1__DOT__start_count,0,0);
    VL_SIG8(__PVT__data_cache_L1__DOT__hit,0,0);
    //char	__VpadToAlign161[3];
    VL_SIG(__PVT__Instr1_IFID,31,0);
    VL_SIG(__PVT__Instr_PC_IFID,31,0);
    VL_SIG(__PVT__Instr_PC_Plus4_IFID,31,0);
    VL_SIG(Instr_address_2IC,31,0);
    VL_SIG(__PVT__Instr1_fIC,31,0);
    VL_SIG(__PVT__mem_addressL1IM,31,0);
    VL_SIG(__PVT__WriteData1_MEMWB,31,0);
    VL_SIG(data_write_2DC,31,0);
    VL_SIG(data_address_2DC,31,0);
    VL_SIG(data_read_fDC,31,0);
    //char	__VpadToAlign204[4];
    VL_SIGW(__PVT__instr_cache_L1__DOT__icache_data,273,0,9);
    VL_SIG(__PVT__instr_cache_L1__DOT__i,31,0);
    VL_SIG(__PVT__instr_cache_L1__DOT__counter,31,0);
    VL_SIG(__PVT__data_cache_L1__DOT__saved_data,31,0);
    VL_SIG(__PVT__data_cache_L1__DOT__saved_addr,31,0);
    VL_SIG(__PVT__data_cache_L1__DOT__saved_tag,17,0);
    VL_SIG(__PVT__data_cache_L1__DOT__dcache_word,31,0);
    VL_SIG(__PVT__data_cache_L1__DOT__i,31,0);
    VL_SIG(__PVT__data_cache_L1__DOT__counter,31,0);
    //char	__VpadToAlign276[4];
    VL_SIGW(__PVT__data_cache_L1__DOT__mem_read_data_local,255,0,8);
    VL_SIG(__PVT__MEM__DOT__MemoryData1,31,0);
    VL_SIG(__PVT__MEM__DOT__data_read_aligned,31,0);
    VL_SIG(__PVT__MEM__DOT__MemWriteAddress,31,0);
    VL_SIG(__PVT__MEM__DOT__WriteData1,31,0);
    VL_SIGW(__PVT__instr_cache_L1__DOT__icache[1024],273,0,9);
    VL_SIGW(__PVT__data_cache_L1__DOT__dcache1[512],275,0,9);
    VL_SIGW(__PVT__data_cache_L1__DOT__dcache2[512],275,0,9);
    VL_SIGW(__PVT__data_cache_L1__DOT__dcache_data[2],275,0,9);
    VL_SIG(__PVT__data_cache_L1__DOT__LRUcounter1[512],31,0);
    VL_SIG(__PVT__data_cache_L1__DOT__LRUcounter2[512],31,0);
    
    // LOCAL VARIABLES
    VL_SIG8(__Vdly__mem_reqL1IM,0,0);
    VL_SIG8(__Vdly__instr_cache_L1__DOT__start_count,0,0);
    VL_SIG8(__Vdlyvset__instr_cache_L1__DOT__icache__v0,0,0);
    VL_SIG8(__Vdly__data_cache_L1__DOT__state,1,0);
    VL_SIG8(__Vdly__data_cache_L1__DOT__start_count,0,0);
    VL_SIG8(__Vdly__WriteRegister1_MEMWB,4,0);
    VL_SIG8(__Vdly__RegWrite1_MEMWB,0,0);
    VL_SIG8(__Vdlyvset__data_cache_L1__DOT__LRUcounter1__v0,0,0);
    VL_SIG8(__Vdlyvset__data_cache_L1__DOT__LRUcounter2__v1,0,0);
    VL_SIG8(__Vdlyvset__data_cache_L1__DOT__dcache2__v0,0,0);
    VL_SIG8(__Vdlyvset__data_cache_L1__DOT__dcache1__v0,0,0);
    VL_SIG8(__Vdlyvset__data_cache_L1__DOT__dcache1__v1,0,0);
    VL_SIG8(__Vdlyvset__data_cache_L1__DOT__dcache1__v2,0,0);
    VL_SIG8(__Vdlyvset__data_cache_L1__DOT__dcache1__v3,0,0);
    VL_SIG8(__Vdlyvset__data_cache_L1__DOT__dcache1__v4,0,0);
    VL_SIG8(__Vdlyvset__data_cache_L1__DOT__dcache1__v5,0,0);
    VL_SIG8(__Vdlyvset__data_cache_L1__DOT__dcache1__v6,0,0);
    VL_SIG8(__Vdlyvset__data_cache_L1__DOT__dcache1__v7,0,0);
    VL_SIG8(__Vdlyvset__data_cache_L1__DOT__dcache1__v8,0,0);
    VL_SIG8(__Vdlyvset__data_cache_L1__DOT__dcache1__v9,0,0);
    VL_SIG8(__Vdlyvset__data_cache_L1__DOT__dcache1__v10,0,0);
    VL_SIG8(__Vdlyvset__data_cache_L1__DOT__dcache2__v1,0,0);
    VL_SIG8(__Vdlyvset__data_cache_L1__DOT__dcache2__v2,0,0);
    VL_SIG8(__Vdlyvset__data_cache_L1__DOT__dcache2__v3,0,0);
    VL_SIG8(__Vdlyvset__data_cache_L1__DOT__dcache2__v4,0,0);
    VL_SIG8(__Vdlyvset__data_cache_L1__DOT__dcache2__v5,0,0);
    VL_SIG8(__Vdlyvset__data_cache_L1__DOT__dcache2__v6,0,0);
    VL_SIG8(__Vdlyvset__data_cache_L1__DOT__dcache2__v7,0,0);
    VL_SIG8(__Vdlyvset__data_cache_L1__DOT__dcache2__v8,0,0);
    VL_SIG8(__Vdlyvset__data_cache_L1__DOT__dcache2__v9,0,0);
    VL_SIG8(__Vdlyvset__data_cache_L1__DOT__dcache2__v10,0,0);
    VL_SIG8(__Vdlyvset__data_cache_L1__DOT__dcache2__v11,0,0);
    VL_SIG8(__Vdlyvset__data_cache_L1__DOT__dcache2__v12,0,0);
    VL_SIG8(__Vdlyvset__data_cache_L1__DOT__dcache2__v13,0,0);
    VL_SIG8(__Vdlyvset__data_cache_L1__DOT__dcache2__v14,0,0);
    VL_SIG8(__Vdlyvset__data_cache_L1__DOT__dcache2__v15,0,0);
    VL_SIG8(__Vdlyvset__data_cache_L1__DOT__dcache2__v16,0,0);
    VL_SIG8(__Vdlyvset__data_cache_L1__DOT__dcache2__v17,0,0);
    VL_SIG8(__Vdlyvset__data_cache_L1__DOT__dcache2__v18,0,0);
    VL_SIG8(__Vdlyvset__data_cache_L1__DOT__dcache2__v19,0,0);
    VL_SIG8(__Vdlyvset__data_cache_L1__DOT__dcache2__v20,0,0);
    VL_SIG8(__Vdlyvset__data_cache_L1__DOT__dcache1__v11,0,0);
    VL_SIG8(__Vdlyvset__data_cache_L1__DOT__dcache1__v12,0,0);
    VL_SIG8(__Vdlyvset__data_cache_L1__DOT__dcache1__v13,0,0);
    VL_SIG8(__Vdlyvset__data_cache_L1__DOT__dcache1__v14,0,0);
    VL_SIG8(__Vdlyvset__data_cache_L1__DOT__dcache1__v15,0,0);
    VL_SIG8(__Vdlyvset__data_cache_L1__DOT__dcache1__v16,0,0);
    VL_SIG8(__Vdlyvset__data_cache_L1__DOT__dcache1__v17,0,0);
    VL_SIG8(__Vdlyvset__data_cache_L1__DOT__dcache1__v18,0,0);
    VL_SIG8(__Vdlyvset__data_cache_L1__DOT__dcache1__v19,0,0);
    VL_SIG8(__Vdlyvset__data_cache_L1__DOT__dcache1__v20,0,0);
    //char	__VpadToAlign78279[1];
    VL_SIG16(__Vdlyvdim0__instr_cache_L1__DOT__icache__v0,9,0);
    VL_SIG16(__Vdlyvdim0__data_cache_L1__DOT__LRUcounter1__v0,8,0);
    VL_SIG16(__Vdlyvdim0__data_cache_L1__DOT__LRUcounter2__v0,8,0);
    VL_SIG16(__Vdlyvdim0__data_cache_L1__DOT__LRUcounter2__v1,8,0);
    VL_SIG16(__Vdlyvdim0__data_cache_L1__DOT__LRUcounter1__v1,8,0);
    VL_SIG16(__Vdlyvdim0__data_cache_L1__DOT__dcache2__v0,8,0);
    VL_SIG16(__Vdlyvdim0__data_cache_L1__DOT__dcache1__v0,8,0);
    VL_SIG16(__Vdlyvdim0__data_cache_L1__DOT__dcache1__v1,8,0);
    VL_SIG16(__Vdlyvlsb__data_cache_L1__DOT__dcache1__v1,8,0);
    VL_SIG16(__Vdlyvdim0__data_cache_L1__DOT__dcache1__v2,8,0);
    VL_SIG16(__Vdlyvlsb__data_cache_L1__DOT__dcache1__v2,8,0);
    VL_SIG16(__Vdlyvdim0__data_cache_L1__DOT__dcache1__v3,8,0);
    VL_SIG16(__Vdlyvlsb__data_cache_L1__DOT__dcache1__v3,8,0);
    VL_SIG16(__Vdlyvdim0__data_cache_L1__DOT__dcache1__v4,8,0);
    VL_SIG16(__Vdlyvlsb__data_cache_L1__DOT__dcache1__v4,8,0);
    VL_SIG16(__Vdlyvdim0__data_cache_L1__DOT__dcache1__v5,8,0);
    VL_SIG16(__Vdlyvlsb__data_cache_L1__DOT__dcache1__v5,8,0);
    VL_SIG16(__Vdlyvdim0__data_cache_L1__DOT__dcache1__v6,8,0);
    VL_SIG16(__Vdlyvlsb__data_cache_L1__DOT__dcache1__v6,8,0);
    VL_SIG16(__Vdlyvdim0__data_cache_L1__DOT__dcache1__v7,8,0);
    VL_SIG16(__Vdlyvlsb__data_cache_L1__DOT__dcache1__v7,8,0);
    VL_SIG16(__Vdlyvdim0__data_cache_L1__DOT__dcache1__v8,8,0);
    VL_SIG16(__Vdlyvlsb__data_cache_L1__DOT__dcache1__v8,8,0);
    VL_SIG16(__Vdlyvdim0__data_cache_L1__DOT__dcache1__v9,8,0);
    VL_SIG16(__Vdlyvlsb__data_cache_L1__DOT__dcache1__v9,8,0);
    VL_SIG16(__Vdlyvdim0__data_cache_L1__DOT__dcache1__v10,8,0);
    VL_SIG16(__Vdlyvlsb__data_cache_L1__DOT__dcache1__v10,8,0);
    VL_SIG16(__Vdlyvdim0__data_cache_L1__DOT__dcache2__v1,8,0);
    VL_SIG16(__Vdlyvlsb__data_cache_L1__DOT__dcache2__v1,8,0);
    VL_SIG16(__Vdlyvdim0__data_cache_L1__DOT__dcache2__v2,8,0);
    VL_SIG16(__Vdlyvlsb__data_cache_L1__DOT__dcache2__v2,8,0);
    VL_SIG16(__Vdlyvdim0__data_cache_L1__DOT__dcache2__v3,8,0);
    VL_SIG16(__Vdlyvlsb__data_cache_L1__DOT__dcache2__v3,8,0);
    VL_SIG16(__Vdlyvdim0__data_cache_L1__DOT__dcache2__v4,8,0);
    VL_SIG16(__Vdlyvlsb__data_cache_L1__DOT__dcache2__v4,8,0);
    VL_SIG16(__Vdlyvdim0__data_cache_L1__DOT__dcache2__v5,8,0);
    VL_SIG16(__Vdlyvlsb__data_cache_L1__DOT__dcache2__v5,8,0);
    VL_SIG16(__Vdlyvdim0__data_cache_L1__DOT__dcache2__v6,8,0);
    VL_SIG16(__Vdlyvlsb__data_cache_L1__DOT__dcache2__v6,8,0);
    VL_SIG16(__Vdlyvdim0__data_cache_L1__DOT__dcache2__v7,8,0);
    VL_SIG16(__Vdlyvlsb__data_cache_L1__DOT__dcache2__v7,8,0);
    VL_SIG16(__Vdlyvdim0__data_cache_L1__DOT__dcache2__v8,8,0);
    VL_SIG16(__Vdlyvlsb__data_cache_L1__DOT__dcache2__v8,8,0);
    VL_SIG16(__Vdlyvdim0__data_cache_L1__DOT__dcache2__v9,8,0);
    VL_SIG16(__Vdlyvlsb__data_cache_L1__DOT__dcache2__v9,8,0);
    VL_SIG16(__Vdlyvdim0__data_cache_L1__DOT__dcache2__v10,8,0);
    VL_SIG16(__Vdlyvlsb__data_cache_L1__DOT__dcache2__v10,8,0);
    VL_SIG16(__Vdlyvdim0__data_cache_L1__DOT__dcache2__v11,8,0);
    VL_SIG16(__Vdlyvlsb__data_cache_L1__DOT__dcache2__v11,8,0);
    VL_SIG16(__Vdlyvdim0__data_cache_L1__DOT__dcache2__v12,8,0);
    VL_SIG16(__Vdlyvlsb__data_cache_L1__DOT__dcache2__v12,8,0);
    VL_SIG16(__Vdlyvdim0__data_cache_L1__DOT__dcache2__v13,8,0);
    VL_SIG16(__Vdlyvlsb__data_cache_L1__DOT__dcache2__v13,8,0);
    VL_SIG16(__Vdlyvdim0__data_cache_L1__DOT__dcache2__v14,8,0);
    VL_SIG16(__Vdlyvlsb__data_cache_L1__DOT__dcache2__v14,8,0);
    VL_SIG16(__Vdlyvdim0__data_cache_L1__DOT__dcache2__v15,8,0);
    VL_SIG16(__Vdlyvlsb__data_cache_L1__DOT__dcache2__v15,8,0);
    VL_SIG16(__Vdlyvdim0__data_cache_L1__DOT__dcache2__v16,8,0);
    VL_SIG16(__Vdlyvlsb__data_cache_L1__DOT__dcache2__v16,8,0);
    VL_SIG16(__Vdlyvdim0__data_cache_L1__DOT__dcache2__v17,8,0);
    VL_SIG16(__Vdlyvlsb__data_cache_L1__DOT__dcache2__v17,8,0);
    VL_SIG16(__Vdlyvdim0__data_cache_L1__DOT__dcache2__v18,8,0);
    VL_SIG16(__Vdlyvlsb__data_cache_L1__DOT__dcache2__v18,8,0);
    VL_SIG16(__Vdlyvdim0__data_cache_L1__DOT__dcache2__v19,8,0);
    VL_SIG16(__Vdlyvlsb__data_cache_L1__DOT__dcache2__v19,8,0);
    VL_SIG16(__Vdlyvdim0__data_cache_L1__DOT__dcache2__v20,8,0);
    VL_SIG16(__Vdlyvlsb__data_cache_L1__DOT__dcache2__v20,8,0);
    VL_SIG16(__Vdlyvdim0__data_cache_L1__DOT__dcache1__v11,8,0);
    VL_SIG16(__Vdlyvlsb__data_cache_L1__DOT__dcache1__v11,8,0);
    VL_SIG16(__Vdlyvdim0__data_cache_L1__DOT__dcache1__v12,8,0);
    VL_SIG16(__Vdlyvlsb__data_cache_L1__DOT__dcache1__v12,8,0);
    VL_SIG16(__Vdlyvdim0__data_cache_L1__DOT__dcache1__v13,8,0);
    VL_SIG16(__Vdlyvlsb__data_cache_L1__DOT__dcache1__v13,8,0);
    VL_SIG16(__Vdlyvdim0__data_cache_L1__DOT__dcache1__v14,8,0);
    VL_SIG16(__Vdlyvlsb__data_cache_L1__DOT__dcache1__v14,8,0);
    VL_SIG16(__Vdlyvdim0__data_cache_L1__DOT__dcache1__v15,8,0);
    VL_SIG16(__Vdlyvlsb__data_cache_L1__DOT__dcache1__v15,8,0);
    VL_SIG16(__Vdlyvdim0__data_cache_L1__DOT__dcache1__v16,8,0);
    VL_SIG16(__Vdlyvlsb__data_cache_L1__DOT__dcache1__v16,8,0);
    VL_SIG16(__Vdlyvdim0__data_cache_L1__DOT__dcache1__v17,8,0);
    VL_SIG16(__Vdlyvlsb__data_cache_L1__DOT__dcache1__v17,8,0);
    VL_SIG16(__Vdlyvdim0__data_cache_L1__DOT__dcache1__v18,8,0);
    VL_SIG16(__Vdlyvlsb__data_cache_L1__DOT__dcache1__v18,8,0);
    VL_SIG16(__Vdlyvdim0__data_cache_L1__DOT__dcache1__v19,8,0);
    VL_SIG16(__Vdlyvlsb__data_cache_L1__DOT__dcache1__v19,8,0);
    VL_SIG16(__Vdlyvdim0__data_cache_L1__DOT__dcache1__v20,8,0);
    VL_SIG16(__Vdlyvlsb__data_cache_L1__DOT__dcache1__v20,8,0);
    //char	__VpadToAlign78454[2];
    VL_SIG(__Vdly__mem_addressL1IM,31,0);
    //char	__VpadToAlign78460[4];
    VL_SIGW(__Vdlyvval__instr_cache_L1__DOT__icache__v0,273,0,9);
    VL_SIG(__Vdly__instr_cache_L1__DOT__counter,31,0);
    VL_SIG(__Vdly__Instr_PC_Plus4_IFID,31,0);
    VL_SIG(__Vdly__Instr1_IFID,31,0);
    VL_SIG(__Vdly__Instr_PC_IFID,31,0);
    VL_SIG(__Vdly__data_cache_L1__DOT__counter,31,0);
    VL_SIG(__Vdly__WriteData1_MEMWB,31,0);
    VL_SIG(__Vdlyvval__data_cache_L1__DOT__LRUcounter2__v0,31,0);
    VL_SIG(__Vdlyvval__data_cache_L1__DOT__LRUcounter1__v1,31,0);
    //char	__VpadToAlign78532[4];
    VL_SIGW(__Vdly__data_cache_L1__DOT__mem_read_data_local,255,0,8);
    VL_SIGW(__Vdlyvval__data_cache_L1__DOT__dcache2__v0,275,0,9);
    //char	__VpadToAlign78604[4];
    VL_SIGW(__Vdlyvval__data_cache_L1__DOT__dcache1__v0,275,0,9);
    VL_SIG(__Vdlyvval__data_cache_L1__DOT__dcache1__v2,31,0);
    VL_SIG(__Vdlyvval__data_cache_L1__DOT__dcache1__v3,31,0);
    VL_SIG(__Vdlyvval__data_cache_L1__DOT__dcache1__v4,31,0);
    VL_SIG(__Vdlyvval__data_cache_L1__DOT__dcache1__v5,31,0);
    VL_SIG(__Vdlyvval__data_cache_L1__DOT__dcache1__v6,31,0);
    VL_SIG(__Vdlyvval__data_cache_L1__DOT__dcache1__v7,31,0);
    VL_SIG(__Vdlyvval__data_cache_L1__DOT__dcache1__v8,31,0);
    VL_SIG(__Vdlyvval__data_cache_L1__DOT__dcache1__v9,31,0);
    VL_SIG(__Vdlyvval__data_cache_L1__DOT__dcache1__v10,31,0);
    VL_SIG(__Vdlyvval__data_cache_L1__DOT__dcache2__v2,31,0);
    VL_SIG(__Vdlyvval__data_cache_L1__DOT__dcache2__v3,31,0);
    VL_SIG(__Vdlyvval__data_cache_L1__DOT__dcache2__v4,31,0);
    VL_SIG(__Vdlyvval__data_cache_L1__DOT__dcache2__v5,31,0);
    VL_SIG(__Vdlyvval__data_cache_L1__DOT__dcache2__v6,31,0);
    VL_SIG(__Vdlyvval__data_cache_L1__DOT__dcache2__v7,31,0);
    VL_SIG(__Vdlyvval__data_cache_L1__DOT__dcache2__v8,31,0);
    VL_SIG(__Vdlyvval__data_cache_L1__DOT__dcache2__v9,31,0);
    VL_SIG(__Vdlyvval__data_cache_L1__DOT__dcache2__v10,31,0);
    VL_SIG(__Vdlyvval__data_cache_L1__DOT__dcache2__v12,31,0);
    VL_SIG(__Vdlyvval__data_cache_L1__DOT__dcache2__v13,31,0);
    VL_SIG(__Vdlyvval__data_cache_L1__DOT__dcache2__v14,31,0);
    VL_SIG(__Vdlyvval__data_cache_L1__DOT__dcache2__v15,31,0);
    VL_SIG(__Vdlyvval__data_cache_L1__DOT__dcache2__v16,31,0);
    VL_SIG(__Vdlyvval__data_cache_L1__DOT__dcache2__v17,31,0);
    VL_SIG(__Vdlyvval__data_cache_L1__DOT__dcache2__v18,31,0);
    VL_SIG(__Vdlyvval__data_cache_L1__DOT__dcache2__v19,31,0);
    VL_SIG(__Vdlyvval__data_cache_L1__DOT__dcache2__v20,31,0);
    VL_SIG(__Vdlyvval__data_cache_L1__DOT__dcache1__v12,31,0);
    VL_SIG(__Vdlyvval__data_cache_L1__DOT__dcache1__v13,31,0);
    VL_SIG(__Vdlyvval__data_cache_L1__DOT__dcache1__v14,31,0);
    VL_SIG(__Vdlyvval__data_cache_L1__DOT__dcache1__v15,31,0);
    VL_SIG(__Vdlyvval__data_cache_L1__DOT__dcache1__v16,31,0);
    VL_SIG(__Vdlyvval__data_cache_L1__DOT__dcache1__v17,31,0);
    VL_SIG(__Vdlyvval__data_cache_L1__DOT__dcache1__v18,31,0);
    VL_SIG(__Vdlyvval__data_cache_L1__DOT__dcache1__v19,31,0);
    VL_SIG(__Vdlyvval__data_cache_L1__DOT__dcache1__v20,31,0);
    
    // INTERNAL VARIABLES
  private:
    VMIPS__Syms*	__VlSymsp;		// Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    VMIPS_MIPS& operator= (const VMIPS_MIPS&);	///< Copying not allowed
    VMIPS_MIPS(const VMIPS_MIPS&);	///< Copying not allowed
  public:
    VMIPS_MIPS(const char* name="TOP");
    ~VMIPS_MIPS();
    
    // USER METHODS
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(VMIPS__Syms* symsp, bool first);
    static void	_initial__TOP__v__1(VMIPS__Syms* __restrict vlSymsp);
    static void	_initial__TOP__v__4(VMIPS__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__11(VMIPS__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__13(VMIPS__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__15(VMIPS__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__2(VMIPS__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__3(VMIPS__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__5(VMIPS__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__6(VMIPS__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__7(VMIPS__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__9(VMIPS__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__10(VMIPS__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__12(VMIPS__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__14(VMIPS__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__16(VMIPS__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__8(VMIPS__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(128);

#endif  /*guard*/
