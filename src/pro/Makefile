################################################################################
# NOTICE: THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,      #
# EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF           #
# MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.       #
# IN NO EVENT SHALL ADVANTEST BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER        #
# LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING      #
# FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER          #
# DEALINGS IN THE SOFTWARE.                                                    #
################################################################################
PRO                     = ProLp4.exe
OBJ                     = common.o                               \
                          pinfmt.o                               \
                          Reg.o                               \
                          timing.o                               \
                          level.o                                \
                          pinlist.o                              \
                          power.o                                \
                          pmu.o                                  \
                          testitem.o                             \
                          main.o

EXEC                    =                                      

####################offline#####################
ifeq ($(status),offline)   
CC 		= gcc
ARCH		= ${ATFSSYSPARCH}
OS		= ${ATFSSYSPOS}
ATFSCFLAGS	= ${ATFSSYSPCFLAGS} -g
endif    
######################online#####################
ifeq ($(status),online)
CC 		= arm-marvell-linux-gnueabi-gcc
ARCH		= ${ATFSSITEARCH}
OS		= ${ATFSSITEOS}
ATFSCFLAGS	= ${ATFSSITECFLAGS} -g
endif
##################################################

CPPFLAGS                = -I${ATFSROOT}/${ARCH}/${OS}/${ATFSSYS}/include  \
                          -I${ATFSROOT}/${ARCH}/${OS}/${ATFSDIAG}/include \
                          -I${ATFSROOT}/${ARCH}/${OS}/${ATFSTBUS}/include \
                          -I${ATFSROOT}/${ARCH}/${OS}/${ATFSATL}/include  \
                          -I${ATFSROOT}/${ARCH}/${OS}/${ATFSVTC}/include  \

CFLAGS                    = ${ATFSCFLAGS} -Wall -O -fPIC -g -std=gnu99
LDFLAGS                   = 
LDLIBS                    = -L${ATFSROOT}/${ARCH}/${OS}/${ATFSSYS}/lib                \
                          -L${ATFSROOT}/${ARCH}/${OS}/${ATFSDIAG}/${ATFSTMODEL}/lib \
                          -L${ATFSROOT}/${ARCH}/${OS}/${ATFSTBUS}/lib               \
                          -L${ATFSROOT}/${ARCH}/${OS}/${ATFSVTC}/${ATFSTMODEL}/lib  \
                          -latfssock                                    \
                          -latfsmcicl                                   \
                          -latfsvtc                                     \
                          -latfstb                                      \
                          -latfsrc                                      \
                          -latfssc                                      \
                          -latfshn                                      \
                          -lnsl                                         \
                          -lrt                                          \
                          -ldl                                          \
                          -lresolv                                      \
                          -lm
TARGET                  = ${PRO}    tags      
DFILES                  = ${OBJ:.o=.d}  
SRC                     = ${OBJ:.o=.c}
all:                    ${TARGET}
clean:
			@${RM} *.exe *.o *.d
tags:			*.c ../pat/*.asc
			@./atags $^
${PRO}:			${OBJ}
			${CC} -m32 $^         -o $@ ${LDFLAGS} ${LDLIBS} -latfsntc
			cp $@ ../../test
%.d:%.c
			@${CC} ${CPPFLAGS} -MM $< > $@
-include                ${DFILES}
