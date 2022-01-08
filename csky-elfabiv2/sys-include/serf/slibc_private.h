/*
 * Copyright (C): 2019 Hangzhou C-SKY Microsystem Co.,LTD.
 * Author: Xianmiao Qu  (xianmiao_qu@c-sky.com)
 * Contrbutior: Xianmiao Qu
 * Date: 2019-10-30
 */

#include <errno.h>
#include <stddef.h>
#include <stdint.h>

#define _XSTR(s) _STR(s)
#define _STR(s) #s

#define invoke_safe_mem_constraint_handler(msg, ptr, error)
#define RCNEGATE(x) (x)

#define CHK_DEST_MEM_NULL(func)                                                \
    if (unlikely(dest == NULL)) {                                              \
        invoke_safe_mem_constraint_handler(func ": dest is null",              \
                                           (void *)dest, ESNULLP);             \
        return RCNEGATE(ESNULLP);                                              \
    }
#define CHK_DMAX_MEM_ZERO(func)                                                \
    if (unlikely(dmax == 0)) {                                                 \
        invoke_safe_mem_constraint_handler(func ": dmax is 0", (void *)dest,   \
                                           ESZEROL);                           \
        return RCNEGATE(ESZEROL);                                              \
    }
#define CHK_DMAX_MEM_MAX(func, max)                                            \
    if (unlikely(dmax > (max))) {                                              \
        invoke_safe_mem_constraint_handler(func ": dmax exceeds max",          \
                                           (void *)dest, ESLEMAX);             \
        return RCNEGATE(ESLEMAX);                                              \
    }
#define CHK_SRC_MEM_NULL_CLEAR(func, src)                                      \
    if (unlikely(src == NULL)) {                                               \
        handle_mem_error(dest, dmax,                                           \
                         func ": " _XSTR(src) " is null", ESNULLP);            \
        return RCNEGATE(ESNULLP);                                              \
    }
#define CHK_SLEN_MEM_MAX_NOSPC_CLEAR(func, slen, max)                          \
    if (unlikely(slen > dmax)) {                                               \
        errno_t error = slen > max ? ESLEMAX : ESNOSPC;                        \
        handle_mem_error((void *)dest, dmax,                                   \
                         func ": " _XSTR(slen) " exceeds max", error);         \
        return RCNEGATE(error);                                                \
    }
/* but allow dp==sp */
#define CHK_OVRLP_BUTSAME(dp, dlen, sp, slen)                                  \
    (((uintptr_t)dp > (uintptr_t)sp) &&                                        \
     ((uintptr_t)dp < (uintptr_t)(sp + slen))) ||                              \
        (((uintptr_t)dp < (uintptr_t)sp) &&                                    \
         ((uintptr_t)sp < (uintptr_t)(dp + dlen)))

static inline void handle_mem_error(void *restrict dest, rsize_t dmax,
                                    const char *err_msg, errno_t err_code) {
    memset(dest, 0, dmax);
    invoke_safe_mem_constraint_handler(err_msg, dest, err_code);
    return;
}
