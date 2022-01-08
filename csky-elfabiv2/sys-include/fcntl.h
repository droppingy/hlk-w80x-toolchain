#ifndef _ASM_GENERIC_FCNTL_H
#define _ASM_GENERIC_FCNTL_H
#include <features.h>
// only need for build libiberty
#define O_ACCMODE       00000003
#define O_RDONLY        00000000
#define O_WRONLY        00000001
#define O_RDWR          00000002
#define O_CREAT            0100 /* not fcntl */
#define O_EXCL             0200 /* not fcntl */
#define O_NOCTTY           0400 /* not fcntl */
#define O_TRUNC           01000 /* not fcntl */
#define O_APPEND          02000
#define O_NONBLOCK        04000
#define O_NDELAY        O_NONBLOCK
#define O_SYNC           010000
#define O_FSYNC          O_SYNC
#define O_ASYNC          020000

#define S_IRWXU         00700
#define S_IRUSR         00400
#define S_IWUSR         00200
#define S_IXUSR         00100
#define S_IRWXG         00070
#define S_IRGRP         00040
#define S_IWGRP         00020
#define S_IXGRP         00010
#define S_IRWXO         00007
#define S_IROTH         00004
#define S_IWOTH         00002
#define S_IXOTH         00001

#define F_DUPFD         0       /* dup */
#define F_GETFD         1       /* get close_on_exec */
#define F_SETFD         2       /* set/clear close_on_exec */
#define F_GETFL         3       /* get file->f_flags */
#define F_SETFL         4       /* set file->f_flags */
#ifndef F_GETLK
#define F_GETLK         5
#define F_SETLK         6
#define F_SETLKW        7
#endif
#ifndef F_SETOWN
#define F_SETOWN        8       /* for sockets. */
#define F_GETOWN        9       /* for sockets. */
#endif
#ifndef F_SETSIG
#define F_SETSIG        10      /* for sockets. */
#define F_GETSIG        11      /* for sockets. */
#endif

#define FD_CLOEXEC      1       /* actually anything with low bit set goes */

/* there is no function achieve */
extern int open(const char *pathname, int flags, ...);

extern int fcntl (int __fd, int __cmd, ...);
#endif
