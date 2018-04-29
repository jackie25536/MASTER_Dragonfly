/*
 * F28379D_PWM.c
 *
 *  Created on: 2018.04.22
 *      Author: Chun-Yi Kuo
 */

#include "F2837xD_device.h"        // F2837xD Headerfile Include File
#include "F2837xD_EPwm_defines.h"
#include "varlist.h"


void Setup_PWM_GPIO(void)
{
    EALLOW;
    //--------------------------------------------------------------------------------------
    //  GPIO-145 - PIN FUNCTION = EPWM1A (O) - PWM_UH
    GpioCtrlRegs.GPEPUD.bit.GPIO145     = 1;     // 0=Enables the Pull-Up, 1=Disables the Pull-Up
    GpioCtrlRegs.GPEQSEL2.bit.GPIO145   = 0;     // 0=Sync, 1=Qualification(3 Samples), 2=Qualification(6 Samples), 3=Async(no Sync or Qualification))
    GpioCtrlRegs.GPEGMUX2.bit.GPIO145   = 0;     // Option 1 EPWM1A(Output)
    GpioCtrlRegs.GPEMUX2.bit.GPIO145    = 1;     // Option 1 EPWM1A(Output)
    GpioCtrlRegs.GPEDIR.bit.GPIO145     = 0;     // 0=INput, 1=OUTput
    //--------------------------------------------------------------------------------------
    //  GPIO-146 - PIN FUNCTION = EPWM1B (O) - PWM_UL
    GpioCtrlRegs.GPEPUD.bit.GPIO146     = 1;     // 0=Enables the Pull-Up, 1=Disables the Pull-Up
    GpioCtrlRegs.GPEQSEL2.bit.GPIO146   = 0;     // 0=Sync, 1=Qualification(3 Samples), 2=Qualification(6 Samples), 3=Async(no Sync or Qualification))
    GpioCtrlRegs.GPEGMUX2.bit.GPIO146   = 0;     // Option 1 EPWM1B(Output)
    GpioCtrlRegs.GPEMUX2.bit.GPIO146    = 1;     // Option 1 EPWM1B(Output)
    GpioCtrlRegs.GPEDIR.bit.GPIO146     = 0;     // 0=INput, 1=OUTput

    //--------------------------------------------------------------------------------------
    //  GPIO-147 - PIN FUNCTION = EPWM2A (O) - PWM_VH
    GpioCtrlRegs.GPEPUD.bit.GPIO147     = 1;     // 0=Enables the Pull-Up, 1=Disables the Pull-Up
    GpioCtrlRegs.GPEQSEL2.bit.GPIO147   = 0;     // 0=Sync, 1=Qualification(3 Samples), 2=Qualification(6 Samples), 3=Async(no Sync or Qualification))
    GpioCtrlRegs.GPEGMUX2.bit.GPIO147   = 0;     // Option 1 EPWM2A(Output)
    GpioCtrlRegs.GPEMUX2.bit.GPIO147    = 1;     // Option 1 EPWM2A(Output)
    GpioCtrlRegs.GPEDIR.bit.GPIO147     = 0;     // 0=INput, 1=OUTput
    //--------------------------------------------------------------------------------------
    //  GPIO-148 - PIN FUNCTION = EPWM2B (O) - PWM_VL
    GpioCtrlRegs.GPEPUD.bit.GPIO148     = 1;     // 0=Enables the Pull-Up, 1=Disables the Pull-Up
    GpioCtrlRegs.GPEQSEL2.bit.GPIO148   = 0;     // 0=Sync, 1=Qualification(3 Samples), 2=Qualification(6 Samples), 3=Async(no Sync or Qualification))
    GpioCtrlRegs.GPEGMUX2.bit.GPIO148   = 0;     // Option 1 EPWM2B(Output)
    GpioCtrlRegs.GPEMUX2.bit.GPIO148    = 1;     // Option 1 EPWM2B(Output)
    GpioCtrlRegs.GPEDIR.bit.GPIO148     = 0;     // 0=INput, 1=OUTput

    //--------------------------------------------------------------------------------------
    //  GPIO-149 - PIN FUNCTION = EPWM3A (O) - PWM_WH
    GpioCtrlRegs.GPEPUD.bit.GPIO149     = 1;     // 0=Enables the Pull-Up, 1=Disables the Pull-Up
    GpioCtrlRegs.GPEQSEL2.bit.GPIO149   = 0;     // 0=Sync, 1=Qualification(3 Samples), 2=Qualification(6 Samples), 3=Async(no Sync or Qualification))
    GpioCtrlRegs.GPEGMUX2.bit.GPIO149   = 0;     // Option 1 EPWM3A(Output)
    GpioCtrlRegs.GPEMUX2.bit.GPIO149    = 1;     // Option 1 EPWM3A(Output)
    GpioCtrlRegs.GPEDIR.bit.GPIO149     = 0;     // 0=INput, 1=OUTput
    //--------------------------------------------------------------------------------------
    //  GPIO-150 - PIN FUNCTION = EPWM3B (O) - PWM_WL
    GpioCtrlRegs.GPEPUD.bit.GPIO150     = 1;     // 0=Enables the Pull-Up, 1=Disables the Pull-Up
    GpioCtrlRegs.GPEQSEL2.bit.GPIO150   = 0;     // 0=Sync, 1=Qualification(3 Samples), 2=Qualification(6 Samples), 3=Async(no Sync or Qualification))
    GpioCtrlRegs.GPEGMUX2.bit.GPIO150   = 0;     // Option 1 EPWM3B(Output)
    GpioCtrlRegs.GPEMUX2.bit.GPIO150    = 1;     // Option 1 EPWM3B(Output)
    GpioCtrlRegs.GPEDIR.bit.GPIO150     = 0;     // 0=INput, 1=OUTput    
    EDIS;
}

void Config_PWM(void)
{

    EALLOW;
    CpuSysRegs.PCLKCR2.bit.EPWM1 = 1;         // Enable PWM1 Clock
    CpuSysRegs.PCLKCR2.bit.EPWM2 = 1;         // Enable PWM2 Clock
    CpuSysRegs.PCLKCR2.bit.EPWM3 = 1;         // Enable PWM3 Clock

    CpuSysRegs.PCLKCR0.bit.HRPWM = 0;         // HRPWM Clock enable (Check意思)
    CpuSysRegs.PCLKCR0.bit.TBCLKSYNC =0;      // EPWM Time Base Clock sync (Check意思)

    //Not yet (Check) 只設定EPwm1而已，還有EPwm2與EPwm3
//==========================================================================================//
//                              EPwm1 Init. Section
//                              Phase U PWM control output
//==========================================================================================//

    //=====Time-Base (TB) Submodule Setting=====//
    EPwm1Regs.TBCTL.bit.CLKDIV = TB_DIV1;
    EPwm1Regs.TBCTL.bit.HSPCLKDIV = TB_DIV1;            // TBCLK = SYSCLKOUT // default counts down after sync event

    EPwm1Regs.TBCTL.bit.PRDLD = TB_IMMEDIATE;
    EPwm1Regs.TBPRD = CLKPERHASE;                       // Set timer period
    EPwm1Regs.TBCTR = 0x0000;                           // Clear counter
    EPwm1Regs.TBCTL.bit.PHSDIR =TB_DOWN;                // TB_UP; //TB_DOWN; //after sync count up
    EPwm1Regs.TBPHS.bit.TBPHS = 0x0000;                 // Phase is 0
    EPwm1Regs.TBCTL.bit.CTRMODE = TB_COUNT_UPDOWN;      // Symmetric
    EPwm1Regs.TBCTL.bit.PHSEN = TB_DISABLE;             // Disable phase loading
    EPwm1Regs.TBCTL.bit.SYNCOSEL = TB_CTR_ZERO;         // TB_SYNC_IN;//TB_CTR_ZERO;//on ZERO EPwm1Regssync

    //=====Counter Compare (CC) Submodule Setting=====//
    EPwm1Regs.CMPCTL.bit.SHDWAMODE = CC_IMMEDIATE;      // CC_SHADOW;
    EPwm1Regs.CMPCTL.bit.SHDWBMODE = CC_IMMEDIATE;      // CC_SHADOW;
    EPwm1Regs.CMPCTL.bit.LOADAMODE = CC_CTR_ZERO_PRD;
    EPwm1Regs.CMPCTL.bit.LOADBMODE = CC_CTR_ZERO_PRD;
    EPwm1Regs.CMPA.bit.CMPA = CLKPERHASE/2;
    EPwm1Regs.CMPB.bit.CMPB = CLKPERHASE/2;


    //=====Action Qualifier (AQ) Submodule Setting=====//
    EPwm1Regs.AQCTLA.all = 0;
    EPwm1Regs.AQCTLA.bit.ZRO = AQ_CLEAR;
    EPwm1Regs.AQCTLA.bit.PRD = AQ_SET;
    EPwm1Regs.AQCTLA.bit.CAU = AQ_SET;
    EPwm1Regs.AQCTLA.bit.CAD = AQ_CLEAR;
    EPwm1Regs.AQCTLA.bit.CBU = AQ_NO_ACTION;
    EPwm1Regs.AQCTLA.bit.CBD = AQ_NO_ACTION;

    // (Check) HIWIN AQCTLB
    EPwm1Regs.AQCTLB.all = 0;
    EPwm1Regs.AQCTLB.bit.ZRO = AQ_SET;
    EPwm1Regs.AQCTLB.bit.PRD = AQ_CLEAR;
    EPwm1Regs.AQCTLB.bit.CAU = AQ_NO_ACTION;
    EPwm1Regs.AQCTLB.bit.CAD = AQ_NO_ACTION;
    EPwm1Regs.AQCTLB.bit.CBU = AQ_CLEAR;
    EPwm1Regs.AQCTLB.bit.CBD = AQ_SET;


    //=====Dead-band (DB) Submodule Setting=====//

    //=====PWM-Chopper (PC) Submodule Setting=====//


    //=====Trip-Zone (TZ) Submodule Setting=====//


    //=====Event-Trigger (ET) Submodule Setting=====//
    EPwm1Regs.ETSEL.bit.INTSEL = ET_CTR_PRDZERO;        // ET_CTR_PRDZERO=3; Enable Event time-base counter equal to zero and period
    EPwm1Regs.ETSEL.bit.INTEN = 1;                      // Enable EPwmxINTn generation
    EPwm1Regs.ETPS.bit.INTPRD = ET_1ST;                 // ET_1ST=1;Generate EPwmxINTn pulse on the first event (each event)

    //=====HPWM Module Setting=====//



//==========================================================================================//
//                              EPwm2 Init. Section
//                              Phase V PWM control output
//==========================================================================================//








//==========================================================================================//
//                              EPwm3 Init. Section
//                              Phase W PWM control output
//==========================================================================================//
    CpuSysRegs.PCLKCR0.bit.TBCLKSYNC = 1;    // EPWM Time Base Clock sync
    EDIS;
}
