/*
 * stdlib.h - the file definitions std functions.
 *
 * Copyright (C): 2012 Hangzhou C-SKY Microsystem Co.,LTD.
 * Author: zhang wenmeng  (wenmeng_zhang@c-sky.com)
 * Date: 2012-4-26
 */
#ifndef _STDLIB_H_
#define _STDLIB_H_

#include <features.h>
#include "ansidef.h"

typedef struct 
{
	int quot; /* quotient */
	int rem; /* remainder */
} div_t;

typedef struct 
{
	long quot; /* quotient */
	long rem; /* remainder */
} ldiv_t;

typedef struct
{
	long long int quot; /* quotient */
	long long int rem; /* remainder */
} lldiv_t;

#ifndef size_t
typedef unsigned int size_t;
#endif

#ifndef NULL
#define NULL 0
#endif

#define EXIT_FAILURE 1
#define EXIT_SUCCESS 0

/* The largest number rand will return (same as INT_MAX).  */
#define RAND_MAX        2147483647

/* string functions */
extern double atof(_CONST char *s);

extern int atoi(_CONST char *s);

extern long atol(_CONST char *s);

extern long long atoll(_CONST char *str);

extern double strtod( const char *nptr, char **endptr );

extern float strtof(_CONST char *nptr, char **endptr);

extern long strtol( const char *nptr, char **endptr, int base );

extern long double strtold (const char *nptr, char **endptr);

extern long long strtoll( const char *nptr, char **endptr, int base );

extern unsigned long strtoul( const char *nptr, char **endptr, int base );

extern unsigned long long strtoull( const char *nptr, char **endptr, int base);

/* men functions */

extern void *calloc(size_t nmemb, size_t lsize);

extern void free (void *mem);

extern void *malloc (size_t);

extern void *realloc (void *mem, size_t new_size);

/* Environment functions */
extern void _Exit(int code);

extern void abort(void);

extern void exit(int code);

/* search and sort */
typedef int (*__bsearch_comparison_fn_t)(const void * object1,
                                          const void * object2);

extern void * bsearch( const void * search_key, const void * first_object,
          size_t num_objects, size_t object_size,
          __bsearch_comparison_fn_t  comparison_fn);

typedef int (*__qsort_comparison_fn_t)(const void * object1,
                                        const void * object2);

extern void qsort( void * first_object, size_t num_objects,
        size_t object_size, __qsort_comparison_fn_t comparison_fn);

/* math */
extern int abs(int i);

extern div_t div(int n, int d);

extern long labs(long i);

extern ldiv_t ldiv(long n, long d);

extern long long llabs(long long j);

extern lldiv_t lldiv(long long n, long long d);

extern int rand(void);

extern void srand (unsigned int seed);

/* there is no function achieve */
extern int atexit (void (*__func) (void));
extern char *getenv (__const char *__name);
extern int system (__const char *__command) ;
#endif
