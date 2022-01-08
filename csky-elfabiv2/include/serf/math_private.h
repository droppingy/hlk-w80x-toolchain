/*
 * math_private.h
 * 
 * Copyright(C):2012 Hangzhou C-SKY Microsystem Co.,LTD.
 * Author:Jin Yue  (yue_jin@c-sky.com)
 * Date:2012-04-28
 */

#ifndef  _MATH_PRIVATE_H_
#define  _MATH_PRIVATE_H_

#include <serf/endian.h>

#define FP_NAN          0
#define FP_INFINITE     1
#define FP_ZERO         2
#define FP_SUBNORMAL    3
#define FP_NORMAL       4

//#if (__BYTE_ORDER == __BIG_ENDIAN)
#if defined(__cskyBE__)
typedef union
{
	double value;
	struct
	{
		unsigned int msw;
		unsigned int lsw;
	}parts;
}ieee_double_shape_type;

#else

typedef union
{
	double value;
	struct
	{
	    unsigned int lsw;
	    unsigned int msw;
	}parts;
}ieee_double_shape_type;

#endif

/*Get two 32 bit ints from a double.*/
#define EXTRACT_WORDS(ix0,ix1,d) do{ \
    ieee_double_shape_type ew_u; \
    ew_u.value = (d);  \
    (ix0) = ew_u.parts.msw;  \
    (ix1) = ew_u.parts.lsw;	\
}while(0)

#define INSERT_WORDS(d,ix0,ix1) do{	\
    ieee_double_shape_type iw_u;    \
    iw_u.parts.msw = (ix0); \
    iw_u.parts.lsw = (ix1); \
    (d) = iw_u.value;	\
}while(0)

#define SET_HIGH_WORD(d,v) do{	\
    ieee_double_shape_type sh_u; sh_u.value = (d);  sh_u.parts.msw = (v);  (d) = sh_u.value;	   \
}while(0)


#define SET_LOW_WORD(d,v) do{	\
    ieee_double_shape_type sl_u;    \
    sl_u.value = (d);	\
    sl_u.parts.lsw = (v);    \
    (d) = sl_u.value;	\
}while(0);

#define GET_HIGH_WORD(i,d) do{	\
    ieee_double_shape_type gh_u;    \
    gh_u.value = (d);	    \
    (i) = gh_u.parts.msw;   \
}while(0)

#define GET_LOW_WORD(i,d) do{	\
    ieee_double_shape_type gl_u;    \
    gl_u.value = (d);	\
    (i) = gl_u.parts.lsw;   \
}while(0)


extern double pow(double x,double y);
extern double log(double x);
extern double log10(double x);
extern double copysign(double x, double y);
extern double scalbn(double x, int n);
extern double fact(int x);
extern double sqrt(double x);
extern double fabs(double x);

extern double sin(double x);
extern double cos(double x);
extern double acos(double x);
extern double tan(double x);
extern double cosh(double x);
extern double sinh(double x);
extern double tanh(double x);
extern double atan2(double y,double x);
extern double exp(double x);
extern double __kernel_standard(double x, double y, int type);
extern double __kernel_cos(double x,double y);
extern double __kernel__rem_pio2(double *x, double *y,  int e0, int nx, int prec, const int *ipio2);
extern double __kernel_sin(double x, double y, int iy);
extern double __kernel_tan(double x, double y, int iy);
extern int __ieee754_rem_pio2(double x, double *y);
extern double expm1(double x);
extern int __fpclassifyd(double x);
extern int __fpclassifyf(float x);

#endif
