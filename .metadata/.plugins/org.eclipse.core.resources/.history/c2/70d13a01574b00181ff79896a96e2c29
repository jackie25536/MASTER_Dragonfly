/*
 * ADC.c
 *
 *  Created on: 2018.04.28
 *      Author: Chun-Yi Kuo
 */

//=====Include header files=====//
#include "ADC.h"

void Setup_ADC()
{

    EALLOW;

    CpuSysRegs.PCLKCR13.bit.ADC_A = 1;
    CpuSysRegs.PCLKCR13.bit.ADC_B = 1;
    CpuSysRegs.PCLKCR13.bit.ADC_C = 1;
    CpuSysRegs.PCLKCR13.bit.ADC_D = 1;

    ZeroMemory((Uint16 *) &AdcaRegs, sizeof(AdcaRegs));
    ZeroMemory((Uint16 *) &AdcbRegs, sizeof(AdcbRegs));
    ZeroMemory((Uint16 *) &AdccRegs, sizeof(AdccRegs));
    ZeroMemory((Uint16 *) &AdcdRegs, sizeof(AdcdRegs));

    AdcaRegs.ADCCTL2.bit.PRESCALE = 8;
    AdcbRegs.ADCCTL2.bit.PRESCALE = 8;
    AdccRegs.ADCCTL2.bit.PRESCALE = 8;
    AdcdRegs.ADCCTL2.bit.PRESCALE = 8;

    //Check 為何HIWIN 有16與12bit
    AdcaRegs.ADCCTL2.bit.RESOLUTION = ADC_RESOLUTION_16BIT;
    AdcbRegs.ADCCTL2.bit.RESOLUTION = ADC_RESOLUTION_16BIT;
    AdccRegs.ADCCTL2.bit.RESOLUTION = ADC_RESOLUTION_16BIT;
    AdcdRegs.ADCCTL2.bit.RESOLUTION = ADC_RESOLUTION_16BIT;

    //Check 為何HIWIN 有SINGLE與DIFFERENTIAL
    AdcaRegs.ADCCTL2.bit.SIGNALMODE = ADC_SIGNALMODE_SINGLE;
    AdcbRegs.ADCCTL2.bit.SIGNALMODE = ADC_SIGNALMODE_SINGLE;
    AdccRegs.ADCCTL2.bit.SIGNALMODE = ADC_SIGNALMODE_SINGLE;
    AdcdRegs.ADCCTL2.bit.SIGNALMODE = ADC_SIGNALMODE_SINGLE;

    AdcaRegs.ADCCTL1.bit.INTPULSEPOS = 1;
    AdcbRegs.ADCCTL1.bit.INTPULSEPOS = 1;
    AdccRegs.ADCCTL1.bit.INTPULSEPOS = 1;
    AdcdRegs.ADCCTL1.bit.INTPULSEPOS = 1;

    AdcaRegs.ADCCTL1.bit.ADCPWDNZ = 1;
    AdcbRegs.ADCCTL1.bit.ADCPWDNZ = 1;
    AdccRegs.ADCCTL1.bit.ADCPWDNZ = 1;
    AdcdRegs.ADCCTL1.bit.ADCPWDNZ = 1;

    DELAY_US(1000);
    EDIS;

}


void Config_ADC()
{

    EALLOW;

    //Refer from F2837x_180controlCARD_R1_3_SCH_02Oct2015.pdf (P.2)
    //AdcaRegs->A0~A5 ; AdcbRegs->B0~B5 ; AdccRegs->C2~C5 ; AdcdRegs->D0~D5;
    AdcaRegs.ADCSOC0CTL.bit.CHSEL = 0;  //Adc_A SOC0 will convert pin A0
    AdcbRegs.ADCSOC0CTL.bit.CHSEL = 0;  //Adc_B SOC0 will convert pin B0
    AdccRegs.ADCSOC0CTL.bit.CHSEL = 2;  //Adc_C SOC0 will convert pin C2
    AdcdRegs.ADCSOC0CTL.bit.CHSEL = 0;  //Adc_C SOC0 will convert pin D0

    //Check ACQPS=14
    AdcaRegs.ADCSOC0CTL.bit.ACQPS = 14;
    AdcbRegs.ADCSOC0CTL.bit.ACQPS = 14;
    AdccRegs.ADCSOC0CTL.bit.ACQPS = 14;
    AdcdRegs.ADCSOC0CTL.bit.ACQPS = 14;

    AdcaRegs.ADCSOC0CTL.bit.TRIGSEL = 5; //trigger on ePWM1 SOCA/C
    AdcbRegs.ADCSOC0CTL.bit.TRIGSEL = 5; //trigger on ePWM1 SOCA/C
    AdccRegs.ADCSOC0CTL.bit.TRIGSEL = 5; //trigger on ePWM1 SOCA/C
    AdcdRegs.ADCSOC0CTL.bit.TRIGSEL = 5; //trigger on ePWM1 SOCA/C

    EDIS;

    //Check 是否要搬移到EPWM的設定
    EPwm1Regs.ETSEL.bit.SOCAEN  = 1;   // Enable SOCA
    EPwm1Regs.ETSEL.bit.SOCASEL = 4;   // Select SOC on up-count
    EPwm1Regs.ETPS.bit.SOCAPRD  = 1;   // Generate pulse on 1st event
    EPwm1Regs.ETCLR.bit.SOCA    = 1;   // Clear SOCA flag


}

void Force_ADC_start_convert()
{
    AdcaRegs.ADCSOCFRC1.all = 0x0001;
    AdcbRegs.ADCSOCFRC1.all = 0x0001;
    AdccRegs.ADCSOCFRC1.all = 0x0001;
    AdcdRegs.ADCSOCFRC1.all = 0x0001;
}


