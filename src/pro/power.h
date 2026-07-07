#ifndef _POWER_H
#define _POWER_H
#include "common.h"

void VS_VSIM(int vsno, double voltage, double Smax, double Smin, double Mmax, double Mmin, double Cmax, double Cmin, double hlimit, double llimit);
void VS_VSIM_single(int vsno, double voltage, double Smax, double Smin, double Mmax, double Mmin, double Cmax, double Cmin, double hlimit, double llimit);
void PowerSequence();
void PowerOn();
void PowerOff();
void PCON_ON();
void PCON_OFF();

#endif
