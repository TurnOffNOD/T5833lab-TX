#ifndef _LEVEL_H
#define _LEVEL_H

#include "common.h"

void VIN_Set(double vihigh, double vilow, int vino);
void VOUT_Set(double vohigh, double volow, int vono);
void VT_Set(double vt, int vtno);
void LevFunc(double VDD1, double VDD2, double VDDQ);

#endif
