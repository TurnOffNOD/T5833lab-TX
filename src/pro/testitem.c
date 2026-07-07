#include "testitem.h"



void t_Contact()
{
    //------------------------set VS condition---------------------------------------------//
    VS_VSIM(1, 0 V, 3.3 V, 0.0 V, 400 MA, -400 MA, 400 MA, -200 MA, 0, 0);      //VDD1=0V
    VS_VSIM(2, 0 V, 3.3 V, 0.0 V, 400 MA, -400 MA, 400 MA, -200 MA, 0, 0);      //VDD2=0V
    VS_VSIM(3, 0 V, 3.3 V, 0.0 V, 400 MA, -400 MA, 400 MA, -200 MA, 0, 0);      //VDDQ=0V
    
    //--------------------------set VI-----------------------------------------------------//
    VIN_Set(1.1 V, 0 V, 1);        //VIH1=1.1V VIL1=0V
    //-----------------------set all input FIXL--------------------------------------------//
    Pinfmt_AllLow();
    //-----------------------set DC test condition(OS_HIGH)--------------------------------//
    DC_ISVM( 100 UA, 200 UA, -200 UA, 2 V, -0.3 V, 1.2 V, -0.6 V, 1.0 V, 0.2 V, UT_ON, 1);  //force 100UA, upper limit=1.0V,lower limit=0.2V
    //--------------------------power on---------------------------------------------------//
    PowerOn();
    //--------------------------excute DC test---------------------------------------------//
    MeasPin( "ALLPIN", 1 MS);      //measure target:ALLPIN
    //-----------------------set DC test condition(OS_LOW)---------------------------------//
    DC_ISVM(-100 UA, 200 UA, -200 UA, 0.3 V, -2 V, -1.2 V, 0.6 V, -0.2 V, -1.0 V, UT_ON, 1); //force -100UA, upper limit=-0.2V,lower limit=-1.0V
    //--------------------------excute DC test---------------------------------------------//
    MeasPin( "ALLPIN", 1 MS);      //measure target:ALLPIN 
    //--------------------------power off--------------------------------------------------//
    PowerOff();
}

void t_Leakage()
{/*
    //------------------------set VS condition---------------------------------------------//
    VS_VSIM(   ,    , 3.3 V, 0.0 V, 400 MA, -400 MA, 400 MA, -200 MA, 0, 0);      //VDD1=1.8V
    VS_VSIM(   ,    , 3.3 V, 0.0 V, 400 MA, -400 MA, 400 MA, -200 MA, 0, 0);      //VDD2=1.1V
    VS_VSIM(   ,    , 3.3 V, 0.0 V, 400 MA, -400 MA, 400 MA, -200 MA, 0, 0);      //VDDQ=1.1V
    //--------------------------set VI-----------------------------------------------------//
    VIN_Set(     ,   ,  );             //VIH1=1.1V VIL1=0V
    //-----------------------set all input FIXL--------------------------------------------//
    
    //-----------------------set DC test condition(IIH)------------------------------------//
    DC_VSIM(      ,     ,      ,      ,      ,      ,      ,     ,     ,       , 10);  //force 1.1V; measure limit:-4uA-4uA
    //--------------------------power on---------------------------------------------------//
    
    //--------------------------excute DC test---------------------------------------------//
    MeasPin(        , 1 MS);     //measure target:INPIN
    //-----------------------set all input FIXH--------------------------------------------//
    Pinfmt_AllHigh();
    //-----------------------set DC test condition(IIL)------------------------------------//
    DC_VSIM(      ,     ,      ,      ,      ,      ,      ,     ,     ,       , 10);  //force 0V; measure limit:-4uA-4uA
    //--------------------------excute DC test---------------------------------------------//
    MeasPin(        , 1 MS);     //measure target:INPIN   
    //--------------------------power off--------------------------------------------------//

*/
}




void t_IDD3P1()
{/*
    //void LevFunc(double VDD1, double VDD2, double VDDQ)
                                                                                 //VDD1=1.8V VDD2=1.1V VDDQ=1.1V
    //void VS_VSIM(int vsno, double voltage, double Smax, double Smin, double Mmax, double Mmin, double Cmax, double Cmin, double hlimit, double llimit)
    VS_VSIM(1,     , 3.3 V, 0.0 V, 400 MA, -400 MA, 400 MA, -200 MA,     ,     );//set VDD1 measure condition
    //void TFUNC(double rate, double tDQSCK, double tDQSQ)
                                                                                 //rate=3.5ns tDQSCK=0.4ns  tDQSQ=2.2ns
    //void PFUNC(double wl, double rl)
                                                                                 //wl=4  rl=6
    //void RegFunc(int MR01,int MR02,int MR03,int MR04, int MR11,int MR12,int MR14,int MR22, double rate)
    RegFunc(0x8d,0x00,0x32,0x03,0x02,0x1e,0x1e,0x00,3.5 NS); 
    //power on in sequence
    
    //run pattern under background
    
    //excute DC measure
    
    //stop pattern
    
    //power off in sequence

*/
}


void t_533Mbps_BurstWR()
{/*
    //void LevFunc(double VDD1, double VDD2, double VDDQ)
                                                                                                         //VDD1=1.8V VDD2=1.1V VDDQ=1.1V
    //void TFUNC(double rate, double tDQSCK, double tDQSQ)      
                                                                                                         //rate=3.75ns tDQSCK=0.4ns  tDQSQ=2.2ns
    //void PFUNC(double wl, double rl)
                                                                                                         //wl=4  rl=6
    //void RegFunc(int MR01,int MR02,int MR03,int MR04, int MR11,int MR12,int MR14,int MR22, double rate)
    RegFunc(0x8d,0x00,0x32,0x03,0x00,0x2b,0x2b,0x00,3.75 NS); 
    //power on in sequence
   
    //set Register value 
                                                //TPH=0
                                                //TPH2=0
    //run pattern and judge P/F

    //power off in sequence
*/
}


