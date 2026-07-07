#include "pinlist.h"

/*
static void ulCreatePinListWithNumber(char *plst, int type, int num)
{
                                                //create pinlist name
                                                //set pin type
                                                //add pin number
}
*/

/*
static void ulCreatePinListWithList(char *plst, int type, ...)
{
	va_list va;
	char   *ap;

	va_start(va, type);
                                                //create pinlist group name
                                                //set pin type      
	while((ap = va_arg(va, char *))!= NULL)
	{
                                                //append pinlist to a pinlist group
	}
	va_end(va);
}
*/

void DefinePinList()
{/*
	//---------------------define VS pins-------------------------------//
	ulCreatePinListWithNumber("VDD1", UT_PINTYPE_VS, 1 );
        ulCreatePinListWithNumber("VDD2", UT_PINTYPE_VS,   );         //create VS pin ¨VDD2¨ 	
                                                                      //create VS pin ¨VDDQ¨ 	
	
	
	
	//---------------------define DR pins-------------------------------//
	ulCreatePinListWithNumber("CK_c_A", UT_PINTYPE_PIN, 7 	);
	ulCreatePinListWithNumber("CK_t_A", UT_PINTYPE_PIN, 8 	);	
	ulCreatePinListWithNumber("CK_c_B", UT_PINTYPE_PIN, 71 	);	
	ulCreatePinListWithNumber("CK_t_B", UT_PINTYPE_PIN, 72 	);	
	ulCreatePinListWithList("CK_c",	UT_PINTYPE_PIN,	"CK_c_A","CK_c_B",NULL);	
	ulCreatePinListWithList("CK_t",	UT_PINTYPE_PIN,	"CK_t_A","CK_t_B",NULL);
		
	ulCreatePinListWithNumber("CS0_A", UT_PINTYPE_PIN,     );     //create DR pin ¨CS0-2_A&B¨	
	ulCreatePinListWithNumber("CS1_A", UT_PINTYPE_PIN,     );     //	
	ulCreatePinListWithNumber("CS2_A", UT_PINTYPE_PIN,     );     //	
	ulCreatePinListWithNumber("CS0_B", UT_PINTYPE_PIN,     );     //	
	ulCreatePinListWithNumber("CS1_B", UT_PINTYPE_PIN,     );     //	
	ulCreatePinListWithNumber("CS2_B", UT_PINTYPE_PIN,     );     //	
	ulCreatePinListWithList("CS0", UT_PINTYPE_PIN, "CS0_A","CS0_B",NULL);
	ulCreatePinListWithList("CS1", UT_PINTYPE_PIN, "CS1_A","CS1_B",NULL);
	ulCreatePinListWithList("CS2", UT_PINTYPE_PIN, "CS2_A","CS2_B",NULL);
	ulCreatePinListWithList("CS" , UT_PINTYPE_PIN, "CS0",NULL);

                                                                      //create DR pin ¨CKE0_A¨
	ulCreatePinListWithNumber("CKE1_A", UT_PINTYPE_PIN, 5  );	
	ulCreatePinListWithNumber("CKE2_A", UT_PINTYPE_PIN, 6  );	
	ulCreatePinListWithNumber("CKE0_B", UT_PINTYPE_PIN, 68 );	
	ulCreatePinListWithNumber("CKE1_B", UT_PINTYPE_PIN, 69 );	
	ulCreatePinListWithNumber("CKE2_B", UT_PINTYPE_PIN, 70 );	
	ulCreatePinListWithList("CKE0",	UT_PINTYPE_PIN,	"CKE0_A","CKE0_B",NULL);
	ulCreatePinListWithList("CKE1",	UT_PINTYPE_PIN,	"CKE1_A","CKE1_B",NULL);
	ulCreatePinListWithList("CKE2",	UT_PINTYPE_PIN,	"CKE2_A","CKE2_B",NULL);
	ulCreatePinListWithList("CKE" ,	UT_PINTYPE_PIN,	"CKE0",NULL);

	ulCreatePinListWithNumber("CA0_A", UT_PINTYPE_PIN, 9  );	
	ulCreatePinListWithNumber("CA1_A", UT_PINTYPE_PIN, 10 );	
	ulCreatePinListWithNumber("CA2_A", UT_PINTYPE_PIN, 11 );	
	ulCreatePinListWithNumber("CA3_A", UT_PINTYPE_PIN, 12 );	
	ulCreatePinListWithNumber("CA4_A", UT_PINTYPE_PIN, 13 );	
	ulCreatePinListWithNumber("CA5_A", UT_PINTYPE_PIN, 14 );	
	ulCreatePinListWithNumber("CA0_B", UT_PINTYPE_PIN, 73 );	
	ulCreatePinListWithNumber("CA1_B", UT_PINTYPE_PIN, 74 );	
	ulCreatePinListWithNumber("CA2_B", UT_PINTYPE_PIN, 75 );	
	ulCreatePinListWithNumber("CA3_B", UT_PINTYPE_PIN, 76 );	
	ulCreatePinListWithNumber("CA4_B", UT_PINTYPE_PIN, 77 );	
	ulCreatePinListWithNumber("CA5_B", UT_PINTYPE_PIN, 78 );	
	ulCreatePinListWithList("CA0", UT_PINTYPE_PIN, "CA0_A","CA0_B",NULL);
	ulCreatePinListWithList("CA1", UT_PINTYPE_PIN, "CA1_A","CA1_B",NULL);
	ulCreatePinListWithList("CA2", UT_PINTYPE_PIN, "CA2_A","CA2_B",NULL);
	ulCreatePinListWithList("CA3", UT_PINTYPE_PIN, "CA3_A","CA3_B",NULL);
	ulCreatePinListWithList("CA4", UT_PINTYPE_PIN, "CA4_A","CA4_B",NULL);
	ulCreatePinListWithList("CA5", UT_PINTYPE_PIN, "CA5_A","CA5_B",NULL);
	ulCreatePinListWithList("CA" , UT_PINTYPE_PIN, "CA0","CA1","CA2","CA3","CA4","CA5",NULL);
	
	//---------------------define IO pins-------------------------------//
	ulCreatePinListWithNumber("DQS0_t_A", UT_PINTYPE_PIN, 49 );
	ulCreatePinListWithNumber("DQS0_c_A", UT_PINTYPE_PIN, 51 );
	ulCreatePinListWithNumber("DQS0_t_B", UT_PINTYPE_PIN, 113 );
	ulCreatePinListWithNumber("DQS0_c_B", UT_PINTYPE_PIN, 115 );
	ulCreatePinListWithList("DQS0_t", UT_PINTYPE_PIN, "DQS0_t_A","DQS0_t_B",NULL);
	ulCreatePinListWithList("DQS0_c", UT_PINTYPE_PIN, "DQS0_c_A","DQS0_c_B",NULL);

	ulCreatePinListWithNumber("DQ0_A", UT_PINTYPE_PIN,     );      //create IO pin ¨DQ0_7A¨
	ulCreatePinListWithNumber("DQ1_A", UT_PINTYPE_PIN,     );      //	
	ulCreatePinListWithNumber("DQ2_A", UT_PINTYPE_PIN,     );      //	
	ulCreatePinListWithNumber("DQ3_A", UT_PINTYPE_PIN,     );      //
	ulCreatePinListWithNumber("DQ4_A", UT_PINTYPE_PIN,     );      //	
	ulCreatePinListWithNumber("DQ5_A", UT_PINTYPE_PIN,     );      //	
	ulCreatePinListWithNumber("DQ6_A", UT_PINTYPE_PIN,     );      //
	ulCreatePinListWithNumber("DQ7_A", UT_PINTYPE_PIN,     );      //	
	ulCreatePinListWithNumber("DQ0_B", UT_PINTYPE_PIN, 97  );	
	ulCreatePinListWithNumber("DQ1_B", UT_PINTYPE_PIN, 98  );
	ulCreatePinListWithNumber("DQ2_B", UT_PINTYPE_PIN, 99  );
	ulCreatePinListWithNumber("DQ3_B", UT_PINTYPE_PIN, 100 );
	ulCreatePinListWithNumber("DQ4_B", UT_PINTYPE_PIN, 101 );	
	ulCreatePinListWithNumber("DQ5_B", UT_PINTYPE_PIN, 102 );
	ulCreatePinListWithNumber("DQ6_B", UT_PINTYPE_PIN, 103 );
	ulCreatePinListWithNumber("DQ7_B", UT_PINTYPE_PIN, 104 );
	ulCreatePinListWithList("DQ0", UT_PINTYPE_PIN, "DQ0_A","DQ0_B",NULL);
	ulCreatePinListWithList("DQ1", UT_PINTYPE_PIN, "DQ1_A","DQ1_B",NULL);
	ulCreatePinListWithList("DQ2", UT_PINTYPE_PIN, "DQ2_A","DQ2_B",NULL);
	ulCreatePinListWithList("DQ3", UT_PINTYPE_PIN, "DQ3_A","DQ3_B",NULL);
	ulCreatePinListWithList("DQ4", UT_PINTYPE_PIN, "DQ4_A","DQ4_B",NULL);
	ulCreatePinListWithList("DQ5", UT_PINTYPE_PIN, "DQ5_A","DQ5_B",NULL);
	ulCreatePinListWithList("DQ6", UT_PINTYPE_PIN, "DQ6_A","DQ6_B",NULL);
	ulCreatePinListWithList("DQ7", UT_PINTYPE_PIN, "DQ7_A","DQ7_B",NULL);

                                                                        //create IO pin ¨DMI0_A¨
	ulCreatePinListWithNumber("DMI0_B", UT_PINTYPE_PIN, 291 );
	ulCreatePinListWithList("DMI0", UT_PINTYPE_PIN, "DMI0_A","DMI0_B",NULL);

	ulCreatePinListWithNumber("DQS1_t_A", UT_PINTYPE_PIN, 50  );
	ulCreatePinListWithNumber("DQS1_c_A", UT_PINTYPE_PIN, 52  );
	ulCreatePinListWithNumber("DQS1_t_B", UT_PINTYPE_PIN, 114 );
	ulCreatePinListWithNumber("DQS1_c_B", UT_PINTYPE_PIN, 116 );
	ulCreatePinListWithList("DQS1_t", UT_PINTYPE_PIN, "DQS1_t_A","DQS1_t_B",NULL);
	ulCreatePinListWithList("DQS1_c", UT_PINTYPE_PIN, "DQS1_c_A","DQS1_c_B",NULL);
	ulCreatePinListWithList("DQS_t", UT_PINTYPE_PIN, "DQS0_t","DQS1_t",NULL);
	ulCreatePinListWithList("DQS_c", UT_PINTYPE_PIN, "DQS0_c","DQS1_c",NULL);

	ulCreatePinListWithNumber("DQ8_A" , UT_PINTYPE_PIN, 41  );	
	ulCreatePinListWithNumber("DQ9_A" , UT_PINTYPE_PIN, 42  );	
	ulCreatePinListWithNumber("DQ10_A", UT_PINTYPE_PIN, 43	);	
	ulCreatePinListWithNumber("DQ11_A", UT_PINTYPE_PIN, 44  );
	ulCreatePinListWithNumber("DQ12_A", UT_PINTYPE_PIN, 45  );	
	ulCreatePinListWithNumber("DQ13_A", UT_PINTYPE_PIN, 46  );	
	ulCreatePinListWithNumber("DQ14_A", UT_PINTYPE_PIN, 47  );
	ulCreatePinListWithNumber("DQ15_A", UT_PINTYPE_PIN, 48  );	
	ulCreatePinListWithNumber("DQ8_B" , UT_PINTYPE_PIN, 105 );	
	ulCreatePinListWithNumber("DQ9_B" , UT_PINTYPE_PIN, 106 );
	ulCreatePinListWithNumber("DQ10_B", UT_PINTYPE_PIN, 107 );
	ulCreatePinListWithNumber("DQ11_B", UT_PINTYPE_PIN, 108 );
	ulCreatePinListWithNumber("DQ12_B", UT_PINTYPE_PIN, 109 );	
	ulCreatePinListWithNumber("DQ13_B", UT_PINTYPE_PIN, 110 );
	ulCreatePinListWithNumber("DQ14_B", UT_PINTYPE_PIN, 111 );
	ulCreatePinListWithNumber("DQ15_B", UT_PINTYPE_PIN, 112 );
	ulCreatePinListWithList("DQ8" ,	UT_PINTYPE_PIN, "DQ8_A","DQ8_B",NULL);
	ulCreatePinListWithList("DQ9" ,	UT_PINTYPE_PIN, "DQ9_A","DQ9_B",NULL);
	ulCreatePinListWithList("DQ10",	UT_PINTYPE_PIN, "DQ10_A","DQ10_B",NULL);
	ulCreatePinListWithList("DQ11",	UT_PINTYPE_PIN, "DQ11_A","DQ11_B",NULL);
	ulCreatePinListWithList("DQ12",	UT_PINTYPE_PIN, "DQ12_A","DQ12_B",NULL);
	ulCreatePinListWithList("DQ13",	UT_PINTYPE_PIN, "DQ13_A","DQ13_B",NULL);
	ulCreatePinListWithList("DQ14",	UT_PINTYPE_PIN, "DQ14_A","DQ14_B",NULL);
	ulCreatePinListWithList("DQ15",	UT_PINTYPE_PIN, "DQ15_A","DQ15_B",NULL);

	ulCreatePinListWithNumber("DMI1_A", UT_PINTYPE_PIN, 290 );
	ulCreatePinListWithNumber("DMI1_B", UT_PINTYPE_PIN, 292 );
	ulCreatePinListWithList("DMI1",	UT_PINTYPE_PIN,	"DMI1_A","DMI1_B",NULL);
	ulCreatePinListWithList("DMI" ,	UT_PINTYPE_PIN,	"DMI0","DMI1",NULL);

	ulCreatePinListWithNumber("RST_n"  , UT_PINTYPE_PIN, 15  );
	ulCreatePinListWithNumber("ODTCA_A", UT_PINTYPE_PIN, 293 );
	ulCreatePinListWithNumber("ODTCA_B", UT_PINTYPE_PIN, 294 );
	ulCreatePinListWithList("ODTCA", UT_PINTYPE_PIN, "ODTCA_A","ODTCA_B",NULL);

	
	ulCreatePinListWithList("DQ",    UT_PINTYPE_PIN, "DQ0","DQ1","DQ2","DQ3","DQ4","DQ5","DQ6","DQ7","DQ8","DQ9","DQ10","DQ11","DQ12","DQ13","DQ14","DQ15",NULL);
	ulCreatePinListWithList("DQID" , UT_PINTYPE_PIN, "DQ0_A","DQ1_A","DQ2_A","DQ3_A","DQ4_A","DQ5_A","DQ6_A","DQ7_A",NULL);
                                                                             //append all DR pins into ¨INPIN¨ pinlist group(include RST_n,CK_t,CK_c,CS,CKE,CA,ODTCA)
                                                                             //append all IO pins into ¨OUTPIN¨ pinlist group(include DQ,DMI,DQS_t,DQS_c)
                                                                             //append all pins into ¨ALLPIN¨ pinlist group(include DINPIN,OUTPIN)
	
*/
}
