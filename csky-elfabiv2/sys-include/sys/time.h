#ifndef __SYS_TIME_H__
#define __SYS_TIME_H__

typedef unsigned long __kernel_time_t;
typedef unsigned long long __kernel_suseconds_t;
struct timeval {
  __kernel_time_t         tv_sec;         /* seconds */
  __kernel_suseconds_t    tv_usec;        /* microseconds */
};

struct timezone {
  int tz_minuteswest;     /* minutes west of Greenwich */
  int tz_dsttime;         /* type of DST correction */
};

int gettimeofday (struct timeval *ptimeval,
                  struct timezone *ptimezone);

struct timespec
{
    __kernel_time_t tv_sec;     /* Seconds.  */
    long int tv_nsec;           /* Nanoseconds.  */
};

#endif
