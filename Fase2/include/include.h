#ifndef INCLUDE_H
#define INCLUDE_H

#include <umps3/umps/libumps.h>
#include "asl.h"
#include "pcb.h"

/*
    takes as input a pointer to an unsigned int variable
    that must be initialized with the value of the status register,
    and changes it so that the processor will be in kernel mode.
 */
void set_kernelMode(unsigned int*);

/*
    takes as input a pointer to an unsigned int variable
    that must be initialized with the value of the status register,
    and changes it so that the processor will be in user mode.
 */
void set_userMode(unsigned int*);

/*
    takes as input a pointer to an unsigned int variable
    that must be initialized with the value of the status register,
    and changes it so that the processor will have interrupts on.
 */
void set_interruptsOn(unsigned int*);

/*
    takes as input a pointer to an unsigned int variable
    that must be initialized with the value of the status register,
    and changes it so that the processor will have interrupts off.
 */
void disable_interrupts(unsigned int*);

/*
    takes as input a pointer to an unsigned int variable
    that must be initialized with the value of the status register,
    and changes it so that the processor will have Timer enabled.
 */
void set_timerOn(unsigned int*);

/*
    takes as input a pointer to an unsigned int variable
    that must be initialized with the value of the status register,
    and changes it so that the processor will have Timer disabled.
 */
void disable_timer(unsigned int*);

/*
    takes as input n unsigned int that must be a value of a status(process or processor),
    returns TRUE if the process is in kernel mode, FALSE if it's in user mode.
*/
int isKernelMode(unsigned int);

#endif
