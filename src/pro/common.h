#ifndef _COMMON_H
#define _COMMON_H

#define C16G

#include <math.h>
#include <string.h>
#include <sys/types.h>
#include <sys/time.h>
#include <regex.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdarg.h>
#include <time.h>
#include <test.h>
#include <UTHN.h>
#include <UTSC.h>
#include <dataprocess.h>


extern RegHandle REG_;
extern PinHandle PIN_;

//#define DDUTCNT		4  




//typedef int DUT_MASK;
//typedef struct
//{
//	char pinname[100];
//	int pinno;
//	char vsname[100];
//	int vsno;
//} PIN_STRUCT;
//
//
//typedef struct
//{
//	char szData[128+1];
//}string;
/************************ variable *********************/
//extern PIN_STRUCT g_pinlist[400];  //for T5503HS2 the number is bigger
//extern char strNextSeq[DDUTCNT][100];
//extern bool bFlowDutActive[DDUTCNT];
//extern int g_die_X[DDUTCNT];
//extern int g_die_Y[DDUTCNT];
//extern int g_BinNo[DDUTCNT];
//extern char *g_BinName[DDUTCNT];
//extern int g_Rejected[DDUTCNT];
//extern int g_ForcePassed[DDUTCNT];
//extern double g_tRjectTitemTime[DDUTCNT];
//extern char *DeviceName;
//extern char *LotNumber; 
//extern char *ProberID;
//extern char *WaferId;
//extern unsigned int shotcounter;
//extern char *WaferSlotNumber;
//extern int FK[20];
//extern char *current_cp;



//extern int  BL;
//extern char *BT;
//extern int CL;
//extern int AL;
//extern int CWL;
//extern int WR;
//extern char *PPD;
//extern char *TDQS;
//extern int 	TPH1;
//extern int 	TPH2;

//extern double HIZ;
//extern double RZQ;
//extern double tDQSCK;
//extern double tDQSQ;
//extern double DQS2DQ;
//extern double tDQSS;
//extern int BankAct;



/************************ function *********************/
void start_pattern( char *patfile);
void runtest_pattern( char *patfile);
void start_pattern_nowait(char *patfile);

/************************ define *********************/

//#define HIGHBITinPATUP 1
//#define LOWBITinPATUP 0
//
//#define PASS     0
//#define FAIL     1
//#define NOTTEST  -1
//
//#define TRUE  1
//#define FALSE 0

#define NA    *1e-9
#define UA    *1e-6
#define MA    *1e-3
#define  A    *1.0
#define UV    *1e-6
#define MV    *1e-3
#define  V    *1.0

#define PS    *1e-12
#define NS    *1e-9
#define US    *1e-6
#define MS    *1e-3
#define  S    *1.0

#define R10M						200.0 *1e-9
#define	R20M						100.0  *1e-9
#define R25M						180.0  *1e-9
#define	R30M						66.7  *1e-9
#define R800M           		        	2.5  *1e-9
#define	R833M						2.4  *1e-9
#define R1600M            		        	1.25  *1e-9
#define	R2400M						0.833  *1e-9
#define	R3200M						0.625  *1e-9
#define	R3733M						0.535  *1e-9
#define	R4267M						0.468  *1e-9

#define P(pin,...)                                              \
( {                                                             \
  if ( PIN_ != -1 ) UTL_DeleteHandle( PIN_);                    \
  PIN_ = UTL_GetPinHandle();                                    \
  UTL_InitializePinHandle( PIN_);                               \
  __VA_ARGS__;                                                  \
  UTL_SendPin( PIN_, pin);                                      \
} )
#define P_PART				UTL_SetPinSendMode	    	( PIN_, UT_PIN_PART   )
#define P_PPAT                          UTL_SetPinDbmPinPattern     ( PIN_, UT_ON         )
#define P_FIXL                          UTL_SetPinDrWaveform        ( PIN_, UT_WAV_FIXL   )
#define P_FIXH                          UTL_SetPinDrWaveform        ( PIN_, UT_WAV_FIXH	  )
#define P_NRZB                          UTL_SetPinDrWaveform        ( PIN_, UT_WAV_NRZB	  )
#define P_INRZB                         UTL_SetPinDrWaveform        ( PIN_, UT_WAV_INRZB  )
#define P_NRZC                          UTL_SetPinDrWaveform        ( PIN_, UT_WAV_NRZC	  )
#define P_INRZC                         UTL_SetPinDrWaveform        ( PIN_, UT_WAV_INRZC  )
#define P_RZO                           UTL_SetPinDrWaveform        ( PIN_, UT_WAV_RZO	  )
#define P_IRZO                          UTL_SetPinDrWaveform        ( PIN_, UT_WAV_IRZO	  )
#define P_RZZ                           UTL_SetPinDrWaveform        ( PIN_, UT_WAV_RZZ	  )
#define P_IRZZ                          UTL_SetPinDrWaveform        ( PIN_, UT_WAV_IRZZ	  )
#define P_RZX                           UTL_SetPinDrWaveform        ( PIN_, UT_WAV_RZX	  )
#define P_IRZX                          UTL_SetPinDrWaveform        ( PIN_, UT_WAV_IRZX	  )
#define P_XOR                           UTL_SetPinDrWaveform        ( PIN_, UT_WAV_XOR	  )
#define P_IXOR                          UTL_SetPinDrWaveform        ( PIN_, UT_WAV_IXOR	  )
#define P_XORBC                         UTL_SetPinDrWaveform        ( PIN_, UT_WAV_XORBC  )
#define P_IXORBC                        UTL_SetPinDrWaveform        ( PIN_, UT_WAV_IXORBC )
#define P_DNRZ                          UTL_SetPinDrWaveform        ( PIN_, UT_WAV_DNRZ	  )
#define P_IDNRZ                         UTL_SetPinDrWaveform        ( PIN_, UT_WAV_IDNRZ  )
#define P_OPEN                          UTL_SetPinOpen              ( PIN_, UT_ON        )
#define P_VSOPEN                        UTL_SetPinVsDisconnect      ( PIN_, UT_ON        )
#define P_HINIT                         UTL_SetPinInit              ( PIN_, UT_PIN_HINIT  )
#define P_LINIT                         UTL_SetPinInit              ( PIN_, UT_PIN_HINIT  )
#define P_BCLK(n)                       UTL_SetPinDrClock           ( PIN_, UT_PIN_BCLK, n)
#define P_CCLK(n)                       UTL_SetPinDrClock           ( PIN_, UT_PIN_CCLK, n)
#define P_PSM                           UTL_SetPinPsm               ( PIN_, UT_ON)
#define P_RDSM                          UTL_SetPinRdsm              ( PIN_, UT_ON)
#define P_EINV                          UTL_SetPinEinv              ( PIN_, UT_ON)
#define P_EINVSTRB(n)			UTL_AddPinEinvStrbNumber	( PIN_, n)
#define P_MATCH                         UTL_SetPinMatchMode         ( PIN_, UT_SIG_MATCH)
#define P_MATCHGROUP                    UTL_SetPinMatchMode         ( PIN_, UT_SIG_MATCHGROUP)
#define P_MPG_SEL1 			UTL_SetPinMatchGroup	    ( PIN_, UT_MPG_SEL1, UT_ON)
#define P_MPG_SEL2			UTL_SetPinMatchGroup	    ( PIN_, UT_MPG_SEL2, UT_ON)
#define P_INH(n)                        UTL_SetPinViNumber          ( PIN_, n), UTL_SetPinHvDr              ( PIN_, UT_ON)
#define P_IOC                           UTL_SetPinIoCtrl            ( PIN_, UT_ON)
#define P_IN(n)                         UTL_SetPinViNumber          ( PIN_, n)
#define P_OUT(n)                        UTL_SetPinVoNumber          ( PIN_, n), UTL_SetPinTerm( PIN_, UT_OFF)
#define P_OUTL(n)                       UTL_SetPinVoNumber          ( PIN_, n), UTL_SetPinTerm( PIN_, UT_ON)
#define P_VT(n)                         UTL_SetPinVtNumber          ( PIN_, n)
#define P_IL(n)                         UTL_SetPinIlNumber          ( PIN_, n), UTL_SetPinPl( PIN_,UT_PIN_PL)
#define P_STRB(s,c)                     UTL_AddPinStrbCpeNumber     ( PIN_, s, c)
#define P_EXPA(s)                       UTL_AddPinStrbChannel       ( PIN_, s, 1), \
                                        UTL_AddPinExpStrbNumber     ( PIN_, s, UT_PIN_EXP_A)
#define P_EXPB(s)                       UTL_AddPinStrbChannel       ( PIN_, s, 2), \
                                        UTL_AddPinExpStrbNumber     ( PIN_, s, UT_PIN_EXP_B)
#define P_EXP_CH1_FL(s)                 UTL_AddPinStrbChannel       ( PIN_, s, 1)
#define P_EXP_CH1_FH(s)                 UTL_AddPinStrbChannel       ( PIN_, s, 1)
#define P_EXP_CH2_FL(s)                 UTL_AddPinStrbChannel       ( PIN_, s, 2)
#define P_EXP_CH2_FH(s)                 UTL_AddPinStrbChannel       ( PIN_, s, 2)
#define P_DRDLY(n)                      UTL_SetPinDrDelay           ( PIN_, n)
#define P_DREDLY(n)                     UTL_SetPinDreDelay          ( PIN_, n)
#define P_CPEDLY(n)                     UTL_SetPinCpeDelay          ( PIN_, n)
#define P_EXPDLY(n)                     UTL_SetPinExpDelay          ( PIN_, n)
#define P_DRCYCDLY(n)                   UTL_SetPinModeDrDelay       ( PIN_, UT_DELAY_CYCLE, n)
#define P_DRECYCDLY(n)                  UTL_SetPinModeDreDelay      ( PIN_, UT_DELAY_CYCLE, n)
#define P_CPECYCDLY(n)                  UTL_SetPinModeCpeDelay      ( PIN_, UT_DELAY_CYCLE, n)
#define P_EXPCYCDLY(n)                  UTL_SetPinModeExpDelay      ( PIN_, UT_DELAY_CYCLE, n)
#define P_DRECLK(n)                     UTL_SetPinDreClock          ( PIN_, n)
#define P_DRE(n)                        UTL_SetPinDreNumber         ( PIN_, n)
#define P_DRENRZ                        UTL_SetPinDreWaveform       ( PIN_, UT_DREWAV_NRZ)
#define P_DRERZ                         UTL_SetPinDreWaveform       ( PIN_, UT_DREWAV_RZ)
#define P_DREDNRZ                       UTL_SetPinDreWaveform       ( PIN_, UT_DREWAV_DNRZ)
#define PDSA(cyp,...)                                           \
( {                                                             \
  void (*PDS)(PinHandle,RadioButton,RadioButton)                \
    = UTL_AddPinPdsA;                                           \
  int    CYP = cyp;                                             \
  __VA_ARGS__;                                                  \
} )
#define PDSB(cyp,...)                                           \
( {                                                             \
  void (*PDS)(PinHandle,RadioButton,RadioButton)                \
    = UTL_AddPinPdsB;                                           \
  int    CYP = cyp;                                             \
  __VA_ARGS__;                                                  \
} )
#define PDSD(cyp,...)                                           \
( {                                                             \
  void (*PDS)(PinHandle,RadioButton,RadioButton)                \
    = UTL_AddPinPdsD;                                           \
  int    CYP = cyp;                                             \
  __VA_ARGS__;                                                  \
} )
#define P_C(n)                          PDS( PIN_, UT_SIG_C   (n), CYP)
#define P_I_C(n)                        PDS( PIN_, UT_SIG_I_C (n), CYP)
#define P_D(n)                          PDS( PIN_, UT_SIG_D   (n), CYP)
#define P_SD(n)                         PDS( PIN_, UT_SIG_SD  (n), CYP)
#define P_I_D(n)                        PDS( PIN_, UT_SIG_I_D (n), CYP)
#define P_I_SD(n)                       PDS( PIN_, UT_SIG_I_SD(n), CYP)
#define P_X(n)                          PDS( PIN_, UT_SIG_X   (n), CYP)
#define P_Y(n)                          PDS( PIN_, UT_SIG_Y   (n), CYP)
#define P_I_X(n)                        PDS( PIN_, UT_SIG_I_X   (n), CYP)
#define P_I_Y(n)                        PDS( PIN_, UT_SIG_I_Y   (n), CYP)
#define P_FH                            PDS( PIN_, UT_SIG_FH, CYP)
#define P_FL                            PDS( PIN_, UT_SIG_FL, CYP)
#define P_WT                            PDS( PIN_, UT_SIG_WT, CYP)
#define P_RD                            PDS( PIN_, UT_SIG_RD, CYP)



#define	X0	(UT_SIG_X(0 ))
#define	X1	(UT_SIG_X(1 ))
#define	X2	(UT_SIG_X(2 ))
#define	X3	(UT_SIG_X(3 ))
#define	X4	(UT_SIG_X(4 ))
#define	X5	(UT_SIG_X(5 ))
#define	X6	(UT_SIG_X(6 ))
#define	X7	(UT_SIG_X(7 ))
#define	X8	(UT_SIG_X(8 ))
#define	X9	(UT_SIG_X(9 ))
#define	X10	(UT_SIG_X(10))
#define	X11	(UT_SIG_X(11))
#define	X12	(UT_SIG_X(12))
#define	X13	(UT_SIG_X(13))
#define	X14	(UT_SIG_X(14))
#define	X15	(UT_SIG_X(15))
#define	X16	(UT_SIG_X(16))
#define	X17	(UT_SIG_X(17))
#define	X18	(UT_SIG_X(18))
#define	X19	(UT_SIG_X(19))
#define	X20	(UT_SIG_X(20))
#define	X21	(UT_SIG_X(21))
#define	X22	(UT_SIG_X(22))
#define	X23	(UT_SIG_X(23))
#define	X24	(UT_SIG_X(24))
#define	X25	(UT_SIG_X(25))
#define	X26	(UT_SIG_X(26))
#define	X27	(UT_SIG_X(27))
#define	X28	(UT_SIG_X(28))
#define	X29	(UT_SIG_X(29))
#define	X30	(UT_SIG_X(30))
#define	X31	(UT_SIG_X(31))
#define	Y0	(UT_SIG_Y(0 ))
#define	Y1	(UT_SIG_Y(1 ))
#define	Y2	(UT_SIG_Y(2 ))
#define	Y3	(UT_SIG_Y(3 ))
#define	Y4	(UT_SIG_Y(4 ))
#define	Y5	(UT_SIG_Y(5 ))
#define	Y6	(UT_SIG_Y(6 ))
#define	Y7	(UT_SIG_Y(7 ))
#define	Y8	(UT_SIG_Y(8 ))
#define	Y9	(UT_SIG_Y(9 ))
#define	Y10	(UT_SIG_Y(10))
#define	Y11	(UT_SIG_Y(11))
#define	Y12	(UT_SIG_Y(12))
#define	Y13	(UT_SIG_Y(13))
#define	Y14	(UT_SIG_Y(14))
#define	Y15	(UT_SIG_Y(15))
#define	Y16	(UT_SIG_Y(16))
#define	Y17	(UT_SIG_Y(17))
#define	Y18	(UT_SIG_Y(18))
#define	Y19	(UT_SIG_Y(19))
#define	Y20	(UT_SIG_Y(20))
#define	Y21	(UT_SIG_Y(21))
#define	Y22	(UT_SIG_Y(22))
#define	Y23	(UT_SIG_Y(23))
#define	Y24	(UT_SIG_Y(24))
#define	Y25	(UT_SIG_Y(25))
#define	Y26	(UT_SIG_Y(26))
#define	Y27	(UT_SIG_Y(27))
#define	Y28	(UT_SIG_Y(28))
#define	Y29	(UT_SIG_Y(29))
#define	Y30	(UT_SIG_Y(30))
#define	Y31	(UT_SIG_Y(31))
#define	C0	(UT_SIG_C(0 ))
#define	C1	(UT_SIG_C(1 ))
#define	C2	(UT_SIG_C(2 ))
#define	C3	(UT_SIG_C(3 ))
#define	C4	(UT_SIG_C(4 ))
#define	C5	(UT_SIG_C(5 ))
#define	C6	(UT_SIG_C(6 ))
#define	C7	(UT_SIG_C(7 ))
#define	C8	(UT_SIG_C(8 ))
#define	C9	(UT_SIG_C(9 ))
#define	C10	(UT_SIG_C(10))
#define	C11	(UT_SIG_C(11))
#define	C12	(UT_SIG_C(12))
#define	C13	(UT_SIG_C(13))
#define	C14	(UT_SIG_C(14))
#define	C15	(UT_SIG_C(15))
#define	C16	(UT_SIG_C(16))
#define	C17	(UT_SIG_C(17))
#define	C18	(UT_SIG_C(18))
#define	C19	(UT_SIG_C(19))
#define	C20	(UT_SIG_C(20))
#define	C21	(UT_SIG_C(21))
#define	C22	(UT_SIG_C(22))
#define	C23	(UT_SIG_C(23))
#define	C24	(UT_SIG_C(24))
#define	C25	(UT_SIG_C(25))
#define	C26	(UT_SIG_C(26))
#define	C27	(UT_SIG_C(27))
#define	C28	(UT_SIG_C(28))
#define	C29	(UT_SIG_C(29))
#define	C30	(UT_SIG_C(30))
#define	C31	(UT_SIG_C(31))
#define	D0	(UT_SIG_D(0 ))
#define	D1	(UT_SIG_D(1 ))
#define	D2	(UT_SIG_D(2 ))
#define	D3	(UT_SIG_D(3 ))
#define	D4	(UT_SIG_D(4 ))
#define	D5	(UT_SIG_D(5 ))
#define	D6	(UT_SIG_D(6 ))
#define	D7	(UT_SIG_D(7 ))
#define	D8	(UT_SIG_D(8 ))
#define	D9	(UT_SIG_D(9 ))
#define	D10	(UT_SIG_D(10))
#define	D11	(UT_SIG_D(11))
#define	D12	(UT_SIG_D(12))
#define	D13	(UT_SIG_D(13))
#define	D14	(UT_SIG_D(14))
#define	D15	(UT_SIG_D(15))
#define	D16	(UT_SIG_D(16))
#define	D17	(UT_SIG_D(17))
#define	D18	(UT_SIG_D(18))
#define	D19	(UT_SIG_D(19))
#define	D20	(UT_SIG_D(20))
#define	D21	(UT_SIG_D(21))
#define	D22	(UT_SIG_D(22))
#define	D23	(UT_SIG_D(23))
#define	D24	(UT_SIG_D(24))
#define	D25	(UT_SIG_D(25))
#define	D26	(UT_SIG_D(26))
#define	D27	(UT_SIG_D(27))
#define	D28	(UT_SIG_D(28))
#define	D29	(UT_SIG_D(29))
#define	D30	(UT_SIG_D(30))
#define	D31	(UT_SIG_D(31))
#define	SD0	(UT_SIG_SD(0 ))
#define	SD1	(UT_SIG_SD(1 ))
#define	SD2	(UT_SIG_SD(2 ))
#define	SD3	(UT_SIG_SD(3 ))
#define	SD4	(UT_SIG_SD(4 ))
#define	SD5	(UT_SIG_SD(5 ))
#define	SD6	(UT_SIG_SD(6 ))
#define	SD7	(UT_SIG_SD(7 ))
#define	SD8	(UT_SIG_SD(8 ))
#define	SD9	(UT_SIG_SD(9 ))
#define	SD10	(UT_SIG_SD(10))
#define	SD11	(UT_SIG_SD(11))
#define	SD12	(UT_SIG_SD(12))
#define	SD13	(UT_SIG_SD(13))
#define	SD14	(UT_SIG_SD(14))
#define	SD15	(UT_SIG_SD(15))
#define	SD16	(UT_SIG_SD(16))
#define	SD17	(UT_SIG_SD(17))
#define	SD18	(UT_SIG_SD(18))
#define	SD19	(UT_SIG_SD(19))
#define	SD20	(UT_SIG_SD(20))
#define	SD21	(UT_SIG_SD(21))
#define	SD22	(UT_SIG_SD(22))
#define	SD23	(UT_SIG_SD(23))
#define	SD24	(UT_SIG_SD(24))
#define	SD25	(UT_SIG_SD(25))
#define	SD26	(UT_SIG_SD(26))
#define	SD27	(UT_SIG_SD(27))
#define	SD28	(UT_SIG_SD(28))
#define	SD29	(UT_SIG_SD(29))
#define	SD30	(UT_SIG_SD(30))
#define	SD31	(UT_SIG_SD(31))
#define	FL	(UT_SIG_FL    )
#define	FH	(UT_SIG_FH    )




#define START_DUT_LOOP(dutgroup)                            \
{                                                           \
	DutCursor dutcsr;                                       \
	UT_DUT    dut;                                          \
	dutcsr = UTL_GetDutCursor(dutgroup);                    \
	while ( (dut=UTL_NextDut(dutcsr)) != UT_NOMORE )        \
	{

#define END_DUT_LOOP                                        \
	}                                                       \
	UTL_DeleteCursor(dutcsr);                               \
}








#endif
