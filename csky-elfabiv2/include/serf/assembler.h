/*
 * Copyright (C): 2012 Hangzhou C-SKY Microsystem Co.,LTD.
 * Author: Junshan Hu (junshan_hu@c-sky.com)
 * Date: 2012-6-6
 */
#ifndef _ASM_ASSEMBLER_H
#define _ASM_ASSEMBLER_H

//#if defined(CONFIG_OPTIMIZE_SIZE)
//#define ALIGN .align 1
//#else
#define ALIGN .align 2
//#endif

#undef ENTRY
#define ENTRY(name) ENTRY_M name  
    .macro ENTRY_M name
        .text
        .global \name
        .weak   \name
        .type   \name, @function
        ALIGN
   \name:
    .endm

#undef ENTRY_alias
#define ENTRY_alias(name, alias_name) ENTRY_N name alias_name  
    .macro ENTRY_N name  alias_name    //ENTRY_N name
        .text
        .global \alias_name
        .weak   \alias_name
        .set    \alias_name, \name
        .global \name
        .weak   \name
        .type   \name, @function
        ALIGN
   \name:
    .endm


//#if  defined(__CK810__) || defined(__CK807__) || defined(__CK610__)
#define DEFAULT_ENTRY_fast_alias(alias_name) ENTRY_alias(__##alias_name##_fast, alias_name)
#define DEFAULT_ENTRY_alias(name) ENTRY(__##name##_size)
//#else
//#define DEFAULT_ENTRY_fast_alias(alias_name) ENTRY(__##alias_name##_fast)
//#define DEFAULT_ENTRY_alias(name) ENTRY_alias(__##name##_size, name)
//#endif

#endif /* _ASM_ASSEMBLER_H */
