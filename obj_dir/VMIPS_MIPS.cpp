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
    MemRead_2DM = VL_RAND_RESET_I(1);
    MemWrite_2DM = VL_RAND_RESET_I(1);
    data_read_fDM = VL_RAND_RESET_I(32);
    data_write_2DM = VL_RAND_RESET_I(32);
    data_write_size_2DM = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(256,block_read_fDM);
    VL_RAND_RESET_W(256,block_write_2DM);
    __PVT__dBlkRead = VL_RAND_RESET_I(1);
    __PVT__dBlkWrite = VL_RAND_RESET_I(1);
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
    { int __Vi0=0; for (; __Vi0<1024; ++__Vi0) {
	    VL_RAND_RESET_W(274,__PVT__instr_cache_L1__DOT__icache[__Vi0]);
    }}
    VL_RAND_RESET_W(274,__PVT__instr_cache_L1__DOT__icache_data);
    __PVT__instr_cache_L1__DOT__i = VL_RAND_RESET_I(32);
    __PVT__instr_cache_L1__DOT__counter = VL_RAND_RESET_I(32);
    __PVT__instr_cache_L1__DOT__start_count = VL_RAND_RESET_I(1);
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
    __Vdly__WriteRegister1_MEMWB = VL_RAND_RESET_I(5);
    __Vdly__RegWrite1_MEMWB = VL_RAND_RESET_I(1);
    __Vdly__WriteData1_MEMWB = VL_RAND_RESET_I(32);
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
    // INITIAL at verilog/MIPS.v:298
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
    // Body
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
	if (VL_UNLIKELY((6U == vlSymsp->TOP__v.__PVT__instr_cache_L1__DOT__counter))) {
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
	if ((7U == vlSymsp->TOP__v.__PVT__instr_cache_L1__DOT__counter)) {
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
    // ALWAYS at verilog//IF.v:57
    if (VL_LIKELY(vlTOPp->RESET)) {
	if (vlTOPp->CLK) {
	    if (vlSymsp->TOP__v__ID.__PVT__WANT_FREEZE) {
		if (vlSymsp->TOP__v__ID.__PVT__Request_Alt_PC) {
		    vlSymsp->TOP__v.__Vdly__Instr_PC_Plus4_IFID 
			= vlSymsp->TOP__v.Instr_address_2IC;
		}
		if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP__v__ID.__PVT__syscal1)) 
				       & (~ (IData)(vlSymsp->TOP__v__ID.__PVT__Request_Alt_PC1)))))) {
		    VL_WRITEF("FETCH: Now clean the Instr1_OUT\n");
		    fflush (stdout);
		    vlSymsp->TOP__v.__Vdly__Instr1_IFID = 0U;
		    vlSymsp->TOP__v.__Vdly__Instr_PC_IFID = 0U;
		}
		if (VL_UNLIKELY(((IData)(vlSymsp->TOP__v__ID.__PVT__SYS) 
				 & (2U == (IData)(vlSymsp->TOP__v__ID.__PVT__sys_count))))) {
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
    // ALWAYS at verilog//MEM.v:286
    if (VL_LIKELY(vlTOPp->RESET)) {
	if (VL_UNLIKELY(vlTOPp->CLK)) {
	    VL_WRITEF("MEM:Instr1=%x,Instr1_PC=%x,WriteData1=%x; Write?%1u to %2u\n",
		      32,vlSymsp->TOP__v__EXE.__PVT__Instr1_OUT,
		      32,vlSymsp->TOP__v__EXE.__PVT__Instr1_PC_OUT,
		      32,vlSymsp->TOP__v.__PVT__MEM__DOT__WriteData1,
		      1,(IData)(vlSymsp->TOP__v__EXE.__PVT__RegWrite1_OUT),
		      5,vlSymsp->TOP__v__EXE.__PVT__WriteRegister1_OUT);
	    fflush (stdout);
	    vlSymsp->TOP__v.__Vdly__WriteRegister1_MEMWB 
		= vlSymsp->TOP__v__EXE.__PVT__WriteRegister1_OUT;
	    vlSymsp->TOP__v.__Vdly__RegWrite1_MEMWB 
		= vlSymsp->TOP__v__EXE.__PVT__RegWrite1_OUT;
	    vlSymsp->TOP__v.__Vdly__WriteData1_MEMWB 
		= vlSymsp->TOP__v.__PVT__MEM__DOT__WriteData1;
	    VL_WRITEF("MEM:data_address_2DM=%x; data_write_2DM(%1u)=%x(%1u); data_read_fDM(%1u)=%x\n",
		      32,vlSymsp->TOP__v.data_address_2DC,
		      1,(IData)(vlSymsp->TOP__v.write_2DC),
		      32,vlSymsp->TOP__v.data_write_2DC,
		      2,(IData)(vlSymsp->TOP__v.data_write_size_2DC),
		      1,vlSymsp->TOP__v.read_2DC,32,
		      vlSymsp->TOP__v.data_read_fDC);
	    fflush (stdout);
	}
    } else {
	VL_WRITEF("MEM:RESET\n");
	fflush (stdout);
	vlSymsp->TOP__v.__Vdly__WriteRegister1_MEMWB = 0U;
	vlSymsp->TOP__v.__Vdly__RegWrite1_MEMWB = 0U;
	vlSymsp->TOP__v.__Vdly__WriteData1_MEMWB = 0U;
    }
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

void VMIPS_MIPS::_combo__TOP__v__3(VMIPS__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VMIPS_MIPS::_combo__TOP__v__3\n"); );
    VMIPS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v.data_read_fDC = vlTOPp->data_read_fDM;
}

void VMIPS_MIPS::_sequent__TOP__v__5(VMIPS__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VMIPS_MIPS::_sequent__TOP__v__5\n"); );
    VMIPS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v.write_2DC = vlSymsp->TOP__v__EXE.__PVT__MemWrite1_OUT;
    vlSymsp->TOP__v.read_2DC = vlSymsp->TOP__v__EXE.__PVT__MemRead1_OUT;
    vlSymsp->TOP__v.__PVT__WriteRegister1_MEMWB = vlSymsp->TOP__v.__Vdly__WriteRegister1_MEMWB;
    vlSymsp->TOP__v.__PVT__RegWrite1_MEMWB = vlSymsp->TOP__v.__Vdly__RegWrite1_MEMWB;
    vlSymsp->TOP__v.__PVT__WriteData1_MEMWB = vlSymsp->TOP__v.__Vdly__WriteData1_MEMWB;
    vlSymsp->TOP__v.__PVT__Instr_PC_IFID = vlSymsp->TOP__v.__Vdly__Instr_PC_IFID;
    vlSymsp->TOP__v.__PVT__Instr1_IFID = vlSymsp->TOP__v.__Vdly__Instr1_IFID;
    vlSymsp->TOP__v.Instr_address_2IC = ((IData)(vlSymsp->TOP__v__ID.__PVT__Request_Alt_PC)
					  ? vlSymsp->TOP__v__ID.__PVT__Alt_PC
					  : vlSymsp->TOP__v.__PVT__Instr_PC_Plus4_IFID);
}

void VMIPS_MIPS::_settle__TOP__v__6(VMIPS__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VMIPS_MIPS::_settle__TOP__v__6\n"); );
    VMIPS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v.write_2DC = vlSymsp->TOP__v__EXE.__PVT__MemWrite1_OUT;
    vlSymsp->TOP__v.read_2DC = vlSymsp->TOP__v__EXE.__PVT__MemRead1_OUT;
    vlSymsp->TOP__v.Instr_address_2IC = ((IData)(vlSymsp->TOP__v__ID.__PVT__Request_Alt_PC)
					  ? vlSymsp->TOP__v__ID.__PVT__Alt_PC
					  : vlSymsp->TOP__v.__PVT__Instr_PC_Plus4_IFID);
    // ALWAYS at verilog//MEM.v:104
    vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
	= ((((IData)(vlSymsp->TOP__v__EXE.__PVT__WriteRegister1_OUT) 
	     == (IData)(vlSymsp->TOP__v.__PVT__WriteRegister1_MEMWB)) 
	    & (IData)(vlSymsp->TOP__v.__PVT__RegWrite1_MEMWB))
	    ? vlSymsp->TOP__v.__PVT__WriteData1_MEMWB
	    : vlSymsp->TOP__v__EXE.__PVT__MemWriteData1_OUT);
    vlSymsp->TOP__v.__PVT__MEM__DOT__MemWriteAddress 
	= vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT;
    if ((0x20U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
	if ((0x10U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
	    if ((8U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
		if ((4U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
		    if ((2U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
			vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
			    = vlSymsp->TOP__v.data_read_fDC;
			vlSymsp->TOP__v.data_write_size_2DC = 0U;
		    } else {
			if ((1U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
			    vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
				= vlSymsp->TOP__v.data_read_fDC;
			    vlSymsp->TOP__v.data_write_size_2DC = 0U;
			} else {
			    vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
				= vlSymsp->TOP__v.data_read_fDC;
			    vlSymsp->TOP__v.data_write_size_2DC = 0U;
			}
		    }
		} else {
		    vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
			= vlSymsp->TOP__v.data_read_fDC;
		    vlSymsp->TOP__v.data_write_size_2DC = 0U;
		}
	    } else {
		if ((4U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
		    if ((2U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
			if ((1U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
			    vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
				= vlSymsp->TOP__v.data_read_fDC;
			    vlSymsp->TOP__v.data_write_size_2DC = 0U;
			} else {
			    vlSymsp->TOP__v.data_write_size_2DC = 0U;
			    vlSymsp->TOP__v.data_write_2DC 
				= ((((IData)(vlSymsp->TOP__v__EXE.__PVT__WriteRegister1_OUT) 
				     == (IData)(vlSymsp->TOP__v.__PVT__WriteRegister1_MEMWB)) 
				    & (IData)(vlSymsp->TOP__v.__PVT__RegWrite1_MEMWB))
				    ? vlSymsp->TOP__v.__PVT__WriteData1_MEMWB
				    : vlSymsp->TOP__v__EXE.__PVT__MemWriteData1_OUT);
			}
		    } else {
			if ((1U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
			    vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
				= vlSymsp->TOP__v.data_read_fDC;
			    vlSymsp->TOP__v.data_write_size_2DC = 0U;
			} else {
			    vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
				= vlSymsp->TOP__v.data_read_fDC;
			    vlSymsp->TOP__v.data_write_size_2DC = 0U;
			}
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
				       | (0xffU & (
						   (((IData)(vlSymsp->TOP__v__EXE.__PVT__WriteRegister1_OUT) 
						     == (IData)(vlSymsp->TOP__v.__PVT__WriteRegister1_MEMWB)) 
						    & (IData)(vlSymsp->TOP__v.__PVT__RegWrite1_MEMWB))
						    ? vlSymsp->TOP__v.__PVT__WriteData1_MEMWB
						    : vlSymsp->TOP__v__EXE.__PVT__MemWriteData1_OUT)));
				vlSymsp->TOP__v.data_write_size_2DC = 1U;
			    } else {
				if ((1U == (3U & vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT))) {
				    vlSymsp->TOP__v.data_write_2DC 
					= ((0xffff0000U 
					    & vlSymsp->TOP__v.data_write_2DC) 
					   | (0xffffU 
					      & ((((IData)(vlSymsp->TOP__v__EXE.__PVT__WriteRegister1_OUT) 
						   == (IData)(vlSymsp->TOP__v.__PVT__WriteRegister1_MEMWB)) 
						  & (IData)(vlSymsp->TOP__v.__PVT__RegWrite1_MEMWB))
						  ? vlSymsp->TOP__v.__PVT__WriteData1_MEMWB
						  : vlSymsp->TOP__v__EXE.__PVT__MemWriteData1_OUT)));
				    vlSymsp->TOP__v.data_write_size_2DC = 2U;
				} else {
				    if ((2U == (3U 
						& vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT))) {
					vlSymsp->TOP__v.data_write_2DC 
					    = ((0xff000000U 
						& vlSymsp->TOP__v.data_write_2DC) 
					       | (0xffffffU 
						  & ((((IData)(vlSymsp->TOP__v__EXE.__PVT__WriteRegister1_OUT) 
						       == (IData)(vlSymsp->TOP__v.__PVT__WriteRegister1_MEMWB)) 
						      & (IData)(vlSymsp->TOP__v.__PVT__RegWrite1_MEMWB))
						      ? vlSymsp->TOP__v.__PVT__WriteData1_MEMWB
						      : vlSymsp->TOP__v__EXE.__PVT__MemWriteData1_OUT)));
					vlSymsp->TOP__v.data_write_size_2DC = 3U;
				    } else {
					if ((3U == 
					     (3U & vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT))) {
					    vlSymsp->TOP__v.data_write_2DC 
						= (
						   (((IData)(vlSymsp->TOP__v__EXE.__PVT__WriteRegister1_OUT) 
						     == (IData)(vlSymsp->TOP__v.__PVT__WriteRegister1_MEMWB)) 
						    & (IData)(vlSymsp->TOP__v.__PVT__RegWrite1_MEMWB))
						    ? vlSymsp->TOP__v.__PVT__WriteData1_MEMWB
						    : vlSymsp->TOP__v__EXE.__PVT__MemWriteData1_OUT);
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
				    = ((((IData)(vlSymsp->TOP__v__EXE.__PVT__WriteRegister1_OUT) 
					 == (IData)(vlSymsp->TOP__v.__PVT__WriteRegister1_MEMWB)) 
					& (IData)(vlSymsp->TOP__v.__PVT__RegWrite1_MEMWB))
				        ? vlSymsp->TOP__v.__PVT__WriteData1_MEMWB
				        : vlSymsp->TOP__v__EXE.__PVT__MemWriteData1_OUT);
				vlSymsp->TOP__v.data_write_size_2DC = 0U;
			    } else {
				if ((1U == (3U & vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT))) {
				    vlSymsp->TOP__v.data_write_2DC 
					= ((0xff000000U 
					    & vlSymsp->TOP__v.data_write_2DC) 
					   | (0xffffffU 
					      & (((((IData)(vlSymsp->TOP__v__EXE.__PVT__WriteRegister1_OUT) 
						    == (IData)(vlSymsp->TOP__v.__PVT__WriteRegister1_MEMWB)) 
						   & (IData)(vlSymsp->TOP__v.__PVT__RegWrite1_MEMWB))
						   ? vlSymsp->TOP__v.__PVT__WriteData1_MEMWB
						   : vlSymsp->TOP__v__EXE.__PVT__MemWriteData1_OUT) 
						 >> 8U)));
				    vlSymsp->TOP__v.data_write_size_2DC = 3U;
				} else {
				    if ((2U == (3U 
						& vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT))) {
					vlSymsp->TOP__v.data_write_2DC 
					    = ((0xffff0000U 
						& vlSymsp->TOP__v.data_write_2DC) 
					       | (0xffffU 
						  & (((((IData)(vlSymsp->TOP__v__EXE.__PVT__WriteRegister1_OUT) 
							== (IData)(vlSymsp->TOP__v.__PVT__WriteRegister1_MEMWB)) 
						       & (IData)(vlSymsp->TOP__v.__PVT__RegWrite1_MEMWB))
						       ? vlSymsp->TOP__v.__PVT__WriteData1_MEMWB
						       : vlSymsp->TOP__v__EXE.__PVT__MemWriteData1_OUT) 
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
						      & (((((IData)(vlSymsp->TOP__v__EXE.__PVT__WriteRegister1_OUT) 
							    == (IData)(vlSymsp->TOP__v.__PVT__WriteRegister1_MEMWB)) 
							   & (IData)(vlSymsp->TOP__v.__PVT__RegWrite1_MEMWB))
							   ? vlSymsp->TOP__v.__PVT__WriteData1_MEMWB
							   : vlSymsp->TOP__v__EXE.__PVT__MemWriteData1_OUT) 
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
				= ((((IData)(vlSymsp->TOP__v__EXE.__PVT__WriteRegister1_OUT) 
				     == (IData)(vlSymsp->TOP__v.__PVT__WriteRegister1_MEMWB)) 
				    & (IData)(vlSymsp->TOP__v.__PVT__RegWrite1_MEMWB))
				    ? vlSymsp->TOP__v.__PVT__WriteData1_MEMWB
				    : vlSymsp->TOP__v__EXE.__PVT__MemWriteData1_OUT);
			} else {
			    vlSymsp->TOP__v.data_write_size_2DC = 2U;
			    vlSymsp->TOP__v.data_write_2DC 
				= ((0xffff0000U & vlSymsp->TOP__v.data_write_2DC) 
				   | (0xffffU & ((((IData)(vlSymsp->TOP__v__EXE.__PVT__WriteRegister1_OUT) 
						   == (IData)(vlSymsp->TOP__v.__PVT__WriteRegister1_MEMWB)) 
						  & (IData)(vlSymsp->TOP__v.__PVT__RegWrite1_MEMWB))
						  ? vlSymsp->TOP__v.__PVT__WriteData1_MEMWB
						  : vlSymsp->TOP__v__EXE.__PVT__MemWriteData1_OUT)));
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
				   | (0xffU & ((((IData)(vlSymsp->TOP__v__EXE.__PVT__WriteRegister1_OUT) 
						 == (IData)(vlSymsp->TOP__v.__PVT__WriteRegister1_MEMWB)) 
						& (IData)(vlSymsp->TOP__v.__PVT__RegWrite1_MEMWB))
					        ? vlSymsp->TOP__v.__PVT__WriteData1_MEMWB
					        : vlSymsp->TOP__v__EXE.__PVT__MemWriteData1_OUT)));
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
			    vlSymsp->TOP__v.data_write_size_2DC = 0U;
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
		    vlSymsp->TOP__v.data_write_size_2DC = 0U;
		} else {
		    if ((2U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
			vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
			    = vlSymsp->TOP__v.data_read_fDC;
			vlSymsp->TOP__v.data_write_size_2DC = 0U;
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
			    vlSymsp->TOP__v.data_write_size_2DC = 0U;
			}
		    }
		}
	    }
	}
    } else {
	if ((0x10U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
	    vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
		= vlSymsp->TOP__v.data_read_fDC;
	    vlSymsp->TOP__v.data_write_size_2DC = 0U;
	} else {
	    if ((8U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
		vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
		    = vlSymsp->TOP__v.data_read_fDC;
		vlSymsp->TOP__v.data_write_size_2DC = 0U;
	    } else {
		if ((4U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
		    vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
			= vlSymsp->TOP__v.data_read_fDC;
		    vlSymsp->TOP__v.data_write_size_2DC = 0U;
		} else {
		    if ((2U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
			vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
			    = vlSymsp->TOP__v.data_read_fDC;
			vlSymsp->TOP__v.data_write_size_2DC = 0U;
		    } else {
			if ((1U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
			    vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
				= vlSymsp->TOP__v.data_read_fDC;
			    vlSymsp->TOP__v.data_write_size_2DC = 0U;
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
    vlSymsp->TOP__v.__PVT__MEM__DOT__WriteData1 = ((IData)(vlSymsp->TOP__v__EXE.__PVT__MemRead1_OUT)
						    ? vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned
						    : vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT);
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
}

void VMIPS_MIPS::_combo__TOP__v__7(VMIPS__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VMIPS_MIPS::_combo__TOP__v__7\n"); );
    VMIPS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at verilog//MEM.v:104
    vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
	= ((((IData)(vlSymsp->TOP__v__EXE.__PVT__WriteRegister1_OUT) 
	     == (IData)(vlSymsp->TOP__v.__PVT__WriteRegister1_MEMWB)) 
	    & (IData)(vlSymsp->TOP__v.__PVT__RegWrite1_MEMWB))
	    ? vlSymsp->TOP__v.__PVT__WriteData1_MEMWB
	    : vlSymsp->TOP__v__EXE.__PVT__MemWriteData1_OUT);
    vlSymsp->TOP__v.__PVT__MEM__DOT__MemWriteAddress 
	= vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT;
    if ((0x20U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
	if ((0x10U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
	    if ((8U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
		if ((4U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
		    if ((2U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
			vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
			    = vlSymsp->TOP__v.data_read_fDC;
			vlSymsp->TOP__v.data_write_size_2DC = 0U;
		    } else {
			if ((1U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
			    vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
				= vlSymsp->TOP__v.data_read_fDC;
			    vlSymsp->TOP__v.data_write_size_2DC = 0U;
			} else {
			    vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
				= vlSymsp->TOP__v.data_read_fDC;
			    vlSymsp->TOP__v.data_write_size_2DC = 0U;
			}
		    }
		} else {
		    vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
			= vlSymsp->TOP__v.data_read_fDC;
		    vlSymsp->TOP__v.data_write_size_2DC = 0U;
		}
	    } else {
		if ((4U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
		    if ((2U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
			if ((1U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
			    vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
				= vlSymsp->TOP__v.data_read_fDC;
			    vlSymsp->TOP__v.data_write_size_2DC = 0U;
			} else {
			    vlSymsp->TOP__v.data_write_size_2DC = 0U;
			    vlSymsp->TOP__v.data_write_2DC 
				= ((((IData)(vlSymsp->TOP__v__EXE.__PVT__WriteRegister1_OUT) 
				     == (IData)(vlSymsp->TOP__v.__PVT__WriteRegister1_MEMWB)) 
				    & (IData)(vlSymsp->TOP__v.__PVT__RegWrite1_MEMWB))
				    ? vlSymsp->TOP__v.__PVT__WriteData1_MEMWB
				    : vlSymsp->TOP__v__EXE.__PVT__MemWriteData1_OUT);
			}
		    } else {
			if ((1U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
			    vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
				= vlSymsp->TOP__v.data_read_fDC;
			    vlSymsp->TOP__v.data_write_size_2DC = 0U;
			} else {
			    vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
				= vlSymsp->TOP__v.data_read_fDC;
			    vlSymsp->TOP__v.data_write_size_2DC = 0U;
			}
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
				       | (0xffU & (
						   (((IData)(vlSymsp->TOP__v__EXE.__PVT__WriteRegister1_OUT) 
						     == (IData)(vlSymsp->TOP__v.__PVT__WriteRegister1_MEMWB)) 
						    & (IData)(vlSymsp->TOP__v.__PVT__RegWrite1_MEMWB))
						    ? vlSymsp->TOP__v.__PVT__WriteData1_MEMWB
						    : vlSymsp->TOP__v__EXE.__PVT__MemWriteData1_OUT)));
				vlSymsp->TOP__v.data_write_size_2DC = 1U;
			    } else {
				if ((1U == (3U & vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT))) {
				    vlSymsp->TOP__v.data_write_2DC 
					= ((0xffff0000U 
					    & vlSymsp->TOP__v.data_write_2DC) 
					   | (0xffffU 
					      & ((((IData)(vlSymsp->TOP__v__EXE.__PVT__WriteRegister1_OUT) 
						   == (IData)(vlSymsp->TOP__v.__PVT__WriteRegister1_MEMWB)) 
						  & (IData)(vlSymsp->TOP__v.__PVT__RegWrite1_MEMWB))
						  ? vlSymsp->TOP__v.__PVT__WriteData1_MEMWB
						  : vlSymsp->TOP__v__EXE.__PVT__MemWriteData1_OUT)));
				    vlSymsp->TOP__v.data_write_size_2DC = 2U;
				} else {
				    if ((2U == (3U 
						& vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT))) {
					vlSymsp->TOP__v.data_write_2DC 
					    = ((0xff000000U 
						& vlSymsp->TOP__v.data_write_2DC) 
					       | (0xffffffU 
						  & ((((IData)(vlSymsp->TOP__v__EXE.__PVT__WriteRegister1_OUT) 
						       == (IData)(vlSymsp->TOP__v.__PVT__WriteRegister1_MEMWB)) 
						      & (IData)(vlSymsp->TOP__v.__PVT__RegWrite1_MEMWB))
						      ? vlSymsp->TOP__v.__PVT__WriteData1_MEMWB
						      : vlSymsp->TOP__v__EXE.__PVT__MemWriteData1_OUT)));
					vlSymsp->TOP__v.data_write_size_2DC = 3U;
				    } else {
					if ((3U == 
					     (3U & vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT))) {
					    vlSymsp->TOP__v.data_write_2DC 
						= (
						   (((IData)(vlSymsp->TOP__v__EXE.__PVT__WriteRegister1_OUT) 
						     == (IData)(vlSymsp->TOP__v.__PVT__WriteRegister1_MEMWB)) 
						    & (IData)(vlSymsp->TOP__v.__PVT__RegWrite1_MEMWB))
						    ? vlSymsp->TOP__v.__PVT__WriteData1_MEMWB
						    : vlSymsp->TOP__v__EXE.__PVT__MemWriteData1_OUT);
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
				    = ((((IData)(vlSymsp->TOP__v__EXE.__PVT__WriteRegister1_OUT) 
					 == (IData)(vlSymsp->TOP__v.__PVT__WriteRegister1_MEMWB)) 
					& (IData)(vlSymsp->TOP__v.__PVT__RegWrite1_MEMWB))
				        ? vlSymsp->TOP__v.__PVT__WriteData1_MEMWB
				        : vlSymsp->TOP__v__EXE.__PVT__MemWriteData1_OUT);
				vlSymsp->TOP__v.data_write_size_2DC = 0U;
			    } else {
				if ((1U == (3U & vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT))) {
				    vlSymsp->TOP__v.data_write_2DC 
					= ((0xff000000U 
					    & vlSymsp->TOP__v.data_write_2DC) 
					   | (0xffffffU 
					      & (((((IData)(vlSymsp->TOP__v__EXE.__PVT__WriteRegister1_OUT) 
						    == (IData)(vlSymsp->TOP__v.__PVT__WriteRegister1_MEMWB)) 
						   & (IData)(vlSymsp->TOP__v.__PVT__RegWrite1_MEMWB))
						   ? vlSymsp->TOP__v.__PVT__WriteData1_MEMWB
						   : vlSymsp->TOP__v__EXE.__PVT__MemWriteData1_OUT) 
						 >> 8U)));
				    vlSymsp->TOP__v.data_write_size_2DC = 3U;
				} else {
				    if ((2U == (3U 
						& vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT))) {
					vlSymsp->TOP__v.data_write_2DC 
					    = ((0xffff0000U 
						& vlSymsp->TOP__v.data_write_2DC) 
					       | (0xffffU 
						  & (((((IData)(vlSymsp->TOP__v__EXE.__PVT__WriteRegister1_OUT) 
							== (IData)(vlSymsp->TOP__v.__PVT__WriteRegister1_MEMWB)) 
						       & (IData)(vlSymsp->TOP__v.__PVT__RegWrite1_MEMWB))
						       ? vlSymsp->TOP__v.__PVT__WriteData1_MEMWB
						       : vlSymsp->TOP__v__EXE.__PVT__MemWriteData1_OUT) 
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
						      & (((((IData)(vlSymsp->TOP__v__EXE.__PVT__WriteRegister1_OUT) 
							    == (IData)(vlSymsp->TOP__v.__PVT__WriteRegister1_MEMWB)) 
							   & (IData)(vlSymsp->TOP__v.__PVT__RegWrite1_MEMWB))
							   ? vlSymsp->TOP__v.__PVT__WriteData1_MEMWB
							   : vlSymsp->TOP__v__EXE.__PVT__MemWriteData1_OUT) 
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
				= ((((IData)(vlSymsp->TOP__v__EXE.__PVT__WriteRegister1_OUT) 
				     == (IData)(vlSymsp->TOP__v.__PVT__WriteRegister1_MEMWB)) 
				    & (IData)(vlSymsp->TOP__v.__PVT__RegWrite1_MEMWB))
				    ? vlSymsp->TOP__v.__PVT__WriteData1_MEMWB
				    : vlSymsp->TOP__v__EXE.__PVT__MemWriteData1_OUT);
			} else {
			    vlSymsp->TOP__v.data_write_size_2DC = 2U;
			    vlSymsp->TOP__v.data_write_2DC 
				= ((0xffff0000U & vlSymsp->TOP__v.data_write_2DC) 
				   | (0xffffU & ((((IData)(vlSymsp->TOP__v__EXE.__PVT__WriteRegister1_OUT) 
						   == (IData)(vlSymsp->TOP__v.__PVT__WriteRegister1_MEMWB)) 
						  & (IData)(vlSymsp->TOP__v.__PVT__RegWrite1_MEMWB))
						  ? vlSymsp->TOP__v.__PVT__WriteData1_MEMWB
						  : vlSymsp->TOP__v__EXE.__PVT__MemWriteData1_OUT)));
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
				   | (0xffU & ((((IData)(vlSymsp->TOP__v__EXE.__PVT__WriteRegister1_OUT) 
						 == (IData)(vlSymsp->TOP__v.__PVT__WriteRegister1_MEMWB)) 
						& (IData)(vlSymsp->TOP__v.__PVT__RegWrite1_MEMWB))
					        ? vlSymsp->TOP__v.__PVT__WriteData1_MEMWB
					        : vlSymsp->TOP__v__EXE.__PVT__MemWriteData1_OUT)));
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
			    vlSymsp->TOP__v.data_write_size_2DC = 0U;
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
		    vlSymsp->TOP__v.data_write_size_2DC = 0U;
		} else {
		    if ((2U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
			vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
			    = vlSymsp->TOP__v.data_read_fDC;
			vlSymsp->TOP__v.data_write_size_2DC = 0U;
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
			    vlSymsp->TOP__v.data_write_size_2DC = 0U;
			}
		    }
		}
	    }
	}
    } else {
	if ((0x10U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
	    vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
		= vlSymsp->TOP__v.data_read_fDC;
	    vlSymsp->TOP__v.data_write_size_2DC = 0U;
	} else {
	    if ((8U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
		vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
		    = vlSymsp->TOP__v.data_read_fDC;
		vlSymsp->TOP__v.data_write_size_2DC = 0U;
	    } else {
		if ((4U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
		    vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
			= vlSymsp->TOP__v.data_read_fDC;
		    vlSymsp->TOP__v.data_write_size_2DC = 0U;
		} else {
		    if ((2U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
			vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
			    = vlSymsp->TOP__v.data_read_fDC;
			vlSymsp->TOP__v.data_write_size_2DC = 0U;
		    } else {
			if ((1U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
			    vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
				= vlSymsp->TOP__v.data_read_fDC;
			    vlSymsp->TOP__v.data_write_size_2DC = 0U;
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
    vlSymsp->TOP__v.__PVT__MEM__DOT__WriteData1 = ((IData)(vlSymsp->TOP__v__EXE.__PVT__MemRead1_OUT)
						    ? vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned
						    : vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT);
    vlSymsp->TOP__v.data_address_2DC = ((IData)(vlSymsp->TOP__v__EXE.__PVT__MemWrite1_OUT)
					 ? vlSymsp->TOP__v.__PVT__MEM__DOT__MemWriteAddress
					 : (0xfffffffcU 
					    & vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT));
}

void VMIPS_MIPS::_sequent__TOP__v__8(VMIPS__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VMIPS_MIPS::_sequent__TOP__v__8\n"); );
    VMIPS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
}

void VMIPS_MIPS::_settle__TOP__v__9(VMIPS__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VMIPS_MIPS::_settle__TOP__v__9\n"); );
    VMIPS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v.data_address_2DC = ((IData)(vlSymsp->TOP__v__EXE.__PVT__MemWrite1_OUT)
					 ? vlSymsp->TOP__v.__PVT__MEM__DOT__MemWriteAddress
					 : (0xfffffffcU 
					    & vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT));
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
}
