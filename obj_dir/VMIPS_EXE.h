// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VMIPS.h for the primary calling header

#ifndef _VMIPS_EXE_H_
#define _VMIPS_EXE_H_

#include "verilated.h"
#include "VMIPS__Dpi.h"

class VMIPS__Syms;

//----------

VL_MODULE(VMIPS_EXE) {
  public:
    // CELLS
    
    // PORTS
    VL_IN8(__PVT__CLK,0,0);
    VL_IN8(__PVT__RESET,0,0);
    VL_IN8(__PVT__RegisterA1_IN,4,0);
    VL_IN8(__PVT__RegisterB1_IN,4,0);
    VL_IN8(__PVT__WriteRegister1_IN,4,0);
    VL_IN8(__PVT__RegWrite1_IN,0,0);
    VL_IN8(__PVT__ALU_Control1_IN,5,0);
    VL_IN8(__PVT__MemRead1_IN,0,0);
    VL_IN8(__PVT__MemWrite1_IN,0,0);
    VL_IN8(__PVT__ShiftAmount1_IN,4,0);
    VL_OUT8(__PVT__WriteRegister1_OUT,4,0);
    VL_OUT8(__PVT__RegWrite1_OUT,0,0);
    VL_OUT8(__PVT__ALU_Control1_OUT,5,0);
    VL_OUT8(__PVT__MemRead1_OUT,0,0);
    VL_OUT8(__PVT__MemWrite1_OUT,0,0);
    VL_IN8(__PVT__BypassReg1_MEMEXE,4,0);
    VL_IN8(__PVT__BypassValid1_MEMEXE,0,0);
    VL_OUT8(__PVT__ALU_result_async_valid1,0,0);
    //char	__VpadToAlign18[2];
    VL_IN(__PVT__Instr1_IN,31,0);
    VL_IN(__PVT__Instr1_PC_IN,31,0);
    VL_IN(__PVT__OperandA1_IN,31,0);
    VL_IN(__PVT__OperandB1_IN,31,0);
    VL_IN(__PVT__MemWriteData1_IN,31,0);
    VL_OUT(__PVT__Instr1_OUT,31,0);
    VL_OUT(__PVT__Instr1_PC_OUT,31,0);
    VL_OUT(__PVT__ALU_result1_OUT,31,0);
    VL_OUT(__PVT__MemWriteData1_OUT,31,0);
    VL_IN(__PVT__BypassData1_MEMEXE,31,0);
    VL_OUT(__PVT__ALU_result_async1,31,0);
    
    // LOCAL SIGNALS
    VL_SIG(__PVT__A1,31,0);
    VL_SIG(__PVT__B1,31,0);
    VL_SIG(__PVT__ALU_result1,31,0);
    VL_SIG(HI,31,0);
    VL_SIG(LO,31,0);
    VL_SIG(__PVT__HI_new1,31,0);
    VL_SIG(__PVT__LO_new1,31,0);
    VL_SIG64(__PVT__ALU1__DOT__temp,63,0);
    
    // LOCAL VARIABLES
    VL_SIG8(__Vdly__WriteRegister1_OUT,4,0);
    VL_SIG8(__Vdly__RegWrite1_OUT,0,0);
    VL_SIG8(__Vdly__MemRead1_OUT,0,0);
    VL_SIG8(__Vdly__MemWrite1_OUT,0,0);
    
    // INTERNAL VARIABLES
  private:
    //char	__VpadToAlign116[4];
    VMIPS__Syms*	__VlSymsp;		// Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    VMIPS_EXE& operator= (const VMIPS_EXE&);	///< Copying not allowed
    VMIPS_EXE(const VMIPS_EXE&);	///< Copying not allowed
  public:
    VMIPS_EXE(const char* name="TOP");
    ~VMIPS_EXE();
    
    // USER METHODS
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(VMIPS__Syms* symsp, bool first);
    static void	_multiclk__TOP__v__EXE__6(VMIPS__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__EXE__1(VMIPS__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__EXE__2(VMIPS__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__EXE__3(VMIPS__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__EXE__4(VMIPS__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EXE__5(VMIPS__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(128);

#endif  /*guard*/
