/*
 * Copyright (C): 2012 Hangzhou C-SKY Microsystem Co.,LTD.
 * Author: Zhang Zhao  (zhao_zhang@c-sky.com)
 * Contrbutior: Chunqiang Li
 * Date: 2012-5-4
 */

#ifndef __SETJMP_H__
#define __SETJMP_H__
#include <features.h>

typedef struct 
{
# if defined(__CK801__)
    unsigned long __regs[6];
# elif defined(__CK802__) || (defined(__CSKY__) && (__CSKY__==1))
	/*
	 * ABIV1,CPUV1 is r8~r15
	 * ABIV2,CPU<=ck802 is r4~r11, r15
	 */
	unsigned long __regs[9]; 
# else /* __CK802__ */
	/* 
	 * ABIV1,CPUV2 is r8~r19, r26~r31 
	 * ABIV2,CPU<=ck802 is r4~r11, r15~r17, r26~r31 
	 */ 
	unsigned long __regs[17]; 
# endif /* __CK802__ */
	unsigned long __sp;   /* the return stack address */ 
//#endif
} __jmp_buf[1]; 

typedef __jmp_buf jmp_buf;
extern int setjmp(jmp_buf env);
extern void longjmp(jmp_buf jmpb, int retval);
#endif /* __SETJMP_H__ */
