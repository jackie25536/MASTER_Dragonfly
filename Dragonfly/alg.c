/*
 * alg.c
 *
 *  Created on: 2018.04.22
 *      Author: Chun-Yi Kuo
 */

#include "alg.h"
#include "varlist.h"


void Get_Current()
{
    X.curr.U = PHASE_U_CURRENT;
    X.curr.V = PHASE_V_CURRENT;
    X.curr.W = PHASE_W_CURRENT;
    X.curr.temp = PHASE_N_CURRENT;
}
