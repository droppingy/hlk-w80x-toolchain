/*
 * Copyright (C): 2019 Hangzhou C-SKY Microsystem Co.,LTD.
 * Author: Xianmiao Qu  (xianmiao_qu@c-sky.com)
 * Contrbutior: Xianmiao Qu
 * Date: 2019-10-30
 */

/* include the system-header first.  */
#include_next <stddef.h>

#if defined(_STDDEF_H) && !defined(SLIBC_STDDEF_H)
#define  SLIBC_STDDEF_H

/* Since the functions of Annex K are not completely implemented,
   the compiler donot define the __STDC_WANT_LIB_EXT1__.  */
//#if (!defined(__STDC_WANT_LIB_EXT1__) || (__STDC_WANT_LIB_EXT1__ != 0))

/* rsize_t is a type for communicating realistic object sizes.
   Often, large object sizes are the result of an integer overflow. To
   detect these overflow conditions at runtime, the type rsize_t
   restricts the maximum allowed object size. It does not allow
   large positive numbers.  rsize_t is an unsigned type. It's maximum
   value is given by the macro RSIZE_MAX.  */
typedef size_t rsize_t;

//#endif

#endif
