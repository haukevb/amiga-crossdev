#ifndef CLIB_TIMER_PROTOS_H
#define CLIB_TIMER_PROTOS_H

/*
    *** Automatically generated from 'timer.conf'. Edits will be lost. ***
    Copyright � 1995-2005, The AROS Development Team. All rights reserved.
*/

#include <aros/libcall.h>
#include <devices/timer.h>

AROS_LP2(void, AddTime,
        AROS_LPA(struct timeval*, dest, A0),
        AROS_LPA(struct timeval*, src, A1),
        struct Device *, TimerBase, 7, Timer)

AROS_LP2(void, SubTime,
        AROS_LPA(struct timeval*, dest, A0),
        AROS_LPA(struct timeval*, src, A1),
        struct Device *, TimerBase, 8, Timer)

AROS_LP2(LONG, CmpTime,
        AROS_LPA(struct timeval*, dest, A0),
        AROS_LPA(struct timeval*, src, A1),
        struct Device *, TimerBase, 9, Timer)

AROS_LP1(ULONG, ReadEClock,
        AROS_LPA(struct EClockVal*, dest, A0),
        struct Device *, TimerBase, 10, Timer)

AROS_LP1(void, GetSysTime,
        AROS_LPA(struct timeval*, dest, A0),
        struct Device *, TimerBase, 11, Timer)

#endif /* CLIB_TIMER_PROTOS_H */
