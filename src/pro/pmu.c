#include "pmu.h"


void DC_VSIM(double DCSource, 
          double DcSrangehigh, 
          double DcSrangelow,
          double DcMrangehigh,
          double DcMrangelow,
          double DcPclamp,
          double DcMclamp,
          double DcLimithigh,
          double DcLimitlow,
          int compareflag, int measure_count)
{         
    DcHandle h = UTL_GetDcHandle();
    UTL_SetDcMode       (h, UT_DCT_VSIM);           
    UTL_SetDcSource     (h, DCSource);            
    UTL_SetDcSrange     (h, DcSrangehigh, DcSrangelow);   
    UTL_SetDcMrange     (h, DcMrangehigh, DcMrangelow);    
    UTL_SetDcPclamp     (h, DcPclamp);
    UTL_SetDcMclamp     (h, DcMclamp);
    UTL_SetDcLimitHigh  (h, DcLimithigh, compareflag);
    UTL_SetDcLimitLow   (h, DcLimitlow, compareflag);
    UTL_SetDcMeasCnt    (h, measure_count);                /* measure_count = 1 to 1023*/
    UTL_AddDcWetItem    (h, UT_DCT_MRANGE);
    UTL_SendDc          (h, 1);
    UTL_DeleteHandle(h);
}
    /*(1)for VSIM, -7V to +7V;(2)for ISVM, -20uA to +20uA, -200uA to +200uA (default), -2mA to +2mA, -48mA to +48mA*/
    /*(1)for VSIM, -5uA to +5uA, -20uA to +20uA, -200uA to +200uA, -2mA to +2mA, -48mA to +48mA; 
    (2)for ISVM, -0.3V to +7V (default), -7V to +0.3V
    */

    /*    [for VSIM]
            Measurement range    Pclamp             Mclamp
            -5uA to +5uA,         +5uA fixed        -5uA fixed
            -20uA to +20uA,     +20uA fixed        -20uA fixed
            -200uA to +200uA,     +200uA fixed    -200uA fixed
            -2mA to +2mA,         +200uA to +2mA    -2mA to -200uA
            -48mA to +48mA;     +8mA to +48mA    -48mA to -8mA
                            
        [for ISVM]
            Measurement range    Pclamp            Mclamp
            -0.3V to +7V,         +0.6V to +7.6V    -0.6V fixed
            -7V to +0.3V        +0.6V fixed        -7.6V to -0.6V
   
    */
void DC_ISVM(double DCSource, 
          double DcSrangehigh, 
          double DcSrangelow,
          double DcMrangehigh,
          double DcMrangelow,
          double DcPclamp,
          double DcMclamp,
          double DcLimithigh,
          double DcLimitlow,
          int compareflag, int measure_count)
{         
    DcHandle h = UTL_GetDcHandle();
    UTL_SetDcMode           (h, UT_DCT_ISVM);
    UTL_SetDcSource         (h, DCSource);
    UTL_SetDcSrange         (h, DcSrangehigh, DcSrangelow);
    UTL_SetDcMrange         (h, DcMrangehigh, DcMrangelow);
    UTL_SetDcPclamp         (h, DcPclamp);
    UTL_SetDcMclamp         (h, DcMclamp);
    UTL_SetDcLimitHigh      (h, DcLimithigh, compareflag);
    UTL_SetDcLimitLow       (h, DcLimitlow, compareflag);
    UTL_SetDcMeasCnt   	    (h, measure_count);
    UTL_AddDcWetItem        (h, UT_DCT_MRANGE);
    UTL_SendDc              (h, 1);
    UTL_DeleteHandle(h);
}



void MeasPin(char *pinlist, double wait_time)
{   
    DctHandle h = UTL_GetDctHandle();
    UTL_SetDctPinList(h, pinlist);
    UTL_WaitTime(wait_time);           //set waiting time before measuring 
    UTL_MeasDct(h);                    //executing DC test according to the settings in the Dct Handle
    UTL_DeleteHandle(h);
} 

