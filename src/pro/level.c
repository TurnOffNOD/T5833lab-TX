#include "common.h"
#include "testitem.h"

void VIN_Set(double vihigh, double vilow, int vino)
{/*
    ViHandle h = UTL_GetViHandle();
                                       //set vih
                                       //set vil
                                       //send above voltage setting to vi number
    UTL_DeleteHandle(h);
*/}

void VOUT_Set(double vohigh, double volow, int vono)
{/*
    VoHandle h = UTL_GetVoHandle();

                                       //set voh
                                       //set vol
                                       //send above voltage setting to vo number
    UTL_DeleteHandle(h);
*/}

void VT_Set(double vt, int vtno)
{/*
    VtHandle h = UTL_GetVtHandle(); 
                                       //set vt
                                       //send above voltage setting to vt number
    UTL_DeleteHandle(h);
*/
}

void LevFunc(double VDD1, double VDD2, double VDDQ)
{
/*
//----------------------------VS condition------------------------------//   
 // VS_VSIM(vsno,voltage,Smax,Smin,Mmax,Mmin,Cmax,Cmin,hlimit,llimit)
    VS_VSIM(1, VDD1, 3.3 V, 0.0 V, 400 MA, -400 MA, 400 MA, -200 MA, 0, 0);
    VS_VSIM(2, VDD2, 3.3 V, 0.0 V, 400 MA, -400 MA, 400 MA, -200 MA, 0, 0);
    VS_VSIM(3, VDDQ, 3.3 V, 0.0 V, 400 MA, -400 MA, 400 MA, -200 MA, 0, 0);
   
//---------------------------level condition---------------------------//	
    double	Vih_CK 	  =                            ;
    double	Vil_CK 	  =                            ;
    double	Vih_CKE	  =                            ;
    double	Vil_CKE	  =                            ;
    double	Vih_ODTCA =                            ;
    double	Vil_ODTCA =                            ;
    double	Vih_RST	  =                            ;
    double	Vil_RST	  =                            ;
    double	Vih_CS 	  =                            ;
    double	Vil_CS 	  =                            ;
    double	Vih_CA 	  =                            ;
    double	Vil_CA 	  =                            ;
    double	Vih_DQ 	  =                            ;
    double	Vil_DQ 	  =                            ;
    double	Vih_DQS	  =                            ;
    double	Vil_DQS	  =                            ;
    double	Voh_DQ 	  =                            ;
    double	Vol_DQ 	  =                            ;
    double	Voh_DQS	  =                            ;
    double	Vol_DQS	  =                            ;
    double	Vtt_DQ 	  =                            ;
    double	Vtt_DQS	  =                            ;
    //--------------------------VIH/VIL----------------------------------//
    VIN_Set(Vih_CK,   Vil_CK,       );          //Clock
    VIN_Set(Vih_CKE,  Vil_CKE,      );          //Clock enable 
    VIN_Set(Vih_ODTCA,Vil_ODTCA,    );          //ODTCA
    VIN_Set(Vih_RST,  Vil_RST,      );          //RESET
    VIN_Set(Vih_CS,   Vil_CS,       );          //CS Chip Select 
    VIN_Set(Vih_CA,   Vil_CA,       );          //CA Command/Address
    VIN_Set(Vih_DQ,   Vil_DQ,       );          //DQ
    VIN_Set(Vih_DQS,  Vil_DQS,      );          //DQS
    //-------------------------VOH/VOL-----------------------------------//
    VOUT_Set(Voh_DQ,  Vol_DQ,     );          //DQ
    VOUT_Set(Voh_DQS, Vol_DQS,    );          //DQS
    //----------------------------VT-------------------------------------//
    VT_Set(Vtt_DQ,    );                       //DQ
    VT_Set(Vtt_DQS,   );                       //DQS
*/
}

