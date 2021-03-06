#ifndef _SYS__IOVEC_H_
#define _SYS__IOVEC_H_
/*
    Copyright � 1995-2003, The AROS Development Team. All rights reserved.
    $Id: _iovec.h 19609 2003-09-04 10:21:05Z iaint $
*/

#include <sys/_types.h>

struct iovec
{
    void        *iov_base;
    __size_t     iov_len;
};

#endif /* _SYS__IOVEC_H_ */
