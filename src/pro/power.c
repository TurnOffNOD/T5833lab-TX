#include "power.h"


void VS_VSIM(int vsno, double voltage, double Smax, double Smin, double Mmax, double Mmin, double Cmax, double Cmin, double hlimit, double llimit)
{/*
    VsHandle h = UTL_GetVsHandle();
   // UTL_SetVsMode      (h,            ); // UT_DCT_VSIM/UT_DCT_MVM/UT_DCT_OPEN 
    UTL_SetVsSource    (h, voltage);       // for VSIM, you can not omit this setting, for MVM, this setting is ignored
    UTL_SetVsSrange    (h, Smax, Smin);    // for VSIM, 0V to +2.2V, 0V to +3.3V, 0V to +4V, 0V to +6.6V, -10V to +13V
    UTL_SetVsMrange    (h, Mmax, Mmin);    // for VSIM, -5uA to +5uA, -25uA to +25uA, -250uA to +250uA, -2.5mA to +2.5mA, -25mA to +25mA, -400mA to +400mA, -200mA to 1.2A 
    UTL_SetVsPclamp    (h, Cmax);          // for VSIM, 1uA to 5uA,   5uA to 25uA,    50uA to 250uA,    500uA to 2.5mA,   5mA to 25mA,    100mA to 400mA,   200mA to 1.2A@+2.2V, +2.3V 
    UTL_SetVsMclamp    (h, Cmin);          // for VSIM, -5uA to -1uA, -25uA to -5uA,  -250uA to -50uA,  -2.5mA to -500uA, -25mA to -5mA,  -200mA to -100mA, -200mA fixed 
    if(hlimit==0){
    UTL_SetVsLimitHigh (h, hlimit, UT_OFF);
    }else{
    UTL_SetVsLimitHigh (h, hlimit, UT_ON);
    }
    if(llimit==0){
    UTL_SetVsLimitLow  (h, llimit, UT_OFF);
    }else{
    UTL_SetVsLimitLow  (h, llimit, UT_ON);
    }
    UTL_SetVsMeasCnt   (h, 10);
    UTL_AddVsWetItem   (h, UT_DCT_MRANGE );
    UTL_SetVsPhaseCompensation(h,UT_DCT_C2);//Capacitance C2 100uF C3 100uF C4 100uF    // UT_DCT_NONE/C1/C2/C3/C4 
    UTL_SendVs         (h, vsno);
    UTL_DeleteHandle   (h);
*/
}


void PowerSequence()
{/*
    PowerSeqHandle	power_seq = UTL_GetPowerSeqHandle();
    UTL_AddPowerSeqUnit    ( power_seq, 1,               );   //set VS pin as the 1st group of power sequence
    UTL_AddPowerSeqUnit    ( power_seq,  ,               );   //set all VI and VT as the 2nd group of power sequence
    UTL_AddPowerSeqUnit    ( power_seq,  ,               );   //
                                                              //set other pins as the 3rd group of power sequence
    UTL_SetPowerSeqWaitTime( power_seq, 1,               );   //set the waiting time of the 1st group as 50ms
    UTL_SetPowerSeqWaitTime( power_seq,  ,               );   //set the waiting time of the 2nd group as 50ms
                                                              //set the waiting time of the 3rd group as 50ms
                                                              //send the above power sequence setting to tester
    UTL_DeleteHandle       ( power_seq);
*/
}


void PowerOn() 
{
    
	
}


void PowerOff()
{


}



















