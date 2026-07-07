// ################################################################################
// # NOTICE: THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,      #
// # EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF           #
// # MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.       #
// # IN NO EVENT SHALL ADVANTEST BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER        #
// # LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING      #
// # FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER          #
// # DEALINGS IN THE SOFTWARE.                                                    #
// ################################################################################
#ifndef		___Reg_H___
#define		___Reg_H___
#ifdef		__cplusplus
extern "C" {
#endif	//	__cplusplus

#include "testitem.h"

void	SetRegValue(RadioButton reg, USlider value);
void	RegFunc(int MR01,int MR02,int MR03,int MR04, 
                int MR11,int MR12,int MR14,int MR22, double rate);

#ifdef		__cplusplus
};
#endif	//	__cplusplus
#endif	//	___Reg_H___
