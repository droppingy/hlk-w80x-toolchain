/*
 * minilibc_os.h.
 *
 * Copyright (C): 2012 Hangzhou C-SKY Microsystem Co.,LTD.
 * Author: Linfei Chen (linfei_chen@c-sky.com)
 * Contrbutior: Linfei Chen
 * Date: 2014-06-04
 */
#ifndef _MINILIBC_OS_H_
#define _MINILIBC_OS_H_

extern int os_critical_open(unsigned int *lock);

extern int os_critical_enter(unsigned int *lock);

extern int os_critical_exit(unsigned int *lock);

extern int os_critical_close(unsigned int *lock);

#endif  /* _MINILIBC_OS_H */

