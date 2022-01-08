/*
 * Copyright (C): 2012 Hangzhou C-SKY Microsystem Co.,LTD.
 * Author: Junshan Hu (junshan_hu@c-sky.com)
 * Date: 2012-5-6
 */
#ifndef _MINILIBC_ASSERT_H
#define _MINILIBC_ASSERT_H

#include <features.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef __ASSERT_FUNC
 /* Use g++'s demangled names in C++.  */
# if defined __cplusplus && defined __GNUC__
#  define __ASSERT_FUNC __PRETTY_FUNCTION__
 /* C99 requires the use of __func__.  */
# elif __STDC_VERSION__ >= 199901L
#  define __ASSERT_FUNC __func__
 /* Older versions of gcc don't have __func__ but can use __FUNCTION__.  */
# elif __GNUC__ >= 2
#  define __ASSERT_FUNC __FUNCTION__
 /* failed to detect __func__ support.  */
# else
#  define __ASSERT_FUNC ((char *) 0)
# endif
#endif /* !__ASSERT_FUNC */

#undef assert

#ifdef NDEBUG           /* required by ANSI standard */
# define assert(__e) ((void)0)
#else

/* This prints an "Assertion failed" message and aborts.  */
extern void __assert_fail (const char *__function, unsigned int __line,
			const char *__file, const char *__assertion)
     __attribute__ ((__noreturn__));

# define assert(__e) ((__e) ? (void)0 : __assert_fail (__FILE__, __LINE__, \
						       __ASSERT_FUNC, #__e))
#endif /* !NDEBUG */

#ifdef __cplusplus
}
#endif

#endif /* _MINILIBC_ASSERT_H */
