/*
 * Copyright (C): 2012 Hangzhou C-SKY Microsystem Co.,LTD.
 * Author: Junshan Hu (junshan_hu@c-sky.com)
 * Contrbutior: Chunqiang Li
 * Date: 2012-5-4
 */

#ifndef _ENDIAN_H
#define _ENDIAN_H

/* CSKY CPU can be either big or little endian.  */
#ifdef __cskyBE__
# define __BYTE_ORDER __BIG_ENDIAN
#else
# define __BYTE_ORDER __LITTLE_ENDIAN
#endif

#endif
