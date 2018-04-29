/*
 * varlist.h
 *
 *  Created on: 2018.04.22
 *      Author: Chun-Yi Kuo
 */

#ifndef VARLIST_H_
#define VARLIST_H_

//=====Include header files=====//
#include "F28379D_Setting.h"
#include "ADC.h"
#include "DAC.h"
#include "alg.h"
#include "F28379D_PWM.h"
#include "F28379D_GPIO.h"


//=====Extern variables=====//
extern AXIS X;

//=====Define variables=====//
#ifndef TRUE
#define FALSE 0
#define TRUE  1
#endif

#define CLKPERHASE 200000000/32000



#endif /* VARLIST_H_ */
