/*
 * ADC.h
 *
 *  Created on: 2018.04.28
 *      Author: Chun-Yi Kuo
 */

#ifndef ADC_H_
#define ADC_H_

//=====Include header files=====//
#include "F28379D_Setting.h"

//=====Extern functions=====//
extern void Setup_ADC();
extern void Config_ADC();
extern void Force_ADC_start_convert();

//=====Define variables=====//

#define PHASE_U_CURRENT AdcaResultRegs.ADCRESULT0
#define PHASE_V_CURRENT AdcbResultRegs.ADCRESULT0
#define PHASE_W_CURRENT AdccResultRegs.ADCRESULT0
#define PHASE_N_CURRENT AdcdResultRegs.ADCRESULT0





#endif /* ADC_H_ */
