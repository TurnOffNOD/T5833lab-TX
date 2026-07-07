#include "main.h"

/*
static void setIlMode(int il_mode){
	IlModeHandle h = UTL_GetIlModeHandle();
	                               //set interleave mode
                                       //send to tester
        UTL_DeleteHandle(h);
}
*/

/*
static void BurstScram()
{
	BurstScramHandle bscr = UTL_GetBurstScramHandle();
	
	UTL_SetBurstScramMode           ( bscr, UT_ON);
	UTL_SetBurstScramDdrType        ( bscr, 4);
	UTL_SetBurstScramBaseFileName   ( bscr, (char *)"BscrLp");
	UTL_SetBurstScramDataRate       ( bscr, 2);
	UTL_SetBurstScramLength         ( bscr, 16);
	UTL_SetBurstScramWrapType       ( bscr, UT_WPTSQ);
	UTL_AddBurstScramWriteSignal    ( bscr, UT_SIG_WT);
	UTL_SetBurstScramAddrUnit       ( bscr, UT_UNIT_PDS , UT_OFF);
	UTL_SetBurstScramAddrUnit       ( bscr, UT_UNIT_DFM , UT_ON );
	UTL_SetBurstScramAddrUnit       ( bscr, UT_UNIT_FP  , UT_ON );
	
	UTL_SendBurstScram( bscr);
	UTL_DeleteHandle(bscr);
}
*/

int main(int argc, char **argv)
{
	UTL_InitTest(argc, argv);

	DefinePinList();                                    //define pinlist

    PowerSequence();                                    //define power sequence
	
	//setIlMode( );                                     //set interleave mode:4
	
	UTL_SetWet();

	TestHandle h = UTL_GetTestHandle();

	UTL_SetTestAction(h, t_Contact);                       //set test action:t_Contact
    UTL_Test(h, "0_OpenShort");                             //specify test name:0_OpenShort
                                                            //set test action:t_Leakage                          
	                                                    //specify test name:1_Leakage
	                                                    //set test action:t_IDD3P1                          
	                                                    //specify test name:2_Active_power-down_Standby
	                                                    //set test action:t_533Mbps_BurstWR                          
	                                                    //specify test name:3_533Mbps_BurstWR

	UTL_DeleteHandle (h);
	return 0;
}

