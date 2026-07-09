#include "common.h"
//RegHandle REG_ = -1;
PinHandle PIN_ = -1;


void start_pattern( char *patfile)
{
	char pat_path[50] ;
	sprintf(pat_path, "./%s", patfile);

	FctHandle h = UTL_GetFctHandle();
	UTL_SetFctFailInhibit	(h, UT_ON);
	UTL_SetFctMpatName(h, pat_path);        //set pattern name
	UTL_SetFctStartPc(h, 0x0);              //set start pattern count:0 
	UTL_SetFctNoWait	(h, UT_OFF);	//not to run pattern in background
	UTL_StartFct(h);                        //run pattern but not judge P/F
	UTL_DeleteHandle	(h);
}

void runtest_pattern( char *patfile)
{
	char pat_path[50] ;
	sprintf(pat_path, "./%s", patfile);

	FctHandle h = UTL_GetFctHandle();
	UTL_SetFctFailInhibit	(h, UT_ON);
	UTL_SetFctMpatName	(h, pat_path);
	UTL_SetFctStartPc	(h, 0x0);
	UTL_SetFctNoWait	(h, UT_OFF);	//not to run pattern in background
	UTL_MeasFct(h);                         //run pattern and judge P/F
	UTL_DeleteHandle	(h);
}

void start_pattern_nowait(char *patfile)
{
	char pat_path[50];
	sprintf(pat_path, "./%s", patfile);

	FctHandle h = UTL_GetFctHandle();
	UTL_SetFctFailInhibit	(h, UT_ON);
	UTL_SetFctMpatName	(h, pat_path);
	UTL_SetFctStartPc	(h, 0x0);
        UTL_SetFctNoWait(h, UT_ON);             	//run pattern in background
        UTL_StartFct(h);                                        //
	UTL_DeleteHandle	(h);
}











