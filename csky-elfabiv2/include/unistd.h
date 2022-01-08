#ifndef _UNISTD_H
#define _UNISTD_H       1
#include <features.h>
#ifndef __off_t_defined 
typedef  int __off_t;
#define __off_t_defined 
#endif
typedef __off_t off_t;
typedef int __pid_t;
typedef int ssize_t;

/* there is no function achieve */
extern int write (int __fd, __const void *__buf, int __n);
extern int read (int __fd, void *__buf,int __nbytes);
extern int lseek (int __fd, int __offset, int __whence);
extern int close (int __fd);
extern void _exit (int __status);
extern __pid_t fork (void);
extern unsigned int sleep (unsigned int __seconds);
extern int dup2 (int __fd, int __fd2);
extern int execvp (__const char *__file, char *__const __argv[]);
extern int execve (__const char *__path, char *__const __argv[],
                   char *__const __envp[]);
extern int pipe (int __pipedes[2]);


extern int kill (__pid_t __pid, int __sig);
extern int unlink (__const char *__name);
extern int isatty(int fd);

#endif
