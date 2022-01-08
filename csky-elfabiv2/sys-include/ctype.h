/*
 * Copyright (C): 2012 Hangzhou C-SKY Microsystem Co.,LTD.
 * Author: Zhang Zhao  (zhao_zhang@c-sky.com)
 * Contrbutior: Chunqiang Li
 * Date: 2012-5-4
 */

#ifndef _CTYPE_H_
#define _CTYPE_H_

#include <features.h>

#ifdef __cplusplus
extern "C"{
#endif

extern int isalnum  (int);
extern int isalpha  (int);
extern int iscntrl (int);
extern int isdigit(int);
extern int isgraph (int);
extern int islower (int);
extern int isprint(int);
extern int ispunct (int);
extern int isspace (int);
extern int isupper (int);
extern int isxdigit (int);

#if !defined(__STRICT_ANSI__) || defined(__cplusplus) || __STDC_VERSION__ >= 199901L
extern int isblank (int);
#endif
extern int tolower (int);
extern int toupper (int);

#ifdef __cplusplus
}
#endif

#endif /* _CTYPE_H_ */
