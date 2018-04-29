/*
 * F28379D_GPIO.c
 *
 *  Created on: 2018.04.22
 *      Author: Chun-Yi Kuo
 */


#include "F2837xD_device.h"        // F2837xD Headerfile Include File

//===========================================================================================
//Dragonfly GPIO's
//       Signal name        Type        Func. module        Schematic. Name.
// Refer Dragonfly GPIO setting.xslx


void Setup_GPIO(void)
{
    EALLOW;
    //--------------------------------------------------------------------------------------
    //  GPIO-00 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPAMUX1.bit.GPIO0 = 0;     // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPADIR.bit.GPIO0 = 0;      // 0=INput, 1=OUTput
    //  GpioDataRegs.GPACLEAR.bit.GPIO0 = 1;    // uncomment if --> Set Low initially
    //  GpioDataRegs.GPASET.bit.GPIO0 = 1;      // uncomment if --> Set High initially
    //  GpioCtrlRegs.GPAPUD.bit.GPIO0 = 0;      // 0=Enables the Pull-Up, 1=Disables the Pull-Up   
    //--------------------------------------------------------------------------------------
    //  GPIO-01 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPAMUX1.bit.GPIO1 = 0;     // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPADIR.bit.GPIO1 = 0;      // 0=INput, 1=OUTput
    //  GpioDataRegs.GPACLEAR.bit.GPIO1 = 1;    // uncomment if --> Set Low initially
    //  GpioDataRegs.GPASET.bit.GPIO1 = 1;      // uncomment if --> Set High initially
    //  GpioCtrlRegs.GPAPUD.bit.GPIO1 = 0;      // 0=Enables the Pull-Up, 1=Disables the Pull-Up     
    //--------------------------------------------------------------------------------------
    //  GPIO-02 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPAMUX1.bit.GPIO2 = 0;     // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPADIR.bit.GPIO2 = 0;      // 0=INput, 1=OUTput
    //  GpioDataRegs.GPACLEAR.bit.GPIO2 = 1;    // uncomment if --> Set Low initially
    //  GpioDataRegs.GPASET.bit.GPIO2 = 1;      // uncomment if --> Set High initially
    //  GpioCtrlRegs.GPAPUD.bit.GPIO2 = 0;      // 0=Enables the Pull-Up, 1=Disables the Pull-Up    
    //--------------------------------------------------------------------------------------
    //  GPIO-03 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPAMUX1.bit.GPIO3 = 0;     // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPADIR.bit.GPIO3 = 0;      // 0=INput, 1=OUTput
    //  GpioDataRegs.GPACLEAR.bit.GPIO3 = 1;    // uncomment if --> Set Low initially
    //  GpioDataRegs.GPASET.bit.GPIO3 = 1;      // uncomment if --> Set High initially  
    //  GpioCtrlRegs.GPAPUD.bit.GPIO3 = 0;      // 0=Enables the Pull-Up, 1=Disables the Pull-Up     
    //--------------------------------------------------------------------------------------
    //  GPIO-04 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPAMUX1.bit.GPIO4 = 0;     // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPADIR.bit.GPIO4 = 0;      // 0=INput, 1=OUTput
    //  GpioDataRegs.GPACLEAR.bit.GPIO4 = 1;    // uncomment if --> Set Low initially
    //  GpioDataRegs.GPASET.bit.GPIO4 = 1;      // uncomment if --> Set High initially
    //  GpioCtrlRegs.GPAPUD.bit.GPIO4 = 0;      // 0=Enables the Pull-Up, 1=Disables the Pull-Up      
    //--------------------------------------------------------------------------------------
    //  GPIO-05 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPAMUX1.bit.GPIO5 = 0;     // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPADIR.bit.GPIO5 = 0;      // 0=INput, 1=OUTput
    //  GpioDataRegs.GPACLEAR.bit.GPIO5 = 1;    // uncomment if --> Set Low initially
    //  GpioDataRegs.GPASET.bit.GPIO5 = 1;      // uncomment if --> Set High initially 
    //  GpioCtrlRegs.GPAPUD.bit.GPIO5 = 0;      // 0=Enables the Pull-Up, 1=Disables the Pull-Up    
    //--------------------------------------------------------------------------------------
    //  GPIO-06 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPAMUX1.bit.GPIO6 = 0;     // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPADIR.bit.GPIO6 = 0;      // 0=INput, 1=OUTput
    //  GpioDataRegs.GPACLEAR.bit.GPIO6 = 1;    // uncomment if --> Set Low initially
    //  GpioDataRegs.GPASET.bit.GPIO6 = 1;      // uncomment if --> Set High initially 
    //  GpioCtrlRegs.GPAPUD.bit.GPIO6 = 0;      // 0=Enables the Pull-Up, 1=Disables the Pull-Up    
    //--------------------------------------------------------------------------------------
    //  GPIO-07 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPAMUX1.bit.GPIO7 = 0;     // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPADIR.bit.GPIO7 = 0;      // 0=INput, 1=OUTput
    //  GpioDataRegs.GPACLEAR.bit.GPIO7 = 1;    // uncomment if --> Set Low initially
    //  GpioDataRegs.GPASET.bit.GPIO7 = 1;      // uncomment if --> Set High initially 
    //  GpioCtrlRegs.GPAPUD.bit.GPIO7 = 0;      // 0=Enables the Pull-Up, 1=Disables the Pull-Up    
    //--------------------------------------------------------------------------------------
    //  GPIO-08 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPAMUX1.bit.GPIO8 = 0;     // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPADIR.bit.GPIO8 = 0;      // 0=INput, 1=OUTput
    //  GpioDataRegs.GPACLEAR.bit.GPIO8 = 1;    // uncomment if --> Set Low initially
    //  GpioDataRegs.GPASET.bit.GPIO8 = 1;      // uncomment if --> Set High initially 
    //  GpioCtrlRegs.GPAPUD.bit.GPIO8 = 0;      // 0=Enables the Pull-Up, 1=Disables the Pull-Up    
    //--------------------------------------------------------------------------------------
    //  GPIO-09 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPAMUX1.bit.GPIO9 = 0;     // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPADIR.bit.GPIO9 = 0;      // 0=INput, 1=OUTput
    //  GpioDataRegs.GPACLEAR.bit.GPIO9 = 1;    // uncomment if --> Set Low initially
    //  GpioDataRegs.GPASET.bit.GPIO9 = 1;      // uncomment if --> Set High initially 
    //  GpioCtrlRegs.GPAPUD.bit.GPIO9 = 0;      // 0=Enables the Pull-Up, 1=Disables the Pull-Up    
    //--------------------------------------------------------------------------------------
    //  GPIO-10 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPAMUX1.bit.GPIO10 = 0;     // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPADIR.bit.GPIO10 = 0;      // 0=INput, 1=OUTput
    //  GpioDataRegs.GPACLEAR.bit.GPIO10 = 1;    // uncomment if --> Set Low initially
    //  GpioDataRegs.GPASET.bit.GPIO10 = 1;      // uncomment if --> Set High initially 
    //  GpioCtrlRegs.GPAPUD.bit.GPIO10 = 0;      // 0=Enables the Pull-Up, 1=Disables the Pull-Up    
    //--------------------------------------------------------------------------------------
    //  GPIO-11 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPAMUX1.bit.GPIO11 = 0;     // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPADIR.bit.GPIO11 = 0;      // 0=INput, 1=OUTput
    //  GpioDataRegs.GPACLEAR.bit.GPIO11 = 1;    // uncomment if --> Set Low initially
    //  GpioDataRegs.GPASET.bit.GPIO11 = 1;      // uncomment if --> Set High initially 
    //  GpioCtrlRegs.GPAPUD.bit.GPIO11 = 0;      // 0=Enables the Pull-Up, 1=Disables the Pull-Up        
    //--------------------------------------------------------------------------------------
    //  GPIO-12 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPAMUX1.bit.GPIO12 = 0;     // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPADIR.bit.GPIO12 = 0;      // 0=INput, 1=OUTput
    //  GpioDataRegs.GPACLEAR.bit.GPIO12 = 1;    // uncomment if --> Set Low initially
    //  GpioDataRegs.GPASET.bit.GPIO12 = 1;      // uncomment if --> Set High initially 
    //  GpioCtrlRegs.GPAPUD.bit.GPIO12 = 0;      // 0=Enables the Pull-Up, 1=Disables the Pull-Up        
    //--------------------------------------------------------------------------------------
    //  GPIO-13 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPAMUX1.bit.GPIO13 = 0;     // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPADIR.bit.GPIO13 = 0;      // 0=INput, 1=OUTput
    //  GpioDataRegs.GPACLEAR.bit.GPIO13 = 1;    // uncomment if --> Set Low initially
    //  GpioDataRegs.GPASET.bit.GPIO13 = 1;      // uncomment if --> Set High initially 
     //  GpioCtrlRegs.GPAPUD.bit.GPIO13 = 0;      // 0=Enables the Pull-Up, 1=Disables the Pull-Up       
    //--------------------------------------------------------------------------------------
    //  GPIO-14 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPAMUX1.bit.GPIO14 = 0;     // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPADIR.bit.GPIO14 = 0;      // 0=INput, 1=OUTput
    //  GpioDataRegs.GPACLEAR.bit.GPIO14 = 1;    // uncomment if --> Set Low initially
    //  GpioDataRegs.GPASET.bit.GPIO14 = 1;      // uncomment if --> Set High initially 
    //  GpioCtrlRegs.GPAPUD.bit.GPIO14 = 0;      // 0=Enables the Pull-Up, 1=Disables the Pull-Up        
    //--------------------------------------------------------------------------------------
    //  GPIO-15 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPAMUX1.bit.GPIO15 = 0;     // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPADIR.bit.GPIO15 = 0;      // 0=INput, 1=OUTput
    //  GpioDataRegs.GPACLEAR.bit.GPIO15 = 1;    // uncomment if --> Set Low initially
    //  GpioDataRegs.GPASET.bit.GPIO15 = 1;      // uncomment if --> Set High initially
    //  GpioCtrlRegs.GPAPUD.bit.GPIO15 = 0;      // 0=Enables the Pull-Up, 1=Disables the Pull-Up        
    //--------------------------------------------------------------------------------------
    //  GPIO-16 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPAMUX2.bit.GPIO16 = 0;     // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPADIR.bit.GPIO16 = 0;      // 0=INput, 1=OUTput
    //  GpioDataRegs.GPACLEAR.bit.GPIO16 = 1;    // uncomment if --> Set Low initially
    //  GpioDataRegs.GPASET.bit.GPIO16 = 1;      // uncomment if --> Set High initially   
    //  GpioCtrlRegs.GPAPUD.bit.GPIO16 = 0;      // 0=Enables the Pull-Up, 1=Disables the Pull-Up           
    //--------------------------------------------------------------------------------------
    //  GPIO-17 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPAMUX2.bit.GPIO17 = 0;     // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPADIR.bit.GPIO17 = 0;      // 0=INput, 1=OUTput
    //  GpioDataRegs.GPACLEAR.bit.GPIO17 = 1;    // uncomment if --> Set Low initially
    //  GpioDataRegs.GPASET.bit.GPIO17 = 1;      // uncomment if --> Set High initially 
    //  GpioCtrlRegs.GPAPUD.bit.GPIO17 = 0;      // 0=Enables the Pull-Up, 1=Disables the Pull-Up         
    //--------------------------------------------------------------------------------------
    //  GPIO-18 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPAMUX2.bit.GPIO18 = 0;     // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPADIR.bit.GPIO18 = 0;      // 0=INput, 1=OUTput
    //  GpioDataRegs.GPACLEAR.bit.GPIO18 = 1;    // uncomment if --> Set Low initially
    //  GpioDataRegs.GPASET.bit.GPIO18 = 1;      // uncomment if --> Set High initially  
    //  GpioCtrlRegs.GPAPUD.bit.GPIO18 = 0;      // 0=Enables the Pull-Up, 1=Disables the Pull-Up       
    //--------------------------------------------------------------------------------------
    //  GPIO-19 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPAMUX2.bit.GPIO19 = 0;     // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPADIR.bit.GPIO19 = 0;      // 0=INput, 1=OUTput
    //  GpioDataRegs.GPACLEAR.bit.GPIO19 = 1;    // uncomment if --> Set Low initially
    //  GpioDataRegs.GPASET.bit.GPIO19 = 1;      // uncomment if --> Set High initially
    //  GpioCtrlRegs.GPAPUD.bit.GPIO19 = 0;      // 0=Enables the Pull-Up, 1=Disables the Pull-Up          
    //--------------------------------------------------------------------------------------
    //  GPIO-20 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPAMUX2.bit.GPIO20 = 0;     // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPADIR.bit.GPIO20 = 0;      // 0=INput, 1=OUTput
    //  GpioDataRegs.GPACLEAR.bit.GPIO20 = 1;    // uncomment if --> Set Low initially
    //  GpioDataRegs.GPASET.bit.GPIO20 = 1;      // uncomment if --> Set High initially
    //  GpioCtrlRegs.GPAPUD.bit.GPIO20 = 0;      // 0=Enables the Pull-Up, 1=Disables the Pull-Up          
    //--------------------------------------------------------------------------------------
    //  GPIO-21 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPAMUX2.bit.GPIO21 = 0;     // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPADIR.bit.GPIO21 = 0;      // 0=INput, 1=OUTput
    //  GpioDataRegs.GPACLEAR.bit.GPIO21 = 1;    // uncomment if --> Set Low initially
    //  GpioDataRegs.GPASET.bit.GPIO21 = 1;      // uncomment if --> Set High initially  
    //  GpioCtrlRegs.GPAPUD.bit.GPIO21 = 0;      // 0=Enables the Pull-Up, 1=Disables the Pull-Up        
    //--------------------------------------------------------------------------------------
    //  GPIO-22 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPAMUX2.bit.GPIO22 = 0;     // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPADIR.bit.GPIO22 = 0;      // 0=INput, 1=OUTput
    //  GpioDataRegs.GPACLEAR.bit.GPIO22 = 1;    // uncomment if --> Set Low initially
    //  GpioDataRegs.GPASET.bit.GPIO22 = 1;      // uncomment if --> Set High initially 
    //  GpioCtrlRegs.GPAPUD.bit.GPIO22 = 0;      // 0=Enables the Pull-Up, 1=Disables the Pull-Up         
    //--------------------------------------------------------------------------------------
    //  GPIO-23 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPAMUX2.bit.GPIO23 = 0;     // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPADIR.bit.GPIO23 = 0;      // 0=INput, 1=OUTput
    //  GpioDataRegs.GPACLEAR.bit.GPIO23 = 1;    // uncomment if --> Set Low initially
    //  GpioDataRegs.GPASET.bit.GPIO23 = 1;      // uncomment if --> Set High initially  
    //  GpioCtrlRegs.GPAPUD.bit.GPIO23 = 0;      // 0=Enables the Pull-Up, 1=Disables the Pull-Up       
    //--------------------------------------------------------------------------------------
    //  GPIO-24 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPAMUX2.bit.GPIO24 = 0;     // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPADIR.bit.GPIO24 = 0;      // 0=INput, 1=OUTput
    //  GpioDataRegs.GPACLEAR.bit.GPIO24 = 1;    // uncomment if --> Set Low initially
    //  GpioDataRegs.GPASET.bit.GPIO24 = 1;      // uncomment if --> Set High initially
    //  GpioCtrlRegs.GPAPUD.bit.GPIO24 = 0;      // 0=Enables the Pull-Up, 1=Disables the Pull-Up       
    //--------------------------------------------------------------------------------------
    //  GPIO-25 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPAMUX2.bit.GPIO25 = 0;     // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPADIR.bit.GPIO25 = 0;      // 0=INput, 1=OUTput
    //  GpioDataRegs.GPACLEAR.bit.GPIO25 = 1;    // uncomment if --> Set Low initially
    //  GpioDataRegs.GPASET.bit.GPIO25 = 1;      // uncomment if --> Set High initially
    //  GpioCtrlRegs.GPAPUD.bit.GPIO25 = 0;      // 0=Enables the Pull-Up, 1=Disables the Pull-Up       
    //--------------------------------------------------------------------------------------
    //  GPIO-26 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPAMUX2.bit.GPIO26 = 0;     // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPADIR.bit.GPIO26 = 0;      // 0=INput, 1=OUTput
    //  GpioDataRegs.GPACLEAR.bit.GPIO26 = 1;    // uncomment if --> Set Low initially
    //  GpioDataRegs.GPASET.bit.GPIO26 = 1;      // uncomment if --> Set High initially 
    //  GpioCtrlRegs.GPAPUD.bit.GPIO26 = 0;      // 0=Enables the Pull-Up, 1=Disables the Pull-Up     
    //--------------------------------------------------------------------------------------
    //  GPIO-27 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPAMUX2.bit.GPIO27 = 0;     // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPADIR.bit.GPIO27 = 0;      // 0=INput, 1=OUTput
    //  GpioDataRegs.GPACLEAR.bit.GPIO27 = 1;    // uncomment if --> Set Low initially
    //  GpioDataRegs.GPASET.bit.GPIO27 = 1;      // uncomment if --> Set High initially 
    //  GpioCtrlRegs.GPAPUD.bit.GPIO27 = 0;      // 0=Enables the Pull-Up, 1=Disables the Pull-Up     
    //--------------------------------------------------------------------------------------
    //  GPIO-28 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPAMUX2.bit.GPIO28 = 0;     // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPADIR.bit.GPIO28 = 0;      // 0=INput, 1=OUTput
    //  GpioDataRegs.GPACLEAR.bit.GPIO28 = 1;    // uncomment if --> Set Low initially
    //  GpioDataRegs.GPASET.bit.GPIO28 = 1;      // uncomment if --> Set High initially 
    //  GpioCtrlRegs.GPAPUD.bit.GPIO28 = 0;      // 0=Enables the Pull-Up, 1=Disables the Pull-Up     
    //--------------------------------------------------------------------------------------
    //  GPIO-29 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPAMUX2.bit.GPIO29 = 0;     // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPADIR.bit.GPIO29 = 0;      // 0=INput, 1=OUTput
    //  GpioDataRegs.GPACLEAR.bit.GPIO29 = 1;    // uncomment if --> Set Low initially
    //  GpioDataRegs.GPASET.bit.GPIO29 = 1;      // uncomment if --> Set High initially
    //  GpioCtrlRegs.GPAPUD.bit.GPIO29 = 0;      // 0=Enables the Pull-Up, 1=Disables the Pull-Up      
    //--------------------------------------------------------------------------------------
    //  GPIO-30 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPAMUX2.bit.GPIO30 = 0;     // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPADIR.bit.GPIO30 = 0;      // 0=INput, 1=OUTput
    //  GpioDataRegs.GPACLEAR.bit.GPIO30 = 1;    // uncomment if --> Set Low initially
    //  GpioDataRegs.GPASET.bit.GPIO30 = 1;      // uncomment if --> Set High initially 
    //  GpioCtrlRegs.GPAPUD.bit.GPIO30 = 0;      // 0=Enables the Pull-Up, 1=Disables the Pull-Up     
    //--------------------------------------------------------------------------------------
    //  GPIO-31 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPAMUX2.bit.GPIO31 = 0;     // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPADIR.bit.GPIO31 = 0;      // 0=INput, 1=OUTput
    //  GpioDataRegs.GPACLEAR.bit.GPIO31 = 1;    // uncomment if --> Set Low initially
    //  GpioDataRegs.GPASET.bit.GPIO31 = 1;      // uncomment if --> Set High initially
    //  GpioCtrlRegs.GPAPUD.bit.GPIO31 = 0;      // 0=Enables the Pull-Up, 1=Disables the Pull-Up      

    //--------------------------------------------------------------------------------------
    //  GPIO-32 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPBMUX1.bit.GPIO32 = 0;     // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPBDIR.bit.GPIO32 = 0;      // 0=INput, 1=OUTput
    //  GpioDataRegs.GPBCLEAR.bit.GPIO32 = 1;    // uncomment if --> Set Low initially
    //  GpioDataRegs.GPBSET.bit.GPIO32 = 1;      // uncomment if --> Set High initially
    //  GpioCtrlRegs.GPBPUD.bit.GPIO32 = 0;      // 0=Enables the Pull-Up, 1=Disables the Pull-Up    
    //--------------------------------------------------------------------------------------
    //  GPIO-33 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPBMUX1.bit.GPIO33 = 0;     // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPBDIR.bit.GPIO33 = 0;      // 0=INput, 1=OUTput
    //  GpioDataRegs.GPBCLEAR.bit.GPIO33 = 1;    // uncomment if --> Set Low initially
    //  GpioDataRegs.GPBSET.bit.GPIO33 = 1;      // uncomment if --> Set High initially 
    //  GpioCtrlRegs.GPBPUD.bit.GPIO33 = 0;      // 0=Enables the Pull-Up, 1=Disables the Pull-Up    
    //--------------------------------------------------------------------------------------
    //  GPIO-34 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPBMUX1.bit.GPIO34 = 0;     // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPBDIR.bit.GPIO34 = 0;      // 0=INput, 1=OUTput
    //  GpioDataRegs.GPBCLEAR.bit.GPIO34 = 1;    // uncomment if --> Set Low initially
    //  GpioDataRegs.GPBSET.bit.GPIO34 = 1;      // uncomment if --> Set High initially
    //  GpioCtrlRegs.GPBPUD.bit.GPIO34 = 0;      // 0=Enables the Pull-Up, 1=Disables the Pull-Up    
    //--------------------------------------------------------------------------------------
    //  GPIO-35 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPBMUX1.bit.GPIO35 = 0;     // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPBDIR.bit.GPIO35 = 0;      // 0=INput, 1=OUTput
    //  GpioDataRegs.GPBCLEAR.bit.GPIO35 = 1;    // uncomment if --> Set Low initially
    //  GpioDataRegs.GPBSET.bit.GPIO35 = 1;      // uncomment if --> Set High initially
    //  GpioCtrlRegs.GPBPUD.bit.GPIO35 = 0;      // 0=Enables the Pull-Up, 1=Disables the Pull-Up    
    //--------------------------------------------------------------------------------------
    //  GPIO-36 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPBMUX1.bit.GPIO36 = 0;     // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPBDIR.bit.GPIO36 = 0;      // 0=INput, 1=OUTput
    //  GpioDataRegs.GPBCLEAR.bit.GPIO36 = 1;    // uncomment if --> Set Low initially
    //  GpioDataRegs.GPBSET.bit.GPIO36 = 1;      // uncomment if --> Set High initially
    //  GpioCtrlRegs.GPBPUD.bit.GPIO36 = 0;      // 0=Enables the Pull-Up, 1=Disables the Pull-Up    
    //--------------------------------------------------------------------------------------
    //  GPIO-37 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPBMUX1.bit.GPIO37 = 0;     // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPBDIR.bit.GPIO37 = 0;      // 0=INput, 1=OUTput
    //  GpioDataRegs.GPBCLEAR.bit.GPIO37 = 1;    // uncomment if --> Set Low initially
    //  GpioDataRegs.GPBSET.bit.GPIO37 = 1;      // uncomment if --> Set High initially
    //  GpioCtrlRegs.GPBPUD.bit.GPIO37 = 0;      // 0=Enables the Pull-Up, 1=Disables the Pull-Up    
    //--------------------------------------------------------------------------------------
    //  GPIO-38 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPBMUX1.bit.GPIO38 = 0;     // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPBDIR.bit.GPIO38 = 0;      // 0=INput, 1=OUTput
    //  GpioDataRegs.GPBCLEAR.bit.GPIO38 = 1;    // uncomment if --> Set Low initially
    //  GpioDataRegs.GPBSET.bit.GPIO38 = 1;      // uncomment if --> Set High initially
    //  GpioCtrlRegs.GPBPUD.bit.GPIO38 = 0;      // 0=Enables the Pull-Up, 1=Disables the Pull-Up    
    //--------------------------------------------------------------------------------------
    //  GPIO-39 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPBMUX1.bit.GPIO39 = 0;     // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPBDIR.bit.GPIO39 = 0;      // 0=INput, 1=OUTput
    //  GpioDataRegs.GPBCLEAR.bit.GPIO39 = 1;    // uncomment if --> Set Low initially
    //  GpioDataRegs.GPBSET.bit.GPIO39 = 1;      // uncomment if --> Set High initially
    //  GpioCtrlRegs.GPBPUD.bit.GPIO39 = 0;      // 0=Enables the Pull-Up, 1=Disables the Pull-Up    
    //--------------------------------------------------------------------------------------
    //  GPIO-40 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPBMUX1.bit.GPIO40 = 0;     // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPBDIR.bit.GPIO40 = 0;      // 0=INput, 1=OUTput
    //  GpioDataRegs.GPBCLEAR.bit.GPIO40 = 1;    // uncomment if --> Set Low initially
    //  GpioDataRegs.GPBSET.bit.GPIO40 = 1;      // uncomment if --> Set High initially
    //  GpioCtrlRegs.GPBPUD.bit.GPIO40 = 0;      // 0=Enables the Pull-Up, 1=Disables the Pull-Up   
    //--------------------------------------------------------------------------------------
    //  GPIO-41 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPBMUX1.bit.GPIO41 = 0;     // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPBDIR.bit.GPIO41 = 0;      // 0=INput, 1=OUTput
    //  GpioDataRegs.GPBCLEAR.bit.GPIO41 = 1;    // uncomment if --> Set Low initially
    //  GpioDataRegs.GPBSET.bit.GPIO41 = 1;      // uncomment if --> Set High initially  
    //  GpioCtrlRegs.GPBPUD.bit.GPIO41 = 0;      // 0=Enables the Pull-Up, 1=Disables the Pull-Up      
    //--------------------------------------------------------------------------------------
    //  GPIO-42 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPBMUX1.bit.GPIO42 = 0;     // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPBDIR.bit.GPIO42 = 0;      // 0=INput, 1=OUTput
    //  GpioDataRegs.GPBCLEAR.bit.GPIO42 = 1;    // uncomment if --> Set Low initially
    //  GpioDataRegs.GPBSET.bit.GPIO42 = 1;      // uncomment if --> Set High initially
    //  GpioCtrlRegs.GPBPUD.bit.GPIO42 = 0;      // 0=Enables the Pull-Up, 1=Disables the Pull-Up       
    //--------------------------------------------------------------------------------------
    //  GPIO-43 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPBMUX1.bit.GPIO43 = 0;     // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPBDIR.bit.GPIO43 = 0;      // 0=INput, 1=OUTput
    //  GpioDataRegs.GPBCLEAR.bit.GPIO43 = 1;    // uncomment if --> Set Low initially
    //  GpioDataRegs.GPBSET.bit.GPIO43 = 1;      // uncomment if --> Set High initially 
    //  GpioCtrlRegs.GPBPUD.bit.GPIO43 = 0;      // 0=Enables the Pull-Up, 1=Disables the Pull-Up      
    //--------------------------------------------------------------------------------------
    //  GPIO-44 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPBMUX1.bit.GPIO44 = 0;     // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPBDIR.bit.GPIO44 = 0;      // 0=INput, 1=OUTput
    //  GpioDataRegs.GPBCLEAR.bit.GPIO44 = 1;    // uncomment if --> Set Low initially
    //  GpioDataRegs.GPBSET.bit.GPIO44 = 1;      // uncomment if --> Set High initially
    //  GpioCtrlRegs.GPBPUD.bit.GPIO44 = 0;      // 0=Enables the Pull-Up, 1=Disables the Pull-Up     
    //--------------------------------------------------------------------------------------
    //  GPIO-45 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPBMUX1.bit.GPIO45 = 0;     // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPBDIR.bit.GPIO45 = 0;      // 0=INput, 1=OUTput
    //  GpioDataRegs.GPBCLEAR.bit.GPIO45 = 1;    // uncomment if --> Set Low initially
    //  GpioDataRegs.GPBSET.bit.GPIO45 = 1;      // uncomment if --> Set High initially
    //  GpioCtrlRegs.GPBPUD.bit.GPIO45 = 0;      // 0=Enables the Pull-Up, 1=Disables the Pull-Up    
    //--------------------------------------------------------------------------------------
    //  GPIO-46 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPBMUX1.bit.GPIO46 = 0;     // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPBDIR.bit.GPIO46 = 0;      // 0=INput, 1=OUTput
    //  GpioDataRegs.GPBCLEAR.bit.GPIO46 = 1;    // uncomment if --> Set Low initially
    //  GpioDataRegs.GPBSET.bit.GPIO46 = 1;      // uncomment if --> Set High initially
    //  GpioCtrlRegs.GPBPUD.bit.GPIO46 = 0;      // 0=Enables the Pull-Up, 1=Disables the Pull-Up    
    //--------------------------------------------------------------------------------------
    //  GPIO-47 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPBMUX1.bit.GPIO47 = 0;     // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPBDIR.bit.GPIO47 = 0;      // 0=INput, 1=OUTput
    //  GpioDataRegs.GPBCLEAR.bit.GPIO47 = 1;    // uncomment if --> Set Low initially
    //  GpioDataRegs.GPBSET.bit.GPIO47 = 1;      // uncomment if --> Set High initially
    //  GpioCtrlRegs.GPBPUD.bit.GPIO47 = 0;      // 0=Enables the Pull-Up, 1=Disables the Pull-Up    
    //--------------------------------------------------------------------------------------
    //  GPIO-48 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPBMUX2.bit.GPIO48 = 0;     // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPBDIR.bit.GPIO48 = 0;      // 0=INput, 1=OUTput
    //  GpioDataRegs.GPBCLEAR.bit.GPIO48 = 1;    // uncomment if --> Set Low initially
    //  GpioDataRegs.GPBSET.bit.GPIO48 = 1;      // uncomment if --> Set High initially
    //  GpioCtrlRegs.GPBPUD.bit.GPIO48 = 0;      // 0=Enables the Pull-Up, 1=Disables the Pull-Up    
    //--------------------------------------------------------------------------------------
    //  GPIO-49 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPBMUX2.bit.GPIO49 = 0;     // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPBDIR.bit.GPIO49 = 0;      // 0=INput, 1=OUTput
    //  GpioDataRegs.GPBCLEAR.bit.GPIO49 = 1;    // uncomment if --> Set Low initially
    //  GpioDataRegs.GPBSET.bit.GPIO49 = 1;      // uncomment if --> Set High initially
    //  GpioCtrlRegs.GPBPUD.bit.GPIO49 = 0;      // 0=Enables the Pull-Up, 1=Disables the Pull-Up    
    //--------------------------------------------------------------------------------------
    //  GPIO-50 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPBMUX2.bit.GPIO50 = 0;     // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPBDIR.bit.GPIO50 = 0;      // 0=INput, 1=OUTput
    //  GpioDataRegs.GPBCLEAR.bit.GPIO50 = 1;    // uncomment if --> Set Low initially
    //  GpioDataRegs.GPBSET.bit.GPIO50 = 1;      // uncomment if --> Set High initially
    //  GpioCtrlRegs.GPBPUD.bit.GPIO50 = 0;      // 0=Enables the Pull-Up, 1=Disables the Pull-Up    
    //--------------------------------------------------------------------------------------
    //  GPIO-51 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPBMUX2.bit.GPIO51 = 0;     // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPBDIR.bit.GPIO51 = 0;      // 0=INput, 1=OUTput
    //  GpioDataRegs.GPBCLEAR.bit.GPIO51 = 1;    // uncomment if --> Set Low initially
    //  GpioDataRegs.GPBSET.bit.GPIO51 = 1;      // uncomment if --> Set High initially
    //  GpioCtrlRegs.GPBPUD.bit.GPIO51 = 0;      // 0=Enables the Pull-Up, 1=Disables the Pull-Up    
    //--------------------------------------------------------------------------------------
    //  GPIO-52 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPBMUX2.bit.GPIO52 = 0;     // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPBDIR.bit.GPIO52 = 0;      // 0=INput, 1=OUTput
    //  GpioDataRegs.GPBCLEAR.bit.GPIO52 = 1;    // uncomment if --> Set Low initially
    //  GpioDataRegs.GPBSET.bit.GPIO52 = 1;      // uncomment if --> Set High initially
    //  GpioCtrlRegs.GPBPUD.bit.GPIO52 = 0;      // 0=Enables the Pull-Up, 1=Disables the Pull-Up    
    //--------------------------------------------------------------------------------------
    //  GPIO-53 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPBMUX2.bit.GPIO53 = 0;     // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPBDIR.bit.GPIO53 = 0;      // 0=INput, 1=OUTput
    //  GpioDataRegs.GPBCLEAR.bit.GPIO53 = 1;    // uncomment if --> Set Low initially
    //  GpioDataRegs.GPBSET.bit.GPIO53 = 1;      // uncomment if --> Set High initially
    //  GpioCtrlRegs.GPBPUD.bit.GPIO53 = 0;      // 0=Enables the Pull-Up, 1=Disables the Pull-Up    
    //--------------------------------------------------------------------------------------
    //  GPIO-54 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPBMUX2.bit.GPIO54 = 0;     // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPBDIR.bit.GPIO54 = 0;      // 0=INput, 1=OUTput
    //  GpioDataRegs.GPBCLEAR.bit.GPIO54 = 1;    // uncomment if --> Set Low initially
    //  GpioDataRegs.GPBSET.bit.GPIO54 = 1;      // uncomment if --> Set High initially
    //  GpioCtrlRegs.GPBPUD.bit.GPIO54 = 0;      // 0=Enables the Pull-Up, 1=Disables the Pull-Up    
    //--------------------------------------------------------------------------------------
    //  GPIO-55 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPBMUX2.bit.GPIO55 = 0;     // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPBDIR.bit.GPIO55 = 0;      // 0=INput, 1=OUTput
    //  GpioDataRegs.GPBCLEAR.bit.GPIO55 = 1;    // uncomment if --> Set Low initially
    //  GpioDataRegs.GPBSET.bit.GPIO55 = 1;      // uncomment if --> Set High initially
    //  GpioCtrlRegs.GPBPUD.bit.GPIO55 = 0;      // 0=Enables the Pull-Up, 1=Disables the Pull-Up   
    //--------------------------------------------------------------------------------------
    //  GPIO-56 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPBMUX2.bit.GPIO56 = 0;     // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPBDIR.bit.GPIO56 = 0;      // 0=INput, 1=OUTput
    //  GpioDataRegs.GPBCLEAR.bit.GPIO56 = 1;    // uncomment if --> Set Low initially
    //  GpioDataRegs.GPBSET.bit.GPIO56 = 1;      // uncomment if --> Set High initially
    //  GpioCtrlRegs.GPBPUD.bit.GPIO56 = 0;      // 0=Enables the Pull-Up, 1=Disables the Pull-Up    
    //--------------------------------------------------------------------------------------
    //  GPIO-57 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPBMUX2.bit.GPIO57 = 0;     // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPBDIR.bit.GPIO57 = 0;      // 0=INput, 1=OUTput
    //  GpioDataRegs.GPBCLEAR.bit.GPIO57 = 1;    // uncomment if --> Set Low initially
    //  GpioDataRegs.GPBSET.bit.GPIO57 = 1;      // uncomment if --> Set High initially
    //  GpioCtrlRegs.GPBPUD.bit.GPIO57 = 0;      // 0=Enables the Pull-Up, 1=Disables the Pull-Up    
    //--------------------------------------------------------------------------------------
    //  GPIO-58 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPBMUX2.bit.GPIO58 = 0;     // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPBDIR.bit.GPIO58 = 0;      // 0=INput, 1=OUTput
    //  GpioDataRegs.GPBCLEAR.bit.GPIO58 = 1;    // uncomment if --> Set Low initially
    //  GpioDataRegs.GPBSET.bit.GPIO58 = 1;      // uncomment if --> Set High initially
    //  GpioCtrlRegs.GPBPUD.bit.GPIO58 = 0;      // 0=Enables the Pull-Up, 1=Disables the Pull-Up    
    //--------------------------------------------------------------------------------------
    //  GPIO-59 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPBMUX2.bit.GPIO59 = 0;     // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPBDIR.bit.GPIO59 = 0;      // 0=INput, 1=OUTput
    //  GpioDataRegs.GPBCLEAR.bit.GPIO59 = 1;    // uncomment if --> Set Low initially
    //  GpioDataRegs.GPBSET.bit.GPIO59 = 1;      // uncomment if --> Set High initially
    //  GpioCtrlRegs.GPBPUD.bit.GPIO59 = 0;      // 0=Enables the Pull-Up, 1=Disables the Pull-Up    
    //--------------------------------------------------------------------------------------
    //  GPIO-60 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPBMUX2.bit.GPIO60 = 0;     // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPBDIR.bit.GPIO60 = 0;      // 0=INput, 1=OUTput
    //  GpioDataRegs.GPBCLEAR.bit.GPIO60 = 1;    // uncomment if --> Set Low initially
    //  GpioDataRegs.GPBSET.bit.GPIO60 = 1;      // uncomment if --> Set High initially
    //  GpioCtrlRegs.GPBPUD.bit.GPIO60 = 0;      // 0=Enables the Pull-Up, 1=Disables the Pull-Up    
    //--------------------------------------------------------------------------------------
    //  GPIO-61 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPBMUX2.bit.GPIO61 = 0;     // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPBDIR.bit.GPIO61 = 0;      // 0=INput, 1=OUTput
    //  GpioDataRegs.GPBCLEAR.bit.GPIO61 = 1;    // uncomment if --> Set Low initially
    //  GpioDataRegs.GPBSET.bit.GPIO61 = 1;      // uncomment if --> Set High initially
    //  GpioCtrlRegs.GPBPUD.bit.GPIO61 = 0;      // 0=Enables the Pull-Up, 1=Disables the Pull-Up
    //--------------------------------------------------------------------------------------
    //  GPIO-62 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPBMUX2.bit.GPIO62 = 0;     // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPBDIR.bit.GPIO62 = 0;      // 0=INput, 1=OUTput
    //  GpioDataRegs.GPBCLEAR.bit.GPIO62 = 1;    // uncomment if --> Set Low initially
    //  GpioDataRegs.GPBSET.bit.GPIO62 = 1;      // uncomment if --> Set High initially
    //  GpioCtrlRegs.GPBPUD.bit.GPIO62 = 0;      // 0=Enables the Pull-Up, 1=Disables the Pull-Up
    //--------------------------------------------------------------------------------------
    //  GPIO-63 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPBMUX2.bit.GPIO63 = 0;     // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPBDIR.bit.GPIO63 = 0;      // 0=INput, 1=OUTput
    //  GpioDataRegs.GPBCLEAR.bit.GPIO63 = 1;    // uncomment if --> Set Low initially
    //  GpioDataRegs.GPBSET.bit.GPIO63 = 1;      // uncomment if --> Set High initially
    //  GpioCtrlRegs.GPBPUD.bit.GPIO63 = 0;      // 0=Enables the Pull-Up, 1=Disables the Pull-Up   

    //--------------------------------------------------------------------------------------
    //  GPIO-64 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPCMUX1.bit.GPIO64 = 0;     // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPCDIR.bit.GPIO64 = 0;      // 0=INput, 1=OUTput
    //  GpioDataRegs.GPCCLEAR.bit.GPIO64 = 1;    // uncomment if --> Set Low initially
    //  GpioDataRegs.GPCSET.bit.GPIO64 = 1;      // uncomment if --> Set High initially    
    //  GpioCtrlRegs.GPCPUD.bit.GPIO64 = 0;      // 0=Enables the Pull-Up, 1=Disables the Pull-Up
    //--------------------------------------------------------------------------------------
    //  GPIO-65 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPCMUX1.bit.GPIO65 = 0;     // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPCDIR.bit.GPIO65 = 0;      // 0=INput, 1=OUTput
    //  GpioDataRegs.GPCCLEAR.bit.GPIO65 = 1;    // uncomment if --> Set Low initially
    //  GpioDataRegs.GPCSET.bit.GPIO65 = 1;      // uncomment if --> Set High initially 
    //  GpioCtrlRegs.GPCPUD.bit.GPIO65 = 0;      // 0=Enables the Pull-Up, 1=Disables the Pull-Up
    //--------------------------------------------------------------------------------------
    //  GPIO-66 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPCMUX1.bit.GPIO66 = 0;     // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPCDIR.bit.GPIO66 = 0;      // 0=INput, 1=OUTput
    //  GpioDataRegs.GPCCLEAR.bit.GPIO66 = 1;    // uncomment if --> Set Low initially
    //  GpioDataRegs.GPCSET.bit.GPIO66 = 1;      // uncomment if --> Set High initially 
    //  GpioCtrlRegs.GPCPUD.bit.GPIO66 = 0;      // 0=Enables the Pull-Up, 1=Disables the Pull-Up
    //--------------------------------------------------------------------------------------
    //  GPIO-67 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPCMUX1.bit.GPIO67 = 0;     // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPCDIR.bit.GPIO67 = 0;      // 0=INput, 1=OUTput
    //  GpioDataRegs.GPCCLEAR.bit.GPIO67 = 1;    // uncomment if --> Set Low initially
    //  GpioDataRegs.GPCSET.bit.GPIO67 = 1;      // uncomment if --> Set High initially 
    //  GpioCtrlRegs.GPCPUD.bit.GPIO67 = 0;      // 0=Enables the Pull-Up, 1=Disables the Pull-Up
    //--------------------------------------------------------------------------------------
    //  GPIO-68 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPCMUX1.bit.GPIO68 = 0;     // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPCDIR.bit.GPIO68 = 0;      // 0=INput, 1=OUTput
    //  GpioDataRegs.GPCCLEAR.bit.GPIO68 = 1;    // uncomment if --> Set Low initially
    //  GpioDataRegs.GPCSET.bit.GPIO68 = 1;      // uncomment if --> Set High initially 
    //  GpioCtrlRegs.GPCPUD.bit.GPIO68 = 0;      // 0=Enables the Pull-Up, 1=Disables the Pull-Up
    //--------------------------------------------------------------------------------------
    //  GPIO-69 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPCMUX1.bit.GPIO69 = 0;     // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPCDIR.bit.GPIO69 = 0;      // 0=INput, 1=OUTput
    //  GpioDataRegs.GPCCLEAR.bit.GPIO69 = 1;    // uncomment if --> Set Low initially
    //  GpioDataRegs.GPCSET.bit.GPIO69 = 1;      // uncomment if --> Set High initially
    //  GpioCtrlRegs.GPCPUD.bit.GPIO69 = 0;      // 0=Enables the Pull-Up, 1=Disables the Pull-Up 
    //--------------------------------------------------------------------------------------
    //  GPIO-70 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPCMUX1.bit.GPIO70 = 0;     // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPCDIR.bit.GPIO70 = 0;      // 0=INput, 1=OUTput
    //  GpioDataRegs.GPCCLEAR.bit.GPIO70 = 1;    // uncomment if --> Set Low initially
    //  GpioDataRegs.GPCSET.bit.GPIO70 = 1;      // uncomment if --> Set High initially
    //  GpioCtrlRegs.GPCPUD.bit.GPIO70 = 0;      // 0=Enables the Pull-Up, 1=Disables the Pull-Up
    //--------------------------------------------------------------------------------------
    //  GPIO-71 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPCMUX1.bit.GPIO71 = 0;     // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPCDIR.bit.GPIO71 = 0;      // 0=INput, 1=OUTput
    //  GpioDataRegs.GPCCLEAR.bit.GPIO71 = 1;    // uncomment if --> Set Low initially
    //  GpioDataRegs.GPCSET.bit.GPIO71 = 1;      // uncomment if --> Set High initially
    //  GpioCtrlRegs.GPCPUD.bit.GPIO71 = 0;      // 0=Enables the Pull-Up, 1=Disables the Pull-Up
    //--------------------------------------------------------------------------------------
    //  GPIO-72 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPCMUX1.bit.GPIO72 = 0;     // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPCDIR.bit.GPIO72 = 0;      // 0=INput, 1=OUTput
    //  GpioDataRegs.GPCCLEAR.bit.GPIO72 = 1;    // uncomment if --> Set Low initially
    //  GpioDataRegs.GPCSET.bit.GPIO72 = 1;      // uncomment if --> Set High initially
    //  GpioCtrlRegs.GPCPUD.bit.GPIO72 = 0;      // 0=Enables the Pull-Up, 1=Disables the Pull-Up
    //--------------------------------------------------------------------------------------
    //  GPIO-73 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPCMUX1.bit.GPIO73 = 0;     // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPCDIR.bit.GPIO73 = 0;      // 0=INput, 1=OUTput
    //  GpioDataRegs.GPCCLEAR.bit.GPIO73 = 1;    // uncomment if --> Set Low initially
    //  GpioDataRegs.GPCSET.bit.GPIO73 = 1;      // uncomment if --> Set High initially
    //  GpioCtrlRegs.GPCPUD.bit.GPIO73 = 0;      // 0=Enables the Pull-Up, 1=Disables the Pull-Up
    //--------------------------------------------------------------------------------------
    //  GPIO-74 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPCMUX1.bit.GPIO74 = 0;     // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPCDIR.bit.GPIO74 = 0;      // 0=INput, 1=OUTput
    //  GpioDataRegs.GPCCLEAR.bit.GPIO74 = 1;    // uncomment if --> Set Low initially
    //  GpioDataRegs.GPCSET.bit.GPIO74 = 1;      // uncomment if --> Set High initially
    //  GpioCtrlRegs.GPCPUD.bit.GPIO74 = 0;      // 0=Enables the Pull-Up, 1=Disables the Pull-Up
    //--------------------------------------------------------------------------------------
    //  GPIO-75 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPCMUX1.bit.GPIO75 = 0;     // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPCDIR.bit.GPIO75 = 0;      // 0=INput, 1=OUTput
    //  GpioDataRegs.GPCCLEAR.bit.GPIO75 = 1;    // uncomment if --> Set Low initially
    //  GpioDataRegs.GPCSET.bit.GPIO75 = 1;      // uncomment if --> Set High initially
    //  GpioCtrlRegs.GPCPUD.bit.GPIO75 = 0;      // 0=Enables the Pull-Up, 1=Disables the Pull-Up
    //--------------------------------------------------------------------------------------
    //  GPIO-76 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPCMUX1.bit.GPIO76 = 0;     // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPCDIR.bit.GPIO76 = 0;      // 0=INput, 1=OUTput
    //  GpioDataRegs.GPCCLEAR.bit.GPIO76 = 1;    // uncomment if --> Set Low initially
    //  GpioDataRegs.GPCSET.bit.GPIO76 = 1;      // uncomment if --> Set High initially
    //  GpioCtrlRegs.GPCPUD.bit.GPIO76 = 0;      // 0=Enables the Pull-Up, 1=Disables the Pull-Up
    //--------------------------------------------------------------------------------------
    //  GPIO-77 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPCMUX1.bit.GPIO77 = 0;     // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPCDIR.bit.GPIO77 = 0;      // 0=INput, 1=OUTput
    //  GpioDataRegs.GPCCLEAR.bit.GPIO77 = 1;    // uncomment if --> Set Low initially
    //  GpioDataRegs.GPCSET.bit.GPIO77 = 1;      // uncomment if --> Set High initially
    //  GpioCtrlRegs.GPCPUD.bit.GPIO77 = 0;      // 0=Enables the Pull-Up, 1=Disables the Pull-Up
    //--------------------------------------------------------------------------------------
    //  GPIO-78 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPCMUX1.bit.GPIO78 = 0;     // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPCDIR.bit.GPIO78 = 0;      // 0=INput, 1=OUTput
    //  GpioDataRegs.GPCCLEAR.bit.GPIO78 = 1;    // uncomment if --> Set Low initially
    //  GpioDataRegs.GPCSET.bit.GPIO78 = 1;      // uncomment if --> Set High initially
    //  GpioCtrlRegs.GPCPUD.bit.GPIO78 = 0;      // 0=Enables the Pull-Up, 1=Disables the Pull-Up
    //--------------------------------------------------------------------------------------
    //  GPIO-79 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPCMUX1.bit.GPIO79 = 0;     // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPCDIR.bit.GPIO79 = 0;      // 0=INput, 1=OUTput
    //  GpioDataRegs.GPCCLEAR.bit.GPIO79 = 1;    // uncomment if --> Set Low initially
    //  GpioDataRegs.GPCSET.bit.GPIO79 = 1;      // uncomment if --> Set High initially
    //  GpioCtrlRegs.GPCPUD.bit.GPIO79 = 0;      // 0=Enables the Pull-Up, 1=Disables the Pull-Up
    //--------------------------------------------------------------------------------------
    //  GPIO-80 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPCMUX2.bit.GPIO80 = 0;     // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPCDIR.bit.GPIO80 = 0;      // 0=INput, 1=OUTput
    //  GpioDataRegs.GPCCLEAR.bit.GPIO80 = 1;    // uncomment if --> Set Low initially
    //  GpioDataRegs.GPCSET.bit.GPIO80 = 1;      // uncomment if --> Set High initially
    //  GpioCtrlRegs.GPCPUD.bit.GPIO80 = 0;      // 0=Enables the Pull-Up, 1=Disables the Pull-Up
    //--------------------------------------------------------------------------------------
    //  GPIO-81 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPCMUX2.bit.GPIO81 = 0;     // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPCDIR.bit.GPIO81 = 0;      // 0=INput, 1=OUTput
    //  GpioDataRegs.GPCCLEAR.bit.GPIO81 = 1;    // uncomment if --> Set Low initially
    //  GpioDataRegs.GPCSET.bit.GPIO81 = 1;      // uncomment if --> Set High initially
    //  GpioCtrlRegs.GPCPUD.bit.GPIO81 = 0;      // 0=Enables the Pull-Up, 1=Disables the Pull-Up
    //--------------------------------------------------------------------------------------
    //  GPIO-82 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPCMUX2.bit.GPIO82 = 0;     // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPCDIR.bit.GPIO82 = 0;      // 0=INput, 1=OUTput
    //  GpioDataRegs.GPCCLEAR.bit.GPIO82 = 1;    // uncomment if --> Set Low initially
    //  GpioDataRegs.GPCSET.bit.GPIO82 = 1;      // uncomment if --> Set High initially
    //  GpioCtrlRegs.GPCPUD.bit.GPIO82 = 0;      // 0=Enables the Pull-Up, 1=Disables the Pull-Up
    //--------------------------------------------------------------------------------------
    //  GPIO-83 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPCMUX2.bit.GPIO83 = 0;     // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPCDIR.bit.GPIO83 = 0;      // 0=INput, 1=OUTput
    //  GpioDataRegs.GPCCLEAR.bit.GPIO83 = 1;    // uncomment if --> Set Low initially
    //  GpioDataRegs.GPCSET.bit.GPIO83 = 1;      // uncomment if --> Set High initially
    //  GpioCtrlRegs.GPCPUD.bit.GPIO83 = 0;      // 0=Enables the Pull-Up, 1=Disables the Pull-Up
    //--------------------------------------------------------------------------------------
    //  GPIO-84 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPCMUX2.bit.GPIO84 = 0;     // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPCDIR.bit.GPIO84 = 0;      // 0=INput, 1=OUTput
    //  GpioDataRegs.GPCCLEAR.bit.GPIO84 = 1;    // uncomment if --> Set Low initially
    //  GpioDataRegs.GPCSET.bit.GPIO84 = 1;      // uncomment if --> Set High initially
    //  GpioCtrlRegs.GPCPUD.bit.GPIO84 = 0;      // 0=Enables the Pull-Up, 1=Disables the Pull-Up
    //--------------------------------------------------------------------------------------
    //  GPIO-85 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPCMUX2.bit.GPIO85 = 0;     // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPCDIR.bit.GPIO85 = 0;      // 0=INput, 1=OUTput
    //  GpioDataRegs.GPCCLEAR.bit.GPIO85 = 1;    // uncomment if --> Set Low initially
    //  GpioDataRegs.GPCSET.bit.GPIO85 = 1;      // uncomment if --> Set High initially
    //  GpioCtrlRegs.GPCPUD.bit.GPIO85 = 0;      // 0=Enables the Pull-Up, 1=Disables the Pull-Up
    //--------------------------------------------------------------------------------------
    //  GPIO-86 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPCMUX2.bit.GPIO86 = 0;     // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPCDIR.bit.GPIO86 = 0;      // 0=INput, 1=OUTput
    //  GpioDataRegs.GPCCLEAR.bit.GPIO86 = 1;    // uncomment if --> Set Low initially
    //  GpioDataRegs.GPCSET.bit.GPIO86 = 1;      // uncomment if --> Set High initially
    //  GpioCtrlRegs.GPCPUD.bit.GPIO86 = 0;      // 0=Enables the Pull-Up, 1=Disables the Pull-Up
    //--------------------------------------------------------------------------------------
    //  GPIO-87 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPCMUX2.bit.GPIO87 = 0;     // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPCDIR.bit.GPIO87 = 0;      // 0=INput, 1=OUTput
    //  GpioDataRegs.GPCCLEAR.bit.GPIO87 = 1;    // uncomment if --> Set Low initially
    //  GpioDataRegs.GPCSET.bit.GPIO87 = 1;      // uncomment if --> Set High initially
    //  GpioCtrlRegs.GPCPUD.bit.GPIO87 = 0;      // 0=Enables the Pull-Up, 1=Disables the Pull-Up
    //--------------------------------------------------------------------------------------
    //  GPIO-88 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPCMUX2.bit.GPIO88 = 0;     // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPCDIR.bit.GPIO88 = 0;      // 0=INput, 1=OUTput
    //  GpioDataRegs.GPCCLEAR.bit.GPIO88 = 1;    // uncomment if --> Set Low initially
    //  GpioDataRegs.GPCSET.bit.GPIO88 = 1;      // uncomment if --> Set High initially
    //  GpioCtrlRegs.GPCPUD.bit.GPIO88 = 0;      // 0=Enables the Pull-Up, 1=Disables the Pull-Up
    //--------------------------------------------------------------------------------------
    //  GPIO-89 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPCMUX2.bit.GPIO89 = 0;     // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPCDIR.bit.GPIO89 = 0;      // 0=INput, 1=OUTput
    //  GpioDataRegs.GPCCLEAR.bit.GPIO89 = 1;    // uncomment if --> Set Low initially
    //  GpioDataRegs.GPCSET.bit.GPIO89 = 1;      // uncomment if --> Set High initially
    //  GpioCtrlRegs.GPCPUD.bit.GPIO89 = 0;      // 0=Enables the Pull-Up, 1=Disables the Pull-Up
    //--------------------------------------------------------------------------------------
    //  GPIO-90 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPCMUX2.bit.GPIO90 = 0;     // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPCDIR.bit.GPIO90 = 0;      // 0=INput, 1=OUTput
    //  GpioDataRegs.GPCCLEAR.bit.GPIO90 = 1;    // uncomment if --> Set Low initially
    //  GpioDataRegs.GPCSET.bit.GPIO90 = 1;      // uncomment if --> Set High initially
    //  GpioCtrlRegs.GPCPUD.bit.GPIO90 = 0;      // 0=Enables the Pull-Up, 1=Disables the Pull-Up
    //--------------------------------------------------------------------------------------
    //  GPIO-91 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPCMUX2.bit.GPIO91 = 0;     // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPCDIR.bit.GPIO91 = 0;      // 0=INput, 1=OUTput
    //  GpioDataRegs.GPCCLEAR.bit.GPIO91 = 1;    // uncomment if --> Set Low initially
    //  GpioDataRegs.GPCSET.bit.GPIO91 = 1;      // uncomment if --> Set High initially
    //  GpioCtrlRegs.GPCPUD.bit.GPIO91 = 0;      // 0=Enables the Pull-Up, 1=Disables the Pull-Up
    //--------------------------------------------------------------------------------------
    //  GPIO-92 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPCMUX2.bit.GPIO92 = 0;     // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPCDIR.bit.GPIO92 = 0;      // 0=INput, 1=OUTput
    //  GpioDataRegs.GPCCLEAR.bit.GPIO92 = 1;    // uncomment if --> Set Low initially
    //  GpioDataRegs.GPCSET.bit.GPIO92 = 1;      // uncomment if --> Set High initially
    //  GpioCtrlRegs.GPCPUD.bit.GPIO92 = 0;      // 0=Enables the Pull-Up, 1=Disables the Pull-Up
    //--------------------------------------------------------------------------------------
    //  GPIO-93 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPCMUX2.bit.GPIO93 = 0;     // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPCDIR.bit.GPIO93 = 0;      // 0=INput, 1=OUTput
    //  GpioDataRegs.GPCCLEAR.bit.GPIO93 = 1;    // uncomment if --> Set Low initially
    //  GpioDataRegs.GPCSET.bit.GPIO93 = 1;      // uncomment if --> Set High initially
    //  GpioCtrlRegs.GPCPUD.bit.GPIO93 = 0;      // 0=Enables the Pull-Up, 1=Disables the Pull-Up
    //--------------------------------------------------------------------------------------
    //  GPIO-94 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPCMUX2.bit.GPIO94 = 0;     // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPCDIR.bit.GPIO94 = 0;      // 0=INput, 1=OUTput
    //  GpioDataRegs.GPCCLEAR.bit.GPIO94 = 1;    // uncomment if --> Set Low initially
    //  GpioDataRegs.GPCSET.bit.GPIO94 = 1;      // uncomment if --> Set High initially
    //  GpioCtrlRegs.GPCPUD.bit.GPIO94 = 0;      // 0=Enables the Pull-Up, 1=Disables the Pull-Up
    //--------------------------------------------------------------------------------------
    //  GPIO-95 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPCMUX2.bit.GPIO95 = 0;     // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPCDIR.bit.GPIO95 = 0;      // 0=INput, 1=OUTput
    //  GpioDataRegs.GPCCLEAR.bit.GPIO95 = 1;    // uncomment if --> Set Low initially
    //  GpioDataRegs.GPCSET.bit.GPIO95 = 1;      // uncomment if --> Set High initially
    //  GpioCtrlRegs.GPCPUD.bit.GPIO95 = 0;      // 0=Enables the Pull-Up, 1=Disables the Pull-Up

    //--------------------------------------------------------------------------------------
    //  GPIO-96 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPDMUX1.bit.GPIO96 = 0;     // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPDDIR.bit.GPIO96 = 0;      // 0=INput, 1=OUTput
    //  GpioDataRegs.GPDCLEAR.bit.GPIO96 = 1;    // uncomment if --> Set Low initially
    //  GpioDataRegs.GPDSET.bit.GPIO96 = 1;      // uncomment if --> Set High initially
    //  GpioCtrlRegs.GPDPUD.bit.GPIO96 = 0;      // 0=Enables the Pull-Up, 1=Disables the Pull-Up
    //--------------------------------------------------------------------------------------
    //  GPIO-97 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPDMUX1.bit.GPIO97 = 0;     // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPDDIR.bit.GPIO97 = 0;      // 0=INput, 1=OUTput
    //  GpioDataRegs.GPDCLEAR.bit.GPIO97 = 1;    // uncomment if --> Set Low initially
    //  GpioDataRegs.GPDSET.bit.GPIO97 = 1;      // uncomment if --> Set High initially
    //  GpioCtrlRegs.GPDPUD.bit.GPIO97 = 0;      // 0=Enables the Pull-Up, 1=Disables the Pull-Up
    //--------------------------------------------------------------------------------------
    //  GPIO-98 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPDMUX1.bit.GPIO98 = 0;     // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPDDIR.bit.GPIO98 = 0;      // 0=INput, 1=OUTput
    //  GpioDataRegs.GPDCLEAR.bit.GPIO98 = 1;    // uncomment if --> Set Low initially
    //  GpioDataRegs.GPDSET.bit.GPIO98 = 1;      // uncomment if --> Set High initially
    //  GpioCtrlRegs.GPDPUD.bit.GPIO98 = 0;      // 0=Enables the Pull-Up, 1=Disables the Pull-Up
    //--------------------------------------------------------------------------------------
    //  GPIO-99 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPDMUX1.bit.GPIO99 = 0;     // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPDDIR.bit.GPIO99 = 0;      // 0=INput, 1=OUTput
    //  GpioDataRegs.GPDCLEAR.bit.GPIO99 = 1;    // uncomment if --> Set Low initially
    //  GpioDataRegs.GPDSET.bit.GPIO99 = 1;      // uncomment if --> Set High initially
    //  GpioCtrlRegs.GPDPUD.bit.GPIO99 = 0;      // 0=Enables the Pull-Up, 1=Disables the Pull-Up
    //--------------------------------------------------------------------------------------
    //  GPIO-100 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPDMUX1.bit.GPIO100 = 0;    // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPDDIR.bit.GPIO100 = 0;     // 0=INput, 1=OUTput
    //  GpioDataRegs.GPDCLEAR.bit.GPIO100 = 1;   // uncomment if --> Set Low initially
    //  GpioDataRegs.GPDSET.bit.GPIO100 = 1;     // uncomment if --> Set High initially
    //  GpioCtrlRegs.GPDPUD.bit.GPIO100 = 0;     // 0=Enables the Pull-Up, 1=Disables the Pull-Up
    //--------------------------------------------------------------------------------------
    //  GPIO-101 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPDMUX1.bit.GPIO101 = 0;    // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPDDIR.bit.GPIO101 = 0;     // 0=INput, 1=OUTput
    //  GpioDataRegs.GPDCLEAR.bit.GPIO101 = 1;   // uncomment if --> Set Low initially
    //  GpioDataRegs.GPDSET.bit.GPIO101 = 1;     // uncomment if --> Set High initially
    //  GpioCtrlRegs.GPDPUD.bit.GPIO101 = 0;     // 0=Enables the Pull-Up, 1=Disables the Pull-Up
    //--------------------------------------------------------------------------------------
    //  GPIO-102 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPDMUX1.bit.GPIO102 = 0;    // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPDDIR.bit.GPIO102 = 0;     // 0=INput, 1=OUTput
    //  GpioDataRegs.GPDCLEAR.bit.GPIO102 = 1;   // uncomment if --> Set Low initially
    //  GpioDataRegs.GPDSET.bit.GPIO102 = 1;     // uncomment if --> Set High initially
    //  GpioCtrlRegs.GPDPUD.bit.GPIO102 = 0;     // 0=Enables the Pull-Up, 1=Disables the Pull-Up
    //--------------------------------------------------------------------------------------
    //  GPIO-103 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPDMUX1.bit.GPIO103 = 0;    // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPDDIR.bit.GPIO103 = 0;     // 0=INput, 1=OUTput
    //  GpioDataRegs.GPDCLEAR.bit.GPIO103 = 1;   // uncomment if --> Set Low initially
    //  GpioDataRegs.GPDSET.bit.GPIO103 = 1;     // uncomment if --> Set High initially
    //  GpioCtrlRegs.GPDPUD.bit.GPIO103 = 0;     // 0=Enables the Pull-Up, 1=Disables the Pull-Up
    //--------------------------------------------------------------------------------------
    //  GPIO-104 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPDMUX1.bit.GPIO104 = 0;    // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPDDIR.bit.GPIO104 = 0;     // 0=INput, 1=OUTput
    //  GpioDataRegs.GPDCLEAR.bit.GPIO104 = 1;   // uncomment if --> Set Low initially
    //  GpioDataRegs.GPDSET.bit.GPIO104 = 1;     // uncomment if --> Set High initially
    //  GpioCtrlRegs.GPDPUD.bit.GPIO104 = 0;     // 0=Enables the Pull-Up, 1=Disables the Pull-Up
    //--------------------------------------------------------------------------------------
    //  GPIO-105 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPDMUX1.bit.GPIO105 = 0;    // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPDDIR.bit.GPIO105 = 0;     // 0=INput, 1=OUTput
    //  GpioDataRegs.GPDCLEAR.bit.GPIO105 = 1;   // uncomment if --> Set Low initially
    //  GpioDataRegs.GPDSET.bit.GPIO105 = 1;     // uncomment if --> Set High initially
    //  GpioCtrlRegs.GPDPUD.bit.GPIO105 = 0;     // 0=Enables the Pull-Up, 1=Disables the Pull-Up
    //--------------------------------------------------------------------------------------
    //  GPIO-106 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPDMUX1.bit.GPIO106 = 0;    // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPDDIR.bit.GPIO106 = 0;     // 0=INput, 1=OUTput
    //  GpioDataRegs.GPDCLEAR.bit.GPIO106 = 1;   // uncomment if --> Set Low initially
    //  GpioDataRegs.GPDSET.bit.GPIO106 = 1;     // uncomment if --> Set High initially
    //  GpioCtrlRegs.GPDPUD.bit.GPIO106 = 0;     // 0=Enables the Pull-Up, 1=Disables the Pull-Up
    //--------------------------------------------------------------------------------------
    //  GPIO-107 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPDMUX1.bit.GPIO107 = 0;    // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPDDIR.bit.GPIO107 = 0;     // 0=INput, 1=OUTput
    //  GpioDataRegs.GPDCLEAR.bit.GPIO107 = 1;   // uncomment if --> Set Low initially
    //  GpioDataRegs.GPDSET.bit.GPIO107 = 1;     // uncomment if --> Set High initially
    //  GpioCtrlRegs.GPDPUD.bit.GPIO107 = 0;     // 0=Enables the Pull-Up, 1=Disables the Pull-Up
    //--------------------------------------------------------------------------------------
    //  GPIO-108 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPDMUX1.bit.GPIO108 = 0;    // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPDDIR.bit.GPIO108 = 0;     // 0=INput, 1=OUTput
    //  GpioDataRegs.GPDCLEAR.bit.GPIO108 = 1;   // uncomment if --> Set Low initially
    //  GpioDataRegs.GPDSET.bit.GPIO108 = 1;     // uncomment if --> Set High initially
    //  GpioCtrlRegs.GPDPUD.bit.GPIO108 = 0;     // 0=Enables the Pull-Up, 1=Disables the Pull-Up
    //--------------------------------------------------------------------------------------
    //  GPIO-109 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPDMUX1.bit.GPIO109 = 0;    // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPDDIR.bit.GPIO109 = 0;     // 0=INput, 1=OUTput
    //  GpioDataRegs.GPDCLEAR.bit.GPIO109 = 1;   // uncomment if --> Set Low initially
    //  GpioDataRegs.GPDSET.bit.GPIO109 = 1;     // uncomment if --> Set High initially
    //  GpioCtrlRegs.GPDPUD.bit.GPIO109 = 0;     // 0=Enables the Pull-Up, 1=Disables the Pull-Up
    //--------------------------------------------------------------------------------------
    //  GPIO-110 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPDMUX1.bit.GPIO110 = 0;    // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPDDIR.bit.GPIO110 = 0;     // 0=INput, 1=OUTput
    //  GpioDataRegs.GPDCLEAR.bit.GPIO110 = 1;   // uncomment if --> Set Low initially
    //  GpioDataRegs.GPDSET.bit.GPIO110 = 1;     // uncomment if --> Set High initially
    //  GpioCtrlRegs.GPDPUD.bit.GPIO110 = 0;     // 0=Enables the Pull-Up, 1=Disables the Pull-Up
    //--------------------------------------------------------------------------------------
    //  GPIO-111 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPDMUX1.bit.GPIO111 = 0;    // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPDDIR.bit.GPIO111 = 0;     // 0=INput, 1=OUTput
    //  GpioDataRegs.GPDCLEAR.bit.GPIO111 = 1;   // uncomment if --> Set Low initially
    //  GpioDataRegs.GPDSET.bit.GPIO111 = 1;     // uncomment if --> Set High initially
    //  GpioCtrlRegs.GPDPUD.bit.GPIO111 = 0;     // 0=Enables the Pull-Up, 1=Disables the Pull-Up
    //--------------------------------------------------------------------------------------
    //  GPIO-112 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPDMUX2.bit.GPIO112 = 0;    // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPDDIR.bit.GPIO112 = 0;     // 0=INput, 1=OUTput
    //  GpioDataRegs.GPDCLEAR.bit.GPIO112 = 1;   // uncomment if --> Set Low initially
    //  GpioDataRegs.GPDSET.bit.GPIO112 = 1;     // uncomment if --> Set High initially
    //  GpioCtrlRegs.GPDPUD.bit.GPIO112 = 0;     // 0=Enables the Pull-Up, 1=Disables the Pull-Up
    //--------------------------------------------------------------------------------------
    //  GPIO-113 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPDMUX2.bit.GPIO113 = 0;    // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPDDIR.bit.GPIO113 = 0;     // 0=INput, 1=OUTput
    //  GpioDataRegs.GPDCLEAR.bit.GPIO113 = 1;   // uncomment if --> Set Low initially
    //  GpioDataRegs.GPDSET.bit.GPIO113 = 1;     // uncomment if --> Set High initially
    //  GpioCtrlRegs.GPDPUD.bit.GPIO113 = 0;     // 0=Enables the Pull-Up, 1=Disables the Pull-Up
    //--------------------------------------------------------------------------------------
    //  GPIO-114 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPDMUX2.bit.GPIO114 = 0;    // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPDDIR.bit.GPIO114 = 0;     // 0=INput, 1=OUTput
    //  GpioDataRegs.GPDCLEAR.bit.GPIO114 = 1;   // uncomment if --> Set Low initially
    //  GpioDataRegs.GPDSET.bit.GPIO114 = 1;     // uncomment if --> Set High initially
    //  GpioCtrlRegs.GPDPUD.bit.GPIO114 = 0;     // 0=Enables the Pull-Up, 1=Disables the Pull-Up
    //--------------------------------------------------------------------------------------
    //  GPIO-115 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPDMUX2.bit.GPIO115 = 0;    // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPDDIR.bit.GPIO115 = 0;     // 0=INput, 1=OUTput
    //  GpioDataRegs.GPDCLEAR.bit.GPIO115 = 1;   // uncomment if --> Set Low initially
    //  GpioDataRegs.GPDSET.bit.GPIO115 = 1;     // uncomment if --> Set High initially
    //  GpioCtrlRegs.GPDPUD.bit.GPIO115 = 0;     // 0=Enables the Pull-Up, 1=Disables the Pull-Up
    //--------------------------------------------------------------------------------------
    //  GPIO-116 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPDMUX2.bit.GPIO116 = 0;    // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPDDIR.bit.GPIO116 = 0;     // 0=INput, 1=OUTput
    //  GpioDataRegs.GPDCLEAR.bit.GPIO116 = 1;   // uncomment if --> Set Low initially
    //  GpioDataRegs.GPDSET.bit.GPIO116 = 1;     // uncomment if --> Set High initially
    //  GpioCtrlRegs.GPDPUD.bit.GPIO116 = 0;     // 0=Enables the Pull-Up, 1=Disables the Pull-Up
    //--------------------------------------------------------------------------------------
    //  GPIO-117 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPDMUX2.bit.GPIO117 = 0;    // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPDDIR.bit.GPIO117 = 0;     // 0=INput, 1=OUTput
    //  GpioDataRegs.GPDCLEAR.bit.GPIO117 = 1;   // uncomment if --> Set Low initially
    //  GpioDataRegs.GPDSET.bit.GPIO117 = 1;     // uncomment if --> Set High initially
    //  GpioCtrlRegs.GPDPUD.bit.GPIO117 = 0;     // 0=Enables the Pull-Up, 1=Disables the Pull-Up
    //--------------------------------------------------------------------------------------
    //  GPIO-118 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPDMUX2.bit.GPIO118 = 0;    // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPDDIR.bit.GPIO118 = 0;     // 0=INput, 1=OUTput
    //  GpioDataRegs.GPDCLEAR.bit.GPIO118 = 1;   // uncomment if --> Set Low initially
    //  GpioDataRegs.GPDSET.bit.GPIO118 = 1;     // uncomment if --> Set High initially
    //  GpioCtrlRegs.GPDPUD.bit.GPIO118 = 0;     // 0=Enables the Pull-Up, 1=Disables the Pull-Up
    //--------------------------------------------------------------------------------------
    //  GPIO-119 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPDMUX2.bit.GPIO119 = 0;    // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPDDIR.bit.GPIO119 = 0;     // 0=INput, 1=OUTput
    //  GpioDataRegs.GPDCLEAR.bit.GPIO119 = 1;   // uncomment if --> Set Low initially
    //  GpioDataRegs.GPDSET.bit.GPIO119 = 1;     // uncomment if --> Set High initially
    //  GpioCtrlRegs.GPDPUD.bit.GPIO119 = 0;     // 0=Enables the Pull-Up, 1=Disables the Pull-Up
    //--------------------------------------------------------------------------------------
    //  GPIO-120 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPDMUX2.bit.GPIO120 = 0;    // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPDDIR.bit.GPIO120 = 0;     // 0=INput, 1=OUTput
    //  GpioDataRegs.GPDCLEAR.bit.GPIO120 = 1;   // uncomment if --> Set Low initially
    //  GpioDataRegs.GPDSET.bit.GPIO120 = 1;     // uncomment if --> Set High initially
    //  GpioCtrlRegs.GPDPUD.bit.GPIO120 = 0;     // 0=Enables the Pull-Up, 1=Disables the Pull-Up
    //--------------------------------------------------------------------------------------
    //  GPIO-121 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPDMUX2.bit.GPIO121 = 0;    // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPDDIR.bit.GPIO121 = 0;     // 0=INput, 1=OUTput
    //  GpioDataRegs.GPDCLEAR.bit.GPIO121 = 1;   // uncomment if --> Set Low initially
    //  GpioDataRegs.GPDSET.bit.GPIO121 = 1;     // uncomment if --> Set High initially
    //  GpioCtrlRegs.GPDPUD.bit.GPIO121 = 0;     // 0=Enables the Pull-Up, 1=Disables the Pull-Up
    //--------------------------------------------------------------------------------------
    //  GPIO-122 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPDMUX2.bit.GPIO122 = 0;    // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPDDIR.bit.GPIO122 = 0;     // 0=INput, 1=OUTput
    //  GpioDataRegs.GPDCLEAR.bit.GPIO122 = 1;   // uncomment if --> Set Low initially
    //  GpioDataRegs.GPDSET.bit.GPIO122 = 1;     // uncomment if --> Set High initially
    //  GpioCtrlRegs.GPDPUD.bit.GPIO122 = 0;     // 0=Enables the Pull-Up, 1=Disables the Pull-Up
    //--------------------------------------------------------------------------------------
    //  GPIO-123 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPDMUX2.bit.GPIO123 = 0;    // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPDDIR.bit.GPIO123 = 0;     // 0=INput, 1=OUTput
    //  GpioDataRegs.GPDCLEAR.bit.GPIO123 = 1;   // uncomment if --> Set Low initially
    //  GpioDataRegs.GPDSET.bit.GPIO123 = 1;     // uncomment if --> Set High initially
    //  GpioCtrlRegs.GPDPUD.bit.GPIO123 = 0;     // 0=Enables the Pull-Up, 1=Disables the Pull-Up
    //--------------------------------------------------------------------------------------
    //  GPIO-124 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPDMUX2.bit.GPIO124 = 0;    // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPDDIR.bit.GPIO124 = 0;     // 0=INput, 1=OUTput
    //  GpioDataRegs.GPDCLEAR.bit.GPIO124 = 1;   // uncomment if --> Set Low initially
    //  GpioDataRegs.GPDSET.bit.GPIO124 = 1;     // uncomment if --> Set High initially
    //  GpioCtrlRegs.GPDPUD.bit.GPIO124 = 0;     // 0=Enables the Pull-Up, 1=Disables the Pull-Up
    //--------------------------------------------------------------------------------------
    //  GPIO-125 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPDMUX2.bit.GPIO125 = 0;    // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPDDIR.bit.GPIO125 = 0;     // 0=INput, 1=OUTput
    //  GpioDataRegs.GPDCLEAR.bit.GPIO125 = 1;   // uncomment if --> Set Low initially
    //  GpioDataRegs.GPDSET.bit.GPIO125 = 1;     // uncomment if --> Set High initially
    //  GpioCtrlRegs.GPDPUD.bit.GPIO125 = 0;     // 0=Enables the Pull-Up, 1=Disables the Pull-Up
    //--------------------------------------------------------------------------------------
    //  GPIO-126 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPDMUX2.bit.GPIO126 = 0;    // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPDDIR.bit.GPIO126 = 0;     // 0=INput, 1=OUTput
    //  GpioDataRegs.GPDCLEAR.bit.GPIO126 = 1;   // uncomment if --> Set Low initially
    //  GpioDataRegs.GPDSET.bit.GPIO126 = 1;     // uncomment if --> Set High initially
    //  GpioCtrlRegs.GPDPUD.bit.GPIO126 = 0;     // 0=Enables the Pull-Up, 1=Disables the Pull-Up
    //--------------------------------------------------------------------------------------
    //  GPIO-127 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPDMUX2.bit.GPIO127 = 0;    // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPDDIR.bit.GPIO127 = 0;     // 0=INput, 1=OUTput
    //  GpioDataRegs.GPDCLEAR.bit.GPIO127 = 1;   // uncomment if --> Set Low initially
    //  GpioDataRegs.GPDSET.bit.GPIO127 = 1;     // uncomment if --> Set High initially
    //  GpioCtrlRegs.GPDPUD.bit.GPIO127 = 0;     // 0=Enables the Pull-Up, 1=Disables the Pull-Up   

    //--------------------------------------------------------------------------------------
    //  GPIO-128 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPEMUX1.bit.GPIO128 = 0;    // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPEDIR.bit.GPIO128 = 0;     // 0=INput, 1=OUTput
    //  GpioDataRegs.GPECLEAR.bit.GPIO128 = 1;   // uncomment if --> Set Low initially
    //  GpioDataRegs.GPESET.bit.GPIO128 = 1;     // uncomment if --> Set High initially
    //  GpioCtrlRegs.GPEPUD.bit.GPIO128 = 0;     // 0=Enables the Pull-Up, 1=Disables the Pull-Up
    //--------------------------------------------------------------------------------------
    //  GPIO-129 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPEMUX1.bit.GPIO129 = 0;    // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPEDIR.bit.GPIO129 = 0;     // 0=INput, 1=OUTput
    //  GpioDataRegs.GPECLEAR.bit.GPIO129 = 1;   // uncomment if --> Set Low initially
    //  GpioDataRegs.GPESET.bit.GPIO129 = 1;     // uncomment if --> Set High initially
    //  GpioCtrlRegs.GPEPUD.bit.GPIO129 = 0;     // 0=Enables the Pull-Up, 1=Disables the Pull-Up
    //--------------------------------------------------------------------------------------
    //  GPIO-130 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPEMUX1.bit.GPIO130 = 0;    // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPEDIR.bit.GPIO130 = 0;     // 0=INput, 1=OUTput
    //  GpioDataRegs.GPECLEAR.bit.GPIO130 = 1;   // uncomment if --> Set Low initially
    //  GpioDataRegs.GPESET.bit.GPIO130 = 1;     // uncomment if --> Set High initially
    //  GpioCtrlRegs.GPEPUD.bit.GPIO130 = 0;     // 0=Enables the Pull-Up, 1=Disables the Pull-Up
    //--------------------------------------------------------------------------------------
    //  GPIO-131 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPEMUX1.bit.GPIO131 = 0;    // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPEDIR.bit.GPIO131 = 0;     // 0=INput, 1=OUTput
    //  GpioDataRegs.GPECLEAR.bit.GPIO131 = 1;   // uncomment if --> Set Low initially
    //  GpioDataRegs.GPESET.bit.GPIO131 = 1;     // uncomment if --> Set High initially
    //  GpioCtrlRegs.GPEPUD.bit.GPIO131 = 0;     // 0=Enables the Pull-Up, 1=Disables the Pull-Up
    //--------------------------------------------------------------------------------------
    //  GPIO-132 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPEMUX1.bit.GPIO132 = 0;    // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPEDIR.bit.GPIO132 = 0;     // 0=INput, 1=OUTput
    //  GpioDataRegs.GPECLEAR.bit.GPIO132 = 1;   // uncomment if --> Set Low initially
    //  GpioDataRegs.GPESET.bit.GPIO132 = 1;     // uncomment if --> Set High initially
    //  GpioCtrlRegs.GPEPUD.bit.GPIO132 = 0;     // 0=Enables the Pull-Up, 1=Disables the Pull-Up
    //--------------------------------------------------------------------------------------
    //  GPIO-133 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPEMUX1.bit.GPIO133 = 0;    // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPEDIR.bit.GPIO133 = 0;     // 0=INput, 1=OUTput
    //  GpioDataRegs.GPECLEAR.bit.GPIO133 = 1;   // uncomment if --> Set Low initially
    //  GpioDataRegs.GPESET.bit.GPIO133 = 1;     // uncomment if --> Set High initially
    //  GpioCtrlRegs.GPEPUD.bit.GPIO133 = 0;     // 0=Enables the Pull-Up, 1=Disables the Pull-Up
    //--------------------------------------------------------------------------------------
    //  GPIO-134 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPEMUX1.bit.GPIO134 = 0;    // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPEDIR.bit.GPIO134 = 0;     // 0=INput, 1=OUTput
    //  GpioDataRegs.GPECLEAR.bit.GPIO134 = 1;   // uncomment if --> Set Low initially
    //  GpioDataRegs.GPESET.bit.GPIO134 = 1;     // uncomment if --> Set High initially
    //  GpioCtrlRegs.GPEPUD.bit.GPIO134 = 0;     // 0=Enables the Pull-Up, 1=Disables the Pull-Up
    //--------------------------------------------------------------------------------------
    //  GPIO-135 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPEMUX1.bit.GPIO135 = 0;    // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPEDIR.bit.GPIO135 = 0;     // 0=INput, 1=OUTput
    //  GpioDataRegs.GPECLEAR.bit.GPIO135 = 1;   // uncomment if --> Set Low initially
    //  GpioDataRegs.GPESET.bit.GPIO135 = 1;     // uncomment if --> Set High initially
    //  GpioCtrlRegs.GPEPUD.bit.GPIO135 = 0;     // 0=Enables the Pull-Up, 1=Disables the Pull-Up
    //--------------------------------------------------------------------------------------
    //  GPIO-136 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPEMUX1.bit.GPIO136 = 0;    // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPEDIR.bit.GPIO136 = 0;     // 0=INput, 1=OUTput
    //  GpioDataRegs.GPECLEAR.bit.GPIO136 = 1;   // uncomment if --> Set Low initially
    //  GpioDataRegs.GPESET.bit.GPIO136 = 1;     // uncomment if --> Set High initially
    //  GpioCtrlRegs.GPEPUD.bit.GPIO136 = 0;     // 0=Enables the Pull-Up, 1=Disables the Pull-Up
    //--------------------------------------------------------------------------------------
    //  GPIO-137 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPEMUX1.bit.GPIO137 = 0;    // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPEDIR.bit.GPIO137 = 0;     // 0=INput, 1=OUTput
    //  GpioDataRegs.GPECLEAR.bit.GPIO137 = 1;   // uncomment if --> Set Low initially
    //  GpioDataRegs.GPESET.bit.GPIO137 = 1;     // uncomment if --> Set High initially
    //  GpioCtrlRegs.GPEPUD.bit.GPIO137 = 0;     // 0=Enables the Pull-Up, 1=Disables the Pull-Up
    //--------------------------------------------------------------------------------------
    //  GPIO-138 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPEMUX1.bit.GPIO138 = 0;    // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPEDIR.bit.GPIO138 = 0;     // 0=INput, 1=OUTput
    //  GpioDataRegs.GPECLEAR.bit.GPIO138 = 1;   // uncomment if --> Set Low initially
    //  GpioDataRegs.GPESET.bit.GPIO138 = 1;     // uncomment if --> Set High initially
    //  GpioCtrlRegs.GPEPUD.bit.GPIO138 = 0;     // 0=Enables the Pull-Up, 1=Disables the Pull-Up
    //--------------------------------------------------------------------------------------
    //  GPIO-139 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPEMUX1.bit.GPIO139 = 0;    // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPEDIR.bit.GPIO139 = 0;     // 0=INput, 1=OUTput
    //  GpioDataRegs.GPECLEAR.bit.GPIO139 = 1;   // uncomment if --> Set Low initially
    //  GpioDataRegs.GPESET.bit.GPIO139 = 1;     // uncomment if --> Set High initially
    //  GpioCtrlRegs.GPEPUD.bit.GPIO139 = 0;     // 0=Enables the Pull-Up, 1=Disables the Pull-Up
    //--------------------------------------------------------------------------------------
    //  GPIO-140 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPEMUX1.bit.GPIO140 = 0;    // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPEDIR.bit.GPIO140 = 0;     // 0=INput, 1=OUTput
    //  GpioDataRegs.GPECLEAR.bit.GPIO140 = 1;   // uncomment if --> Set Low initially
    //  GpioDataRegs.GPESET.bit.GPIO140 = 1;     // uncomment if --> Set High initially
    //  GpioCtrlRegs.GPEPUD.bit.GPIO140 = 0;     // 0=Enables the Pull-Up, 1=Disables the Pull-Up
    //--------------------------------------------------------------------------------------
    //  GPIO-141 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPEMUX1.bit.GPIO141 = 0;    // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPEDIR.bit.GPIO141 = 0;     // 0=INput, 1=OUTput
    //  GpioDataRegs.GPECLEAR.bit.GPIO141 = 1;   // uncomment if --> Set Low initially
    //  GpioDataRegs.GPESET.bit.GPIO141 = 1;     // uncomment if --> Set High initially
    //  GpioCtrlRegs.GPEPUD.bit.GPIO141 = 0;     // 0=Enables the Pull-Up, 1=Disables the Pull-Up
    //--------------------------------------------------------------------------------------
    //  GPIO-142 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPEMUX1.bit.GPIO142 = 0;    // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPEDIR.bit.GPIO142 = 0;     // 0=INput, 1=OUTput
    //  GpioDataRegs.GPECLEAR.bit.GPIO142 = 1;   // uncomment if --> Set Low initially
    //  GpioDataRegs.GPESET.bit.GPIO142 = 1;     // uncomment if --> Set High initially
    //  GpioCtrlRegs.GPEPUD.bit.GPIO142 = 0;     // 0=Enables the Pull-Up, 1=Disables the Pull-Up
    //--------------------------------------------------------------------------------------
    //  GPIO-143 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPEMUX1.bit.GPIO143 = 0;    // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPEDIR.bit.GPIO143 = 0;     // 0=INput, 1=OUTput
    //  GpioDataRegs.GPECLEAR.bit.GPIO143 = 1;   // uncomment if --> Set Low initially
    //  GpioDataRegs.GPESET.bit.GPIO143 = 1;     // uncomment if --> Set High initially
    //  GpioCtrlRegs.GPEPUD.bit.GPIO143 = 0;     // 0=Enables the Pull-Up, 1=Disables the Pull-Up
    //--------------------------------------------------------------------------------------
    //  GPIO-144 - PIN FUNCTION = --Spare--
        GpioCtrlRegs.GPEMUX2.bit.GPIO144 = 0;    // 0=GPIO, 1,2,3
    //  GpioCtrlRegs.GPEDIR.bit.GPIO144 = 0;     // 0=INput, 1=OUTput
    //  GpioDataRegs.GPECLEAR.bit.GPIO144 = 1;   // uncomment if --> Set Low initially
    //  GpioDataRegs.GPESET.bit.GPIO144 = 1;     // uncomment if --> Set High initially
    //  GpioCtrlRegs.GPEPUD.bit.GPIO144 = 0;     // 0=Enables the Pull-Up, 1=Disables the Pull-Up


    EDIS;
}
