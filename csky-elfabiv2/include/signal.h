/*
 * Copyright (C): 2012 Hangzhou C-SKY Microsystem Co.,LTD.
 * Author: Zhang Zhao  (zhao_zhang@c-sky.com)
 * Contrbutior: Chunqiang Li
 * Date: 2012-5-4
 */
#ifndef _SIGNAL_H_
#define _SIGNAL_H_
#include <features.h>

/* Type of signal handler functions */
typedef void (*sa_sighandler_t)(int);
typedef void (*__sighandler_t)(int);
typedef int sig_atomic_t;

/*
 * Signal handlers for use with signal() and sigaction(). We avoid 0
 * because in an embedded system this may be start of ROM and thus
 * a possible function pointer for reset.
 */
#define SIG_DFL ((sa_sighandler_t) 1)      // Default action
#define SIG_IGN ((sa_sighandler_t) 2)      // Ignore action
#define SIG_ERR ((sa_sighandler_t)-1)      // Error return

#define NUM_LIBC_SIGNALS 18
/* Signal values */
#define SIGHUP          1       /* Hangup (POSIX).  */
#define SIGINT          2       /* Interrupt (ANSI).  */
#define SIGQUIT         3       /* Quit (POSIX).  */
#define SIGILL          4       /* Illegal instruction (ANSI).  */
#define SIGTRAP         5       /* Trace trap (POSIX).  */
#define SIGABRT         6       /* Abort (ANSI).  */
#define SIGIOT          6       /* IOT trap (4.2 BSD).  */
#define SIGBUS          7       /* BUS error (4.2 BSD).  */
#define SIGFPE          8       /* Floating-point exception (ANSI).  */
#define SIGKILL         9       /* Kill, unblockable (POSIX).  */
#define SIGUSR1         10      /* User-defined signal 1 (POSIX).  */
#define SIGSEGV         11      /* Segmentation violation (ANSI).  */
#define SIGUSR2         12      /* User-defined signal 2 (POSIX).  */
#define SIGPIPE         13      /* Broken pipe (POSIX).  */
#define SIGALRM         14      /* Alarm clock (POSIX).  */
#define SIGTERM         15      /* Termination (ISO C) */
/* signal numbers 16-31 are reserved to the implementation */
/* signal numbers 3 and larger are for more user signals */

extern sa_sighandler_t signal(int __sig, sa_sighandler_t __handler);
extern int raise(int __sig);

#endif /* _SIGNAL_H_ */
