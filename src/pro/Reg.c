// ################################################################################
// # NOTICE: THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,      #
// # EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF           #
// # MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.       #
// # IN NO EVENT SHALL ADVANTEST BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER        #
// # LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING      #
// # FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER          #
// # DEALINGS IN THE SOFTWARE.                                                    #
// ################################################################################
#include <test.h>
#include <math.h>
#include "Reg.h"
#include "reg1.h"
#include "string.h"

void	SetRegValue(RadioButton reg, USlider value)
{
	RegHandle h = UTL_GetRegHandle();
	UTL_SetRegUs(h, reg, 1, value);
	UTL_SendReg(h);
	UTL_DeleteHandle(h);
} 

void	RegFunc(int MR01,int MR02,int MR03,int MR04, 
                int MR11,int MR12,int MR14,int MR22, double rate)
{

//	MR01:  BL, WR-PRE RD-PRE nWR for AP, RPST 
//	MR02:  RL, WL, WLS, rite Leveling 
//	MR03:  PU_CAL, WR-PST, PPRP, PDDS, DBI-RD, DBI-WR 
//	MR04:  Refresh rate,  
//	MR11:  DQ-ODT, CA-ODT,  
//	MR12:  VrefCA, VrefCA Range 
//	MR14:  VrefDQ, VrefDQ Range 
//	MR22:  SOC-ODT, 



        RegHandle       handle = UTL_GetRegHandle();
	D1A   ( MR01        ); printf ("MR01=%x\n",MR01);
	D1B   ( MR02        ); printf ("MR02=%x\n",MR02);
	D1C   ( MR03        ); printf ("MR03=%x\n",MR03);
	D1D   ( MR04        ); printf ("MR04=%x\n",MR04);
	D1E   ( MR11        ); printf ("MR11=%x\n",MR11);
	D1F   ( MR12        ); printf ("MR12=%x\n",MR12);
	D1G   ( MR14        ); printf ("MR14=%x\n",MR14);
	D1H   ( MR22        ); printf ("MR22=%x\n",MR22);

	BH    ( 0           );	NH    ( 0           );	BH_2  ( 0           );	NH_2  ( 0           );
	BD1   ( 1           );	ND1   ( 1           );	BD1_2 ( 1           );	ND1_2 ( 1           );
	BD2   ( 2           );	ND2   ( 2           );	BD2_2 ( 2           );	ND2_2 ( 2           );
	BD3   ( 3           );	ND3   ( 3           );	BD3_2 ( 3           );	ND3_2 ( 3           );
	BD4   ( 4           );	ND4   ( 4           );	BD4_2 ( 4           );	ND4_2 ( 4           );
	BD5   ( 5           );	ND5   ( 5           );	BD5_2 ( 5           );	ND5_2 ( 5           );
	BD6   ( 6           );	ND6   ( 6           );	BD6_2 ( 6           );	ND6_2 ( 6           );
	BD7   ( 7           );	ND7   ( 7           );	BD7_2 ( 7           );	ND7_2 ( 7           );
	
	
	XMAX  ( 0x3fff      );
	YMAX  ( 0x3ff       );


	TPH1_1( 0x00 );
	TPH2_1( 0x00 );
	TPH1_2( 0x00 );
	TPH2_2( 0x00 );

	IDX1  ( 6           );
	IDX2  ( 0x3ffd      );
	IDX3  ( 0x001e      );
	IDX4  ( 0x3ffe      );
	IDX5  ( 0x001e      );
	IDX6  ( 0x000d      );
	IDX7  ( 280 NS / rate /4 );
	IDX8  ( 0x003e      );
	REFRESH( 3.904 US    );
        UTL_SendReg( handle);
        UTL_DeleteHandle( handle);
}
