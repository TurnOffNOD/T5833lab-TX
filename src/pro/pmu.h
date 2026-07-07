#ifndef _PMU_H
#define _PMU_H
#include "common.h"


void DC_VSIM(double DCSource, 
          double DcSrangehigh, 
          double DcSrangelow,
          double DcMrangehigh,
          double DcMrangelow,
          double DcPclamp,
          double DcMclamp,
          double DcLimithigh,
          double DcLimitlow,
          int compareflag, int measure_count);

void DC_ISVM(double DCSource, 
          double DcSrangehigh, 
          double DcSrangelow,
          double DcMrangehigh,
          double DcMrangelow,
          double DcPclamp,
          double DcMclamp,
          double DcLimithigh,
          double DcLimitlow,
          int compareflag, int measure_count);


void MeasPin(char *pinlist, double wait_time);


#endif
