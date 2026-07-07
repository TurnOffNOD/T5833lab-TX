################################################################################
# NOTICE: THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,      #
# EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF           #
# MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.       #
# IN NO EVENT SHALL ADVANTEST BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER        #
# LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING      #
# FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER          #
# DEALINGS IN THE SOFTWARE.                                                    #
################################################################################
PAT	                =                                    \
                          PatIdd3ps.mpa                      \
                          PatIdd3p.mpa                      \
                          PatBurstWR.mpa                   \


TRANS                   = trans
TRANSOPT                = 
TARGET                  = ${PAT}          
DFILES                  = ${PAT:.mpa=.d}  
SRC                     = ${PAT:.mpa=.asc}
all:                    ${TARGET}
clean:
			@${RM} *.mpa *.d
%.mpa:%.asc
			${TRANS} ${TRANSOPT} $<
			cp *.mpa ../../test
%.d:%.asc
			-@grep "^\s*\(PRO\|MPAT\|SUBR\|SCRAM\)[[:blank:]]"  $< | sed 's/\(PRO\|MPA\|SUB\|SCR\)[TRAM]*\s\+\([A-Za-z0-9_]\+\).*/\2.\L\1: \\/' > $@
			-@echo "$<\\" >> $@
			-@grep INSERT $<|sed s'/\s*INSERT\s\([A-Za-z0-9_]\+\).*/\1.asc \\/' >> $@
			-@echo "" >> $@
-include                ${DFILES}
