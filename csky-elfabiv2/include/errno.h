/*
 * Copyright (C): 2012 Hangzhou C-SKY Microsystem Co.,LTD.
 * Author: Zhang Zhao  (zhao_zhang@c-sky.com)
 * Contrbutior: Chunqiang Li
 * Date: 2012-5-4
 */

#ifndef _ERRNO_H_
#define _ERRNO_H_

#include <features.h>

#include <serf/linux_errno.h>
#ifdef __cplusplus
extern "C" {
#endif

# undef EDOM
# undef EILSEQ
# undef ERANGE

extern int errno;

#define EDOM   33       /* Math arg out of domain of func */
#define ERANGE 34       /* Math result not representable */
#define EILSEQ 138      /* Illegal byte sequence.  */

/* Since the functions of Annex K are not completely implemented,
   the compiler donot define the __STDC_WANT_LIB_EXT1__.  */
//#if (!defined(__STDC_WANT_LIB_EXT1__) || (__STDC_WANT_LIB_EXT1__ != 0))

/* errno_t is the type for communicating error values.
   It may contain all of the values that might be found in errno.  */
typedef int errno_t;

#ifndef ESNULLP
#define ESNULLP         ( 400 )       /* null ptr                    */
#endif

#ifndef ESZEROL
#define ESZEROL         ( 401 )       /* length is zero              */
#endif

#ifndef ESLEMIN
#define ESLEMIN         ( 402 )       /* length is below min         */
#endif

#ifndef ESLEMAX
#define ESLEMAX         ( 403 )       /* length exceeds RSIZE_MAX    */
#endif

#ifndef ESOVRLP
#define ESOVRLP         ( 404 )       /* overlap undefined           */
#endif

#ifndef ESEMPTY
#define ESEMPTY         ( 405 )       /* empty string                */
#endif

#ifndef ESNOSPC
#define ESNOSPC         ( 406 )       /* not enough space for s2     */
#endif

#ifndef ESUNTERM
#define ESUNTERM        ( 407 )       /* unterminated string         */
#endif

#ifndef ESNODIFF
#define ESNODIFF        ( 408 )       /* no difference               */
#endif

#ifndef ESNOTFND
#define ESNOTFND        ( 409 )       /* not found                   */
#endif

#ifndef ESLEWRNG
#define ESLEWRNG        ( 410 )       /* wrong size                */
#endif

#ifndef ESLAST
#define ESLAST ESLEWRNG
#endif

#ifndef UNKOWNERR
#define UNKOWNERR       ( -1 )        /* Unkown error            */
#endif

/* EOK may or may not be defined in errno.h */
#ifndef EOK
#define EOK             ( 0 )
#endif

//#endif

#ifdef __cplusplus
}
#endif
#endif
