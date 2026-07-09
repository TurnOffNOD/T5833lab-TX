#include "timing.h"

void TFUNC(double rate, double tDQS2DQ, double tDQSCK)
{
    TgHandle h=UTL_GetTgHandle();
    UTL_AddTgRate(h, 1, rate );  //rate is used as time, not frequency.
    UTL_AddTgBclk(h, 1, 1, rate * 0.5 );         // CLK
    UTL_AddTgCclk(h, 1, 1, rate * 1.0 );         // CLK
    UTL_AddTgBclk(h, 1, 2, rate * 0.0 );         // CKE 
    UTL_AddTgBclk(h, 1, 3, rate * 0.0 );         // ODT 
    UTL_AddTgBclk(h, 1, 4, rate * 0.0 );         // Reset
    UTL_AddTgBclk(h, 1, 5, rate * 0.0 );         // CS
    UTL_AddTgBclk(h, 1, 6, rate * 0.0 );         // CA
    UTL_AddTgBclk(h, 1, 7, rate * 0.25 + tDQS2DQ );         // DQ
    UTL_AddTgCclk(h, 1, 7, rate * 0.75 + tDQS2DQ );         // DQ
    UTL_AddTgBclk(h, 1, 8, rate * 0.5 );         // DQS
    UTL_AddTgCclk(h, 1, 8, rate * 1.0 );         // DQS

    UTL_AddTgDreL(h, 1, 1, rate * 0.25 + tDQS2DQ );         // DQ    
    UTL_AddTgDreT(h, 1, 1, rate * 0.25 + tDQS2DQ );         // DQ
    UTL_AddTgDreL(h, 1, 2, rate * 0.5 );         // DQS
    UTL_AddTgDreT(h, 1, 2, rate * 0.5 );         // DQS

    UTL_AddTgStrb(h, 1, 1, rate * 0.75 + tDQSCK );         // DQ
    UTL_AddTgStrb(h, 1, 2, rate * 1.25 + tDQSCK );         // DQ
    UTL_AddTgStrb(h, 1, 3, rate * 0.75 + tDQSCK );         // DQS
    UTL_AddTgStrb(h, 1, 4, rate * 1.25 + tDQSCK );         // DQS

    UTL_SendTg(h);
    UTL_DeleteHandle(h);
}
