/*
 * alg.h
 *
 *  Created on: 2018.04.22
 *      Author: Chun-Yi Kuo
 */

#ifndef ALG_H_
#define ALG_H_

//=====Include header files=====//
#include "F28379D_Setting.h"

//=====Extern functions=====//
extern void Get_Current();




typedef struct
{
    Uint32 spare_min;
}FIXVAR;

typedef struct
{
    float32 U;
    float32 V;
    float32 W;
    float32 temp;
}CURRENT;

typedef struct
{
    CURRENT curr;
}AXIS;

#endif /* ALG_H_ */
