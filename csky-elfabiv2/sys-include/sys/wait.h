#ifndef _SYS_WAIT_H
#define _SYS_WAIT_H     1
// only for build libiberty
# include <features.h>

#  define __WAIT_INT(status)    (status)
#  define __WAIT_STATUS         int *
#  define __WAIT_STATUS_DEFN    int *
typedef int __pid_t;

/* there is no function achieve */
extern __pid_t wait (__WAIT_STATUS __stat_loc);


#endif
