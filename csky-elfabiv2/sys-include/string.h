/*
 * string.h - ANSI standard string and memory area manipulation routines.
 *
 * Copyright (C): 2012 Hangzhou C-SKY Microsystem Co.,LTD.
 * Author: Junshan Hu (junshan_hu@c-sky.com)
 * Date: 2012-5-6
 */

#ifndef MINILIBC_STRING_H
#define MINILIBC_STRING_H

#include <features.h>
#define __need_size_t
#include <stddef.h>

#ifndef NULL
#define NULL 0
#endif

#ifdef __cplusplus
extern "C" {
#endif

/*  Copying functions */
extern void * memcpy( void *, const void *, size_t );
extern void * memmove( void *, const void *, size_t );
extern char * strcpy( char *, const char * );
extern char * strncpy( char *, const char *, size_t );

/*  Concatenation functions */
extern char * strcat( char *, const char * );
extern char * strncat( char *, const char *, size_t );

/*  Comparison functions */
extern int memcmp( const void *, const void *, size_t );
extern int strcmp( const char *, const char * );
extern int strcoll( const char *, const char * );
extern int strncmp( const char *, const char *, size_t );
extern size_t strxfrm( char *, const char *, size_t );

/*  Search functions */
extern void * memchr( const void *, int,  size_t );
extern char * strchr( const char *, int );
extern size_t strcspn( const char *, const char * );
extern char * strpbrk( const char *, const char * );
extern char * strrchr( const char *, int );
extern size_t strspn( const char *, const char * );
extern char * strstr( const char *, const char * );
extern char * strtok( char *, const char * );

/*  Miscellaneous functions */
extern void * memset(void * buffer, int c, size_t count);
extern char * strerror(int errnum);
extern size_t strlen( const char * );

/* Since the functions of Annex K are not completely implemented,
   the compiler donot define the __STDC_WANT_LIB_EXT1__.  */
//#if (!defined(__STDC_WANT_LIB_EXT1__) || (__STDC_WANT_LIB_EXT1__ != 0))

#include "./errno.h"
#include "./stddef.h"

extern errno_t memcpy_s(void *__restrict dest, rsize_t dmax,
                        const void *__restrict src, rsize_t slen);
extern errno_t memmove_s(void *dest, rsize_t dmax, const void *src,
                         rsize_t slen);
extern errno_t memcmp_s(const void *dest, rsize_t dmax, const void *src,
                        rsize_t slen, int *diff);
extern errno_t memset_s(void *dest, rsize_t dmax, int value, rsize_t n);

//#endif

#ifdef __cplusplus
}   /* extern "C" */
#endif

#endif /* MINILIBC_STRING_H */

