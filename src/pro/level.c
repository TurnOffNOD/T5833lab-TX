#include "common.h"
#include "testitem.h"

void VIN_Set(double vihigh, double vilow, int vino)
{
    ViHandle h = UTL_GetViHandle();
    UTL_SetViHigh(h, vihigh);          //set vih
    UTL_SetViLow (h, vilow);           //set vil
    UTL_SendVi   (h, vino);            //send above voltage setting to vi number
    UTL_DeleteHandle(h);
}

void VOUT_Set(double vohigh, double volow, int vono)
{
    VoHandle h = UTL_GetVoHandle();
    UTL_SetVoHigh(h, vohigh);          //set voh
    UTL_SetVoLow(h, volow);            //set vol
    UTL_SendVo(h, vono);               //send above voltage setting to vo number
    UTL_DeleteHandle(h);
}

void VT_Set(double vt, int vtno)
{
    VtHandle h = UTL_GetVtHandle(); 
    UTL_SetVt(h, vt);                 //set vt
    UTL_SendVt(h, vtno);              //send above voltage setting to vt number
    UTL_DeleteHandle(h);
}

void LevFunc(double VDD1, double VDD2, double VDDQ)
{

//----------------------------VS condition------------------------------//   
 // VS_VSIM(vsno,voltage,Smax,Smin,Mmax,Mmin,Cmax,Cmin,hlimit,llimit)
    VS_VSIM(1, VDD1, 3.3 V, 0.0 V, 400 MA, -400 MA, 400 MA, -200 MA, 0, 0);
    VS_VSIM(2, VDD2, 3.3 V, 0.0 V, 400 MA, -400 MA, 400 MA, -200 MA, 0, 0);
    VS_VSIM(3, VDDQ, 3.3 V, 0.0 V, 400 MA, -400 MA, 400 MA, -200 MA, 0, 0);
   
//---------------------------level condition---------------------------//	
    double	Vih_CK 	  = VDDQ * 0.272 + 0.3 V ;
    double	Vil_CK 	  = VDDQ * 0.272 - 0.3 V ;
    double	Vih_CKE	  = VDDQ                 ;
    double	Vil_CKE	  = 0.0 V                ;
    double	Vih_ODTCA = VDDQ                 ;
    double	Vil_ODTCA = 0.0 V                ;
    double	Vih_RST	  = VDDQ                 ;
    double	Vil_RST	  = 0.0 V                ;
    double	Vih_CS 	  = VDDQ * 0.272 + 0.3 V ;
    double	Vil_CS 	  = VDDQ * 0.272 - 0.3 V ;
    double	Vih_CA 	  = VDDQ * 0.272 + 0.3 V ;
    double	Vil_CA 	  = VDDQ * 0.272 - 0.3 V ;
    double	Vih_DQ 	  = VDDQ                 ;
    double	Vil_DQ 	  = 0.0 V                ;
    double	Vih_DQS	  = VDDQ                 ;
    double	Vil_DQS	  = 0.0 V                ;
    double	Voh_DQ 	  = VDDQ * 0.2           ;
    double	Vol_DQ 	  = VDDQ * 0.2           ;
    double	Voh_DQS	  = VDDQ * 0.2           ;
    double	Vol_DQS	  = VDDQ * 0.2           ;
    double	Vtt_DQ 	  = VDDQ                 ;
    double	Vtt_DQS	  = VDDQ                 ;
    //--------------------------VIH/VIL----------------------------------//
    VIN_Set(Vih_CK,   Vil_CK, 1);          //Clock
    VIN_Set(Vih_CKE,  Vil_CKE, 2);          //Clock enable 
    VIN_Set(Vih_ODTCA,Vil_ODTCA, 3);          //ODTCA
    VIN_Set(Vih_RST,  Vil_RST, 4);          //RESET
    VIN_Set(Vih_CS,   Vil_CS, 5);          //CS Chip Select 
    VIN_Set(Vih_CA,   Vil_CA, 6);          //CA Command/Address
    VIN_Set(Vih_DQ,   Vil_DQ, 7);          //DQ
    VIN_Set(Vih_DQS,  Vil_DQS, 8);          //DQS
    //-------------------------VOH/VOL-----------------------------------//
    VOUT_Set(Voh_DQ,  Vol_DQ, 1);          //DQ
    VOUT_Set(Voh_DQS, Vol_DQS, 2);          //DQS
    //----------------------------VT-------------------------------------//
    VT_Set(Vtt_DQ, 1);                       //DQ
    VT_Set(Vtt_DQS, 2);                       //DQS
}

