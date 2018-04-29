//==================================================================================
// File name:  Dragonfly.c
//
// Author: Chun-Yi Kuo
//
// Date: 2018.04.22
//==================================================================================


//=====Include header files used in the main function=====//
#include "Dragonfly.h"

//=====Interrupt service routine=====//
void ISR_PWM(void);
__interrupt void ISR_PWM(void);

//=====Prototype statements for functions=====//
void main_init(void);
void calcIDPar(void);
void initDefRam(void);
void calcRam(void);
void initPwrPar(void);
void setupConfigPeripheral(void);

void main_alg(void);

Uint32 ISRCNT;
FIXVAR fixvar;
AXIS X;

//Main code - starts here
void main(void)
{
    //=====System init.=====//
    main_init();

    //=====Calc par=====//
    calcIDPar();

    //=====All ram default=====//
    initDefRam();

    //=====Calc ram=====//
    calcRam();

    //=====Power parameters init.=====//
    initPwrPar();

    //=====Peripheral init.=====//
    setupConfigPeripheral();



    //=====Interrupt init.=====//
    DINT;
    InitPieCtrl();
    IER = 0x0000;
    IFR = 0x0000;
    InitPieVectTable();

    EALLOW; // This is needed to write to EALLOW protected registers
    PieVectTable.EPWM1_INT = ISR_PWM;
    IER |= M_INT3;
    EnableInterrupts(); //(Check�N��)
    PieCtrlRegs.PIEIER3.bit.INTx1 = 1;
    EDIS;
    EINT;  // Enable Global interrupt INTM
    ERTM;  // Enable Global realtime interrupt DBGM

    //=====Forever loop=====//
    for(;;)
    {

    }
}


// EPWM1 ISR
__interrupt void ISR_PWM(void)
{
    ISRCNT++;




    main_alg();


    // Clear INT flag for this timer
    EPwm1Regs.ETCLR.bit.INT = 1;

    // Acknowledge this interrupt to receive more interrupts from group 3
    PieCtrlRegs.PIEACK.all = PIEACK_GROUP3;


    //fixvar.spare_min = CpuTimer0Regs.TIM.all;
}

void main_init(void)
{
    InitSysCtrl();
    Setup_GPIO();
}

void calcIDPar(void)
{

}

void initDefRam(void)
{


}
void calcRam(void)
{

}

void initPwrPar(void)
{


}

void setupConfigPeripheral(void)
{
    Setup_ADC();
    Setup_PWM_GPIO();


    Config_ADC();
    Config_PWM();

}

void main_alg()
{
    Get_Current();

}

//
// End of file
//
