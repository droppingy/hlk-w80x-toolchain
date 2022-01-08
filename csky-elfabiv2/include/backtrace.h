#ifndef CSKY_BACKTRACE_H
#define CSKY_BACKTRACE_H


int backtrace (void **array, int size);
char ** backtrace_symbols (void *const *array, int size);


#endif
