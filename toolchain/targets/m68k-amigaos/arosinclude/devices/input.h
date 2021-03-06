#ifndef DEVICES_INPUT_H
#define DEVICES_INPUT_H

/*
    Copyright � 1995-2001, The AROS Development Team. All rights reserved.
    $Id: input.h 12757 2001-12-08 22:23:57Z chodorowski $

    Desc: Input device commands
    Lang: english
*/

#ifndef EXEC_IO_H
#   include <exec/io.h>
#endif

#define IND_ADDHANDLER	(CMD_NONSTD + 0)
#define IND_REMHANDLER	(CMD_NONSTD + 1)
#define IND_WRITEEVENT	(CMD_NONSTD + 2)
#define IND_SETTHRESH	(CMD_NONSTD + 3)
#define IND_SETPERIOD	(CMD_NONSTD + 4)
#define IND_SETMPORT	(CMD_NONSTD + 5)
#define IND_SETMTYPE	(CMD_NONSTD + 6)
#define IND_SETMTRIG	(CMD_NONSTD + 7)

#endif /* DEVICES_INPUT_H */
