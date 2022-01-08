#ifndef _GCC_CSKY_VDSP_H
#define _GCC_CSKY_VDSP_H 1

#include <stdint.h>
#if defined (__CSKY_VDSPV2_F__)
typedef __fp16 float16_t;
typedef float float32_t;
typedef double float64_t;
#endif

#if defined (__CSKY_3E3R1__)
__extension__ static __inline int32_t __attribute__ ((__always_inline__))
mul_s32_h(int32_t __a, int32_t __b){
  return __builtin_csky_smul_highpartsi(__a, __b);
}
#endif

#if defined (__CSKY_DSPV2__)
typedef __simd32_int8_t    int8x4_t;
typedef __simd32_int16_t   int16x2_t;
typedef __simd64_int16_t   int16x4_t;
typedef __simd64_int32_t   int32x2_t;
typedef __simd32_uint8_t   uint8x4_t;
typedef __simd32_uint16_t  uint16x2_t;
typedef __simd64_uint16_t  uint16x4_t;
typedef __simd64_uint32_t  uint32x2_t;

__extension__ static __inline int8x4_t __attribute__ ((__always_inline__))
padd_8 (int8x4_t __a, int8x4_t __b)
{
  return __a + __b;
}

__extension__ static __inline int16x2_t __attribute__ ((__always_inline__))
padd_16 (int16x2_t __a, int16x2_t __b)
{
  return __a + __b;
}

__extension__ static __inline int8x4_t __attribute__ ((__always_inline__))
padd_s8_s (int8x4_t __a, int8x4_t __b)
{
  return __builtin_csky_paddssv4qi (__a, __b);
}

__extension__ static __inline int16x2_t __attribute__ ((__always_inline__))
padd_s16_s (int16x2_t __a, int16x2_t __b)
{
  return __builtin_csky_paddssv2hi (__a, __b);
}

__extension__ static __inline uint8x4_t __attribute__ ((__always_inline__))
padd_u8_s (uint8x4_t __a, uint8x4_t __b)
{
  return __builtin_csky_paddusv4qi (__a, __b);
}

__extension__ static __inline uint16x2_t __attribute__ ((__always_inline__))
padd_u16_s (uint16x2_t __a, uint16x2_t __b)
{
  return __builtin_csky_paddusv2hi (__a, __b);
}

__extension__ static __inline int8x4_t __attribute__ ((__always_inline__))
psub_8 (int8x4_t __a, int8x4_t __b)
{
  return __a - __b;
}

__extension__ static __inline int16x2_t __attribute__ ((__always_inline__))
psub_16 (int16x2_t __a, int16x2_t __b)
{
  return __a - __b;
}

__extension__ static __inline int8x4_t __attribute__ ((__always_inline__))
psub_s8_s (int8x4_t __a, int8x4_t __b)
{
  return __builtin_csky_psubssv4qi (__a, __b);
}

__extension__ static __inline int16x2_t __attribute__ ((__always_inline__))
psub_s16_s (int16x2_t __a, int16x2_t __b)
{
  return __builtin_csky_psubssv2hi (__a, __b);
}

__extension__ static __inline uint8x4_t __attribute__ ((__always_inline__))
psub_u8_s (uint8x4_t __a, uint8x4_t __b)
{
  return __builtin_csky_psubusv4qi (__a, __b);
}

__extension__ static __inline uint16x2_t __attribute__ ((__always_inline__))
psub_u16_s (uint16x2_t __a, uint16x2_t __b)
{
  return __builtin_csky_psubusv2hi (__a, __b);
}

__extension__ static __inline uint8x4_t __attribute__ ((__always_inline__))
paddh_u8 (uint8x4_t __a, uint8x4_t __b)
{
  return __builtin_csky_paddhuv4qi (__a, __b);
}

__extension__ static __inline uint16x2_t __attribute__ ((__always_inline__))
paddh_u16 (uint16x2_t __a, uint16x2_t __b)
{
  return __builtin_csky_paddhuv2hi (__a, __b);
}

__extension__ static __inline int8x4_t __attribute__ ((__always_inline__))
paddh_s8 (int8x4_t __a, int8x4_t __b)
{
  return __builtin_csky_psubhsv4qi (__a, __b);
}

__extension__ static __inline int16x2_t __attribute__ ((__always_inline__))
paddh_s16 (int16x2_t __a, int16x2_t __b)
{
  return __builtin_csky_psubhsv2hi (__a, __b);
}

__extension__ static __inline uint8x4_t __attribute__ ((__always_inline__))
psubh_u8 (uint8x4_t __a, uint8x4_t __b)
{
  return __builtin_csky_psubhuv4qi (__a, __b);
}

__extension__ static __inline uint16x2_t __attribute__ ((__always_inline__))
psubh_u16 (uint16x2_t __a, uint16x2_t __b)
{
  return __builtin_csky_psubhuv2hi (__a, __b);
}

__extension__ static __inline int8x4_t __attribute__ ((__always_inline__))
psubh_s8 (int8x4_t __a, int8x4_t __b)
{
  return __builtin_csky_psubhsv4qi (__a, __b);
}

__extension__ static __inline int16x2_t __attribute__ ((__always_inline__))
psubh_s16 (int16x2_t __a, int16x2_t __b)
{
  return __builtin_csky_psubhsv2hi (__a, __b);
}

__extension__ static __inline int16x2_t __attribute__ ((__always_inline__))
pasx_16 (int16x2_t __a, int16x2_t __b)
{
  return __builtin_csky_pasxv2hi (__a, __b);
}

__extension__ static __inline int16x2_t __attribute__ ((__always_inline__))
pasx_s16_s (int16x2_t __a, int16x2_t __b)
{
  return __builtin_csky_pasxssv2hi (__a, __b);
}

__extension__ static __inline uint16x2_t __attribute__ ((__always_inline__))
pasx_u16_s (uint16x2_t __a, uint16x2_t __b)
{
  return __builtin_csky_pasxusv2hi (__a, __b);
}

__extension__ static __inline int16x2_t __attribute__ ((__always_inline__))
psax_16 (int16x2_t __a, int16x2_t __b)
{
  return __builtin_csky_psaxv2hi (__a, __b);
}

__extension__ static __inline int16x2_t __attribute__ ((__always_inline__))
psax_s16_s (int16x2_t __a, int16x2_t __b)
{
  return __builtin_csky_psaxssv2hi (__a, __b);
}

__extension__ static __inline uint16x2_t __attribute__ ((__always_inline__))
psax_u16_s (uint16x2_t __a, uint16x2_t __b)
{
  return __builtin_csky_psaxusv2hi (__a, __b);
}

__extension__ static __inline uint16x2_t __attribute__ ((__always_inline__))
pasxh_u16 (uint16x2_t __a, uint16x2_t __b)
{
  return __builtin_csky_pasxhuv2hi (__a, __b);
}

__extension__ static __inline int16x2_t __attribute__ ((__always_inline__))
pasxh_s16 (int16x2_t __a, int16x2_t __b)
{
  return __builtin_csky_pasxhsv2hi (__a, __b);
}

__extension__ static __inline uint16x2_t __attribute__ ((__always_inline__))
psaxh_u16 (uint16x2_t __a, uint16x2_t __b)
{
  return __builtin_csky_psaxhuv2hi (__a, __b);
}

__extension__ static __inline int16x2_t __attribute__ ((__always_inline__))
psaxh_s16 (int16x2_t __a, int16x2_t __b)
{
  return __builtin_csky_psaxhsv2hi (__a, __b);
}

__extension__ static __inline int8x4_t __attribute__ ((__always_inline__))
pcmpne_8 (int8x4_t __a, int8x4_t __b)
{
  return __builtin_csky_pcmpnev4qi (__a, __b);
}

__extension__ static __inline int16x2_t __attribute__ ((__always_inline__))
pcmpne_16 (int16x2_t __a, int16x2_t __b)
{
  return __builtin_csky_pcmpnev2hi (__a, __b);
}

__extension__ static __inline int8x4_t __attribute__ ((__always_inline__))
pcmphs_s8 (int8x4_t __a, int8x4_t __b)
{
  return __builtin_csky_pcmphssv4qi (__a, __b);
}

__extension__ static __inline int16x2_t __attribute__ ((__always_inline__))
pcmphs_s16 (int16x2_t __a, int16x2_t __b)
{
  return __builtin_csky_pcmphssv2hi (__a, __b);
}

__extension__ static __inline uint8x4_t __attribute__ ((__always_inline__))
pcmphs_u8 (uint8x4_t __a, uint8x4_t __b)
{
  return __builtin_csky_pcmphsuv4qi (__a, __b);
}

__extension__ static __inline uint16x2_t __attribute__ ((__always_inline__))
pcmphs_u16 (uint16x2_t __a, uint16x2_t __b)
{
  return __builtin_csky_pcmphsuv2hi (__a, __b);
}

__extension__ static __inline int8x4_t __attribute__ ((__always_inline__))
pcmplt_s8 (int8x4_t __a, int8x4_t __b)
{
  return __builtin_csky_pcmpltsv4qi (__a, __b);
}

__extension__ static __inline int16x2_t __attribute__ ((__always_inline__))
pcmplt_s16 (int16x2_t __a, int16x2_t __b)
{
  return __builtin_csky_pcmpltsv2hi (__a, __b);
}

__extension__ static __inline uint8x4_t __attribute__ ((__always_inline__))
pcmplt_u8 (uint8x4_t __a, uint8x4_t __b)
{
  return __builtin_csky_pcmpltuv4qi (__a, __b);
}

__extension__ static __inline uint16x2_t __attribute__ ((__always_inline__))
pcmplt_u16 (uint16x2_t __a, uint16x2_t __b)
{
  return __builtin_csky_pcmpltuv2hi (__a, __b);
}

__extension__ static __inline int8x4_t __attribute__ ((__always_inline__))
pmax_s8 (int8x4_t __a, int8x4_t __b)
{
  return __builtin_csky_smaxv4qi (__a, __b);
}

__extension__ static __inline int16x2_t __attribute__ ((__always_inline__))
pmax_s16 (int16x2_t __a, int16x2_t __b)
{
  return __builtin_csky_smaxv2hi (__a, __b);
}

__extension__ static __inline uint8x4_t __attribute__ ((__always_inline__))
pmax_u8 (uint8x4_t __a, uint8x4_t __b)
{
  return __builtin_csky_umaxv4qi (__a, __b);
}

__extension__ static __inline uint16x2_t __attribute__ ((__always_inline__))
pmax_u16 (uint16x2_t __a, uint16x2_t __b)
{
  return __builtin_csky_umaxv2hi (__a, __b);
}

__extension__ static __inline int8x4_t __attribute__ ((__always_inline__))
pmin_s8 (int8x4_t __a, int8x4_t __b)
{
  return __builtin_csky_sminv4qi (__a, __b);
}

__extension__ static __inline int16x2_t __attribute__ ((__always_inline__))
pmin_s16 (int16x2_t __a, int16x2_t __b)
{
  return __builtin_csky_sminv2hi (__a, __b);
}

__extension__ static __inline uint8x4_t __attribute__ ((__always_inline__))
pmin_u8 (uint8x4_t __a, uint8x4_t __b)
{
  return __builtin_csky_uminv4qi (__a, __b);
}

__extension__ static __inline uint16x2_t __attribute__ ((__always_inline__))
pmin_u16 (uint16x2_t __a, uint16x2_t __b)
{
  return __builtin_csky_uminv2hi (__a, __b);
}

__extension__ static __inline int16x4_t __attribute__ ((__always_inline__))
pext_s8_e (int8x4_t __a)
{
  return __builtin_csky_pextsv4qi (__a);
}

__extension__ static __inline uint16x4_t __attribute__ ((__always_inline__))
pext_u8_e (uint8x4_t __a)
{
  return __builtin_csky_pextuv4qi (__a);
}

__extension__ static __inline int16x4_t __attribute__ ((__always_inline__))
pextx_s8_e (int8x4_t __a)
{
  return __builtin_csky_pextxsv4qi (__a);
}

__extension__ static __inline uint16x4_t __attribute__ ((__always_inline__))
pextx_u8_e (uint8x4_t __a)
{
  return __builtin_csky_pextxuv4qi (__a);
}

__extension__ static __inline uint16x2_t __attribute__ ((__always_inline__))
pclipi_u16 (uint16x2_t __a, const int32_t __b)
{
  return __builtin_csky_pclipuv2hi (__a, __b);
}

__extension__ static __inline int16x2_t __attribute__ ((__always_inline__))
pclipi_s16 (int16x2_t __a, const int32_t __b)
{
  return __builtin_csky_pclipsv2hi (__a, __b);
}

__extension__ static __inline uint16x2_t __attribute__ ((__always_inline__))
pclip_u16 (uint16x2_t __a, int32_t __b)
{
  return __builtin_csky_pclipuv2hi (__a, __b);
}

__extension__ static __inline int16x2_t __attribute__ ((__always_inline__))
pclip_s16 (int16x2_t __a, int32_t __b)
{
  return __builtin_csky_pclipsv2hi (__a, __b);
}

__extension__ static __inline int8x4_t __attribute__ ((__always_inline__))
pabs_s8_s (int8x4_t __a)
{
  return __builtin_csky_ssabsv4qi(__a);
}

__extension__ static __inline int16x2_t __attribute__ ((__always_inline__))
pabs_s16_s (int16x2_t __a)
{
  return __builtin_csky_ssabsv2hi(__a);
}

__extension__ static __inline int8x4_t __attribute__ ((__always_inline__))
pneg_s8_s (int8x4_t __a)
{
  return __builtin_csky_ssnegv4qi(__a);
}

__extension__ static __inline int16x2_t __attribute__ ((__always_inline__))
pneg_s16_s (int16x2_t __a)
{
  return __builtin_csky_ssnegv2hi(__a);
}

__extension__ static __inline uint32x2_t __attribute__ ((__always_inline__))
pmul_u16 (uint16x2_t __a, uint16x2_t __b)
{
  return __builtin_csky_pmuluv2hi (__a, __b);
}

__extension__ static __inline int32x2_t __attribute__ ((__always_inline__))
pmul_s16 (int16x2_t __a, int16x2_t __b)
{
  return __builtin_csky_pmulsv2hi (__a, __b);
}


__extension__ static __inline uint32x2_t __attribute__ ((__always_inline__))
pmulx_u16 (uint16x2_t __a, uint16x2_t __b)
{
  return __builtin_csky_pmulxuv2hi (__a, __b);
}

__extension__ static __inline int32x2_t __attribute__ ((__always_inline__))
pmulx_s16 (int16x2_t __a, int16x2_t __b)
{
  return __builtin_csky_pmulxsv2hi (__a, __b);
}

__extension__ static __inline int32x2_t __attribute__ ((__always_inline__))
prmul_s16 (int16x2_t __a, int16x2_t __b)
{
  return __builtin_csky_prmulsv2hi (__a, __b);
}

__extension__ static __inline int32x2_t __attribute__ ((__always_inline__))
prmulx_s16 (int16x2_t __a, int16x2_t __b)
{
  return __builtin_csky_prmulxsv2hi (__a, __b);
}

__extension__ static __inline int16x2_t __attribute__ ((__always_inline__))
prmul_s16_h (int16x2_t __a, int16x2_t __b)
{
  return __builtin_csky_prmulshv2hi (__a, __b);
}

__extension__ static __inline int16x2_t __attribute__ ((__always_inline__))
prmul_s16_rh (int16x2_t __a, int16x2_t __b)
{
  return __builtin_csky_prmulsrhv2hi (__a, __b);
}

__extension__ static __inline int16x2_t __attribute__ ((__always_inline__))
prmulx_s16_h (int16x2_t __a, int16x2_t __b)
{
  return __builtin_csky_prmulxshv2hi (__a, __b);
}

__extension__ static __inline int16x2_t __attribute__ ((__always_inline__))
prmulx_s16_rh (int16x2_t __a, int16x2_t __b)
{
  return __builtin_csky_prmulxsrhv2hi (__a, __b);
}

__extension__ static __inline uint32_t __attribute__ ((__always_inline__))
psabsa_u8 (uint8x4_t __a, uint8x4_t __b)
{
  return __builtin_csky_psabsav4qi (__a, __b);
}

__extension__ static __inline uint32_t __attribute__ ((__always_inline__))
psabsaa_u8 (uint8x4_t __a, uint8x4_t __b)
{
  return __builtin_csky_psabsaav4qi (__a, __b);
}

__extension__ static __inline int16x2_t __attribute__ ((__always_inline__))
pasri_s16 (int16x2_t __a, const int32_t __b)
{
  return __a >> __b;
}

__extension__ static __inline int16x2_t __attribute__ ((__always_inline__))
pasr_s16 (int16x2_t __a, int32_t __b)
{
  return __a >> __b;
}

__extension__ static __inline uint16x2_t __attribute__ ((__always_inline__))
plsri_u16 (uint16x2_t __a, const int32_t __b)
{
  return __a >> __b;
}

__extension__ static __inline uint16x2_t __attribute__ ((__always_inline__))
plsr_u16 (uint16x2_t __a, int32_t __b)
{
  return __a >> __b;
}

__extension__ static __inline int16x2_t __attribute__ ((__always_inline__))
plsli_s16 (int16x2_t __a, const int32_t __b)
{
  return __a << __b;
}

__extension__ static __inline int16x2_t __attribute__ ((__always_inline__))
plsl_s16 (int16x2_t __a, int32_t __b)
{
  return __a << __b;
}

__extension__ static __inline int16x2_t __attribute__ ((__always_inline__))
pasri_s16_r (int16x2_t __a, const int32_t __b)
{
  return __builtin_csky_pasrirv2hi (__a, __b);
}

__extension__ static __inline int16x2_t __attribute__ ((__always_inline__))
pasr_s16_r (int16x2_t __a, int32_t __b)
{
  return __builtin_csky_pasrrv2hi (__a, __b);
}

__extension__ static __inline uint16x2_t __attribute__ ((__always_inline__))
plsri_u16_r (uint16x2_t __a, const int32_t __b)
{
  return __builtin_csky_plsrirv2hi (__a, __b);
}

__extension__ static __inline uint16x2_t __attribute__ ((__always_inline__))
plsr_u16_r (uint16x2_t __a, int32_t __b)
{
  return __builtin_csky_plsrrv2hi (__a, __b);
}

__extension__ static __inline int16x2_t __attribute__ ((__always_inline__))
plsli_s16_s (int16x2_t __a, const int32_t __b)
{
  return __builtin_csky_plslissv2hi (__a, __b);
}

__extension__ static __inline int16x2_t __attribute__ ((__always_inline__))
plsl_s16_s (int16x2_t __a, int32_t __b)
{
  return __builtin_csky_plslssv2hi (__a, __b);
}

__extension__ static __inline int16x2_t __attribute__ ((__always_inline__))
plsli_u16_s (int16x2_t __a, const int32_t __b)
{
  return __builtin_csky_plsliusv2hi (__a, __b);
}

__extension__ static __inline int16x2_t __attribute__ ((__always_inline__))
plsl_u16_s (int16x2_t __a, int32_t __b)
{
  return __builtin_csky_plslusv2hi (__a, __b);
}

#endif // __CSKY_DSPV2__
#if defined (__CSKY_VDSP64__)
typedef __simd64_int8_t     int8x8_t;
typedef __simd64_uint8_t    uint8x8_t;
typedef __simd64_int16_t    int16x4_t;
typedef __simd64_uint16_t   uint16x4_t;
typedef __simd64_int32_t    int32x2_t;
typedef __simd64_uint32_t   uint32x2_t;

__extension__ static __inline int8x8_t __attribute__ ((__always_inline__))
vabs_s8 (int8x8_t __a)
{
  return __builtin_csky_vabsv8qi (__a);
}

__extension__ static __inline int16x4_t __attribute__ ((__always_inline__))
vabs_s16 (int16x4_t __a)
{
  return __builtin_csky_vabsv4hi (__a);
}

__extension__ static __inline int32x2_t __attribute__ ((__always_inline__))
vabs_s32 (int32x2_t __a)
{
  return __builtin_csky_vabsv2si (__a);
}

__extension__ static __inline int8x8_t __attribute__ ((__always_inline__))
vabs_s8_s (int8x8_t __a)
{
  return __builtin_csky_vabsssv8qi (__a);
}

__extension__ static __inline int16x4_t __attribute__ ((__always_inline__))
vabs_s16_s (int16x4_t __a)
{
  return __builtin_csky_vabsssv4hi (__a);
}

__extension__ static __inline int32x2_t __attribute__ ((__always_inline__))
vabs_s32_s (int32x2_t __a)
{
  return __builtin_csky_vabsssv2si (__a);
}

__extension__ static __inline int16x4_t __attribute__ ((__always_inline__))
vadd_es8 (int8x8_t __a, int8x8_t __b)
{
  return __builtin_csky_vaddesv8qi (__a, __b);
}

__extension__ static __inline uint16x4_t __attribute__ ((__always_inline__))
vadd_eu8 (uint8x8_t __a, uint8x8_t __b)
{
  return __builtin_csky_vaddeuv8qi (__a, __b);
}

__extension__ static __inline int32x2_t __attribute__ ((__always_inline__))
vadd_es16 (int16x4_t __a, int16x4_t __b)
{
  return __builtin_csky_vaddesv4hi (__a, __b);
}

__extension__ static __inline uint32x2_t __attribute__ ((__always_inline__))
vadd_eu16 (uint16x4_t __a, uint16x4_t __b)
{
  return __builtin_csky_vaddeuv4hi (__a, __b);
}

__extension__ static __inline uint8x8_t __attribute__ ((__always_inline__))
vadd_u8 (uint8x8_t __a, uint8x8_t __b)
{
  return __a + __b;
}

__extension__ static __inline uint16x4_t __attribute__ ((__always_inline__))
vadd_u16 (uint16x4_t __a, uint16x4_t __b)
{
  return __a + __b;
}

__extension__ static __inline uint32x2_t __attribute__ ((__always_inline__))
vadd_u32 (uint32x2_t __a, uint32x2_t __b)
{
  return __a + __b;
}

__extension__ static __inline int8x8_t __attribute__ ((__always_inline__))
vadd_s8 (int8x8_t __a, int8x8_t __b)
{
  return __a + __b;
}

__extension__ static __inline int16x4_t __attribute__ ((__always_inline__))
vadd_s16 (int16x4_t __a, int16x4_t __b)
{
  return __a + __b;
}

__extension__ static __inline int32x2_t __attribute__ ((__always_inline__))
vadd_s32 (int32x2_t __a, int32x2_t __b)
{
  return __a + __b;
}

__extension__ static __inline uint8x8_t __attribute__ ((__always_inline__))
vadd_u8_s (uint8x8_t __a, uint8x8_t __b)
{
  return __builtin_csky_vaddusv8qi(__a, __b);
}

__extension__ static __inline uint16x4_t __attribute__ ((__always_inline__))
vadd_u16_s (uint16x4_t __a, uint16x4_t __b)
{
  return __builtin_csky_vaddusv4hi(__a, __b);
}

__extension__ static __inline uint32x2_t __attribute__ ((__always_inline__))
vadd_u32_s (uint32x2_t __a, uint32x2_t __b)
{
  return __builtin_csky_vaddusv2si(__a, __b);
}

__extension__ static __inline int8x8_t __attribute__ ((__always_inline__))
vadd_s8_s (int8x8_t __a, int8x8_t __b)
{
  return __builtin_csky_vaddssv8qi(__a, __b);
}

__extension__ static __inline int16x4_t __attribute__ ((__always_inline__))
vadd_s16_s (int16x4_t __a, int16x4_t __b)
{
  return __builtin_csky_vaddssv4hi(__a, __b);
}

__extension__ static __inline int32x2_t __attribute__ ((__always_inline__))
vadd_s32_s (int32x2_t __a, int32x2_t __b)
{
  return __builtin_csky_vaddssv2si(__a, __b);
}

__extension__ static __inline uint8x8_t __attribute__ ((__always_inline__))
vsub_u8 (uint8x8_t __a, uint8x8_t __b)
{
  return __a - __b;
}

__extension__ static __inline uint16x4_t __attribute__ ((__always_inline__))
vsub_u16 (uint16x4_t __a, uint16x4_t __b)
{
  return __a - __b;
}

__extension__ static __inline uint32x2_t __attribute__ ((__always_inline__))
vsub_u32 (uint32x2_t __a, uint32x2_t __b)
{
  return __a - __b;
}

__extension__ static __inline int8x8_t __attribute__ ((__always_inline__))
vsub_s8 (int8x8_t __a, int8x8_t __b)
{
  return __a - __b;
}

__extension__ static __inline int16x4_t __attribute__ ((__always_inline__))
vsub_s16 (int16x4_t __a, int16x4_t __b)
{
  return __a - __b;
}

__extension__ static __inline int32x2_t __attribute__ ((__always_inline__))
vsub_s32 (int32x2_t __a, int32x2_t __b)
{
  return __a - __b;
}

__extension__ static __inline uint8x8_t __attribute__ ((__always_inline__))
vsub_u8_s (uint8x8_t __a, uint8x8_t __b)
{
  return __builtin_csky_vsubusv8qi(__a, __b);
}

__extension__ static __inline uint16x4_t __attribute__ ((__always_inline__))
vsub_u16_s (uint16x4_t __a, uint16x4_t __b)
{
  return __builtin_csky_vsubusv4hi(__a, __b);
}

__extension__ static __inline uint32x2_t __attribute__ ((__always_inline__))
vsub_u32_s (uint32x2_t __a, uint32x2_t __b)
{
  return __builtin_csky_vsubusv2si(__a, __b);
}

__extension__ static __inline int8x8_t __attribute__ ((__always_inline__))
vsub_s8_s (int8x8_t __a, int8x8_t __b)
{
  return __builtin_csky_vsubssv8qi(__a, __b);
}

__extension__ static __inline int16x4_t __attribute__ ((__always_inline__))
vsub_s16_s (int16x4_t __a, int16x4_t __b)
{
  return __builtin_csky_vsubssv4hi(__a, __b);
}

__extension__ static __inline int32x2_t __attribute__ ((__always_inline__))
vsub_s32_s (int32x2_t __a, int32x2_t __b)
{
  return __builtin_csky_vsubssv2si(__a, __b);
}

__extension__ static __inline uint16x4_t __attribute__ ((__always_inline__))
vadd_xu16 (uint8x8_t __a, uint16x4_t __b)
{
  return __builtin_csky_vaddxuv4hi (__a, __b);
}

__extension__ static __inline uint32x2_t __attribute__ ((__always_inline__))
vadd_xu32 (uint16x4_t __a, uint32x2_t __b)
{
  return __builtin_csky_vaddxuv2si (__a, __b);
}

__extension__ static __inline int16x4_t __attribute__ ((__always_inline__))
vadd_xs16 (int8x8_t __a, int16x4_t __b)
{
  return __builtin_csky_vaddxsv4hi (__a, __b);
}

__extension__ static __inline int32x2_t __attribute__ ((__always_inline__))
vadd_xs32 (int16x4_t __a, int32x2_t __b)
{
  return __builtin_csky_vaddxsv2si (__a, __b);
}

__extension__ static __inline uint16x4_t __attribute__ ((__always_inline__))
vsub_xu16 (uint8x8_t __a, uint16x4_t __b)
{
  return __builtin_csky_vsubxuv4hi (__a, __b);
}

__extension__ static __inline uint32x2_t __attribute__ ((__always_inline__))
vsub_xu32 (uint16x4_t __a, uint32x2_t __b)
{
  return __builtin_csky_vsubxuv2si (__a, __b);
}

__extension__ static __inline int16x4_t __attribute__ ((__always_inline__))
vsub_xs16 (int8x8_t __a, int16x4_t __b)
{
  return __builtin_csky_vsubxsv4hi (__a, __b);
}

__extension__ static __inline int32x2_t __attribute__ ((__always_inline__))
vsub_xs32 (int16x4_t __a, int32x2_t __b)
{
  return __builtin_csky_vsubxsv2si (__a, __b);
}

__extension__ static __inline uint8x8_t __attribute__ ((__always_inline__))
vadd_xu16_sl (uint8x8_t __a, uint16x4_t __b)
{
  return __builtin_csky_vaddxsluv4hi (__a, __b);
}

__extension__ static __inline uint16x4_t __attribute__ ((__always_inline__))
vadd_xu32_sl (uint16x4_t __a, uint32x2_t __b)
{
  return __builtin_csky_vaddxsluv2si (__a, __b);
}

__extension__ static __inline int8x8_t __attribute__ ((__always_inline__))
vadd_xs16_sl (int8x8_t __a, int16x4_t __b)
{
  return __builtin_csky_vaddxslsv4hi (__a, __b);
}

__extension__ static __inline int16x4_t __attribute__ ((__always_inline__))
vadd_xs32_sl (int16x4_t __a, int32x2_t __b)
{
  return __builtin_csky_vaddxslsv2si (__a, __b);
}

__extension__ static __inline uint8x8_t __attribute__ ((__always_inline__))
vaddh_u8 (uint8x8_t __a, uint8x8_t __b)
{
  return __builtin_csky_vaddhuv8qi (__a, __b);
}

__extension__ static __inline uint16x4_t __attribute__ ((__always_inline__))
vaddh_u16 (uint16x4_t __a, uint16x4_t __b)
{
  return __builtin_csky_vaddhuv4hi (__a, __b);
}

__extension__ static __inline uint32x2_t __attribute__ ((__always_inline__))
vaddh_u32 (uint32x2_t __a, uint32x2_t __b)
{
  return __builtin_csky_vaddhuv2si (__a, __b);
}

__extension__ static __inline int8x8_t __attribute__ ((__always_inline__))
vaddh_s8 (int8x8_t __a, int8x8_t __b)
{
  return __builtin_csky_vaddhsv8qi (__a, __b);
}

__extension__ static __inline int16x4_t __attribute__ ((__always_inline__))
vaddh_s16 (int16x4_t __a, int16x4_t __b)
{
  return __builtin_csky_vaddhsv4hi (__a, __b);
}

__extension__ static __inline int32x2_t __attribute__ ((__always_inline__))
vaddh_s32 (int32x2_t __a, int32x2_t __b)
{
  return __builtin_csky_vaddhsv2si (__a, __b);
}

__extension__ static __inline uint8x8_t __attribute__ ((__always_inline__))
vaddh_u8_r (uint8x8_t __a, uint8x8_t __b)
{
  return __builtin_csky_vaddhruv8qi (__a, __b);
}

__extension__ static __inline uint16x4_t __attribute__ ((__always_inline__))
vaddh_u16_r (uint16x4_t __a, uint16x4_t __b)
{
  return __builtin_csky_vaddhruv4hi (__a, __b);
}

__extension__ static __inline uint32x2_t __attribute__ ((__always_inline__))
vaddh_u32_r (uint32x2_t __a, uint32x2_t __b)
{
  return __builtin_csky_vaddhruv2si (__a, __b);
}

__extension__ static __inline int8x8_t __attribute__ ((__always_inline__))
vaddh_s8_r (int8x8_t __a, int8x8_t __b)
{
  return __builtin_csky_vaddhrsv8qi (__a, __b);
}

__extension__ static __inline int16x4_t __attribute__ ((__always_inline__))
vaddh_s16_r (int16x4_t __a, int16x4_t __b)
{
  return __builtin_csky_vaddhrsv4hi (__a, __b);
}

__extension__ static __inline int32x2_t __attribute__ ((__always_inline__))
vaddh_s32_r (int32x2_t __a, int32x2_t __b)
{
  return __builtin_csky_vaddhrsv2si (__a, __b);
}

__extension__ static __inline uint8x8_t __attribute__ ((__always_inline__))
vsubh_u8 (uint8x8_t __a, uint8x8_t __b)
{
  return __builtin_csky_vsubhuv8qi (__a, __b);
}

__extension__ static __inline uint16x4_t __attribute__ ((__always_inline__))
vsubh_u16 (uint16x4_t __a, uint16x4_t __b)
{
  return __builtin_csky_vsubhuv4hi (__a, __b);
}

__extension__ static __inline uint32x2_t __attribute__ ((__always_inline__))
vsubh_u32 (uint32x2_t __a, uint32x2_t __b)
{
  return __builtin_csky_vsubhuv2si (__a, __b);
}

__extension__ static __inline int8x8_t __attribute__ ((__always_inline__))
vsubh_s8 (int8x8_t __a, int8x8_t __b)
{
  return __builtin_csky_vsubhsv8qi (__a, __b);
}

__extension__ static __inline int16x4_t __attribute__ ((__always_inline__))
vsubh_s16 (int16x4_t __a, int16x4_t __b)
{
  return __builtin_csky_vsubhsv4hi (__a, __b);
}

__extension__ static __inline int32x2_t __attribute__ ((__always_inline__))
vsubh_s32 (int32x2_t __a, int32x2_t __b)
{
  return __builtin_csky_vsubhsv2si (__a, __b);
}

__extension__ static __inline uint8x8_t __attribute__ ((__always_inline__))
vsubh_u8_r (uint8x8_t __a, uint8x8_t __b)
{
  return __builtin_csky_vsubhruv8qi (__a, __b);
}

__extension__ static __inline uint16x4_t __attribute__ ((__always_inline__))
vsubh_u16_r (uint16x4_t __a, uint16x4_t __b)
{
  return __builtin_csky_vsubhruv4hi (__a, __b);
}

__extension__ static __inline uint32x2_t __attribute__ ((__always_inline__))
vsubh_u32_r (uint32x2_t __a, uint32x2_t __b)
{
  return __builtin_csky_vsubhruv2si (__a, __b);
}

__extension__ static __inline int8x8_t __attribute__ ((__always_inline__))
vsubh_s8_r (int8x8_t __a, int8x8_t __b)
{
  return __builtin_csky_vsubhrsv8qi (__a, __b);
}

__extension__ static __inline int16x4_t __attribute__ ((__always_inline__))
vsubh_s16_r (int16x4_t __a, int16x4_t __b)
{
  return __builtin_csky_vsubhrsv4hi (__a, __b);
}

__extension__ static __inline int32x2_t __attribute__ ((__always_inline__))
vsubh_s32_r (int32x2_t __a, int32x2_t __b)
{
  return __builtin_csky_vsubhrsv2si (__a, __b);
}

__extension__ static __inline int8x8_t __attribute__ ((__always_inline__))
vand_8 (int8x8_t __a, int8x8_t __b)
{
  return __a & __b;
}

__extension__ static __inline int16x4_t __attribute__ ((__always_inline__))
vand_16 (int16x4_t __a, int16x4_t __b)
{
  return __a & __b;
}

__extension__ static __inline int32x2_t __attribute__ ((__always_inline__))
vand_32 (int32x2_t __a, int32x2_t __b)
{
  return __a & __b;
}

__extension__ static __inline int8x8_t __attribute__ ((__always_inline__))
vandn_8 (int8x8_t __a, int8x8_t __b)
{
  return __builtin_csky_vandnv8qi (__a, __b);
}

__extension__ static __inline int16x4_t __attribute__ ((__always_inline__))
vandn_16 (int16x4_t __a, int16x4_t __b)
{
  return __builtin_csky_vandnv4hi (__a, __b);
}

__extension__ static __inline int32x2_t __attribute__ ((__always_inline__))
vandn_32 (int32x2_t __a, int32x2_t __b)
{
  return __builtin_csky_vandnv2si (__a, __b);;
}

__extension__ static __inline int8x8_t __attribute__ ((__always_inline__))
vbperm_8 (int8x8_t __a, int8x8_t __b)
{
  return __builtin_csky_vbpermv8qi (__a, __b);
}

__extension__ static __inline int8x8_t __attribute__ ((__always_inline__))
vbpermz_8 (int8x8_t __a, int8x8_t __b)
{
  return __builtin_csky_vbpermzv8qi (__a, __b);
}

__extension__ static __inline int16x4_t __attribute__ ((__always_inline__))
vcadd_es8 (int8x8_t __a, int8x8_t __b)
{
  return __builtin_csky_vcaddesv8qi (__a, __b);
}

__extension__ static __inline uint16x4_t __attribute__ ((__always_inline__))
vcadd_eu8 (uint8x8_t __a, uint8x8_t __b)
{
  return __builtin_csky_vcaddeuv8qi (__a, __b);
}

__extension__ static __inline int32x2_t __attribute__ ((__always_inline__))
vcadd_es16 (int16x4_t __a, int16x4_t __b)
{
  return __builtin_csky_vcaddesv4hi (__a, __b);
}

__extension__ static __inline uint32x2_t __attribute__ ((__always_inline__))
vcadd_eu16 (uint16x4_t __a, uint16x4_t __b)
{
  return __builtin_csky_vcaddeuv4hi (__a, __b);
}

__extension__ static __inline uint8x8_t __attribute__ ((__always_inline__))
vcadd_u8 (uint8x8_t __a, uint8x8_t __b)
{
  return __builtin_csky_vcadduv8qi (__a, __b);
}

__extension__ static __inline uint16x4_t __attribute__ ((__always_inline__))
vcadd_u16 (uint16x4_t __a, uint16x4_t __b)
{
  return __builtin_csky_vcadduv4hi (__a, __b);
}

__extension__ static __inline uint32x2_t __attribute__ ((__always_inline__))
vcadd_u32 (uint32x2_t __a, uint32x2_t __b)
{
  return __builtin_csky_vcadduv2si (__a, __b);
}

__extension__ static __inline int8x8_t __attribute__ ((__always_inline__))
vcadd_s8 (int8x8_t __a, int8x8_t __b)
{
  return __builtin_csky_vcaddsv8qi (__a, __b);
}

__extension__ static __inline int16x4_t __attribute__ ((__always_inline__))
vcadd_s16 (int16x4_t __a, int16x4_t __b)
{
  return __builtin_csky_vcaddsv4hi (__a, __b);
}

__extension__ static __inline int32x2_t __attribute__ ((__always_inline__))
vcadd_s32 (int32x2_t __a, int32x2_t __b)
{
  return __builtin_csky_vcaddsv2si (__a, __b);
}

__extension__ static __inline int8x8_t __attribute__ ((__always_inline__))
vcls_s8 (int8x8_t __a)
{
  return __builtin_csky_vclssv8qi (__a);
}

__extension__ static __inline int16x4_t __attribute__ ((__always_inline__))
vcls_s16 (int16x4_t __a)
{
  return __builtin_csky_vclssv4hi (__a);
}

__extension__ static __inline int32x2_t __attribute__ ((__always_inline__))
vcls_s32 (int32x2_t __a)
{
  return __builtin_csky_vclssv2si (__a);
}

__extension__ static __inline int8x8_t __attribute__ ((__always_inline__))
vclz_8 (int8x8_t __a)
{
  return __builtin_csky_vclzv8qi (__a);
}

__extension__ static __inline int16x4_t __attribute__ ((__always_inline__))
vclz_16 (int16x4_t __a)
{
  return __builtin_csky_vclzv4hi (__a);
}

__extension__ static __inline int32x2_t __attribute__ ((__always_inline__))
vclz_32 (int32x2_t __a)
{
  return __builtin_csky_vclzv2si (__a);
}

__extension__ static __inline uint8x8_t __attribute__ ((__always_inline__))
vcmax_u8 (uint8x8_t __a, uint8x8_t __b)
{
  return __builtin_csky_vcmaxuv8qi (__a, __b);
}

__extension__ static __inline uint16x4_t __attribute__ ((__always_inline__))
vcmax_u16 (uint16x4_t __a, uint16x4_t __b)
{
  return __builtin_csky_vcmaxuv4hi (__a, __b);
}

__extension__ static __inline uint32x2_t __attribute__ ((__always_inline__))
vcmax_u32 (uint32x2_t __a, uint32x2_t __b)
{
  return __builtin_csky_vcmaxuv2si (__a, __b);
}

__extension__ static __inline int8x8_t __attribute__ ((__always_inline__))
vcmax_s8 (int8x8_t __a, int8x8_t __b)
{
  return __builtin_csky_vcmaxsv8qi (__a, __b);
}

__extension__ static __inline int16x4_t __attribute__ ((__always_inline__))
vcmax_s16 (int16x4_t __a, int16x4_t __b)
{
  return __builtin_csky_vcmaxsv4hi (__a, __b);
}

__extension__ static __inline int32x2_t __attribute__ ((__always_inline__))
vcmax_s32 (int32x2_t __a, int32x2_t __b)
{
  return __builtin_csky_vcmaxsv2si (__a, __b);
}

__extension__ static __inline uint8x8_t __attribute__ ((__always_inline__))
vcmin_u8 (uint8x8_t __a, uint8x8_t __b)
{
  return __builtin_csky_vcminuv8qi (__a, __b);
}

__extension__ static __inline uint16x4_t __attribute__ ((__always_inline__))
vcmin_u16 (uint16x4_t __a, uint16x4_t __b)
{
  return __builtin_csky_vcminuv4hi (__a, __b);
}

__extension__ static __inline uint32x2_t __attribute__ ((__always_inline__))
vcmin_u32 (uint32x2_t __a, uint32x2_t __b)
{
  return __builtin_csky_vcminuv2si (__a, __b);
}

__extension__ static __inline int8x8_t __attribute__ ((__always_inline__))
vcmin_s8 (int8x8_t __a, int8x8_t __b)
{
  return __builtin_csky_vcminsv8qi (__a, __b);
}

__extension__ static __inline int16x4_t __attribute__ ((__always_inline__))
vcmin_s16 (int16x4_t __a, int16x4_t __b)
{
  return __builtin_csky_vcminsv4hi (__a, __b);
}

__extension__ static __inline int32x2_t __attribute__ ((__always_inline__))
vcmin_s32 (int32x2_t __a, int32x2_t __b)
{
  return __builtin_csky_vcminsv2si (__a, __b);
}

__extension__ static __inline uint8x8_t __attribute__ ((__always_inline__))
vcmphs_u8 (uint8x8_t __a, uint8x8_t __b)
{
  return __builtin_csky_vcmpuhsv8qi (__a, __b);
}

__extension__ static __inline uint16x4_t __attribute__ ((__always_inline__))
vcmphs_u16 (uint16x4_t __a, uint16x4_t __b)
{
  return __builtin_csky_vcmpuhsv4hi (__a, __b);
}

__extension__ static __inline uint32x2_t __attribute__ ((__always_inline__))
vcmphs_u32 (uint32x2_t __a, uint32x2_t __b)
{
  return __builtin_csky_vcmpuhsv2si (__a, __b);
}

__extension__ static __inline int8x8_t __attribute__ ((__always_inline__))
vcmphs_s8 (int8x8_t __a, int8x8_t __b)
{
  return __builtin_csky_vcmpshsv8qi (__a, __b);
}

__extension__ static __inline int16x4_t __attribute__ ((__always_inline__))
vcmphs_s16 (int16x4_t __a, int16x4_t __b)
{
  return __builtin_csky_vcmpshsv4hi (__a, __b);
}

__extension__ static __inline int32x2_t __attribute__ ((__always_inline__))
vcmphs_s32 (int32x2_t __a, int32x2_t __b)
{
  return __builtin_csky_vcmpshsv2si (__a, __b);
}

__extension__ static __inline uint8x8_t __attribute__ ((__always_inline__))
vcmphsz_u8 (uint8x8_t __a)
{
  return __builtin_csky_vcmphszuv8qi (__a);
}

__extension__ static __inline uint16x4_t __attribute__ ((__always_inline__))
vcmphsz_u16 (uint16x4_t __a)
{
  return __builtin_csky_vcmphszuv4hi (__a);
}

__extension__ static __inline uint32x2_t __attribute__ ((__always_inline__))
vcmphsz_u32 (uint32x2_t __a)
{
  return __builtin_csky_vcmphszuv2si (__a);
}

__extension__ static __inline int8x8_t __attribute__ ((__always_inline__))
vcmphsz_s8 (int8x8_t __a)
{
  return __builtin_csky_vcmphszsv8qi (__a);
}

__extension__ static __inline int16x4_t __attribute__ ((__always_inline__))
vcmphsz_s16 (int16x4_t __a)
{
  return __builtin_csky_vcmphszsv4hi (__a);
}

__extension__ static __inline int32x2_t __attribute__ ((__always_inline__))
vcmphsz_s32 (int32x2_t __a)
{
  return __builtin_csky_vcmphszsv2si (__a);
}

__extension__ static __inline uint8x8_t __attribute__ ((__always_inline__))
vcmplt_u8 (uint8x8_t __a, uint8x8_t __b)
{
  return __builtin_csky_vcmpultv8qi (__a, __b);
}

__extension__ static __inline uint16x4_t __attribute__ ((__always_inline__))
vcmplt_u16 (uint16x4_t __a, uint16x4_t __b)
{
  return __builtin_csky_vcmpultv4hi (__a, __b);
}

__extension__ static __inline uint32x2_t __attribute__ ((__always_inline__))
vcmplt_u32 (uint32x2_t __a, uint32x2_t __b)
{
  return __builtin_csky_vcmpultv2si (__a, __b);
}

__extension__ static __inline int8x8_t __attribute__ ((__always_inline__))
vcmplt_s8 (int8x8_t __a, int8x8_t __b)
{
  return __builtin_csky_vcmpsltv8qi (__a, __b);
}

__extension__ static __inline int16x4_t __attribute__ ((__always_inline__))
vcmplt_s16 (int16x4_t __a, int16x4_t __b)
{
  return __builtin_csky_vcmpsltv4hi (__a, __b);
}

__extension__ static __inline int32x2_t __attribute__ ((__always_inline__))
vcmplt_s32 (int32x2_t __a, int32x2_t __b)
{
  return __builtin_csky_vcmpsltv2si (__a, __b);
}

__extension__ static __inline uint8x8_t __attribute__ ((__always_inline__))
vcmpltz_u8 (uint8x8_t __a)
{
  return __builtin_csky_vcmpltzuv8qi (__a);
}

__extension__ static __inline uint16x4_t __attribute__ ((__always_inline__))
vcmpltz_u16 (uint16x4_t __a)
{
  return __builtin_csky_vcmpltzuv4hi (__a);
}

__extension__ static __inline uint32x2_t __attribute__ ((__always_inline__))
vcmpltz_u32 (uint32x2_t __a)
{
  return __builtin_csky_vcmpltzuv2si (__a);
}

__extension__ static __inline int8x8_t __attribute__ ((__always_inline__))
vcmpltz_s8 (int8x8_t __a)
{
  return __builtin_csky_vcmpltzsv8qi (__a);
}

__extension__ static __inline int16x4_t __attribute__ ((__always_inline__))
vcmpltz_s16 (int16x4_t __a)
{
  return __builtin_csky_vcmpltzsv4hi (__a);
}

__extension__ static __inline int32x2_t __attribute__ ((__always_inline__))
vcmpltz_s32 (int32x2_t __a)
{
  return __builtin_csky_vcmpltzsv2si (__a);
}

__extension__ static __inline uint8x8_t __attribute__ ((__always_inline__))
vcmpne_u8 (uint8x8_t __a, uint8x8_t __b)
{
  return __builtin_csky_vcmpunev8qi (__a, __b);
}

__extension__ static __inline uint16x4_t __attribute__ ((__always_inline__))
vcmpne_u16 (uint16x4_t __a, uint16x4_t __b)
{
  return __builtin_csky_vcmpunev4hi (__a, __b);
}

__extension__ static __inline uint32x2_t __attribute__ ((__always_inline__))
vcmpne_u32 (uint32x2_t __a, uint32x2_t __b)
{
  return __builtin_csky_vcmpunev2si (__a, __b);
}

__extension__ static __inline int8x8_t __attribute__ ((__always_inline__))
vcmpne_s8 (int8x8_t __a, int8x8_t __b)
{
  return __builtin_csky_vcmpsnev8qi (__a, __b);
}

__extension__ static __inline int16x4_t __attribute__ ((__always_inline__))
vcmpne_s16 (int16x4_t __a, int16x4_t __b)
{
  return __builtin_csky_vcmpsnev4hi (__a, __b);
}

__extension__ static __inline int32x2_t __attribute__ ((__always_inline__))
vcmpne_s32 (int32x2_t __a, int32x2_t __b)
{
  return __builtin_csky_vcmpsnev2si (__a, __b);
}

__extension__ static __inline uint8x8_t __attribute__ ((__always_inline__))
vcmpnez_u8 (uint8x8_t __a)
{
  return __builtin_csky_vcmpnezuv8qi (__a);
}

__extension__ static __inline uint16x4_t __attribute__ ((__always_inline__))
vcmpnez_u16 (uint16x4_t __a)
{
  return __builtin_csky_vcmpnezuv4hi (__a);
}

__extension__ static __inline uint32x2_t __attribute__ ((__always_inline__))
vcmpnez_u32 (uint32x2_t __a)
{
  return __builtin_csky_vcmpnezuv2si (__a);
}

__extension__ static __inline int8x8_t __attribute__ ((__always_inline__))
vcmpnez_s8 (int8x8_t __a)
{
  return __builtin_csky_vcmpnezsv8qi (__a);
}

__extension__ static __inline int16x4_t __attribute__ ((__always_inline__))
vcmpnez_s16 (int16x4_t __a)
{
  return __builtin_csky_vcmpnezsv4hi (__a);
}

__extension__ static __inline int32x2_t __attribute__ ((__always_inline__))
vcmpnez_s32 (int32x2_t __a)
{
  return __builtin_csky_vcmpnezsv2si (__a);
}

__extension__ static __inline int8x8_t __attribute__ ((__always_inline__))
vcnt1_s8 (int8x8_t __a)
{
  return __builtin_csky_vcnt1sv8qi (__a);
}

__extension__ static __inline uint8x8_t __attribute__ ((__always_inline__))
vcnt1_u8 (uint8x8_t __a)
{
  return __builtin_csky_vcnt1uv8qi (__a);
}

__extension__ static __inline int8x8_t __attribute__ ((__always_inline__))
vdch_8 (int8x8_t __a, int8x8_t __b)
{
  return __builtin_csky_vdchv8qi (__a, __b);
}

__extension__ static __inline int16x4_t __attribute__ ((__always_inline__))
vdch_16 (int16x4_t __a, int16x4_t __b)
{
  return __builtin_csky_vdchv4hi (__a, __b);
}

__extension__ static __inline int32x2_t __attribute__ ((__always_inline__))
vdch_32 (int32x2_t __a, int32x2_t __b)
{
  return __builtin_csky_vdchv2si (__a, __b);;
}

__extension__ static __inline int8x8_t __attribute__ ((__always_inline__))
vdcl_8 (int8x8_t __a, int8x8_t __b)
{
  return __builtin_csky_vdclv8qi (__a, __b);
}

__extension__ static __inline int16x4_t __attribute__ ((__always_inline__))
vdcl_16 (int16x4_t __a, int16x4_t __b)
{
  return __builtin_csky_vdclv4hi (__a, __b);
}

__extension__ static __inline int32x2_t __attribute__ ((__always_inline__))
vdcl_32 (int32x2_t __a, int32x2_t __b)
{
  return __builtin_csky_vdclv2si (__a, __b);;
}

__extension__ static __inline int8x8_t __attribute__ ((__always_inline__))
vdup_8 (int8x8_t __a, const int32_t __b)
{
  return __builtin_csky_vdupv8qi (__a, __b);
}

__extension__ static __inline int16x4_t __attribute__ ((__always_inline__))
vdup_16 (int16x4_t __a, const int32_t __b)
{
  return __builtin_csky_vdupv4hi (__a, __b);
}

__extension__ static __inline int32x2_t __attribute__ ((__always_inline__))
vdup_32 (int32x2_t __a, const int32_t __b)
{
  return __builtin_csky_vdupv2si (__a, __b);;
}

__extension__ static __inline int8x8_t __attribute__ ((__always_inline__))
vich_8 (int8x8_t __a, int8x8_t __b)
{
  return __builtin_csky_vichv8qi (__a, __b);
}

__extension__ static __inline int16x4_t __attribute__ ((__always_inline__))
vich_16 (int16x4_t __a, int16x4_t __b)
{
  return __builtin_csky_vichv4hi (__a, __b);
}

__extension__ static __inline int32x2_t __attribute__ ((__always_inline__))
vich_32 (int32x2_t __a, int32x2_t __b)
{
  return __builtin_csky_vichv2si (__a, __b);;
}

__extension__ static __inline int8x8_t __attribute__ ((__always_inline__))
vicl_8 (int8x8_t __a, int8x8_t __b)
{
  return __builtin_csky_viclv8qi (__a, __b);
}

__extension__ static __inline int16x4_t __attribute__ ((__always_inline__))
vicl_16 (int16x4_t __a, int16x4_t __b)
{
  return __builtin_csky_viclv4hi (__a, __b);
}

__extension__ static __inline int32x2_t __attribute__ ((__always_inline__))
vicl_32 (int32x2_t __a, int32x2_t __b)
{
  return __builtin_csky_viclv2si (__a, __b);
}

__extension__ static __inline int8x8_t __attribute__ ((__always_inline__))
vins_8 (const int32_t __a, int8x8_t __b, const int32_t __c)
{
  return __builtin_csky_vinsv8qi (__a, __b, __c);
}

__extension__ static __inline int16x4_t __attribute__ ((__always_inline__))
vins_16 (const int32_t __a, int16x4_t __b, const int32_t __c)
{
  return __builtin_csky_vinsv4hi (__a, __b, __c);
}

__extension__ static __inline int32x2_t __attribute__ ((__always_inline__))
vins_32 (const int32_t __a, int32x2_t __b, const int32_t __c)
{
  return __builtin_csky_vinsv2si (__a, __b, __c);;
}

__extension__ static __inline int8x8_t __attribute__ ((__always_inline__))
vldd_8 (int32_t __a, const int32_t __b)
{
  return __builtin_csky_vlddv8qi (__a, __b);
}

__extension__ static __inline int16x4_t __attribute__ ((__always_inline__))
vldd_16 (int32_t __a, const int32_t __b)
{
  return __builtin_csky_vlddv4hi (__a, __b);
}

__extension__ static __inline int32x2_t __attribute__ ((__always_inline__))
vldd_32 (int32_t __a, const int32_t __b)
{
  return __builtin_csky_vlddv2si (__a, __b);;
}

__extension__ static __inline int8x8_t __attribute__ ((__always_inline__))
vldq_8 (int32_t __a, const int32_t __b)
{
  return __builtin_csky_vldqv8qi (__a, __b);
}

__extension__ static __inline int16x4_t __attribute__ ((__always_inline__))
vldq_16 (int32_t __a, const int32_t __b)
{
  return __builtin_csky_vldqv4hi (__a, __b);
}

__extension__ static __inline int32x2_t __attribute__ ((__always_inline__))
vldq_32 (int32_t __a, const int32_t __b)
{
  return __builtin_csky_vldqv2si (__a, __b);;
}

__extension__ static __inline int8x8_t __attribute__ ((__always_inline__))
vstd_8 (int32_t __a, const int32_t __b)
{
  return __builtin_csky_vstdv8qi (__a, __b);
}

__extension__ static __inline int16x4_t __attribute__ ((__always_inline__))
vstd_16 (int32_t __a, const int32_t __b)
{
  return __builtin_csky_vstdv4hi (__a, __b);
}

__extension__ static __inline int32x2_t __attribute__ ((__always_inline__))
vstd_32 (int32_t __a, const int32_t __b)
{
  return __builtin_csky_vstdv2si (__a, __b);;
}

__extension__ static __inline int8x8_t __attribute__ ((__always_inline__))
vstq_8 (int32_t __a, const int32_t __b)
{
  return __builtin_csky_vstqv8qi (__a, __b);
}

__extension__ static __inline int16x4_t __attribute__ ((__always_inline__))
vstq_16 (int32_t __a, const int32_t __b)
{
  return __builtin_csky_vstqv4hi (__a, __b);
}

__extension__ static __inline int32x2_t __attribute__ ((__always_inline__))
vstq_32 (int32_t __a, const int32_t __b)
{
  return __builtin_csky_vstqv2si (__a, __b);;
}



__extension__ static __inline int8x8_t __attribute__ ((__always_inline__))
vldrd_8 (int32_t __a, int32_t __b, const int32_t __c)
{
  return __builtin_csky_vldrdv8qi (__a, __b, __c);
}

__extension__ static __inline int16x4_t __attribute__ ((__always_inline__))
vldrd_16 (int32_t __a, int32_t __b, const int32_t __c)
{
  return __builtin_csky_vldrdv4hi (__a, __b, __c);
}

__extension__ static __inline int32x2_t __attribute__ ((__always_inline__))
vldrd_32 (int32_t __a, int32_t __b, const int32_t __c)
{
  return __builtin_csky_vldrdv2si (__a, __b, __c);;
}

__extension__ static __inline int8x8_t __attribute__ ((__always_inline__))
vldrq_8 (int32_t __a, int32_t __b, const int32_t __c)
{
  return __builtin_csky_vldrqv8qi (__a, __b, __c);
}

__extension__ static __inline int16x4_t __attribute__ ((__always_inline__))
vldrq_16 (int32_t __a, int32_t __b, const int32_t __c)
{
  return __builtin_csky_vldrqv4hi (__a, __b, __c);
}

__extension__ static __inline int32x2_t __attribute__ ((__always_inline__))
vldrq_32 (int32_t __a, int32_t __b, const int32_t __c)
{
  return __builtin_csky_vldrqv2si (__a, __b, __c);;
}

__extension__ static __inline int8x8_t __attribute__ ((__always_inline__))
vstrd_8 (int32_t __a, int32_t __b, const int32_t __c)
{
  return __builtin_csky_vstrdv8qi (__a, __b, __c);
}

__extension__ static __inline int16x4_t __attribute__ ((__always_inline__))
vstrd_16 (int32_t __a, int32_t __b, const int32_t __c)
{
  return __builtin_csky_vstrdv4hi (__a, __b, __c);
}

__extension__ static __inline int32x2_t __attribute__ ((__always_inline__))
vstrd_32 (int32_t __a, int32_t __b, const int32_t __c)
{
  return __builtin_csky_vstrdv2si (__a, __b, __c);;
}

__extension__ static __inline int8x8_t __attribute__ ((__always_inline__))
vstrq_8 (int32_t __a, int32_t __b, const int32_t __c)
{
  return __builtin_csky_vstrqv8qi (__a, __b, __c);
}

__extension__ static __inline int16x4_t __attribute__ ((__always_inline__))
vstrq_16 (int32_t __a, int32_t __b, const int32_t __c)
{
  return __builtin_csky_vstrqv4hi (__a, __b, __c);
}

__extension__ static __inline int32x2_t __attribute__ ((__always_inline__))
vstrq_32 (int32_t __a, int32_t __b, const int32_t __c)
{
  return __builtin_csky_vstrqv2si (__a, __b, __c);;
}


__extension__ static __inline uint8x8_t __attribute__ ((__always_inline__))
vmax_u8 (uint8x8_t __a, uint8x8_t __b)
{
  return __builtin_csky_vumaxv8qi (__a, __b);
}

__extension__ static __inline uint16x4_t __attribute__ ((__always_inline__))
vmax_u16 (uint16x4_t __a, uint16x4_t __b)
{
  return __builtin_csky_vumaxv4hi (__a, __b);
}

__extension__ static __inline uint32x2_t __attribute__ ((__always_inline__))
vmax_u32 (uint32x2_t __a, uint32x2_t __b)
{
  return __builtin_csky_vumaxv2si (__a, __b);
}

__extension__ static __inline int8x8_t __attribute__ ((__always_inline__))
vmax_s8 (int8x8_t __a, int8x8_t __b)
{
  return __builtin_csky_vsmaxv8qi (__a, __b);
}

__extension__ static __inline int16x4_t __attribute__ ((__always_inline__))
vmax_s16 (int16x4_t __a, int16x4_t __b)
{
  return __builtin_csky_vsmaxv4hi (__a, __b);
}

__extension__ static __inline int32x2_t __attribute__ ((__always_inline__))
vmax_s32 (int32x2_t __a, int32x2_t __b)
{
  return __builtin_csky_vsmaxv2si (__a, __b);
}


__extension__ static __inline uint8x8_t __attribute__ ((__always_inline__))
vmin_u8 (uint8x8_t __a, uint8x8_t __b)
{
  return __builtin_csky_vuminv8qi (__a, __b);
}

__extension__ static __inline uint16x4_t __attribute__ ((__always_inline__))
vmin_u16 (uint16x4_t __a, uint16x4_t __b)
{
  return __builtin_csky_vuminv4hi (__a, __b);
}

__extension__ static __inline uint32x2_t __attribute__ ((__always_inline__))
vmin_u32 (uint32x2_t __a, uint32x2_t __b)
{
  return __builtin_csky_vuminv2si (__a, __b);
}

__extension__ static __inline int8x8_t __attribute__ ((__always_inline__))
vmin_s8 (int8x8_t __a, int8x8_t __b)
{
  return __builtin_csky_vsminv8qi (__a, __b);
}

__extension__ static __inline int16x4_t __attribute__ ((__always_inline__))
vmin_s16 (int16x4_t __a, int16x4_t __b)
{
  return __builtin_csky_vsminv4hi (__a, __b);
}

__extension__ static __inline int32x2_t __attribute__ ((__always_inline__))
vmin_s32 (int32x2_t __a, int32x2_t __b)
{
  return __builtin_csky_vsminv2si (__a, __b);
}


__extension__ static __inline uint8_t __attribute__ ((__always_inline__))
vmfvr_u8 (uint8x8_t __a, const int32_t __b)
{
  return __builtin_csky_vmfvruv8qi (__a, __b);
}

__extension__ static __inline uint16_t __attribute__ ((__always_inline__))
vmfvr_u16 (uint16x4_t __a, const int32_t __b)
{
  return __builtin_csky_vmfvruv4hi (__a, __b);
}

__extension__ static __inline uint32_t __attribute__ ((__always_inline__))
vmfvr_u32 (uint32x2_t __a, const int32_t __b)
{
  return __builtin_csky_vmfvruv2si (__a, __b);
}

__extension__ static __inline char __attribute__ ((__always_inline__))
vmfvr_s8 (int8x8_t __a, const int32_t __b)
{
  return __builtin_csky_vmfvrsv8qi (__a, __b);
}

__extension__ static __inline int16_t __attribute__ ((__always_inline__))
vmfvr_s16 (int16x4_t __a, const int32_t __b)
{
  return __builtin_csky_vmfvrsv4hi (__a, __b);
}


__extension__ static __inline uint8x8_t __attribute__ ((__always_inline__))
vmtvr_u8 (const int32_t __a, uint8_t __b)
{
  return __builtin_csky_vmtvruv8qi (__a, __b);
}

__extension__ static __inline uint16x4_t __attribute__ ((__always_inline__))
vmtvr_u16 (const int32_t __a, uint16_t __b)
{
  return __builtin_csky_vmtvruv4hi (__a, __b);
}

__extension__ static __inline uint32x2_t __attribute__ ((__always_inline__))
vmtvr_u32 (const int32_t __a, uint32_t __b)
{
  return __builtin_csky_vmtvruv2si (__a, __b);
}

/* vmov for vdsp64 */
__extension__ static __inline int8x8_t __attribute__ ((__always_inline__))
vmov_s8 (int8x8_t __a)
{
  return __a;
}

__extension__ static __inline int16x4_t __attribute__ ((__always_inline__))
vmov_s16 (int16x4_t __a)
{
  return __a;
}

__extension__ static __inline int32x2_t __attribute__ ((__always_inline__))
vmov_s32 (int32x2_t __a)
{
  return __a;
}

__extension__ static __inline uint8x8_t __attribute__ ((__always_inline__))
vmov_u8 (uint8x8_t __a)
{
  return __a;
}

__extension__ static __inline uint16x4_t __attribute__ ((__always_inline__))
vmov_u16 (uint16x4_t __a)
{
  return __a;
}

__extension__ static __inline uint32x2_t __attribute__ ((__always_inline__))
vmov_u32 (uint32x2_t __a)
{
  return __a;
}

__extension__ static __inline int16x4_t __attribute__ ((__always_inline__))
vmov_es8 (int8x8_t __a)
{
  return __builtin_csky_vmovesv8qi (__a);
}

__extension__ static __inline uint16x4_t __attribute__ ((__always_inline__))
vmov_eu8 (uint8x8_t __a)
{
  return __builtin_csky_vmoveuv8qi (__a);
}

__extension__ static __inline int32x2_t __attribute__ ((__always_inline__))
vmov_es16 (int16x4_t __a)
{
  return __builtin_csky_vmovesv4hi (__a);
}

__extension__ static __inline uint32x2_t __attribute__ ((__always_inline__))
vmov_eu16 (uint16x4_t __a)
{
  return __builtin_csky_vmoveuv4hi (__a);
}


__extension__ static __inline uint8x8_t __attribute__ ((__always_inline__))
vmov_u16_h (uint16x4_t __a)
{
  return __builtin_csky_vmovhuv4hi (__a);
}

__extension__ static __inline uint16x4_t __attribute__ ((__always_inline__))
vmov_u32_h (uint32x2_t __a)
{
  return __builtin_csky_vmovhuv2si (__a);
}

__extension__ static __inline int8x8_t __attribute__ ((__always_inline__))
vmov_s16_h (int16x4_t __a)
{
  return __builtin_csky_vmovhsv4hi (__a);
}

__extension__ static __inline int16x4_t __attribute__ ((__always_inline__))
vmov_s32_h (int32x2_t __a)
{
  return __builtin_csky_vmovhsv2si (__a);
}


__extension__ static __inline uint8x8_t __attribute__ ((__always_inline__))
vmov_u16_l (uint16x4_t __a)
{
  return __builtin_csky_vmovluv4hi (__a);
}

__extension__ static __inline uint16x4_t __attribute__ ((__always_inline__))
vmov_u32_l (uint32x2_t __a)
{
  return __builtin_csky_vmovluv2si (__a);
}

__extension__ static __inline int8x8_t __attribute__ ((__always_inline__))
vmov_s16_l (int16x4_t __a)
{
  return __builtin_csky_vmovlsv4hi (__a);
}

__extension__ static __inline int16x4_t __attribute__ ((__always_inline__))
vmov_s32_l (int32x2_t __a)
{
  return __builtin_csky_vmovlsv2si (__a);
}



__extension__ static __inline uint8x8_t __attribute__ ((__always_inline__))
vmov_u16_rh (uint16x4_t __a)
{
  return __builtin_csky_vmovrhuv4hi (__a);
}

__extension__ static __inline uint16x4_t __attribute__ ((__always_inline__))
vmov_u32_rh (uint32x2_t __a)
{
  return __builtin_csky_vmovrhuv2si (__a);
}

__extension__ static __inline int8x8_t __attribute__ ((__always_inline__))
vmov_s16_rh (int16x4_t __a)
{
  return __builtin_csky_vmovrhsv4hi (__a);
}

__extension__ static __inline int16x4_t __attribute__ ((__always_inline__))
vmov_s32_rh (int32x2_t __a)
{
  return __builtin_csky_vmovrhsv2si (__a);
}


__extension__ static __inline uint8x8_t __attribute__ ((__always_inline__))
vmov_u16_sl (uint16x4_t __a)
{
  return __builtin_csky_vmovsluv4hi (__a);
}

__extension__ static __inline uint16x4_t __attribute__ ((__always_inline__))
vmov_u32_sl (uint32x2_t __a)
{
  return __builtin_csky_vmovsluv2si (__a);
}

__extension__ static __inline int8x8_t __attribute__ ((__always_inline__))
vmov_s16_sl (int16x4_t __a)
{
  return __builtin_csky_vmovslsv4hi (__a);
}

__extension__ static __inline int16x4_t __attribute__ ((__always_inline__))
vmov_s32_sl (int32x2_t __a)
{
  return __builtin_csky_vmovslsv2si (__a);
}

__extension__ static __inline int16x4_t __attribute__ ((__always_inline__))
vmul_es8 (int8x8_t __a, int8x8_t __b)
{
  return __builtin_csky_vmulesv8qi (__a, __b);
}

__extension__ static __inline uint16x4_t __attribute__ ((__always_inline__))
vmul_eu8 (uint8x8_t __a, uint8x8_t __b)
{
  return __builtin_csky_vmuleuv8qi (__a, __b);
}

__extension__ static __inline int32x2_t __attribute__ ((__always_inline__))
vmul_es16 (int16x4_t __a, int16x4_t __b)
{
  return __builtin_csky_vmulesv4hi (__a, __b);
}

__extension__ static __inline uint32x2_t __attribute__ ((__always_inline__))
vmul_eu16 (uint16x4_t __a, uint16x4_t __b)
{
  return __builtin_csky_vmuleuv4hi (__a, __b);
}


__extension__ static __inline int16x4_t __attribute__ ((__always_inline__))
vmula_es8 (int8x8_t __a, int8x8_t __b, int16x4_t __c)
{
  return __builtin_csky_vmulaesv8qi (__a, __b, __c);
}

__extension__ static __inline uint16x4_t __attribute__ ((__always_inline__))
vmula_eu8 (uint8x8_t __a, uint8x8_t __b, uint16x4_t __c)
{
  return __builtin_csky_vmulaeuv8qi (__a, __b, __c);
}

__extension__ static __inline int32x2_t __attribute__ ((__always_inline__))
vmula_es16 (int16x4_t __a, int16x4_t __b, int32x2_t __c)
{
  return __builtin_csky_vmulaesv4hi (__a, __b, __c);
}

__extension__ static __inline uint32x2_t __attribute__ ((__always_inline__))
vmula_eu16 (uint16x4_t __a, uint16x4_t __b, uint32x2_t __c)
{
  return __builtin_csky_vmulaeuv4hi (__a, __b, __c);
}


__extension__ static __inline int16x4_t __attribute__ ((__always_inline__))
vmuls_es8 (int8x8_t __a, int8x8_t __b, int16x4_t __c)
{
  return __builtin_csky_vmulsesv8qi (__a, __b, __c);
}

__extension__ static __inline uint16x4_t __attribute__ ((__always_inline__))
vmuls_eu8 (uint8x8_t __a, uint8x8_t __b, uint16x4_t __c)
{
  return __builtin_csky_vmulseuv8qi (__a, __b, __c);
}

__extension__ static __inline int32x2_t __attribute__ ((__always_inline__))
vmuls_es16 (int16x4_t __a, int16x4_t __b, int32x2_t __c)
{
  return __builtin_csky_vmulsesv4hi (__a, __b, __c);
}

__extension__ static __inline uint32x2_t __attribute__ ((__always_inline__))
vmuls_eu16 (uint16x4_t __a, uint16x4_t __b, uint32x2_t __c)
{
  return __builtin_csky_vmulseuv4hi (__a, __b, __c);
}


__extension__ static __inline uint8x8_t __attribute__ ((__always_inline__))
vmula_u8 (uint8x8_t __a, uint8x8_t __b, uint8x8_t __c)
{
  return __builtin_csky_vmulauv8qi (__a, __b, __c);
}

__extension__ static __inline uint16x4_t __attribute__ ((__always_inline__))
vmula_u16 (uint16x4_t __a, uint16x4_t __b, uint16x4_t __c)
{
  return __builtin_csky_vmulauv4hi (__a, __b, __c);
}

__extension__ static __inline uint32x2_t __attribute__ ((__always_inline__))
vmula_u32 (uint32x2_t __a, uint32x2_t __b, uint32x2_t __c)
{
  return __builtin_csky_vmulauv2si (__a, __b, __c);
}

__extension__ static __inline int8x8_t __attribute__ ((__always_inline__))
vmula_s8 (int8x8_t __a, int8x8_t __b, int8x8_t __c)
{
  return __builtin_csky_vmulasv8qi (__a, __b, __c);
}

__extension__ static __inline int16x4_t __attribute__ ((__always_inline__))
vmula_s16 (int16x4_t __a, int16x4_t __b, int16x4_t __c)
{
  return __builtin_csky_vmulasv4hi (__a, __b, __c);
}

__extension__ static __inline int32x2_t __attribute__ ((__always_inline__))
vmula_s32 (int32x2_t __a, int32x2_t __b, int32x2_t __c)
{
  return __builtin_csky_vmulasv2si (__a, __b, __c);
}


__extension__ static __inline uint8x8_t __attribute__ ((__always_inline__))
vmuls_u8 (uint8x8_t __c, uint8x8_t __a, uint8x8_t __b)
{
  return __builtin_csky_vmulsuv8qi (__a, __b, __c);
}

__extension__ static __inline uint16x4_t __attribute__ ((__always_inline__))
vmuls_u16 (uint16x4_t __c, uint16x4_t __a, uint16x4_t __b)
{
  return __builtin_csky_vmulsuv4hi (__a, __b, __c);
}

__extension__ static __inline uint32x2_t __attribute__ ((__always_inline__))
vmuls_u32 (uint32x2_t __c, uint32x2_t __a, uint32x2_t __b)
{
  return __builtin_csky_vmulsuv2si (__a, __b, __c);
}

__extension__ static __inline int8x8_t __attribute__ ((__always_inline__))
vmuls_s8 (int8x8_t __c, int8x8_t __a, int8x8_t __b)
{
  return __builtin_csky_vmulssv8qi (__a, __b, __c);
}

__extension__ static __inline int16x4_t __attribute__ ((__always_inline__))
vmuls_s16 (int16x4_t __c, int16x4_t __a, int16x4_t __b)
{
  return __builtin_csky_vmulssv4hi (__a, __b, __c);
}

__extension__ static __inline int32x2_t __attribute__ ((__always_inline__))
vmuls_s32 (int32x2_t __c, int32x2_t __a, int32x2_t __b)
{
  return __builtin_csky_vmulssv2si (__a, __b, __c);
}


__extension__ static __inline uint8x8_t __attribute__ ((__always_inline__))
vmul_u8 (uint8x8_t __a, uint8x8_t __b)
{
  return __builtin_csky_vmuluv8qi (__a, __b);
}

__extension__ static __inline uint16x4_t __attribute__ ((__always_inline__))
vmul_u16 (uint16x4_t __a, uint16x4_t __b)
{
  return __builtin_csky_vmuluv4hi (__a, __b);
}

__extension__ static __inline uint32x2_t __attribute__ ((__always_inline__))
vmul_u32 (uint32x2_t __a, uint32x2_t __b)
{
  return __builtin_csky_vmuluv2si (__a, __b);
}

__extension__ static __inline int8x8_t __attribute__ ((__always_inline__))
vmul_s8 (int8x8_t __a, int8x8_t __b)
{
  return __builtin_csky_vmul_sv8qi (__a, __b);
}

__extension__ static __inline int16x4_t __attribute__ ((__always_inline__))
vmul_s16 (int16x4_t __a, int16x4_t __b)
{
  return __builtin_csky_vmul_sv4hi (__a, __b);
}

__extension__ static __inline int32x2_t __attribute__ ((__always_inline__))
vmul_s32 (int32x2_t __a, int32x2_t __b)
{
  return __builtin_csky_vmul_sv2si (__a, __b);
}


__extension__ static __inline int8x8_t __attribute__ ((__always_inline__))
vneg_s8 (int8x8_t __a)
{
  return __builtin_csky_vnegv8qi (__a);
}

__extension__ static __inline int16x4_t __attribute__ ((__always_inline__))
vneg_s16 (int16x4_t __a)
{
  return __builtin_csky_vnegv4hi (__a);
}

__extension__ static __inline int32x2_t __attribute__ ((__always_inline__))
vneg_s32 (int32x2_t __a)
{
  return __builtin_csky_vnegv2si (__a);
}

__extension__ static __inline int8x8_t __attribute__ ((__always_inline__))
vneg_s8_s (int8x8_t __a)
{
  return __builtin_csky_vnegsv8qi (__a);
}

__extension__ static __inline int16x4_t __attribute__ ((__always_inline__))
vneg_s16_s (int16x4_t __a)
{
  return __builtin_csky_vnegsv4hi (__a);
}

__extension__ static __inline int32x2_t __attribute__ ((__always_inline__))
vneg_s32_s (int32x2_t __a)
{
  return __builtin_csky_vnegsv2si (__a);
}

/* vnor.t */
__extension__ static __inline int8x8_t __attribute__ ((__always_inline__))
vnor_s8 (int8x8_t __a, int8x8_t __b)
{
  return __builtin_csky_vnorsv8qi(__a, __b);
}

__extension__ static __inline int16x4_t __attribute__ ((__always_inline__))
vnor_s16 (int16x4_t __a, int16x4_t __b)
{
  return __builtin_csky_vnorsv4hi(__a, __b);
}

__extension__ static __inline int32x2_t __attribute__ ((__always_inline__))
vnor_s32 (int32x2_t __a, int32x2_t __b)
{
  return __builtin_csky_vnorsv2si(__a, __b);
}

__extension__ static __inline uint8x8_t __attribute__ ((__always_inline__))
vnor_u8 (uint8x8_t __a, uint8x8_t __b)
{
  return __builtin_csky_vnoruv8qi(__a, __b);
}

__extension__ static __inline uint16x4_t __attribute__ ((__always_inline__))
vnor_u16 (uint16x4_t __a, uint16x4_t __b)
{
  return __builtin_csky_vnoruv4hi(__a, __b);
}

__extension__ static __inline uint32x2_t __attribute__ ((__always_inline__))
vnor_u32 (uint32x2_t __a, uint32x2_t __b)
{
  return __builtin_csky_vnoruv2si(__a, __b);
}

/* vxor.t */
__extension__ static __inline int8x8_t __attribute__ ((__always_inline__))
vxor_s8 (int8x8_t __a, int8x8_t __b)
{
  return __builtin_csky_vxorsv8qi(__a, __b);
}

__extension__ static __inline int16x4_t __attribute__ ((__always_inline__))
vxor_s16 (int16x4_t __a, int16x4_t __b)
{
  return __builtin_csky_vxorsv4hi(__a, __b);
}

__extension__ static __inline int32x2_t __attribute__ ((__always_inline__))
vxor_s32 (int32x2_t __a, int32x2_t __b)
{
  return __builtin_csky_vxorsv2si(__a, __b);
}

__extension__ static __inline uint8x8_t __attribute__ ((__always_inline__))
vxor_u8 (uint8x8_t __a, uint8x8_t __b)
{
  return __builtin_csky_vxoruv8qi(__a, __b);
}

__extension__ static __inline uint16x4_t __attribute__ ((__always_inline__))
vxor_u16 (uint16x4_t __a, uint16x4_t __b)
{
  return __builtin_csky_vxoruv4hi(__a, __b);
}

__extension__ static __inline uint32x2_t __attribute__ ((__always_inline__))
vxor_u32 (uint32x2_t __a, uint32x2_t __b)
{
  return __builtin_csky_vxoruv2si(__a, __b);
}

/* vor.t */
__extension__ static __inline int8x8_t __attribute__ ((__always_inline__))
vor_s8 (int8x8_t __a, int8x8_t __b)
{
  return __a | __b;
}

__extension__ static __inline int16x4_t __attribute__ ((__always_inline__))
vor_s16 (int16x4_t __a, int16x4_t __b)
{
  return __a | __b;
}

__extension__ static __inline int32x2_t __attribute__ ((__always_inline__))
vor_s32 (int32x2_t __a, int32x2_t __b)
{
  return __a | __b;
}

__extension__ static __inline uint8x8_t __attribute__ ((__always_inline__))
vor_u8 (uint8x8_t __a, uint8x8_t __b)
{
  return __a | __b;
}

__extension__ static __inline uint16x4_t __attribute__ ((__always_inline__))
vor_u16 (uint16x4_t __a, uint16x4_t __b)
{
  return __a | __b;
}

__extension__ static __inline uint32x2_t __attribute__ ((__always_inline__))
vor_u32 (uint32x2_t __a, uint32x2_t __b)
{
  return __a | __b;
}

__extension__ static __inline int8x8_t __attribute__ ((__always_inline__))
vrev_8 (int8x8_t __a)
{
  return __builtin_csky_vrevv8qi (__a);
}

__extension__ static __inline int16x4_t __attribute__ ((__always_inline__))
vrev_16 (int16x4_t __a)
{
  return __builtin_csky_vrevv4hi (__a);
}

__extension__ static __inline int32x2_t __attribute__ ((__always_inline__))
vrev_32 (int32x2_t __a)
{
  return __builtin_csky_vrevv2si (__a);
}

__extension__ static __inline int16x4_t __attribute__ ((__always_inline__))
vsabs_es8 (int8x8_t __a, int8x8_t __b)
{
  return __builtin_csky_vsabsesv8qi (__a, __b);
}

__extension__ static __inline uint16x4_t __attribute__ ((__always_inline__))
vsabs_eu8 (uint8x8_t __a, uint8x8_t __b)
{
  return __builtin_csky_vsabseuv8qi (__a, __b);
}

__extension__ static __inline int32x2_t __attribute__ ((__always_inline__))
vsabs_es16 (int16x4_t __a, int16x4_t __b)
{
  return __builtin_csky_vsabsesv4hi (__a, __b);
}

__extension__ static __inline uint32x2_t __attribute__ ((__always_inline__))
vsabs_eu16 (uint16x4_t __a, uint16x4_t __b)
{
  return __builtin_csky_vsabseuv4hi (__a, __b);
}


__extension__ static __inline uint8x8_t __attribute__ ((__always_inline__))
vsabs_u8 (uint8x8_t __a, uint8x8_t __b)
{
  return __builtin_csky_vsabsuv8qi (__a, __b);
}

__extension__ static __inline uint16x4_t __attribute__ ((__always_inline__))
vsabs_u16 (uint16x4_t __a, uint16x4_t __b)
{
  return __builtin_csky_vsabsuv4hi (__a, __b);
}

__extension__ static __inline uint32x2_t __attribute__ ((__always_inline__))
vsabs_u32 (uint32x2_t __a, uint32x2_t __b)
{
  return __builtin_csky_vsabsuv2si (__a, __b);
}

__extension__ static __inline int8x8_t __attribute__ ((__always_inline__))
vsabs_s8 (int8x8_t __a, int8x8_t __b)
{
  return __builtin_csky_vsabssv8qi (__a, __b);
}

__extension__ static __inline int16x4_t __attribute__ ((__always_inline__))
vsabs_s16 (int16x4_t __a, int16x4_t __b)
{
  return __builtin_csky_vsabssv4hi (__a, __b);
}

__extension__ static __inline int32x2_t __attribute__ ((__always_inline__))
vsabs_s32 (int32x2_t __a, int32x2_t __b)
{
  return __builtin_csky_vsabssv2si (__a, __b);
}


__extension__ static __inline int16x4_t __attribute__ ((__always_inline__))
vsabsa_es8 (int8x8_t __a, int8x8_t __b, int16x4_t __c)
{
  return __builtin_csky_vsabsaesv8qi (__a, __b, __c);
}

__extension__ static __inline uint16x4_t __attribute__ ((__always_inline__))
vsabsa_eu8 (uint8x8_t __a, uint8x8_t __b, uint16x4_t __c)
{
  return __builtin_csky_vsabsaeuv8qi (__a, __b, __c);
}

__extension__ static __inline int32x2_t __attribute__ ((__always_inline__))
vsabsa_es16 (int16x4_t __a, int16x4_t __b, int32x2_t __c)
{
  return __builtin_csky_vsabsaesv4hi (__a, __b, __c);
}

__extension__ static __inline uint32x2_t __attribute__ ((__always_inline__))
vsabsa_eu16 (uint16x4_t __a, uint16x4_t __b, uint32x2_t __c)
{
  return __builtin_csky_vsabsaeuv4hi (__a, __b, __c);
}


__extension__ static __inline uint8x8_t __attribute__ ((__always_inline__))
vsabsa_u8 (uint8x8_t __a, uint8x8_t __b, uint8x8_t __c)
{
  return __builtin_csky_vsabsauv8qi (__a, __b, __c);
}

__extension__ static __inline uint16x4_t __attribute__ ((__always_inline__))
vsabsa_u16 (uint16x4_t __a, uint16x4_t __b, uint16x4_t __c)
{
  return __builtin_csky_vsabsauv4hi (__a, __b, __c);
}

__extension__ static __inline uint32x2_t __attribute__ ((__always_inline__))
vsabsa_u32 (uint32x2_t __a, uint32x2_t __b, uint32x2_t __c)
{
  return __builtin_csky_vsabsauv2si (__a, __b, __c);
}

__extension__ static __inline int8x8_t __attribute__ ((__always_inline__))
vsabsa_s8 (int8x8_t __a, int8x8_t __b, int8x8_t __c)
{
  return __builtin_csky_vsabsasv8qi (__a, __b, __c);
}

__extension__ static __inline int16x4_t __attribute__ ((__always_inline__))
vsabsa_s16 (int16x4_t __a, int16x4_t __b, int16x4_t __c)
{
  return __builtin_csky_vsabsasv4hi (__a, __b, __c);
}

__extension__ static __inline int32x2_t __attribute__ ((__always_inline__))
vsabsa_s32 (int32x2_t __a, int32x2_t __b, int32x2_t __c)
{
  return __builtin_csky_vsabsasv2si (__a, __b, __c);
}


__extension__ static __inline uint8x8_t __attribute__ ((__always_inline__))
vshl_u8 (uint8x8_t __a, uint8x8_t __b)
{
  return __builtin_csky_vshluv8qi (__a, __b);
}

__extension__ static __inline uint16x4_t __attribute__ ((__always_inline__))
vshl_u16 (uint16x4_t __a, uint16x4_t __b)
{
  return __builtin_csky_vshluv4hi (__a, __b);
}

__extension__ static __inline uint32x2_t __attribute__ ((__always_inline__))
vshl_u32 (uint32x2_t __a, uint32x2_t __b)
{
  return __builtin_csky_vshluv2si (__a, __b);
}

__extension__ static __inline int8x8_t __attribute__ ((__always_inline__))
vshl_s8 (int8x8_t __a, int8x8_t __b)
{
  return __builtin_csky_vshlsv8qi (__a, __b);
}

__extension__ static __inline int16x4_t __attribute__ ((__always_inline__))
vshl_s16 (int16x4_t __a, int16x4_t __b)
{
  return __builtin_csky_vshlsv4hi (__a, __b);
}

__extension__ static __inline int32x2_t __attribute__ ((__always_inline__))
vshl_s32 (int32x2_t __a, int32x2_t __b)
{
  return __builtin_csky_vshlsv2si (__a, __b);
}

__extension__ static __inline uint8x8_t __attribute__ ((__always_inline__))
vshl_u8_s (uint8x8_t __a, uint8x8_t __b)
{
  return __builtin_csky_vshlusv8qi (__a, __b);
}

__extension__ static __inline uint16x4_t __attribute__ ((__always_inline__))
vshl_u16_s (uint16x4_t __a, uint16x4_t __b)
{
  return __builtin_csky_vshlusv4hi (__a, __b);
}

__extension__ static __inline uint32x2_t __attribute__ ((__always_inline__))
vshl_u32_s (uint32x2_t __a, uint32x2_t __b)
{
  return __builtin_csky_vshlusv2si (__a, __b);
}

__extension__ static __inline int8x8_t __attribute__ ((__always_inline__))
vshl_s8_s (int8x8_t __a, int8x8_t __b)
{
  return __builtin_csky_vshlssv8qi (__a, __b);
}

__extension__ static __inline int16x4_t __attribute__ ((__always_inline__))
vshl_s16_s (int16x4_t __a, int16x4_t __b)
{
  return __builtin_csky_vshlssv4hi (__a, __b);
}

__extension__ static __inline int32x2_t __attribute__ ((__always_inline__))
vshl_s32_s (int32x2_t __a, int32x2_t __b)
{
  return __builtin_csky_vshlssv2si (__a, __b);
}

__extension__ static __inline uint8x8_t __attribute__ ((__always_inline__))
vshli_u8 (uint8x8_t __a, const int32_t __b)
{
  return __builtin_csky_vshliuv8qi (__a, __b);
}

__extension__ static __inline uint16x4_t __attribute__ ((__always_inline__))
vshli_u16 (uint16x4_t __a, const int32_t __b)
{
  return __builtin_csky_vshliuv4hi (__a, __b);
}

__extension__ static __inline uint32x2_t __attribute__ ((__always_inline__))
vshli_u32 (uint32x2_t __a, const int32_t __b)
{
  return __builtin_csky_vshliuv2si (__a, __b);
}

__extension__ static __inline int8x8_t __attribute__ ((__always_inline__))
vshli_s8 (int8x8_t __a, const int32_t __b)
{
  return __builtin_csky_vshlisv8qi (__a, __b);
}

__extension__ static __inline int16x4_t __attribute__ ((__always_inline__))
vshli_s16 (int16x4_t __a, const int32_t __b)
{
  return __builtin_csky_vshlisv4hi (__a, __b);
}

__extension__ static __inline int32x2_t __attribute__ ((__always_inline__))
vshli_s32 (int32x2_t __a, const int32_t __b)
{
  return __builtin_csky_vshlisv2si (__a, __b);
}

__extension__ static __inline uint8x8_t __attribute__ ((__always_inline__))
vshli_u8_s (uint8x8_t __a, const int32_t __b)
{
  return __builtin_csky_vshliusv8qi (__a, __b);
}

__extension__ static __inline uint16x4_t __attribute__ ((__always_inline__))
vshli_u16_s (uint16x4_t __a, const int32_t __b)
{
  return __builtin_csky_vshliusv4hi (__a, __b);
}

__extension__ static __inline uint32x2_t __attribute__ ((__always_inline__))
vshli_u32_s (uint32x2_t __a, const int32_t __b)
{
  return __builtin_csky_vshliusv2si (__a, __b);
}

__extension__ static __inline int8x8_t __attribute__ ((__always_inline__))
vshli_s8_s (int8x8_t __a, const int32_t __b)
{
  return __builtin_csky_vshlissv8qi (__a, __b);
}

__extension__ static __inline int16x4_t __attribute__ ((__always_inline__))
vshli_s16_s (int16x4_t __a, const int32_t __b)
{
  return __builtin_csky_vshlissv4hi (__a, __b);
}

__extension__ static __inline int32x2_t __attribute__ ((__always_inline__))
vshli_s32_s (int32x2_t __a, const int32_t __b)
{
  return __builtin_csky_vshlissv2si (__a, __b);
}

__extension__ static __inline uint8x8_t __attribute__ ((__always_inline__))
vshr_u8 (uint8x8_t __a, uint8x8_t __b)
{
  return __builtin_csky_vshruv8qi (__a, __b);
}

__extension__ static __inline uint16x4_t __attribute__ ((__always_inline__))
vshr_u16 (uint16x4_t __a, uint16x4_t __b)
{
  return __builtin_csky_vshruv4hi (__a, __b);
}

__extension__ static __inline uint32x2_t __attribute__ ((__always_inline__))
vshr_u32 (uint32x2_t __a, uint32x2_t __b)
{
  return __builtin_csky_vshruv2si (__a, __b);
}

__extension__ static __inline int8x8_t __attribute__ ((__always_inline__))
vshr_s8 (int8x8_t __a, int8x8_t __b)
{
  return __builtin_csky_vshrsv8qi (__a, __b);
}

__extension__ static __inline int16x4_t __attribute__ ((__always_inline__))
vshr_s16 (int16x4_t __a, int16x4_t __b)
{
  return __builtin_csky_vshrsv4hi (__a, __b);
}

__extension__ static __inline int32x2_t __attribute__ ((__always_inline__))
vshr_s32 (int32x2_t __a, int32x2_t __b)
{
  return __builtin_csky_vshrsv2si (__a, __b);
}

__extension__ static __inline uint8x8_t __attribute__ ((__always_inline__))
vshr_u8_r (uint8x8_t __a, uint8x8_t __b)
{
  return __builtin_csky_vshrruv8qi (__a, __b);
}

__extension__ static __inline uint16x4_t __attribute__ ((__always_inline__))
vshr_u16_r (uint16x4_t __a, uint16x4_t __b)
{
  return __builtin_csky_vshrruv4hi (__a, __b);
}

__extension__ static __inline uint32x2_t __attribute__ ((__always_inline__))
vshr_u32_r (uint32x2_t __a, uint32x2_t __b)
{
  return __builtin_csky_vshrruv2si (__a, __b);
}

__extension__ static __inline int8x8_t __attribute__ ((__always_inline__))
vshr_s8_r (int8x8_t __a, int8x8_t __b)
{
  return __builtin_csky_vshrrsv8qi (__a, __b);
}

__extension__ static __inline int16x4_t __attribute__ ((__always_inline__))
vshr_s16_r (int16x4_t __a, int16x4_t __b)
{
  return __builtin_csky_vshrrsv4hi (__a, __b);
}

__extension__ static __inline int32x2_t __attribute__ ((__always_inline__))
vshr_s32_r (int32x2_t __a, int32x2_t __b)
{
  return __builtin_csky_vshrrsv2si (__a, __b);
}


__extension__ static __inline uint8x8_t __attribute__ ((__always_inline__))
vshri_u8 (uint8x8_t __a, const int32_t __b)
{
  return __builtin_csky_vshriuv8qi (__a, __b);
}

__extension__ static __inline uint16x4_t __attribute__ ((__always_inline__))
vshri_u16 (uint16x4_t __a, const int32_t __b)
{
  return __builtin_csky_vshriuv4hi (__a, __b);
}

__extension__ static __inline uint32x2_t __attribute__ ((__always_inline__))
vshri_u32 (uint32x2_t __a, const int32_t __b)
{
  return __builtin_csky_vshriuv2si (__a, __b);
}

__extension__ static __inline int8x8_t __attribute__ ((__always_inline__))
vshri_s8 (int8x8_t __a, const int32_t __b)
{
  return __builtin_csky_vshrisv8qi (__a, __b);
}

__extension__ static __inline int16x4_t __attribute__ ((__always_inline__))
vshri_s16 (int16x4_t __a, const int32_t __b)
{
  return __builtin_csky_vshrisv4hi (__a, __b);
}

__extension__ static __inline int32x2_t __attribute__ ((__always_inline__))
vshri_s32 (int32x2_t __a, const int32_t __b)
{
  return __builtin_csky_vshrisv2si (__a, __b);
}

__extension__ static __inline uint8x8_t __attribute__ ((__always_inline__))
vshri_u8_r (uint8x8_t __a, const int32_t __b)
{
  return __builtin_csky_vshriruv8qi (__a, __b);
}

__extension__ static __inline uint16x4_t __attribute__ ((__always_inline__))
vshri_u16_r (uint16x4_t __a, const int32_t __b)
{
  return __builtin_csky_vshriruv4hi (__a, __b);
}

__extension__ static __inline uint32x2_t __attribute__ ((__always_inline__))
vshri_u32_r (uint32x2_t __a, const int32_t __b)
{
  return __builtin_csky_vshriruv2si (__a, __b);
}

__extension__ static __inline int8x8_t __attribute__ ((__always_inline__))
vshri_s8_r (int8x8_t __a, const int32_t __b)
{
  return __builtin_csky_vshrirsv8qi (__a, __b);
}

__extension__ static __inline int16x4_t __attribute__ ((__always_inline__))
vshri_s16_r (int16x4_t __a, const int32_t __b)
{
  return __builtin_csky_vshrirsv4hi (__a, __b);
}

__extension__ static __inline int32x2_t __attribute__ ((__always_inline__))
vshri_s32_r (int32x2_t __a, const int32_t __b)
{
  return __builtin_csky_vshrirsv2si (__a, __b);
}


__extension__ static __inline int8x8_t __attribute__ ((__always_inline__))
vstou_s16_sl (int16x4_t __a)
{
  return __builtin_csky_vstouslsv4hi (__a);
}

__extension__ static __inline int16x4_t __attribute__ ((__always_inline__))
vstou_s32_sl (int32x2_t __a)
{
  return __builtin_csky_vstouslsv2si (__a);
}


__extension__ static __inline int8x8_t __attribute__ ((__always_inline__))
vtrch_8 (int8x8_t __a, int8x8_t __b)
{
  return __builtin_csky_vtrchv8qi (__a, __b);
}

__extension__ static __inline int16x4_t __attribute__ ((__always_inline__))
vtrch_16 (int16x4_t __a, int16x4_t __b)
{
  return __builtin_csky_vtrchv4hi (__a, __b);
}

__extension__ static __inline int32x2_t __attribute__ ((__always_inline__))
vtrch_32 (int32x2_t __a, int32x2_t __b)
{
  return __builtin_csky_vtrchv2si (__a, __b);
}

__extension__ static __inline int8x8_t __attribute__ ((__always_inline__))
vtrcl_8 (int8x8_t __a, int8x8_t __b)
{
  return __builtin_csky_vtrclv8qi (__a, __b);
}

__extension__ static __inline int16x4_t __attribute__ ((__always_inline__))
vtrcl_16 (int16x4_t __a, int16x4_t __b)
{
  return __builtin_csky_vtrclv4hi (__a, __b);
}

__extension__ static __inline int32x2_t __attribute__ ((__always_inline__))
vtrcl_32 (int32x2_t __a, int32x2_t __b)
{
  return __builtin_csky_vtrclv2si (__a, __b);
}

__extension__ static __inline uint8x8_t __attribute__ ((__always_inline__))
vtst_u8 (uint8x8_t __a, uint8x8_t __b)
{
  return __builtin_csky_vtstuv8qi (__a, __b);
}

__extension__ static __inline uint16x4_t __attribute__ ((__always_inline__))
vtst_u16 (uint16x4_t __a, uint16x4_t __b)
{
  return __builtin_csky_vtstuv4hi (__a, __b);
}

__extension__ static __inline uint32x2_t __attribute__ ((__always_inline__))
vtst_u32 (uint32x2_t __a, uint32x2_t __b)
{
  return __builtin_csky_vtstuv2si (__a, __b);
}

__extension__ static __inline int8x8_t __attribute__ ((__always_inline__))
vtst_s8 (int8x8_t __a, int8x8_t __b)
{
  return __builtin_csky_vtstsv8qi (__a, __b);
}

__extension__ static __inline int16x4_t __attribute__ ((__always_inline__))
vtst_s16 (int16x4_t __a, int16x4_t __b)
{
  return __builtin_csky_vtstsv4hi (__a, __b);
}

__extension__ static __inline int32x2_t __attribute__ ((__always_inline__))
vtst_s32 (int32x2_t __a, int32x2_t __b)
{
  return __builtin_csky_vtstsv2si (__a, __b);
}

__extension__ static __inline int16x4_t __attribute__ ((__always_inline__))
vsub_es8 (int8x8_t __a, int8x8_t __b)
{
  return __builtin_csky_vsubesv8qi (__a, __b);
}

__extension__ static __inline uint16x4_t __attribute__ ((__always_inline__))
vsub_eu8 (uint8x8_t __a, uint8x8_t __b)
{
  return __builtin_csky_vsubeuv8qi (__a, __b);
}

__extension__ static __inline int32x2_t __attribute__ ((__always_inline__))
vsub_es16 (int16x4_t __a, int16x4_t __b)
{
  return __builtin_csky_vsubesv4hi (__a, __b);
}

__extension__ static __inline uint32x2_t __attribute__ ((__always_inline__))
vsub_eu16 (uint16x4_t __a, uint16x4_t __b)
{
  return __builtin_csky_vsubeuv4hi (__a, __b);
}
#endif // __CSKY_VDSP64__
#if defined (__CSKY_VDSP128__)
typedef __simd128_int8_t     int8x16_t;
typedef __simd128_uint8_t    uint8x16_t;
typedef __simd128_int16_t    int16x8_t;
typedef __simd128_uint16_t   uint16x8_t;
typedef __simd128_int32_t    int32x4_t;
typedef __simd128_uint32_t   uint32x4_t;

__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vabs_s8 (int8x16_t __a)
{
  return __builtin_csky_vabsv16qi (__a);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vabs_s16 (int16x8_t __a)
{
  return __builtin_csky_vabsv8hi (__a);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vabs_s32 (int32x4_t __a)
{
  return __builtin_csky_vabsv4si (__a);
}

__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vabs_s8_s (int8x16_t __a)
{
  return __builtin_csky_vabsssv16qi (__a);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vabs_s16_s (int16x8_t __a)
{
  return __builtin_csky_vabsssv8hi (__a);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vabs_s32_s (int32x4_t __a)
{
  return __builtin_csky_vabsssv4si (__a);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vadd_es8 (int8x16_t __a, int8x16_t __b)
{
  return __builtin_csky_vaddesv16qi (__a, __b);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vadd_eu8 (uint8x16_t __a, uint8x16_t __b)
{
  return __builtin_csky_vaddeuv16qi (__a, __b);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vadd_es16 (int16x8_t __a, int16x8_t __b)
{
  return __builtin_csky_vaddesv8hi (__a, __b);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vadd_eu16 (uint16x8_t __a, uint16x8_t __b)
{
  return __builtin_csky_vaddeuv8hi (__a, __b);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vadd_u8 (uint8x16_t __a, uint8x16_t __b)
{
  return __a + __b;
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vadd_u16 (uint16x8_t __a, uint16x8_t __b)
{
  return __a + __b;
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vadd_u32 (uint32x4_t __a, uint32x4_t __b)
{
  return __a + __b;
}

__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vadd_s8 (int8x16_t __a, int8x16_t __b)
{
  return __a + __b;
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vadd_s16 (int16x8_t __a, int16x8_t __b)
{
  return __a + __b;
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vadd_s32 (int32x4_t __a, int32x4_t __b)
{
  return __a + __b;
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vadd_u8_s (uint8x16_t __a, uint8x16_t __b)
{
  return __builtin_csky_vaddusv16qi(__a, __b);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vadd_u16_s (uint16x8_t __a, uint16x8_t __b)
{
  return __builtin_csky_vaddusv8hi(__a, __b);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vadd_u32_s (uint32x4_t __a, uint32x4_t __b)
{
  return __builtin_csky_vaddusv4si(__a, __b);
}

__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vadd_s8_s (int8x16_t __a, int8x16_t __b)
{
  return __builtin_csky_vaddssv16qi(__a, __b);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vadd_s16_s (int16x8_t __a, int16x8_t __b)
{
  return __builtin_csky_vaddssv8hi(__a, __b);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vadd_s32_s (int32x4_t __a, int32x4_t __b)
{
  return __builtin_csky_vaddssv4si(__a, __b);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vsub_u8 (uint8x16_t __a, uint8x16_t __b)
{
  return __a - __b;
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vsub_u16 (uint16x8_t __a, uint16x8_t __b)
{
  return __a - __b;
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vsub_u32 (uint32x4_t __a, uint32x4_t __b)
{
  return __a - __b;
}

__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vsub_s8 (int8x16_t __a, int8x16_t __b)
{
  return __a - __b;
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vsub_s16 (int16x8_t __a, int16x8_t __b)
{
  return __a - __b;
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vsub_s32 (int32x4_t __a, int32x4_t __b)
{
  return __a - __b;
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vsub_u8_s (uint8x16_t __a, uint8x16_t __b)
{
  return __builtin_csky_vsubusv16qi(__a, __b);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vsub_u16_s (uint16x8_t __a, uint16x8_t __b)
{
  return __builtin_csky_vsubusv8hi(__a, __b);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vsub_u32_s (uint32x4_t __a, uint32x4_t __b)
{
  return __builtin_csky_vsubusv4si(__a, __b);
}

__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vsub_s8_s (int8x16_t __a, int8x16_t __b)
{
  return __builtin_csky_vsubssv16qi(__a, __b);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vsub_s16_s (int16x8_t __a, int16x8_t __b)
{
  return __builtin_csky_vsubssv8hi(__a, __b);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vsub_s32_s (int32x4_t __a, int32x4_t __b)
{
  return __builtin_csky_vsubssv4si(__a, __b);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vadd_xu16 (uint8x16_t __a, uint16x8_t __b)
{
  return __builtin_csky_vaddxuv8hi (__a, __b);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vadd_xu32 (uint16x8_t __a, uint32x4_t __b)
{
  return __builtin_csky_vaddxuv4si (__a, __b);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vadd_xs16 (int8x16_t __a, int16x8_t __b)
{
  return __builtin_csky_vaddxsv8hi (__a, __b);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vadd_xs32 (int16x8_t __a, int32x4_t __b)
{
  return __builtin_csky_vaddxsv4si (__a, __b);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vsub_xu16 (uint8x16_t __a, uint16x8_t __b)
{
  return __builtin_csky_vsubxuv8hi (__a, __b);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vsub_xu32 (uint16x8_t __a, uint32x4_t __b)
{
  return __builtin_csky_vsubxuv4si (__a, __b);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vsub_xs16 (int8x16_t __a, int16x8_t __b)
{
  return __builtin_csky_vsubxsv8hi (__a, __b);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vsub_xs32 (int16x8_t __a, int32x4_t __b)
{
  return __builtin_csky_vsubxsv4si (__a, __b);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vadd_xu16_sl (uint8x16_t __a, uint16x8_t __b)
{
  return __builtin_csky_vaddxsluv8hi (__a, __b);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vadd_xu32_sl (uint16x8_t __a, uint32x4_t __b)
{
  return __builtin_csky_vaddxsluv4si (__a, __b);
}

__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vadd_xs16_sl (int8x16_t __a, int16x8_t __b)
{
  return __builtin_csky_vaddxslsv8hi (__a, __b);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vadd_xs32_sl (int16x8_t __a, int32x4_t __b)
{
  return __builtin_csky_vaddxslsv4si (__a, __b);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vaddh_u8 (uint8x16_t __a, uint8x16_t __b)
{
  return __builtin_csky_vaddhuv16qi (__a, __b);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vaddh_u16 (uint16x8_t __a, uint16x8_t __b)
{
  return __builtin_csky_vaddhuv8hi (__a, __b);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vaddh_u32 (uint32x4_t __a, uint32x4_t __b)
{
  return __builtin_csky_vaddhuv4si (__a, __b);
}

__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vaddh_s8 (int8x16_t __a, int8x16_t __b)
{
  return __builtin_csky_vaddhsv16qi (__a, __b);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vaddh_s16 (int16x8_t __a, int16x8_t __b)
{
  return __builtin_csky_vaddhsv8hi (__a, __b);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vaddh_s32 (int32x4_t __a, int32x4_t __b)
{
  return __builtin_csky_vaddhsv4si (__a, __b);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vaddh_u8_r (uint8x16_t __a, uint8x16_t __b)
{
  return __builtin_csky_vaddhruv16qi (__a, __b);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vaddh_u16_r (uint16x8_t __a, uint16x8_t __b)
{
  return __builtin_csky_vaddhruv8hi (__a, __b);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vaddh_u32_r (uint32x4_t __a, uint32x4_t __b)
{
  return __builtin_csky_vaddhruv4si (__a, __b);
}

__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vaddh_s8_r (int8x16_t __a, int8x16_t __b)
{
  return __builtin_csky_vaddhrsv16qi (__a, __b);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vaddh_s16_r (int16x8_t __a, int16x8_t __b)
{
  return __builtin_csky_vaddhrsv8hi (__a, __b);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vaddh_s32_r (int32x4_t __a, int32x4_t __b)
{
  return __builtin_csky_vaddhrsv4si (__a, __b);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vsubh_u8 (uint8x16_t __a, uint8x16_t __b)
{
  return __builtin_csky_vsubhuv16qi (__a, __b);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vsubh_u16 (uint16x8_t __a, uint16x8_t __b)
{
  return __builtin_csky_vsubhuv8hi (__a, __b);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vsubh_u32 (uint32x4_t __a, uint32x4_t __b)
{
  return __builtin_csky_vsubhuv4si (__a, __b);
}

__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vsubh_s8 (int8x16_t __a, int8x16_t __b)
{
  return __builtin_csky_vsubhsv16qi (__a, __b);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vsubh_s16 (int16x8_t __a, int16x8_t __b)
{
  return __builtin_csky_vsubhsv8hi (__a, __b);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vsubh_s32 (int32x4_t __a, int32x4_t __b)
{
  return __builtin_csky_vsubhsv4si (__a, __b);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vsubh_u8_r (uint8x16_t __a, uint8x16_t __b)
{
  return __builtin_csky_vsubhruv16qi (__a, __b);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vsubh_u16_r (uint16x8_t __a, uint16x8_t __b)
{
  return __builtin_csky_vsubhruv8hi (__a, __b);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vsubh_u32_r (uint32x4_t __a, uint32x4_t __b)
{
  return __builtin_csky_vsubhruv4si (__a, __b);
}

__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vsubh_s8_r (int8x16_t __a, int8x16_t __b)
{
  return __builtin_csky_vsubhrsv16qi (__a, __b);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vsubh_s16_r (int16x8_t __a, int16x8_t __b)
{
  return __builtin_csky_vsubhrsv8hi (__a, __b);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vsubh_s32_r (int32x4_t __a, int32x4_t __b)
{
  return __builtin_csky_vsubhrsv4si (__a, __b);
}

__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vand_8 (int8x16_t __a, int8x16_t __b)
{
  return __a & __b;
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vand_16 (int16x8_t __a, int16x8_t __b)
{
  return __a & __b;
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vand_32 (int32x4_t __a, int32x4_t __b)
{
  return __a & __b;
}

__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vandn_8 (int8x16_t __a, int8x16_t __b)
{
  return __builtin_csky_vandnv16qi (__a, __b);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vandn_16 (int16x8_t __a, int16x8_t __b)
{
  return __builtin_csky_vandnv8hi (__a, __b);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vandn_32 (int32x4_t __a, int32x4_t __b)
{
  return __builtin_csky_vandnv4si (__a, __b);;
}

__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vbperm_8 (int8x16_t __a, int8x16_t __b)
{
  return __builtin_csky_vbpermv16qi (__a, __b);
}

__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vbpermz_8 (int8x16_t __a, int8x16_t __b)
{
  return __builtin_csky_vbpermzv16qi (__a, __b);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vcadd_es8 (int8x16_t __a, int8x16_t __b)
{
  return __builtin_csky_vcaddesv16qi (__a, __b);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vcadd_eu8 (uint8x16_t __a, uint8x16_t __b)
{
  return __builtin_csky_vcaddeuv16qi (__a, __b);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vcadd_es16 (int16x8_t __a, int16x8_t __b)
{
  return __builtin_csky_vcaddesv8hi (__a, __b);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vcadd_eu16 (uint16x8_t __a, uint16x8_t __b)
{
  return __builtin_csky_vcaddeuv8hi (__a, __b);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vcadd_u8 (uint8x16_t __a, uint8x16_t __b)
{
  return __builtin_csky_vcadduv16qi (__a, __b);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vcadd_u16 (uint16x8_t __a, uint16x8_t __b)
{
  return __builtin_csky_vcadduv8hi (__a, __b);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vcadd_u32 (uint32x4_t __a, uint32x4_t __b)
{
  return __builtin_csky_vcadduv4si (__a, __b);
}

__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vcadd_s8 (int8x16_t __a, int8x16_t __b)
{
  return __builtin_csky_vcaddsv16qi (__a, __b);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vcadd_s16 (int16x8_t __a, int16x8_t __b)
{
  return __builtin_csky_vcaddsv8hi (__a, __b);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vcadd_s32 (int32x4_t __a, int32x4_t __b)
{
  return __builtin_csky_vcaddsv4si (__a, __b);
}

__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vcls_s8 (int8x16_t __a)
{
  return __builtin_csky_vclssv16qi (__a);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vcls_s16 (int16x8_t __a)
{
  return __builtin_csky_vclssv8hi (__a);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vcls_s32 (int32x4_t __a)
{
  return __builtin_csky_vclssv4si (__a);
}

__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vclz_8 (int8x16_t __a)
{
  return __builtin_csky_vclzv16qi (__a);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vclz_16 (int16x8_t __a)
{
  return __builtin_csky_vclzv8hi (__a);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vclz_32 (int32x4_t __a)
{
  return __builtin_csky_vclzv4si (__a);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vcmax_u8 (uint8x16_t __a, uint8x16_t __b)
{
  return __builtin_csky_vcmaxuv16qi (__a, __b);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vcmax_u16 (uint16x8_t __a, uint16x8_t __b)
{
  return __builtin_csky_vcmaxuv8hi (__a, __b);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vcmax_u32 (uint32x4_t __a, uint32x4_t __b)
{
  return __builtin_csky_vcmaxuv4si (__a, __b);
}

__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vcmax_s8 (int8x16_t __a, int8x16_t __b)
{
  return __builtin_csky_vcmaxsv16qi (__a, __b);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vcmax_s16 (int16x8_t __a, int16x8_t __b)
{
  return __builtin_csky_vcmaxsv8hi (__a, __b);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vcmax_s32 (int32x4_t __a, int32x4_t __b)
{
  return __builtin_csky_vcmaxsv4si (__a, __b);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vcmin_u8 (uint8x16_t __a, uint8x16_t __b)
{
  return __builtin_csky_vcminuv16qi (__a, __b);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vcmin_u16 (uint16x8_t __a, uint16x8_t __b)
{
  return __builtin_csky_vcminuv8hi (__a, __b);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vcmin_u32 (uint32x4_t __a, uint32x4_t __b)
{
  return __builtin_csky_vcminuv4si (__a, __b);
}

__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vcmin_s8 (int8x16_t __a, int8x16_t __b)
{
  return __builtin_csky_vcminsv16qi (__a, __b);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vcmin_s16 (int16x8_t __a, int16x8_t __b)
{
  return __builtin_csky_vcminsv8hi (__a, __b);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vcmin_s32 (int32x4_t __a, int32x4_t __b)
{
  return __builtin_csky_vcminsv4si (__a, __b);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vcmphs_u8 (uint8x16_t __a, uint8x16_t __b)
{
  return __builtin_csky_vcmpuhsv16qi (__a, __b);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vcmphs_u16 (uint16x8_t __a, uint16x8_t __b)
{
  return __builtin_csky_vcmpuhsv8hi (__a, __b);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vcmphs_u32 (uint32x4_t __a, uint32x4_t __b)
{
  return __builtin_csky_vcmpuhsv4si (__a, __b);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vcmphs_s8 (int8x16_t __a, int8x16_t __b)
{
  return __builtin_csky_vcmpshsv16qi (__a, __b);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vcmphs_s16 (int16x8_t __a, int16x8_t __b)
{
  return __builtin_csky_vcmpshsv8hi (__a, __b);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vcmphs_s32 (int32x4_t __a, int32x4_t __b)
{
  return __builtin_csky_vcmpshsv4si (__a, __b);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vcmphsz_u8 (uint8x16_t __a)
{
  return __builtin_csky_vcmphszuv16qi (__a);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vcmphsz_u16 (uint16x8_t __a)
{
  return __builtin_csky_vcmphszuv8hi (__a);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vcmphsz_u32 (uint32x4_t __a)
{
  return __builtin_csky_vcmphszuv4si (__a);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vcmphsz_s8 (int8x16_t __a)
{
  return __builtin_csky_vcmphszv16qi (__a);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vcmphsz_s16 (int16x8_t __a)
{
  return __builtin_csky_vcmphszv8hi (__a);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vcmphsz_s32 (int32x4_t __a)
{
  return __builtin_csky_vcmphszv4si (__a);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vcmplt_u8 (uint8x16_t __a, uint8x16_t __b)
{
  return __builtin_csky_vcmpultv16qi (__a, __b);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vcmplt_u16 (uint16x8_t __a, uint16x8_t __b)
{
  return __builtin_csky_vcmpultv8hi (__a, __b);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vcmplt_u32 (uint32x4_t __a, uint32x4_t __b)
{
  return __builtin_csky_vcmpultv4si (__a, __b);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vcmplt_s8 (int8x16_t __a, int8x16_t __b)
{
  return __builtin_csky_vcmpsltv16qi (__a, __b);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vcmplt_s16 (int16x8_t __a, int16x8_t __b)
{
  return __builtin_csky_vcmpsltv8hi (__a, __b);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vcmplt_s32 (int32x4_t __a, int32x4_t __b)
{
  return __builtin_csky_vcmpsltv4si (__a, __b);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vcmpltz_u8 (uint8x16_t __a)
{
  return __builtin_csky_vcmpltzuv16qi (__a);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vcmpltz_u16 (uint16x8_t __a)
{
  return __builtin_csky_vcmpltzuv8hi (__a);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vcmpltz_u32 (uint32x4_t __a)
{
  return __builtin_csky_vcmpltzuv4si (__a);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vcmpltz_s8 (int8x16_t __a)
{
  return __builtin_csky_vcmpltzv16qi (__a);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vcmpltz_s16 (int16x8_t __a)
{
  return __builtin_csky_vcmpltzv8hi (__a);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vcmpltz_s32 (int32x4_t __a)
{
  return __builtin_csky_vcmpltzv4si (__a);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vcmpne_u8 (uint8x16_t __a, uint8x16_t __b)
{
  return __builtin_csky_vcmpunev16qi (__a, __b);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vcmpne_u16 (uint16x8_t __a, uint16x8_t __b)
{
  return __builtin_csky_vcmpunev8hi (__a, __b);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vcmpne_u32 (uint32x4_t __a, uint32x4_t __b)
{
  return __builtin_csky_vcmpunev4si (__a, __b);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vcmpne_s8 (int8x16_t __a, int8x16_t __b)
{
  return __builtin_csky_vcmpsnev16qi (__a, __b);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vcmpne_s16 (int16x8_t __a, int16x8_t __b)
{
  return __builtin_csky_vcmpsnev8hi (__a, __b);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vcmpne_s32 (int32x4_t __a, int32x4_t __b)
{
  return __builtin_csky_vcmpsnev4si (__a, __b);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vcmpnez_u8 (uint8x16_t __a)
{
  return __builtin_csky_vcmpnezuv16qi (__a);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vcmpnez_u16 (uint16x8_t __a)
{
  return __builtin_csky_vcmpnezuv8hi (__a);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vcmpnez_u32 (uint32x4_t __a)
{
  return __builtin_csky_vcmpnezuv4si (__a);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vcmpnez_s8 (int8x16_t __a)
{
  return __builtin_csky_vcmpnezv16qi (__a);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vcmpnez_s16 (int16x8_t __a)
{
  return __builtin_csky_vcmpnezv8hi (__a);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vcmpnez_s32 (int32x4_t __a)
{
  return __builtin_csky_vcmpnezv4si (__a);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vcnt1_u8 (uint8x16_t __a)
{
  return __builtin_csky_vcnt1uv16qi (__a);
}

__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vcnt1_s8 (int8x16_t __a)
{
  return __builtin_csky_vcnt1sv16qi (__a);
}

__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vdch_8 (int8x16_t __a, int8x16_t __b)
{
  return __builtin_csky_vdchv16qi (__a, __b);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vdch_16 (int16x8_t __a, int16x8_t __b)
{
  return __builtin_csky_vdchv8hi (__a, __b);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vdch_32 (int32x4_t __a, int32x4_t __b)
{
  return __builtin_csky_vdchv4si (__a, __b);;
}

__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vdcl_8 (int8x16_t __a, int8x16_t __b)
{
  return __builtin_csky_vdclv16qi (__a, __b);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vdcl_16 (int16x8_t __a, int16x8_t __b)
{
  return __builtin_csky_vdclv8hi (__a, __b);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vdcl_32 (int32x4_t __a, int32x4_t __b)
{
  return __builtin_csky_vdclv4si (__a, __b);;
}

__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vdup_8 (int8x16_t __a, const int32_t __b)
{
  return __builtin_csky_vdupv16qi (__a, __b);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vdup_16 (int16x8_t __a, const int32_t __b)
{
  return __builtin_csky_vdupv8hi (__a, __b);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vdup_32 (int32x4_t __a, const int32_t __b)
{
  return __builtin_csky_vdupv4si (__a, __b);;
}

__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vich_8 (int8x16_t __a, int8x16_t __b)
{
  return __builtin_csky_vichv16qi (__a, __b);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vich_16 (int16x8_t __a, int16x8_t __b)
{
  return __builtin_csky_vichv8hi (__a, __b);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vich_32 (int32x4_t __a, int32x4_t __b)
{
  return __builtin_csky_vichv4si (__a, __b);;
}

__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vicl_8 (int8x16_t __a, int8x16_t __b)
{
  return __builtin_csky_viclv16qi (__a, __b);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vicl_16 (int16x8_t __a, int16x8_t __b)
{
  return __builtin_csky_viclv8hi (__a, __b);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vicl_32 (int32x4_t __a, int32x4_t __b)
{
  return __builtin_csky_viclv4si (__a, __b);
}

__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vins_8 (const int32_t __a, int8x16_t __b, const int32_t __c)
{
  return __builtin_csky_vinsv16qi (__a, __b, __c);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vins_16 (const int32_t __a, int16x8_t __b, const int32_t __c)
{
  return __builtin_csky_vinsv8hi (__a, __b, __c);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vins_32 (const int32_t __a, int32x4_t __b, const int32_t __c)
{
  return __builtin_csky_vinsv4si (__a, __b, __c);;
}

__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vldd_8 (int32_t __a, const int32_t __b)
{
  return __builtin_csky_vlddv16qi (__a, __b);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vldd_16 (int32_t __a, const int32_t __b)
{
  return __builtin_csky_vlddv8hi (__a, __b);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vldd_32 (int32_t __a, const int32_t __b)
{
  return __builtin_csky_vlddv4si (__a, __b);;
}

__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vldq_8 (int32_t __a, const int32_t __b)
{
  return __builtin_csky_vldqv16qi (__a, __b);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vldq_16 (int32_t __a, const int32_t __b)
{
  return __builtin_csky_vldqv8hi (__a, __b);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vldq_32 (int32_t __a, const int32_t __b)
{
  return __builtin_csky_vldqv4si (__a, __b);;
}

__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vstd_8 (int32_t __a, const int32_t __b)
{
  return __builtin_csky_vstdv16qi (__a, __b);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vstd_16 (int32_t __a, const int32_t __b)
{
  return __builtin_csky_vstdv8hi (__a, __b);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vstd_32 (int32_t __a, const int32_t __b)
{
  return __builtin_csky_vstdv4si (__a, __b);;
}

__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vstq_8 (int32_t __a, const int32_t __b)
{
  return __builtin_csky_vstqv16qi (__a, __b);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vstq_16 (int32_t __a, const int32_t __b)
{
  return __builtin_csky_vstqv8hi (__a, __b);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vstq_32 (int32_t __a, const int32_t __b)
{
  return __builtin_csky_vstqv4si (__a, __b);;
}



__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vldrd_8 (int32_t __a, int32_t __b, const int32_t __c)
{
  return __builtin_csky_vldrdv16qi (__a, __b, __c);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vldrd_16 (int32_t __a, int32_t __b, const int32_t __c)
{
  return __builtin_csky_vldrdv8hi (__a, __b, __c);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vldrd_32 (int32_t __a, int32_t __b, const int32_t __c)
{
  return __builtin_csky_vldrdv4si (__a, __b, __c);;
}

__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vldrq_8 (int32_t __a, int32_t __b, const int32_t __c)
{
  return __builtin_csky_vldrqv16qi (__a, __b, __c);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vldrq_16 (int32_t __a, int32_t __b, const int32_t __c)
{
  return __builtin_csky_vldrqv8hi (__a, __b, __c);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vldrq_32 (int32_t __a, int32_t __b, const int32_t __c)
{
  return __builtin_csky_vldrqv4si (__a, __b, __c);;
}

__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vstrd_8 (int32_t __a, int32_t __b, const int32_t __c)
{
  return __builtin_csky_vstrdv16qi (__a, __b, __c);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vstrd_16 (int32_t __a, int32_t __b, const int32_t __c)
{
  return __builtin_csky_vstrdv8hi (__a, __b, __c);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vstrd_32 (int32_t __a, int32_t __b, const int32_t __c)
{
  return __builtin_csky_vstrdv4si (__a, __b, __c);;
}

__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vstrq_8 (int32_t __a, int32_t __b, const int32_t __c)
{
  return __builtin_csky_vstrqv16qi (__a, __b, __c);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vstrq_16 (int32_t __a, int32_t __b, const int32_t __c)
{
  return __builtin_csky_vstrqv8hi (__a, __b, __c);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vstrq_32 (int32_t __a, int32_t __b, const int32_t __c)
{
  return __builtin_csky_vstrqv4si (__a, __b, __c);;
}


__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vmax_u8 (uint8x16_t __a, uint8x16_t __b)
{
  return __builtin_csky_vumaxv16qi (__a, __b);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vmax_u16 (uint16x8_t __a, uint16x8_t __b)
{
  return __builtin_csky_vumaxv8hi (__a, __b);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vmax_u32 (uint32x4_t __a, uint32x4_t __b)
{
  return __builtin_csky_vumaxv4si (__a, __b);
}

__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vmax_s8 (int8x16_t __a, int8x16_t __b)
{
  return __builtin_csky_vsmaxv16qi (__a, __b);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vmax_s16 (int16x8_t __a, int16x8_t __b)
{
  return __builtin_csky_vsmaxv8hi (__a, __b);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vmax_s32 (int32x4_t __a, int32x4_t __b)
{
  return __builtin_csky_vsmaxv4si (__a, __b);
}


__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vmin_u8 (uint8x16_t __a, uint8x16_t __b)
{
  return __builtin_csky_vuminv16qi (__a, __b);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vmin_u16 (uint16x8_t __a, uint16x8_t __b)
{
  return __builtin_csky_vuminv8hi (__a, __b);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vmin_u32 (uint32x4_t __a, uint32x4_t __b)
{
  return __builtin_csky_vuminv4si (__a, __b);
}

__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vmin_s8 (int8x16_t __a, int8x16_t __b)
{
  return __builtin_csky_vsminv16qi (__a, __b);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vmin_s16 (int16x8_t __a, int16x8_t __b)
{
  return __builtin_csky_vsminv8hi (__a, __b);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vmin_s32 (int32x4_t __a, int32x4_t __b)
{
  return __builtin_csky_vsminv4si (__a, __b);
}


__extension__ static __inline uint8_t __attribute__ ((__always_inline__))
vmfvr_u8 (uint8x16_t __a, const int32_t __b)
{
  return __builtin_csky_vmfvruv16qi (__a, __b);
}

__extension__ static __inline uint16_t __attribute__ ((__always_inline__))
vmfvr_u16 (uint16x8_t __a, const int32_t __b)
{
  return __builtin_csky_vmfvruv8hi (__a, __b);
}

__extension__ static __inline uint32_t __attribute__ ((__always_inline__))
vmfvr_u32 (uint32x4_t __a, const int32_t __b)
{
  return __builtin_csky_vmfvruv4si (__a, __b);
}

__extension__ static __inline char __attribute__ ((__always_inline__))
vmfvr_s8 (int8x16_t __a, const int32_t __b)
{
  return __builtin_csky_vmfvrsv16qi (__a, __b);
}

__extension__ static __inline int16_t __attribute__ ((__always_inline__))
vmfvr_s16 (int16x8_t __a, const int32_t __b)
{
  return __builtin_csky_vmfvrsv8hi (__a, __b);
}


__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vmtvr_u8 (const int32_t __a, uint8_t __b)
{
  return __builtin_csky_vmtvruv16qi (__a, __b);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vmtvr_u16 (const int32_t __a, uint16_t __b)
{
  return __builtin_csky_vmtvruv8hi (__a, __b);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vmtvr_u32 (const int32_t __a, uint32_t __b)
{
  return __builtin_csky_vmtvruv4si (__a, __b);
}

/* vmov for vdsp128 */
__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vmov_s8 (int8x16_t __a)
{
  return __a;
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vmov_s16 (int16x8_t __a)
{
  return __a;
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vmov_s32 (int32x4_t __a)
{
  return __a;
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vmov_u8 (uint8x16_t __a)
{
  return __a;
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vmov_u16 (uint16x8_t __a)
{
  return __a;
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vmov_u32 (uint32x4_t __a)
{
  return __a;
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vmov_es8 (int8x16_t __a)
{
  return __builtin_csky_vmovesv16qi (__a);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vmov_eu8 (uint8x16_t __a)
{
  return __builtin_csky_vmoveuv16qi (__a);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vmov_es16 (int16x8_t __a)
{
  return __builtin_csky_vmovesv8hi (__a);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vmov_eu16 (uint16x8_t __a)
{
  return __builtin_csky_vmoveuv8hi (__a);
}


__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vmov_u16_h (uint16x8_t __a)
{
  return __builtin_csky_vmovhuv8hi (__a);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vmov_u32_h (uint32x4_t __a)
{
  return __builtin_csky_vmovhuv4si (__a);
}

__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vmov_s16_h (int16x8_t __a)
{
  return __builtin_csky_vmovhsv8hi (__a);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vmov_s32_h (int32x4_t __a)
{
  return __builtin_csky_vmovhsv4si (__a);
}


__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vmov_u16_l (uint16x8_t __a)
{
  return __builtin_csky_vmovluv8hi (__a);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vmov_u32_l (uint32x4_t __a)
{
  return __builtin_csky_vmovluv4si (__a);
}

__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vmov_s16_l (int16x8_t __a)
{
  return __builtin_csky_vmovlsv8hi (__a);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vmov_s32_l (int32x4_t __a)
{
  return __builtin_csky_vmovlsv4si (__a);
}



__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vmov_u16_rh (uint16x8_t __a)
{
  return __builtin_csky_vmovrhuv8hi (__a);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vmov_u32_rh (uint32x4_t __a)
{
  return __builtin_csky_vmovrhuv4si (__a);
}

__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vmov_s16_rh (int16x8_t __a)
{
  return __builtin_csky_vmovrhsv8hi (__a);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vmov_s32_rh (int32x4_t __a)
{
  return __builtin_csky_vmovrhsv4si (__a);
}


__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vmov_u16_sl (uint16x8_t __a)
{
  return __builtin_csky_vmovsluv8hi (__a);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vmov_u32_sl (uint32x4_t __a)
{
  return __builtin_csky_vmovsluv4si (__a);
}

__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vmov_s16_sl (int16x8_t __a)
{
  return __builtin_csky_vmovslsv8hi (__a);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vmov_s32_sl (int32x4_t __a)
{
  return __builtin_csky_vmovslsv4si (__a);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vmul_es8 (int8x16_t __a, int8x16_t __b)
{
  return __builtin_csky_vmulesv16qi (__a, __b);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vmul_eu8 (uint8x16_t __a, uint8x16_t __b)
{
  return __builtin_csky_vmuleuv16qi (__a, __b);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vmul_es16 (int16x8_t __a, int16x8_t __b)
{
  return __builtin_csky_vmulesv8hi (__a, __b);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vmul_eu16 (uint16x8_t __a, uint16x8_t __b)
{
  return __builtin_csky_vmuleuv8hi (__a, __b);
}


__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vmula_es8 (int8x16_t __a, int8x16_t __b, int16x8_t __c)
{
  return __builtin_csky_vmulaesv16qi (__a, __b, __c);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vmula_eu8 (uint8x16_t __a, uint8x16_t __b, uint16x8_t __c)
{
  return __builtin_csky_vmulaeuv16qi (__a, __b, __c);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vmula_es16 (int16x8_t __a, int16x8_t __b, int32x4_t __c)
{
  return __builtin_csky_vmulaesv8hi (__a, __b, __c);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vmula_eu16 (uint16x8_t __a, uint16x8_t __b, uint32x4_t __c)
{
  return __builtin_csky_vmulaeuv8hi (__a, __b, __c);
}


__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vmuls_es8 (int8x16_t __a, int8x16_t __b, int16x8_t __c)
{
  return __builtin_csky_vmulsesv16qi (__a, __b, __c);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vmuls_eu8 (uint8x16_t __a, uint8x16_t __b, uint16x8_t __c)
{
  return __builtin_csky_vmulseuv16qi (__a, __b, __c);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vmuls_es16 (int16x8_t __a, int16x8_t __b, int32x4_t __c)
{
  return __builtin_csky_vmulsesv8hi (__a, __b, __c);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vmuls_eu16 (uint16x8_t __a, uint16x8_t __b, uint32x4_t __c)
{
  return __builtin_csky_vmulseuv8hi (__a, __b, __c);
}


__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vmula_u8 (uint8x16_t __a, uint8x16_t __b, uint8x16_t __c)
{
  return __builtin_csky_vmulauv16qi (__a, __b, __c);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vmula_u16 (uint16x8_t __a, uint16x8_t __b, uint16x8_t __c)
{
  return __builtin_csky_vmulauv8hi (__a, __b, __c);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vmula_u32 (uint32x4_t __a, uint32x4_t __b, uint32x4_t __c)
{
  return __builtin_csky_vmulauv4si (__a, __b, __c);
}

__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vmula_s8 (int8x16_t __a, int8x16_t __b, int8x16_t __c)
{
  return __builtin_csky_vmulasv16qi (__a, __b, __c);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vmula_s16 (int16x8_t __a, int16x8_t __b, int16x8_t __c)
{
  return __builtin_csky_vmulasv8hi (__a, __b, __c);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vmula_s32 (int32x4_t __a, int32x4_t __b, int32x4_t __c)
{
  return __builtin_csky_vmulasv4si (__a, __b, __c);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vmuls_u8 (uint8x16_t __c, uint8x16_t __a, uint8x16_t __b)
{
  return __builtin_csky_vmulsuv16qi (__a, __b, __c);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vmuls_u16 (uint16x8_t __c, uint16x8_t __a, uint16x8_t __b)
{
  return __builtin_csky_vmulsuv8hi (__a, __b, __c);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vmuls_u32 (uint32x4_t __c, uint32x4_t __a, uint32x4_t __b)
{
  return __builtin_csky_vmulsuv4si (__a, __b, __c);
}

__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vmuls_s8 (int8x16_t __c, int8x16_t __a, int8x16_t __b)
{
  return __builtin_csky_vmulssv16qi (__a, __b, __c);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vmuls_s16 (int16x8_t __c, int16x8_t __a, int16x8_t __b)
{
  return __builtin_csky_vmulssv8hi (__a, __b, __c);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vmuls_s32 (int32x4_t __c, int32x4_t __a, int32x4_t __b)
{
  return __builtin_csky_vmulssv4si (__a, __b, __c);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vmul_u8 (uint8x16_t __a, uint8x16_t __b)
{
  return __builtin_csky_vmuluv16qi (__a, __b);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vmul_u16 (uint16x8_t __a, uint16x8_t __b)
{
  return __builtin_csky_vmuluv8hi (__a, __b);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vmul_u32 (uint32x4_t __a, uint32x4_t __b)
{
  return __builtin_csky_vmuluv4si (__a, __b);
}

__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vmul_s8 (int8x16_t __a, int8x16_t __b)
{
  return __builtin_csky_vmul_sv16qi (__a, __b);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vmul_s16 (int16x8_t __a, int16x8_t __b)
{
  return __builtin_csky_vmul_sv8hi (__a, __b);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vmul_s32 (int32x4_t __a, int32x4_t __b)
{
  return __builtin_csky_vmul_sv4si (__a, __b);
}


__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vneg_s8 (int8x16_t __a)
{
  return __builtin_csky_vnegv16qi (__a);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vneg_s16 (int16x8_t __a)
{
  return __builtin_csky_vnegv8hi (__a);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vneg_s32 (int32x4_t __a)
{
  return __builtin_csky_vnegv4si (__a);
}

__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vneg_s8_s (int8x16_t __a)
{
  return __builtin_csky_vnegsv16qi (__a);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vneg_s16_s (int16x8_t __a)
{
  return __builtin_csky_vnegsv8hi (__a);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vneg_s32_s (int32x4_t __a)
{
  return __builtin_csky_vnegsv4si (__a);
}

/* vnor.t */
__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vnor_s8 (int8x16_t __a, int8x16_t __b)
{
  return __builtin_csky_vnorsv16qi(__a, __b);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vnor_s16 (int16x8_t __a, int16x8_t __b)
{
  return __builtin_csky_vnorsv8hi(__a, __b);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vnor_s32 (int32x4_t __a, int32x4_t __b)
{
  return __builtin_csky_vnorsv4si(__a, __b);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vnor_u8 (uint8x16_t __a, uint8x16_t __b)
{
  return __builtin_csky_vnoruv16qi(__a, __b);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vnor_u16 (uint16x8_t __a, uint16x8_t __b)
{
  return __builtin_csky_vnoruv8hi(__a, __b);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vnor_u32 (uint32x4_t __a, uint32x4_t __b)
{
  return __builtin_csky_vnoruv4si(__a, __b);
}

/* vxor.t */
__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vxor_s8 (int8x16_t __a, int8x16_t __b)
{
  return __builtin_csky_vxorsv16qi(__a, __b);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vxor_s16 (int16x8_t __a, int16x8_t __b)
{
  return __builtin_csky_vxorsv8hi(__a, __b);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vxor_s32 (int32x4_t __a, int32x4_t __b)
{
  return __builtin_csky_vxorsv4si(__a, __b);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vxor_u8 (uint8x16_t __a, uint8x16_t __b)
{
  return __builtin_csky_vxoruv16qi(__a, __b);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vxor_u16 (uint16x8_t __a, uint16x8_t __b)
{
  return __builtin_csky_vxoruv8hi(__a, __b);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vxor_u32 (uint32x4_t __a, uint32x4_t __b)
{
  return __builtin_csky_vxoruv4si(__a, __b);
}

/* vor.t */
__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vor_u8 (uint8x16_t __a, uint8x16_t __b)
{
  return __a | __b;
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vor_u16 (uint16x8_t __a, uint16x8_t __b)
{
  return __a | __b;
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vor_u32 (uint32x4_t __a, uint32x4_t __b)
{
  return __a | __b;
}

__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vor_s8 (int8x16_t __a, int8x16_t __b)
{
  return __a | __b;
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vor_s16 (int16x8_t __a, int16x8_t __b)
{
  return __a | __b;
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vor_s32 (int32x4_t __a, int32x4_t __b)
{
  return __a | __b;
}

__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vrev_8 (int8x16_t __a)
{
  return __builtin_csky_vrevv16qi (__a);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vrev_16 (int16x8_t __a)
{
  return __builtin_csky_vrevv8hi (__a);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vrev_32 (int32x4_t __a)
{
  return __builtin_csky_vrevv4si (__a);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vsabs_es8 (int8x16_t __a, int8x16_t __b)
{
  return __builtin_csky_vsabsesv16qi (__a, __b);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vsabs_eu8 (uint8x16_t __a, uint8x16_t __b)
{
  return __builtin_csky_vsabseuv16qi (__a, __b);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vsabs_es16 (int16x8_t __a, int16x8_t __b)
{
  return __builtin_csky_vsabsesv8hi (__a, __b);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vsabs_eu16 (uint16x8_t __a, uint16x8_t __b)
{
  return __builtin_csky_vsabseuv8hi (__a, __b);
}


__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vsabs_u8 (uint8x16_t __a, uint8x16_t __b)
{
  return __builtin_csky_vsabsuv16qi (__a, __b);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vsabs_u16 (uint16x8_t __a, uint16x8_t __b)
{
  return __builtin_csky_vsabsuv8hi (__a, __b);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vsabs_u32 (uint32x4_t __a, uint32x4_t __b)
{
  return __builtin_csky_vsabsuv4si (__a, __b);
}

__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vsabs_s8 (int8x16_t __a, int8x16_t __b)
{
  return __builtin_csky_vsabssv16qi (__a, __b);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vsabs_s16 (int16x8_t __a, int16x8_t __b)
{
  return __builtin_csky_vsabssv8hi (__a, __b);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vsabs_s32 (int32x4_t __a, int32x4_t __b)
{
  return __builtin_csky_vsabssv4si (__a, __b);
}


__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vsabsa_es8 (int8x16_t __a, int8x16_t __b, int16x8_t __c)
{
  return __builtin_csky_vsabsaesv16qi (__a, __b, __c);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vsabsa_eu8 (uint8x16_t __a, uint8x16_t __b, uint16x8_t __c)
{
  return __builtin_csky_vsabsaeuv16qi (__a, __b, __c);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vsabsa_es16 (int16x8_t __a, int16x8_t __b, int32x4_t __c)
{
  return __builtin_csky_vsabsaesv8hi (__a, __b, __c);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vsabsa_eu16 (uint16x8_t __a, uint16x8_t __b, uint32x4_t __c)
{
  return __builtin_csky_vsabsaeuv8hi (__a, __b, __c);
}


__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vsabsa_u8 (uint8x16_t __a, uint8x16_t __b, uint8x16_t __c)
{
  return __builtin_csky_vsabsauv16qi (__a, __b, __c);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vsabsa_u16 (uint16x8_t __a, uint16x8_t __b, uint16x8_t __c)
{
  return __builtin_csky_vsabsauv8hi (__a, __b, __c);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vsabsa_u32 (uint32x4_t __a, uint32x4_t __b, uint32x4_t __c)
{
  return __builtin_csky_vsabsauv4si (__a, __b, __c);
}

__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vsabsa_s8 (int8x16_t __a, int8x16_t __b, int8x16_t __c)
{
  return __builtin_csky_vsabsasv16qi (__a, __b, __c);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vsabsa_s16 (int16x8_t __a, int16x8_t __b, int16x8_t __c)
{
  return __builtin_csky_vsabsasv8hi (__a, __b, __c);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vsabsa_s32 (int32x4_t __a, int32x4_t __b, int32x4_t __c)
{
  return __builtin_csky_vsabsasv4si (__a, __b, __c);
}


__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vshl_u8 (uint8x16_t __a, uint8x16_t __b)
{
  return __builtin_csky_vshluv16qi (__a, __b);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vshl_u16 (uint16x8_t __a, uint16x8_t __b)
{
  return __builtin_csky_vshluv8hi (__a, __b);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vshl_u32 (uint32x4_t __a, uint32x4_t __b)
{
  return __builtin_csky_vshluv4si (__a, __b);
}

__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vshl_s8 (int8x16_t __a, int8x16_t __b)
{
  return __builtin_csky_vshlsv16qi (__a, __b);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vshl_s16 (int16x8_t __a, int16x8_t __b)
{
  return __builtin_csky_vshlsv8hi (__a, __b);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vshl_s32 (int32x4_t __a, int32x4_t __b)
{
  return __builtin_csky_vshlsv4si (__a, __b);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vshl_u8_s (uint8x16_t __a, uint8x16_t __b)
{
  return __builtin_csky_vshlusv16qi (__a, __b);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vshl_u16_s (uint16x8_t __a, uint16x8_t __b)
{
  return __builtin_csky_vshlusv8hi (__a, __b);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vshl_u32_s (uint32x4_t __a, uint32x4_t __b)
{
  return __builtin_csky_vshlusv4si (__a, __b);
}

__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vshl_s8_s (int8x16_t __a, int8x16_t __b)
{
  return __builtin_csky_vshlssv16qi (__a, __b);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vshl_s16_s (int16x8_t __a, int16x8_t __b)
{
  return __builtin_csky_vshlssv8hi (__a, __b);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vshl_s32_s (int32x4_t __a, int32x4_t __b)
{
  return __builtin_csky_vshlssv4si (__a, __b);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vshli_u8 (uint8x16_t __a, const int32_t __b)
{
  return __builtin_csky_vshliuv16qi (__a, __b);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vshli_u16 (uint16x8_t __a, const int32_t __b)
{
  return __builtin_csky_vshliuv8hi (__a, __b);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vshli_u32 (uint32x4_t __a, const int32_t __b)
{
  return __builtin_csky_vshliuv4si (__a, __b);
}

__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vshli_s8 (int8x16_t __a, const int32_t __b)
{
  return __builtin_csky_vshlisv16qi (__a, __b);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vshli_s16 (int16x8_t __a, const int32_t __b)
{
  return __builtin_csky_vshlisv8hi (__a, __b);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vshli_s32 (int32x4_t __a, const int32_t __b)
{
  return __builtin_csky_vshlisv4si (__a, __b);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vshli_u8_s (uint8x16_t __a, const int32_t __b)
{
  return __builtin_csky_vshliusv16qi (__a, __b);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vshli_u16_s (uint16x8_t __a, const int32_t __b)
{
  return __builtin_csky_vshliusv8hi (__a, __b);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vshli_u32_s (uint32x4_t __a, const int32_t __b)
{
  return __builtin_csky_vshliusv4si (__a, __b);
}

__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vshli_s8_s (int8x16_t __a, const int32_t __b)
{
  return __builtin_csky_vshlissv16qi (__a, __b);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vshli_s16_s (int16x8_t __a, const int32_t __b)
{
  return __builtin_csky_vshlissv8hi (__a, __b);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vshli_s32_s (int32x4_t __a, const int32_t __b)
{
  return __builtin_csky_vshlissv4si (__a, __b);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vshr_u8 (uint8x16_t __a, uint8x16_t __b)
{
  return __builtin_csky_vshruv16qi (__a, __b);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vshr_u16 (uint16x8_t __a, uint16x8_t __b)
{
  return __builtin_csky_vshruv8hi (__a, __b);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vshr_u32 (uint32x4_t __a, uint32x4_t __b)
{
  return __builtin_csky_vshruv4si (__a, __b);
}

__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vshr_s8 (int8x16_t __a, int8x16_t __b)
{
  return __builtin_csky_vshrsv16qi (__a, __b);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vshr_s16 (int16x8_t __a, int16x8_t __b)
{
  return __builtin_csky_vshrsv8hi (__a, __b);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vshr_s32 (int32x4_t __a, int32x4_t __b)
{
  return __builtin_csky_vshrsv4si (__a, __b);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vshr_u8_r (uint8x16_t __a, uint8x16_t __b)
{
  return __builtin_csky_vshrruv16qi (__a, __b);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vshr_u16_r (uint16x8_t __a, uint16x8_t __b)
{
  return __builtin_csky_vshrruv8hi (__a, __b);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vshr_u32_r (uint32x4_t __a, uint32x4_t __b)
{
  return __builtin_csky_vshrruv4si (__a, __b);
}

__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vshr_s8_r (int8x16_t __a, int8x16_t __b)
{
  return __builtin_csky_vshrrsv16qi (__a, __b);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vshr_s16_r (int16x8_t __a, int16x8_t __b)
{
  return __builtin_csky_vshrrsv8hi (__a, __b);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vshr_s32_r (int32x4_t __a, int32x4_t __b)
{
  return __builtin_csky_vshrrsv4si (__a, __b);
}


__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vshri_u8 (uint8x16_t __a, const int32_t __b)
{
  return __builtin_csky_vshriuv16qi (__a, __b);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vshri_u16 (uint16x8_t __a, const int32_t __b)
{
  return __builtin_csky_vshriuv8hi (__a, __b);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vshri_u32 (uint32x4_t __a, const int32_t __b)
{
  return __builtin_csky_vshriuv4si (__a, __b);
}

__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vshri_s8 (int8x16_t __a, const int32_t __b)
{
  return __builtin_csky_vshrisv16qi (__a, __b);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vshri_s16 (int16x8_t __a, const int32_t __b)
{
  return __builtin_csky_vshrisv8hi (__a, __b);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vshri_s32 (int32x4_t __a, const int32_t __b)
{
  return __builtin_csky_vshrisv4si (__a, __b);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vshri_u8_r (uint8x16_t __a, const int32_t __b)
{
  return __builtin_csky_vshriruv16qi (__a, __b);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vshri_u16_r (uint16x8_t __a, const int32_t __b)
{
  return __builtin_csky_vshriruv8hi (__a, __b);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vshri_u32_r (uint32x4_t __a, const int32_t __b)
{
  return __builtin_csky_vshriruv4si (__a, __b);
}

__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vshri_s8_r (int8x16_t __a, const int32_t __b)
{
  return __builtin_csky_vshrirsv16qi (__a, __b);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vshri_s16_r (int16x8_t __a, const int32_t __b)
{
  return __builtin_csky_vshrirsv8hi (__a, __b);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vshri_s32_r (int32x4_t __a, const int32_t __b)
{
  return __builtin_csky_vshrirsv4si (__a, __b);
}


__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vstou_s16_sl (int16x8_t __a)
{
  return __builtin_csky_vstouslsv8hi (__a);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vstou_s32_sl (int32x4_t __a)
{
  return __builtin_csky_vstouslsv4si (__a);
}


__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vtrch_8 (int8x16_t __a, int8x16_t __b)
{
  return __builtin_csky_vtrchv16qi (__a, __b);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vtrch_16 (int16x8_t __a, int16x8_t __b)
{
  return __builtin_csky_vtrchv8hi (__a, __b);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vtrch_32 (int32x4_t __a, int32x4_t __b)
{
  return __builtin_csky_vtrchv4si (__a, __b);
}

__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vtrcl_8 (int8x16_t __a, int8x16_t __b)
{
  return __builtin_csky_vtrclv16qi (__a, __b);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vtrcl_16 (int16x8_t __a, int16x8_t __b)
{
  return __builtin_csky_vtrclv8hi (__a, __b);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vtrcl_32 (int32x4_t __a, int32x4_t __b)
{
  return __builtin_csky_vtrclv4si (__a, __b);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vtst_s8 (int8x16_t __a, int8x16_t __b)
{
  return __builtin_csky_vtstsv16qi (__a, __b);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vtst_s16 (int16x8_t __a, int16x8_t __b)
{
  return __builtin_csky_vtstsv8hi (__a, __b);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vtst_s32 (int32x4_t __a, int32x4_t __b)
{
  return __builtin_csky_vtstsv4si (__a, __b);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vtst_u8 (uint8x16_t __a, uint8x16_t __b)
{
  return __builtin_csky_vtstuv16qi (__a, __b);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vtst_u16 (uint16x8_t __a, uint16x8_t __b)
{
  return __builtin_csky_vtstuv8hi (__a, __b);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vtst_u32 (uint32x4_t __a, uint32x4_t __b)
{
  return __builtin_csky_vtstuv4si (__a, __b);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vsub_es8 (int8x16_t __a, int8x16_t __b)
{
  return __builtin_csky_vsubesv16qi (__a, __b);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vsub_eu8 (uint8x16_t __a, uint8x16_t __b)
{
  return __builtin_csky_vsubeuv16qi (__a, __b);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vsub_es16 (int16x8_t __a, int16x8_t __b)
{
  return __builtin_csky_vsubesv8hi (__a, __b);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vsub_eu16 (uint16x8_t __a, uint16x8_t __b)
{
  return __builtin_csky_vsubeuv8hi (__a, __b);
}
#endif // __CSKY_VDSP128__

#if defined (__CSKY_VDSPV2__)
typedef __simd128_int8_t     int8x16_t;
typedef __simd128_uint8_t    uint8x16_t;
typedef __simd128_int16_t    int16x8_t;
typedef __simd128_uint16_t   uint16x8_t;
typedef __simd128_int32_t    int32x4_t;
typedef __simd128_uint32_t   uint32x4_t;
typedef __simd128_int64_t    int64x2_t;
typedef __simd128_uint64_t   uint64x2_t;

typedef struct int8x16x2_t
{
  int8x16_t val[2];
} int8x16x2_t;

typedef struct uint8x16x2_t
{
  uint8x16_t val[2];
} uint8x16x2_t;

typedef struct int16x8x2_t
{
  int16x8_t val[2];
} int16x8x2_t;

typedef struct uint16x8x2_t
{
  uint16x8_t val[2];
} uint16x8x2_t;

typedef struct int32x4x2_t
{
  int32x4_t val[2];
} int32x4x2_t;

typedef struct uint32x4x2_t
{
  uint32x4_t val[2];
} uint32x4x2_t;

typedef struct int8x16x3_t
{
  int8x16_t val[3];
} int8x16x3_t;

typedef struct uint8x16x3_t
{
  uint8x16_t val[3];
} uint8x16x3_t;

typedef struct int16x8x3_t
{
  int16x8_t val[3];
} int16x8x3_t;

typedef struct uint16x8x3_t
{
  uint16x8_t val[3];
} uint16x8x3_t;

typedef struct int32x4x3_t
{
  int32x4_t val[3];
} int32x4x3_t;

typedef struct uint32x4x3_t
{
  uint32x4_t val[3];
} uint32x4x3_t;

typedef struct int8x16x4_t
{
  int8x16_t val[4];
} int8x16x4_t;

typedef struct uint8x16x4_t
{
  uint8x16_t val[4];
} uint8x16x4_t;

typedef struct int16x8x4_t
{
  int16x8_t val[4];
} int16x8x4_t;

typedef struct uint16x8x4_t
{
  uint16x8_t val[4];
} uint16x8x4_t;

typedef struct int32x4x4_t
{
  int32x4_t val[4];
} int32x4x4_t;

typedef struct uint32x4x4_t
{
  uint32x4_t val[4];
} uint32x4x4_t;

typedef struct int64x2x2_t
{
  int64x2_t val[2];
} int64x2x2_t;

typedef struct uint64x2x2_t
{
  uint64x2_t val[2];
} uint64x2x2_t;

#if defined (__CSKY_VDSPV2_F__)

typedef __simd128_float16_t    float16x8_t;
typedef __simd128_float32_t    float32x4_t;
typedef __simd128_float64_t    float64x2_t;

typedef struct float16x8x2_t
{
  float16x8_t val[2];
} float16x8x2_t;

typedef struct float32x4x2_t
{
  float32x4_t val[2];
} float32x4x2_t;

typedef struct float16x8x3_t
{
  float16x8_t val[3];
} float16x8x3_t;

typedef struct float32x4x3_t
{
  float32x4_t val[3];
} float32x4x3_t;

typedef struct float16x8x4_t
{
  float16x8_t val[4];
} float16x8x4_t;

typedef struct float32x4x4_t
{
  float32x4_t val[4];
} float32x4x4_t;

#endif // __CSKY_VDSPV2_F__


/* vadd.t && vsub.t */
__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vadd_u8 (uint8x16_t __a, uint8x16_t __b)
{
  return __a + __b;
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vadd_u16 (uint16x8_t __a, uint16x8_t __b)
{
  return __a + __b;
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vadd_u32 (uint32x4_t __a, uint32x4_t __b)
{
  return __a + __b;
}

__extension__ static __inline uint64x2_t __attribute__ ((__always_inline__))
vadd_u64 (uint64x2_t __a, uint64x2_t __b)
{
  return __a + __b;
}

__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vadd_s8 (int8x16_t __a, int8x16_t __b)
{
  return __a + __b;
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vadd_s16 (int16x8_t __a, int16x8_t __b)
{
  return __a + __b;
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vadd_s32 (int32x4_t __a, int32x4_t __b)
{
  return __a + __b;
}

__extension__ static __inline int64x2_t __attribute__ ((__always_inline__))
vadd_s64 (int64x2_t __a, int64x2_t __b)
{
  return __a + __b;
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vsub_u8 (uint8x16_t __a, uint8x16_t __b)
{
  return __a - __b;
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vsub_u16 (uint16x8_t __a, uint16x8_t __b)
{
  return __a - __b;
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vsub_u32 (uint32x4_t __a, uint32x4_t __b)
{
  return __a - __b;
}

__extension__ static __inline uint64x2_t __attribute__ ((__always_inline__))
vsub_u64 (uint64x2_t __a, uint64x2_t __b)
{
  return __a - __b;
}

__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vsub_s8 (int8x16_t __a, int8x16_t __b)
{
  return __a - __b;
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vsub_s16 (int16x8_t __a, int16x8_t __b)
{
  return __a - __b;
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vsub_s32 (int32x4_t __a, int32x4_t __b)
{
  return __a - __b;
}

__extension__ static __inline int64x2_t __attribute__ ((__always_inline__))
vsub_s64 (int64x2_t __a, int64x2_t __b)
{
  return __a - __b;
}

/* vadd.e && vsub.e */
__extension__ static __inline int16x8x2_t __attribute__ ((__always_inline__))
vadd_s8_e (int8x16_t __a, int8x16_t __b)
{
  union { int16x8x2_t __i; __builtin_csky_oi __o;} __rv;
  __rv.__o =  __builtin_csky_vaddsev16qi(__a, __b);
  return __rv.__i;
}

__extension__ static __inline int32x4x2_t __attribute__ ((__always_inline__))
vadd_s16_e (int16x8_t __a, int16x8_t __b)
{
  union { int32x4x2_t __i; __builtin_csky_oi __o;} __rv;
  __rv.__o =  __builtin_csky_vaddsev8hi(__a, __b);
  return __rv.__i;
}

__extension__ static __inline int64x2x2_t __attribute__ ((__always_inline__))
vadd_s32_e (int32x4_t __a, int32x4_t __b)
{
  union { int64x2x2_t __i; __builtin_csky_oi __o;} __rv;
  __rv.__o =  __builtin_csky_vaddsev4si(__a, __b);
  return __rv.__i;
}

__extension__ static __inline uint16x8x2_t __attribute__ ((__always_inline__))
vadd_u8_e (uint8x16_t __a, uint8x16_t __b)
{
  union { uint16x8x2_t __i; __builtin_csky_oi __o;} __rv;
  __rv.__o =  __builtin_csky_vadduev16qi(__a, __b);
  return __rv.__i;
}

__extension__ static __inline uint32x4x2_t __attribute__ ((__always_inline__))
vadd_u16_e (uint16x8_t __a, uint16x8_t __b)
{
  union { uint32x4x2_t __i; __builtin_csky_oi __o;} __rv;
  __rv.__o =  __builtin_csky_vadduev8hi(__a, __b);
  return __rv.__i;
}

__extension__ static __inline uint64x2x2_t __attribute__ ((__always_inline__))
vadd_u32_e (uint32x4_t __a, uint32x4_t __b)
{
  union { uint64x2x2_t __i; __builtin_csky_oi __o;} __rv;
  __rv.__o =  __builtin_csky_vadduev4si(__a, __b);
  return __rv.__i;
}

__extension__ static __inline int16x8x2_t __attribute__ ((__always_inline__))
vsub_s8_e (int8x16_t __a, int8x16_t __b)
{
  union { int16x8x2_t __i; __builtin_csky_oi __o;} __rv;
  __rv.__o =  __builtin_csky_vsubsev16qi(__a, __b);
  return __rv.__i;
}

__extension__ static __inline int32x4x2_t __attribute__ ((__always_inline__))
vsub_s16_e (int16x8_t __a, int16x8_t __b)
{
  union { int32x4x2_t __i; __builtin_csky_oi __o;} __rv;
  __rv.__o =  __builtin_csky_vsubsev8hi(__a, __b);
  return __rv.__i;
}

__extension__ static __inline int64x2x2_t __attribute__ ((__always_inline__))
vsub_s32_e (int32x4_t __a, int32x4_t __b)
{
  union { int64x2x2_t __i; __builtin_csky_oi __o;} __rv;
  __rv.__o =  __builtin_csky_vsubsev4si(__a, __b);
  return __rv.__i;
}

__extension__ static __inline uint16x8x2_t __attribute__ ((__always_inline__))
vsub_u8_e (uint8x16_t __a, uint8x16_t __b)
{
  union { uint16x8x2_t __i; __builtin_csky_oi __o;} __rv;
  __rv.__o =  __builtin_csky_vsubuev16qi(__a, __b);
  return __rv.__i;
}

__extension__ static __inline uint32x4x2_t __attribute__ ((__always_inline__))
vsub_u16_e (uint16x8_t __a, uint16x8_t __b)
{
  union { uint32x4x2_t __i; __builtin_csky_oi __o;} __rv;
  __rv.__o =  __builtin_csky_vsubuev8hi(__a, __b);
  return __rv.__i;
}

__extension__ static __inline uint64x2x2_t __attribute__ ((__always_inline__))
vsub_u32_e (uint32x4_t __a, uint32x4_t __b)
{
  union { uint64x2x2_t __i; __builtin_csky_oi __o;} __rv;
  __rv.__o =  __builtin_csky_vsubuev4si(__a, __b);
  return __rv.__i;
}

/* vadd.t.h && vsub.t.h */

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vadd_s16_h (int16x8_t __a, int16x8_t __b)
{
  return __builtin_csky_vaddshv8hi(__a, __b);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vadd_s32_h (int32x4_t __a, int32x4_t __b)
{
  return __builtin_csky_vaddshv4si(__a, __b);
}

__extension__ static __inline int64x2_t __attribute__ ((__always_inline__))
vadd_s64_h (int64x2_t __a, int64x2_t __b)
{
  return __builtin_csky_vaddshv2di(__a, __b);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vadd_u16_h (uint16x8_t __a, uint16x8_t __b)
{
  return __builtin_csky_vadduhv8hi(__a, __b);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vadd_u32_h (uint32x4_t __a, uint32x4_t __b)
{
  return __builtin_csky_vadduhv4si(__a, __b);
}

__extension__ static __inline uint64x2_t __attribute__ ((__always_inline__))
vadd_u64_h (uint64x2_t __a, uint64x2_t __b)
{
  return __builtin_csky_vadduhv2di(__a, __b);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vsub_s16_h (int16x8_t __a, int16x8_t __b)
{
  return __builtin_csky_vsubshv8hi(__a, __b);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vsub_s32_h (int32x4_t __a, int32x4_t __b)
{
  return __builtin_csky_vsubshv4si(__a, __b);
}

__extension__ static __inline int64x2_t __attribute__ ((__always_inline__))
vsub_s64_h (int64x2_t __a, int64x2_t __b)
{
  return __builtin_csky_vsubshv2di(__a, __b);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vsub_u16_h (uint16x8_t __a, uint16x8_t __b)
{
  return __builtin_csky_vsubuhv8hi(__a, __b);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vsub_u32_h (uint32x4_t __a, uint32x4_t __b)
{
  return __builtin_csky_vsubuhv4si(__a, __b);
}

__extension__ static __inline uint64x2_t __attribute__ ((__always_inline__))
vsub_u64_h (uint64x2_t __a, uint64x2_t __b)
{
  return __builtin_csky_vsubuhv2di(__a, __b);
}

/* vadd.t.s && vsub.t.s */
__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vadd_s8_s (int8x16_t __a, int8x16_t __b)
{
  return __builtin_csky_vaddssv16qi(__a, __b);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vadd_s16_s (int16x8_t __a, int16x8_t __b)
{
  return __builtin_csky_vaddssv8hi(__a, __b);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vadd_s32_s (int32x4_t __a, int32x4_t __b)
{
  return __builtin_csky_vaddssv4si(__a, __b);
}

__extension__ static __inline int64x2_t __attribute__ ((__always_inline__))
vadd_s64_s (int64x2_t __a, int64x2_t __b)
{
  return __builtin_csky_vaddssv2di(__a, __b);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vadd_u8_s (uint8x16_t __a, uint8x16_t __b)
{
  return __builtin_csky_vaddusv16qi(__a, __b);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vadd_u16_s (uint16x8_t __a, uint16x8_t __b)
{
  return __builtin_csky_vaddusv8hi(__a, __b);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vadd_u32_s (uint32x4_t __a, uint32x4_t __b)
{
  return __builtin_csky_vaddusv4si(__a, __b);
}

__extension__ static __inline uint64x2_t __attribute__ ((__always_inline__))
vadd_u64_s (uint64x2_t __a, uint64x2_t __b)
{
  return __builtin_csky_vaddusv2di(__a, __b);
}

__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vsub_s8_s (int8x16_t __a, int8x16_t __b)
{
  return __builtin_csky_vsubssv16qi(__a, __b);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vsub_s16_s (int16x8_t __a, int16x8_t __b)
{
  return __builtin_csky_vsubssv8hi(__a, __b);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vsub_s32_s (int32x4_t __a, int32x4_t __b)
{
  return __builtin_csky_vsubssv4si(__a, __b);
}

__extension__ static __inline int64x2_t __attribute__ ((__always_inline__))
vsub_s64_s (int64x2_t __a, int64x2_t __b)
{
  return __builtin_csky_vsubssv2di(__a, __b);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vsub_u8_s (uint8x16_t __a, uint8x16_t __b)
{
  return __builtin_csky_vsubusv16qi(__a, __b);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vsub_u16_s (uint16x8_t __a, uint16x8_t __b)
{
  return __builtin_csky_vsubusv8hi(__a, __b);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vsub_u32_s (uint32x4_t __a, uint32x4_t __b)
{
  return __builtin_csky_vsubusv4si(__a, __b);
}

__extension__ static __inline uint64x2_t __attribute__ ((__always_inline__))
vsub_u64_s (uint64x2_t __a, uint64x2_t __b)
{
  return __builtin_csky_vsubusv2di(__a, __b);
}

/* vadd.t.rh && vsub.t.rh */

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vadd_s16_rh (int16x8_t __a, int16x8_t __b)
{
  return __builtin_csky_vaddsrhv8hi(__a, __b);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vadd_s32_rh (int32x4_t __a, int32x4_t __b)
{
  return __builtin_csky_vaddsrhv4si(__a, __b);
}

__extension__ static __inline int64x2_t __attribute__ ((__always_inline__))
vadd_s64_rh (int64x2_t __a, int64x2_t __b)
{
  return __builtin_csky_vaddsrhv2di(__a, __b);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vadd_u16_rh (uint16x8_t __a, uint16x8_t __b)
{
  return __builtin_csky_vaddurhv8hi(__a, __b);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vadd_u32_rh (uint32x4_t __a, uint32x4_t __b)
{
  return __builtin_csky_vaddurhv4si(__a, __b);
}

__extension__ static __inline uint64x2_t __attribute__ ((__always_inline__))
vadd_u64_rh (uint64x2_t __a, uint64x2_t __b)
{
  return __builtin_csky_vaddurhv2di(__a, __b);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vsub_s16_rh (int16x8_t __a, int16x8_t __b)
{
  return __builtin_csky_vsubsrhv8hi(__a, __b);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vsub_s32_rh (int32x4_t __a, int32x4_t __b)
{
  return __builtin_csky_vsubsrhv4si(__a, __b);
}

__extension__ static __inline int64x2_t __attribute__ ((__always_inline__))
vsub_s64_rh (int64x2_t __a, int64x2_t __b)
{
  return __builtin_csky_vsubsrhv2di(__a, __b);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vsub_u16_rh (uint16x8_t __a, uint16x8_t __b)
{
  return __builtin_csky_vsuburhv8hi(__a, __b);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vsub_u32_rh (uint32x4_t __a, uint32x4_t __b)
{
  return __builtin_csky_vsuburhv4si(__a, __b);
}

__extension__ static __inline uint64x2_t __attribute__ ((__always_inline__))
vsub_u64_rh (uint64x2_t __a, uint64x2_t __b)
{
  return __builtin_csky_vsuburhv2di(__a, __b);
}

/* vaddh.t && vsubh.t */
__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vaddh_s8 (int8x16_t __a, int8x16_t __b)
{
  return __builtin_csky_vaddhsv16qi(__a, __b);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vaddh_s16 (int16x8_t __a, int16x8_t __b)
{
  return __builtin_csky_vaddhsv8hi(__a, __b);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vaddh_s32 (int32x4_t __a, int32x4_t __b)
{
  return __builtin_csky_vaddhsv4si(__a, __b);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vaddh_u8 (uint8x16_t __a, uint8x16_t __b)
{
  return __builtin_csky_vaddhuv16qi(__a, __b);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vaddh_u16 (uint16x8_t __a, uint16x8_t __b)
{
  return __builtin_csky_vaddhuv8hi(__a, __b);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vaddh_u32 (uint32x4_t __a, uint32x4_t __b)
{
  return __builtin_csky_vaddhuv4si(__a, __b);
}

__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vsubh_s8 (int8x16_t __a, int8x16_t __b)
{
  return __builtin_csky_vsubhsv16qi(__a, __b);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vsubh_s16 (int16x8_t __a, int16x8_t __b)
{
  return __builtin_csky_vsubhsv8hi(__a, __b);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vsubh_s32 (int32x4_t __a, int32x4_t __b)
{
  return __builtin_csky_vsubhsv4si(__a, __b);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vsubh_u8 (uint8x16_t __a, uint8x16_t __b)
{
  return __builtin_csky_vsubhuv16qi(__a, __b);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vsubh_u16 (uint16x8_t __a, uint16x8_t __b)
{
  return __builtin_csky_vsubhuv8hi(__a, __b);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vsubh_u32 (uint32x4_t __a, uint32x4_t __b)
{
  return __builtin_csky_vsubhuv4si(__a, __b);
}

/* vaddh.t.r && vsubh.t.r */
__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vaddh_s8_r (int8x16_t __a, int8x16_t __b)
{
  return __builtin_csky_vaddhrsv16qi(__a, __b);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vaddh_s16_r (int16x8_t __a, int16x8_t __b)
{
  return __builtin_csky_vaddhrsv8hi(__a, __b);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vaddh_s32_r (int32x4_t __a, int32x4_t __b)
{
  return __builtin_csky_vaddhrsv4si(__a, __b);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vaddh_u8_r (uint8x16_t __a, uint8x16_t __b)
{
  return __builtin_csky_vaddhruv16qi(__a, __b);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vaddh_u16_r (uint16x8_t __a, uint16x8_t __b)
{
  return __builtin_csky_vaddhruv8hi(__a, __b);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vaddh_u32_r (uint32x4_t __a, uint32x4_t __b)
{
  return __builtin_csky_vaddhruv4si(__a, __b);
}

__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vsubh_s8_r (int8x16_t __a, int8x16_t __b)
{
  return __builtin_csky_vsubhrsv16qi(__a, __b);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vsubh_s16_r (int16x8_t __a, int16x8_t __b)
{
  return __builtin_csky_vsubhrsv8hi(__a, __b);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vsubh_s32_r (int32x4_t __a, int32x4_t __b)
{
  return __builtin_csky_vsubhrsv4si(__a, __b);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vsubh_u8_r (uint8x16_t __a, uint8x16_t __b)
{
  return __builtin_csky_vsubhruv16qi(__a, __b);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vsubh_u16_r (uint16x8_t __a, uint16x8_t __b)
{
  return __builtin_csky_vsubhruv8hi(__a, __b);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vsubh_u32_r (uint32x4_t __a, uint32x4_t __b)
{
  return __builtin_csky_vsubhruv4si(__a, __b);
}

/* vadd.t.x & vsub.t.x */
__extension__ static __inline int16x8x2_t __attribute__ ((__always_inline__))
vadd_s8_x (int16x8x2_t __a, int8x16_t __b)
{
  union { int16x8x2_t __i; __builtin_csky_oi __o;} __rv;
  union { int16x8x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  __rv.__o =  __builtin_csky_vaddsxv16qi(__au.__o, __b);
  return __rv.__i;
}

__extension__ static __inline int32x4x2_t __attribute__ ((__always_inline__))
vadd_s16_x (int32x4x2_t __a, int16x8_t __b)
{
  union { int32x4x2_t __i; __builtin_csky_oi __o;} __rv;
  union { int32x4x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  __rv.__o =  __builtin_csky_vaddsxv8hi(__au.__o, __b);
  return __rv.__i;
}

__extension__ static __inline int64x2x2_t __attribute__ ((__always_inline__))
vadd_s32_x (int64x2x2_t __a, int32x4_t __b)
{
  union { int64x2x2_t __i; __builtin_csky_oi __o;} __rv;
  union { int64x2x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  __rv.__o =  __builtin_csky_vaddsxv4si(__au.__o, __b);
  return __rv.__i;
}

__extension__ static __inline uint16x8x2_t __attribute__ ((__always_inline__))
vadd_u8_x (uint16x8x2_t __a, uint8x16_t __b)
{
  union { uint16x8x2_t __i; __builtin_csky_oi __o;} __rv;
  union { uint16x8x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  __rv.__o =  __builtin_csky_vadduxv16qi(__au.__o, __b);
  return __rv.__i;
}

__extension__ static __inline uint32x4x2_t __attribute__ ((__always_inline__))
vadd_u16_x (uint32x4x2_t __a, uint16x8_t __b)
{
  union { uint32x4x2_t __i; __builtin_csky_oi __o;} __rv;
  union { uint32x4x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  __rv.__o =  __builtin_csky_vadduxv8hi(__au.__o, __b);
  return __rv.__i;
}

__extension__ static __inline uint64x2x2_t __attribute__ ((__always_inline__))
vadd_u32_x (uint64x2x2_t __a, uint32x4_t __b)
{
  union { uint64x2x2_t __i; __builtin_csky_oi __o;} __rv;
  union { uint64x2x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  __rv.__o =  __builtin_csky_vadduxv4si(__au.__o, __b);
  return __rv.__i;
}

__extension__ static __inline int16x8x2_t __attribute__ ((__always_inline__))
vsub_s8_x (int16x8x2_t __a, int8x16_t __b)
{
  union { int16x8x2_t __i; __builtin_csky_oi __o;} __rv;
  union { int16x8x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  __rv.__o =  __builtin_csky_vsubsxv16qi(__au.__o, __b);
  return __rv.__i;
}

__extension__ static __inline int32x4x2_t __attribute__ ((__always_inline__))
vsub_s16_x (int32x4x2_t __a, int16x8_t __b)
{
  union { int32x4x2_t __i; __builtin_csky_oi __o;} __rv;
  union { int32x4x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  __rv.__o =  __builtin_csky_vsubsxv8hi(__au.__o, __b);
  return __rv.__i;
}

__extension__ static __inline int64x2x2_t __attribute__ ((__always_inline__))
vsub_s32_x (int64x2x2_t __a, int32x4_t __b)
{
  union { int64x2x2_t __i; __builtin_csky_oi __o;} __rv;
  union { int64x2x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  __rv.__o =  __builtin_csky_vsubsxv4si(__au.__o, __b);
  return __rv.__i;
}

__extension__ static __inline uint16x8x2_t __attribute__ ((__always_inline__))
vsub_u8_x (uint16x8x2_t __a, uint8x16_t __b)
{
  union { uint16x8x2_t __i; __builtin_csky_oi __o;} __rv;
  union { uint16x8x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  __rv.__o =  __builtin_csky_vsubuxv16qi(__au.__o, __b);
  return __rv.__i;
}

__extension__ static __inline uint32x4x2_t __attribute__ ((__always_inline__))
vsub_u16_x (uint32x4x2_t __a, uint16x8_t __b)
{
  union { uint32x4x2_t __i; __builtin_csky_oi __o;} __rv;
  union { uint32x4x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  __rv.__o =  __builtin_csky_vsubuxv8hi(__au.__o, __b);
  return __rv.__i;
}

__extension__ static __inline uint64x2x2_t __attribute__ ((__always_inline__))
vsub_u32_x (uint64x2x2_t __a, uint32x4_t __b)
{
  union { uint64x2x2_t __i; __builtin_csky_oi __o;} __rv;
  union { uint64x2x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  __rv.__o =  __builtin_csky_vsubuxv4si(__au.__o, __b);
  return __rv.__i;
}

/* vpadd.t/vpadd.t.e/vpadda.t.e/vpadd.t.s*/
__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vpadd_s8 (int8x16_t __a, int8x16_t __b)
{
  return __builtin_csky_vpaddsv16qi(__a, __b);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vpadd_s16 (int16x8_t __a, int16x8_t __b)
{
  return __builtin_csky_vpaddsv8hi(__a, __b);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vpadd_s32 (int32x4_t __a, int32x4_t __b)
{
  return __builtin_csky_vpaddsv4si(__a, __b);
}

__extension__ static __inline int64x2_t __attribute__ ((__always_inline__))
vpadd_s64 (int64x2_t __a, int64x2_t __b)
{
  return __builtin_csky_vpaddsv2di(__a, __b);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vpadd_u8 (uint8x16_t __a, uint8x16_t __b)
{
  return __builtin_csky_vpadduv16qi(__a, __b);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vpadd_u16 (uint16x8_t __a, uint16x8_t __b)
{
  return __builtin_csky_vpadduv8hi(__a, __b);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vpadd_u32 (uint32x4_t __a, uint32x4_t __b)
{
  return __builtin_csky_vpadduv4si(__a, __b);
}

__extension__ static __inline uint64x2_t __attribute__ ((__always_inline__))
vpadd_u64 (uint64x2_t __a, uint64x2_t __b)
{
  return __builtin_csky_vpadduv2di(__a, __b);
}

__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vpadd_s8_s (int8x16_t __a, int8x16_t __b)
{
  return __builtin_csky_vpaddssv16qi(__a, __b);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vpadd_s16_s (int16x8_t __a, int16x8_t __b)
{
  return __builtin_csky_vpaddssv8hi(__a, __b);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vpadd_s32_s (int32x4_t __a, int32x4_t __b)
{
  return __builtin_csky_vpaddssv4si(__a, __b);
}

__extension__ static __inline int64x2_t __attribute__ ((__always_inline__))
vpadd_s64_s (int64x2_t __a, int64x2_t __b)
{
  return __builtin_csky_vpaddssv2di(__a, __b);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vpadd_u8_s (uint8x16_t __a, uint8x16_t __b)
{
  return __builtin_csky_vpaddusv16qi(__a, __b);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vpadd_u16_s (uint16x8_t __a, uint16x8_t __b)
{
  return __builtin_csky_vpaddusv8hi(__a, __b);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vpadd_u32_s (uint32x4_t __a, uint32x4_t __b)
{
  return __builtin_csky_vpaddusv4si(__a, __b);
}

__extension__ static __inline uint64x2_t __attribute__ ((__always_inline__))
vpadd_u64_s (uint64x2_t __a, uint64x2_t __b)
{
  return __builtin_csky_vpaddusv2di(__a, __b);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vpadd_s8_e (int8x16_t __a)
{
  return __builtin_csky_vpaddesv16qi(__a);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vpadd_s16_e (int16x8_t __a)
{
  return __builtin_csky_vpaddesv8hi(__a);
}

__extension__ static __inline int64x2_t __attribute__ ((__always_inline__))
vpadd_s32_e (int32x4_t __a)
{
  return __builtin_csky_vpaddesv4si(__a);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vpadd_u8_e (uint8x16_t __a)
{
  return __builtin_csky_vpaddeuv16qi(__a);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vpadd_u16_e (uint16x8_t __a)
{
  return __builtin_csky_vpaddeuv8hi(__a);
}

__extension__ static __inline uint64x2_t __attribute__ ((__always_inline__))
vpadd_u32_e (uint32x4_t __a)
{
  return __builtin_csky_vpaddeuv4si(__a);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vpadda_s8_e (int16x8_t __a, int8x16_t __b)
{
  return __builtin_csky_vpaddaesv16qi(__a, __b);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vpadda_s16_e (int32x4_t __a, int16x8_t __b)
{
  return __builtin_csky_vpaddaesv8hi(__a, __b);
}

__extension__ static __inline int64x2_t __attribute__ ((__always_inline__))
vpadda_s32_e (int64x2_t __a, int32x4_t __b)
{
  return __builtin_csky_vpaddaesv4si(__a, __b);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vpadda_u8_e (uint16x8_t __a, uint8x16_t __b)
{
  return __builtin_csky_vpaddaeuv16qi(__a, __b);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vpadda_u16_e (uint32x4_t __a, uint16x8_t __b)
{
  return __builtin_csky_vpaddaeuv8hi(__a, __b);
}

__extension__ static __inline uint64x2_t __attribute__ ((__always_inline__))
vpadda_u32_e (uint64x2_t __a, uint32x4_t __b)
{
  return __builtin_csky_vpaddaeuv4si(__a, __b);
}

/* vsax.t.s/vsaxh.t/vasx.t.s/vasxh.t */
__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vsax_s8_s (int8x16_t __a, int8x16_t __b)
{
  return __builtin_csky_vsaxssv16qi(__a, __b);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vsax_s16_s (int16x8_t __a, int16x8_t __b)
{
  return __builtin_csky_vsaxssv8hi(__a, __b);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vsax_s32_s (int32x4_t __a, int32x4_t __b)
{
  return __builtin_csky_vsaxssv4si(__a, __b);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vsax_u8_s (uint8x16_t __a, uint8x16_t __b)
{
  return __builtin_csky_vsaxusv16qi(__a, __b);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vsax_u16_s (uint16x8_t __a, uint16x8_t __b)
{
  return __builtin_csky_vsaxusv8hi(__a, __b);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vsax_u32_s (uint32x4_t __a, uint32x4_t __b)
{
  return __builtin_csky_vsaxusv4si(__a, __b);
}

__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vasx_s8_s (int8x16_t __a, int8x16_t __b)
{
  return __builtin_csky_vasxssv16qi(__a, __b);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vasx_s16_s (int16x8_t __a, int16x8_t __b)
{
  return __builtin_csky_vasxssv8hi(__a, __b);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vasx_s32_s (int32x4_t __a, int32x4_t __b)
{
  return __builtin_csky_vasxssv4si(__a, __b);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vasx_u8_s (uint8x16_t __a, uint8x16_t __b)
{
  return __builtin_csky_vasxusv16qi(__a, __b);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vasx_u16_s (uint16x8_t __a, uint16x8_t __b)
{
  return __builtin_csky_vasxusv8hi(__a, __b);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vasx_u32_s (uint32x4_t __a, uint32x4_t __b)
{
  return __builtin_csky_vasxusv4si(__a, __b);
}

__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vsaxh_s8(int8x16_t __a, int8x16_t __b)
{
  return __builtin_csky_vsaxhsv16qi(__a, __b);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vsaxh_s16(int16x8_t __a, int16x8_t __b)
{
  return __builtin_csky_vsaxhsv8hi(__a, __b);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vsaxh_s32(int32x4_t __a, int32x4_t __b)
{
  return __builtin_csky_vsaxhsv4si(__a, __b);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vsaxh_u8(uint8x16_t __a, uint8x16_t __b)
{
  return __builtin_csky_vsaxhuv16qi(__a, __b);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vsaxh_u16(uint16x8_t __a, uint16x8_t __b)
{
  return __builtin_csky_vsaxhuv8hi(__a, __b);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vsaxh_u32(uint32x4_t __a, uint32x4_t __b)
{
  return __builtin_csky_vsaxhuv4si(__a, __b);
}

__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vasxh_s8(int8x16_t __a, int8x16_t __b)
{
  return __builtin_csky_vasxhsv16qi(__a, __b);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vasxh_s16(int16x8_t __a, int16x8_t __b)
{
  return __builtin_csky_vasxhsv8hi(__a, __b);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vasxh_s32(int32x4_t __a, int32x4_t __b)
{
  return __builtin_csky_vasxhsv4si(__a, __b);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vasxh_u8(uint8x16_t __a, uint8x16_t __b)
{
  return __builtin_csky_vasxhuv16qi(__a, __b);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vasxh_u16(uint16x8_t __a, uint16x8_t __b)
{
  return __builtin_csky_vasxhuv8hi(__a, __b);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vasxh_u32(uint32x4_t __a, uint32x4_t __b)
{
  return __builtin_csky_vasxhuv4si(__a, __b);
}

/* vabs.t / vabs.t.s / vsabs.t.s / vsabs.t.e / vsabsa.t / vabsa.t.e */
__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vabs_s8(int8x16_t __a)
{
  return __builtin_csky_vabsv16qi(__a);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vabs_s16(int16x8_t __a)
{
  return __builtin_csky_vabsv8hi(__a);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vabs_s32(int32x4_t __a)
{
  return __builtin_csky_vabsv4si(__a);
}

__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vabs_s8_s(int8x16_t __a)
{
  return __builtin_csky_vabsssv16qi(__a);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vabs_s16_s(int16x8_t __a)
{
  return __builtin_csky_vabsssv8hi(__a);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vabs_s32_s(int32x4_t __a)
{
  return __builtin_csky_vabsssv4si(__a);
}

__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vsabs_s8_s(int8x16_t __a, int8x16_t __b)
{
  return __builtin_csky_vsabsssv16qi(__a, __b);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vsabs_s16_s(int16x8_t __a, int16x8_t __b)
{
  return __builtin_csky_vsabsssv8hi(__a, __b);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vsabs_s32_s(int32x4_t __a, int32x4_t __b)
{
  return __builtin_csky_vsabsssv4si(__a, __b);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vsabs_u8_s(uint8x16_t __a, uint8x16_t __b)
{
  return __builtin_csky_vsabsusv16qi(__a, __b);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vsabs_u16_s(uint16x8_t __a, uint16x8_t __b)
{
  return __builtin_csky_vsabsusv8hi(__a, __b);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vsabs_u32_s(uint32x4_t __a, uint32x4_t __b)
{
  return __builtin_csky_vsabsusv4si(__a, __b);
}

__extension__ static __inline int16x8x2_t __attribute__ ((__always_inline__))
vsabs_s8_e(int8x16_t __a, int8x16_t __b)
{
  union { int16x8x2_t __i; __builtin_csky_oi __o;} __rv;
  __rv.__o =  __builtin_csky_vsabssev16qi(__a, __b);
  return __rv.__i;
}

__extension__ static __inline int32x4x2_t __attribute__ ((__always_inline__))
vsabs_s16_e(int16x8_t __a, int16x8_t __b)
{
  union { int32x4x2_t __i; __builtin_csky_oi __o;} __rv;
  __rv.__o =  __builtin_csky_vsabssev8hi(__a, __b);
  return __rv.__i;
}

__extension__ static __inline int64x2x2_t __attribute__ ((__always_inline__))
vsabs_s32_e(int32x4_t __a, int32x4_t __b)
{
  union { int64x2x2_t __i; __builtin_csky_oi __o;} __rv;
  __rv.__o =  __builtin_csky_vsabssev4si(__a, __b);
  return __rv.__i;
}

__extension__ static __inline uint16x8x2_t __attribute__ ((__always_inline__))
vsabs_u8_e(uint8x16_t __a, uint8x16_t __b)
{
  union { uint16x8x2_t __i; __builtin_csky_oi __o;} __rv;
  __rv.__o =  __builtin_csky_vsabsuev16qi(__a, __b);
  return __rv.__i;
}

__extension__ static __inline uint32x4x2_t __attribute__ ((__always_inline__))
vsabs_u16_e(uint16x8_t __a, uint16x8_t __b)
{
  union { uint32x4x2_t __i; __builtin_csky_oi __o;} __rv;
  __rv.__o =  __builtin_csky_vsabsuev8hi(__a, __b);
  return __rv.__i;
}

__extension__ static __inline uint64x2x2_t __attribute__ ((__always_inline__))
vsabs_u32_e(uint32x4_t __a, uint32x4_t __b)
{
  union { uint64x2x2_t __i; __builtin_csky_oi __o;} __rv;
  __rv.__o =  __builtin_csky_vsabsuev4si(__a, __b);
  return __rv.__i;
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vsabsa_u8(uint8x16_t __a, uint8x16_t __b, uint8x16_t __c)
{
  return __builtin_csky_vsabsauv16qi(__a, __b, __c);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vsabsa_u16(uint16x8_t __a, uint16x8_t __b, uint16x8_t __c)
{
  return __builtin_csky_vsabsauv8hi(__a, __b, __c);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vsabsa_u32(uint32x4_t __a, uint32x4_t __b, uint32x4_t __c)
{
  return __builtin_csky_vsabsauv4si(__a, __b, __c);
}

__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vsabsa_s8(int8x16_t __a, int8x16_t __b, int8x16_t __c)
{
  return __builtin_csky_vsabsasv16qi(__a, __b, __c);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vsabsa_s16(int16x8_t __a, int16x8_t __b, int16x8_t __c)
{
  return __builtin_csky_vsabsasv8hi(__a, __b, __c);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vsabsa_s32(int32x4_t __a, int32x4_t __b, int32x4_t __c)
{
  return __builtin_csky_vsabsasv4si(__a, __b, __c);
}

__extension__ static __inline int16x8x2_t __attribute__ ((__always_inline__))
vsabsa_s8_e(int16x8x2_t __a, int8x16_t __b, int8x16_t __c)
{
  union { int16x8x2_t __i; __builtin_csky_oi __o;} __rv;
  union { int16x8x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  __rv.__o = __builtin_csky_vsabsasev16qi(__au.__o, __b, __c);
  return __rv.__i;
}

__extension__ static __inline int32x4x2_t __attribute__ ((__always_inline__))
vsabsa_s16_e(int32x4x2_t __a, int16x8_t __b, int16x8_t __c)
{
  union { int32x4x2_t __i; __builtin_csky_oi __o;} __rv;
  union { int32x4x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  __rv.__o = __builtin_csky_vsabsasev8hi(__au.__o, __b, __c);
  return __rv.__i;
}

__extension__ static __inline int64x2x2_t __attribute__ ((__always_inline__))
vsabsa_s32_e(int64x2x2_t __a, int32x4_t __b, int32x4_t __c)
{
  union { int64x2x2_t __i; __builtin_csky_oi __o;} __rv;
  union { int64x2x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  __rv.__o = __builtin_csky_vsabsasev4si(__au.__o, __b, __c);
  return __rv.__i;
}

__extension__ static __inline uint16x8x2_t __attribute__ ((__always_inline__))
vsabsa_u8_e(uint16x8x2_t __a, uint8x16_t __b, uint8x16_t __c)
{
  union { uint16x8x2_t __i; __builtin_csky_oi __o;} __rv;
  union { uint16x8x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  __rv.__o = __builtin_csky_vsabsauev16qi(__au.__o, __b, __c);
  return __rv.__i;
}

__extension__ static __inline uint32x4x2_t __attribute__ ((__always_inline__))
vsabsa_u16_e(uint32x4x2_t __a, uint16x8_t __b, uint16x8_t __c)
{
  union { uint32x4x2_t __i; __builtin_csky_oi __o;} __rv;
  union { uint32x4x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  __rv.__o = __builtin_csky_vsabsauev8hi(__au.__o, __b, __c);
  return __rv.__i;
}

__extension__ static __inline uint64x2x2_t __attribute__ ((__always_inline__))
vsabsa_u32_e(uint64x2x2_t __a, uint32x4_t __b, uint32x4_t __c)
{
  union { uint64x2x2_t __i; __builtin_csky_oi __o;} __rv;
  union { uint64x2x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  __rv.__o = __builtin_csky_vsabsauev4si(__au.__o, __b, __c);
  return __rv.__i;
}

/* vneg.t / vneg.t.s */
__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vneg_s8 (int8x16_t __a)
{
  return __builtin_csky_vnegv16qi(__a);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vneg_s16 (int16x8_t __a)
{
  return __builtin_csky_vnegv8hi(__a);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vneg_s32 (int32x4_t __a)
{
  return __builtin_csky_vnegv4si(__a);
}

__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vneg_s8_s (int8x16_t __a)
{
  return __builtin_csky_vnegsv16qi(__a);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vneg_s16_s (int16x8_t __a)
{
  return __builtin_csky_vnegsv8hi(__a);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vneg_s32_s (int32x4_t __a)
{
  return __builtin_csky_vnegsv4si(__a);
}

/* vmax.t / vmin.t / vpmax.t / vpmin.t */
__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vmax_s8 (int8x16_t __a, int8x16_t __b)
{
  return __builtin_csky_vsmaxv16qi(__a, __b);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vmax_s16 (int16x8_t __a, int16x8_t __b)
{
  return __builtin_csky_vsmaxv8hi(__a, __b);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vmax_s32 (int32x4_t __a, int32x4_t __b)
{
  return __builtin_csky_vsmaxv4si(__a, __b);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vmax_u8 (uint8x16_t __a, uint8x16_t __b)
{
  return __builtin_csky_vumaxv16qi(__a, __b);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vmax_u16 (uint16x8_t __a, uint16x8_t __b)
{
  return __builtin_csky_vumaxv8hi(__a, __b);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vmax_u32 (uint32x4_t __a, uint32x4_t __b)
{
  return __builtin_csky_vumaxv4si(__a, __b);
}

__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vmin_s8 (int8x16_t __a, int8x16_t __b)
{
  return __builtin_csky_vsminv16qi(__a, __b);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vmin_s16 (int16x8_t __a, int16x8_t __b)
{
  return __builtin_csky_vsminv8hi(__a, __b);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vmin_s32 (int32x4_t __a, int32x4_t __b)
{
  return __builtin_csky_vsminv4si(__a, __b);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vmin_u8 (uint8x16_t __a, uint8x16_t __b)
{
  return __builtin_csky_vuminv16qi(__a, __b);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vmin_u16 (uint16x8_t __a, uint16x8_t __b)
{
  return __builtin_csky_vuminv8hi(__a, __b);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vmin_u32 (uint32x4_t __a, uint32x4_t __b)
{
  return __builtin_csky_vuminv4si(__a, __b);
}

__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vpmax_s8 (int8x16_t __a, int8x16_t __b)
{
  return __builtin_csky_vpmaxsv16qi(__a, __b);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vpmax_s16 (int16x8_t __a, int16x8_t __b)
{
  return __builtin_csky_vpmaxsv8hi(__a, __b);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vpmax_s32 (int32x4_t __a, int32x4_t __b)
{
  return __builtin_csky_vpmaxsv4si(__a, __b);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vpmax_u8 (uint8x16_t __a, uint8x16_t __b)
{
  return __builtin_csky_vpmaxuv16qi(__a, __b);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vpmax_u16 (uint16x8_t __a, uint16x8_t __b)
{
  return __builtin_csky_vpmaxuv8hi(__a, __b);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vpmax_u32 (uint32x4_t __a, uint32x4_t __b)
{
  return __builtin_csky_vpmaxuv4si(__a, __b);
}

__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vpmin_s8 (int8x16_t __a, int8x16_t __b)
{
  return __builtin_csky_vpminsv16qi(__a, __b);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vpmin_s16 (int16x8_t __a, int16x8_t __b)
{
  return __builtin_csky_vpminsv8hi(__a, __b);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vpmin_s32 (int32x4_t __a, int32x4_t __b)
{
  return __builtin_csky_vpminsv4si(__a, __b);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vpmin_u8 (uint8x16_t __a, uint8x16_t __b)
{
  return __builtin_csky_vpminuv16qi(__a, __b);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vpmin_u16 (uint16x8_t __a, uint16x8_t __b)
{
  return __builtin_csky_vpminuv8hi(__a, __b);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vpmin_u32 (uint32x4_t __a, uint32x4_t __b)
{
  return __builtin_csky_vpminuv4si(__a, __b);
}

/* vcmp */

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vcmplt_s8 (int8x16_t __a, int8x16_t __b)
{
  return __builtin_csky_vcmpsltv16qi(__a, __b);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vcmplt_s16 (int16x8_t __a, int16x8_t __b)
{
  return __builtin_csky_vcmpsltv8hi(__a, __b);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vcmplt_s32 (int32x4_t __a, int32x4_t __b)
{
  return __builtin_csky_vcmpsltv4si(__a, __b);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vcmplt_u8 (uint8x16_t __a, uint8x16_t __b)
{
  return __builtin_csky_vcmpultv16qi(__a, __b);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vcmplt_u16 (uint16x8_t __a, uint16x8_t __b)
{
  return __builtin_csky_vcmpultv8hi(__a, __b);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vcmplt_u32 (uint32x4_t __a, uint32x4_t __b)
{
  return __builtin_csky_vcmpultv4si(__a, __b);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vcmpls_s8 (int8x16_t __a, int8x16_t __b)
{
  return __builtin_csky_vcmpslsv16qi(__a, __b);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vcmpls_s16 (int16x8_t __a, int16x8_t __b)
{
  return __builtin_csky_vcmpslsv8hi(__a, __b);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vcmpls_s32 (int32x4_t __a, int32x4_t __b)
{
  return __builtin_csky_vcmpslsv4si(__a, __b);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vcmpls_u8 (uint8x16_t __a, uint8x16_t __b)
{
  return __builtin_csky_vcmpulsv16qi(__a, __b);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vcmpls_u16 (uint16x8_t __a, uint16x8_t __b)
{
  return __builtin_csky_vcmpulsv8hi(__a, __b);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vcmpls_u32 (uint32x4_t __a, uint32x4_t __b)
{
  return __builtin_csky_vcmpulsv4si(__a, __b);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vcmphs_s8 (int8x16_t __a, int8x16_t __b)
{
  return __builtin_csky_vcmpshsv16qi(__a, __b);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vcmphs_s16 (int16x8_t __a, int16x8_t __b)
{
  return __builtin_csky_vcmpshsv8hi(__a, __b);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vcmphs_s32 (int32x4_t __a, int32x4_t __b)
{
  return __builtin_csky_vcmpshsv4si(__a, __b);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vcmphs_u8 (uint8x16_t __a, uint8x16_t __b)
{
  return __builtin_csky_vcmpuhsv16qi(__a, __b);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vcmphs_u16 (uint16x8_t __a, uint16x8_t __b)
{
  return __builtin_csky_vcmpuhsv8hi(__a, __b);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vcmphs_u32 (uint32x4_t __a, uint32x4_t __b)
{
  return __builtin_csky_vcmpuhsv4si(__a, __b);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vcmph_s8 (int8x16_t __a, int8x16_t __b)
{
  return __builtin_csky_vcmpshv16qi(__a, __b);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vcmph_s16 (int16x8_t __a, int16x8_t __b)
{
  return __builtin_csky_vcmpshv8hi(__a, __b);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vcmph_s32 (int32x4_t __a, int32x4_t __b)
{
  return __builtin_csky_vcmpshv4si(__a, __b);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vcmph_u8 (uint8x16_t __a, uint8x16_t __b)
{
  return __builtin_csky_vcmpuhv16qi(__a, __b);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vcmph_u16 (uint16x8_t __a, uint16x8_t __b)
{
  return __builtin_csky_vcmpuhv8hi(__a, __b);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vcmph_u32 (uint32x4_t __a, uint32x4_t __b)
{
  return __builtin_csky_vcmpuhv4si(__a, __b);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vcmpne_s8 (int8x16_t __a, int8x16_t __b)
{
  return __builtin_csky_vcmpsnev16qi(__a, __b);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vcmpne_s16 (int16x8_t __a, int16x8_t __b)
{
  return __builtin_csky_vcmpsnev8hi(__a, __b);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vcmpne_s32 (int32x4_t __a, int32x4_t __b)
{
  return __builtin_csky_vcmpsnev4si(__a, __b);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vcmpne_u8 (uint8x16_t __a, uint8x16_t __b)
{
  return __builtin_csky_vcmpunev16qi(__a, __b);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vcmpne_u16 (uint16x8_t __a, uint16x8_t __b)
{
  return __builtin_csky_vcmpunev8hi(__a, __b);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vcmpne_u32 (uint32x4_t __a, uint32x4_t __b)
{
  return __builtin_csky_vcmpunev4si(__a, __b);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vcmpnez_s8 (int8x16_t __a)
{
  return __builtin_csky_vcmpnezv16qi(__a);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vcmpnez_s16 (int16x8_t __a)
{
  return __builtin_csky_vcmpnezv8hi(__a);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vcmpnez_s32 (int32x4_t __a)
{
  return __builtin_csky_vcmpnezv4si(__a);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vcmpnez_u8 (uint8x16_t __a)
{
  return __builtin_csky_vcmpnezuv16qi(__a);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vcmpnez_u16 (uint16x8_t __a)
{
  return __builtin_csky_vcmpnezuv8hi(__a);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vcmpnez_u32 (uint32x4_t __a)
{
  return __builtin_csky_vcmpnezuv4si(__a);
}
__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vcmplsz_s8 (int8x16_t __a)
{
  return __builtin_csky_vcmplszv16qi(__a);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vcmplsz_s16 (int16x8_t __a)
{
  return __builtin_csky_vcmplszv8hi(__a);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vcmplsz_s32 (int32x4_t __a)
{
  return __builtin_csky_vcmplszv4si(__a);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vcmpltz_s8 (int8x16_t __a)
{
  return __builtin_csky_vcmpltzv16qi(__a);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vcmpltz_s16 (int16x8_t __a)
{
  return __builtin_csky_vcmpltzv8hi(__a);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vcmpltz_s32 (int32x4_t __a)
{
  return __builtin_csky_vcmpltzv4si(__a);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vcmphz_s8 (int8x16_t __a)
{
  return __builtin_csky_vcmphzv16qi(__a);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vcmphz_s16 (int16x8_t __a)
{
  return __builtin_csky_vcmphzv8hi(__a);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vcmphz_s32 (int32x4_t __a)
{
  return __builtin_csky_vcmphzv4si(__a);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vcmphsz_s8 (int8x16_t __a)
{
  return __builtin_csky_vcmphszv16qi(__a);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vcmphsz_s16 (int16x8_t __a)
{
  return __builtin_csky_vcmphszv8hi(__a);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vcmphsz_s32 (int32x4_t __a)
{
  return __builtin_csky_vcmphszv4si(__a);
}


/* vclip.t */

/*  vclip.s8(/16/32/64)  signed ret, signed arg 1 */
__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vclips_s8 (int8x16_t __a, const int32_t __b)
{
  return __builtin_csky_vclipsv16qi(__a, __b);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vclips_s16 (int16x8_t __a,const int32_t __b)
{
  return __builtin_csky_vclipsv8hi(__a, __b);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vclips_s32 (int32x4_t __a,const int32_t __b)
{
  return __builtin_csky_vclipsv4si(__a, __b);
}

__extension__ static __inline int64x2_t __attribute__ ((__always_inline__))
vclips_s64 (int64x2_t __a,const int32_t __b)
{
  return __builtin_csky_vclipsv2di(__a, __b);
}

/*  vclip.s8(/16/32/64)  signed ret, unsigned arg 1 */

__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vclipu_s8 (uint8x16_t __a, const int32_t __b)
{
  return __builtin_csky_vclipsv16qi((int8x16_t)__a, __b);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vclipu_s16 (uint16x8_t __a,const int32_t __b)
{
  return __builtin_csky_vclipsv8hi((int16x8_t)__a, __b);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vclipu_s32 (uint32x4_t __a,const int32_t __b)
{
  return __builtin_csky_vclipsv4si((int32x4_t)__a, __b);
}

__extension__ static __inline int64x2_t __attribute__ ((__always_inline__))
vclipu_s64 (uint64x2_t __a,const int32_t __b)
{
  return __builtin_csky_vclipsv2di((int64x2_t)__a, __b);
}

/*  vclip.u8(/16/32/64)  unsigned ret, unsigned arg 1 */

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vclipu_u8 (uint8x16_t __a, const int32_t __b)
{
  return __builtin_csky_vclipuv16qi(__a, __b);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vclipu_u16 (uint16x8_t __a,const int32_t __b)
{
  return __builtin_csky_vclipuv8hi(__a, __b);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vclipu_u32 (uint32x4_t __a,const int32_t __b)
{
  return __builtin_csky_vclipuv4si(__a, __b);
}

__extension__ static __inline uint64x2_t __attribute__ ((__always_inline__))
vclipu_u64 (uint64x2_t __a,const int32_t __b)
{
  return __builtin_csky_vclipuv2di(__a, __b);
}

/*  vclip.u8(/16/32/64)  unsigned ret, signed arg 1 */

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vclips_u8 (int8x16_t __a, const int32_t __b)
{
  return __builtin_csky_vclipuv16qi((uint8x16_t)__a, __b);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vclips_u16 (int16x8_t __a,const int32_t __b)
{
  return __builtin_csky_vclipuv8hi((uint16x8_t)__a, __b);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vclips_u32 (int32x4_t __a,const int32_t __b)
{
  return __builtin_csky_vclipuv4si((uint32x4_t)__a, __b);
}

__extension__ static __inline uint64x2_t __attribute__ ((__always_inline__))
vclips_u64 (int64x2_t __a,const int32_t __b)
{
  return __builtin_csky_vclipuv2di((uint64x2_t)__a, __b);
}


/* vmul.t */
__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vmul_s8 (int8x16_t __a, int8x16_t __b)
{
  return __builtin_csky_vmul_sv16qi(__a, __b);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vmul_s16 (int16x8_t __a, int16x8_t __b)
{
  return __builtin_csky_vmul_sv8hi(__a, __b);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vmul_s32 (int32x4_t __a, int32x4_t __b)
{
  return __builtin_csky_vmul_sv4si(__a, __b);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vmul_u8 (uint8x16_t __a, uint8x16_t __b)
{
  return __builtin_csky_vmuluv16qi(__a, __b);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vmul_u16 (uint16x8_t __a, uint16x8_t __b)
{
  return __builtin_csky_vmuluv8hi(__a, __b);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vmul_u32 (uint32x4_t __a, uint32x4_t __b)
{
  return __builtin_csky_vmuluv4si(__a, __b);
}

/* vmuli.t */
__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vmuli_s8 (int8x16_t __a, int8x16_t __b, const int32_t __index)
{
  return __builtin_csky_vmulisv16qi(__a, __b, __index);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vmuli_s16 (int16x8_t __a, int16x8_t __b, const int32_t __index)
{
  return __builtin_csky_vmulisv8hi(__a, __b, __index);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vmuli_s32 (int32x4_t __a, int32x4_t __b, const int32_t __index)
{
  return __builtin_csky_vmulisv4si(__a, __b, __index);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vmuli_u8 (uint8x16_t __a, uint8x16_t __b, const int32_t __index)
{
  return __builtin_csky_vmuliuv16qi(__a, __b, __index);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vmuli_u16 (uint16x8_t __a, uint16x8_t __b, const int32_t __index)
{
  return __builtin_csky_vmuliuv8hi(__a, __b, __index);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vmuli_u32 (uint32x4_t __a, uint32x4_t __b, const int32_t __index)
{
  return __builtin_csky_vmuliuv4si(__a, __b, __index);
}

/* vmul.t.h */
__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vmul_s8_h (int8x16_t __a, int8x16_t __b)
{
  return __builtin_csky_vmulshv16qi(__a, __b);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vmul_s16_h (int16x8_t __a, int16x8_t __b)
{
  return __builtin_csky_vmulshv8hi(__a, __b);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vmul_s32_h (int32x4_t __a, int32x4_t __b)
{
  return __builtin_csky_vmulshv4si(__a, __b);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vmul_u8_h (uint8x16_t __a, uint8x16_t __b)
{
  return __builtin_csky_vmuluhv16qi(__a, __b);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vmul_u16_h (uint16x8_t __a, uint16x8_t __b)
{
  return __builtin_csky_vmuluhv8hi(__a, __b);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vmul_u32_h (uint32x4_t __a, uint32x4_t __b)
{
  return __builtin_csky_vmuluhv4si(__a, __b);
}

/* vmuli.t.h */
__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vmuli_s8_h (int8x16_t __a, int8x16_t __b, const int32_t __index)
{
  return __builtin_csky_vmulishv16qi(__a, __b, __index);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vmuli_s16_h (int16x8_t __a, int16x8_t __b, const int32_t __index)
{
  return __builtin_csky_vmulishv8hi(__a, __b, __index);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vmuli_s32_h (int32x4_t __a, int32x4_t __b, const int32_t __index)
{
  return __builtin_csky_vmulishv4si(__a, __b, __index);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vmuli_u8_h (uint8x16_t __a, uint8x16_t __b, const int32_t __index)
{
  return __builtin_csky_vmuliuhv16qi(__a, __b, __index);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vmuli_u16_h (uint16x8_t __a, uint16x8_t __b, const int32_t __index)
{
  return __builtin_csky_vmuliuhv8hi(__a, __b, __index);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vmuli_u32_h (uint32x4_t __a, uint32x4_t __b, const int32_t __index)
{
  return __builtin_csky_vmuliuhv4si(__a, __b, __index);
}

/* vmul.t.e */
__extension__ static __inline int16x8x2_t __attribute__ ((__always_inline__))
vmul_s8_e (int8x16_t __a, int8x16_t __b)
{
  union { int16x8x2_t __i; __builtin_csky_oi __o;} __rv;
  __rv.__o =  __builtin_csky_vmulsev16qi(__a, __b);
  return __rv.__i;
}

__extension__ static __inline int32x4x2_t __attribute__ ((__always_inline__))
vmul_s16_e (int16x8_t __a, int16x8_t __b)
{
  union { int32x4x2_t __i; __builtin_csky_oi __o;} __rv;
  __rv.__o = __builtin_csky_vmulsev8hi(__a, __b);
  return __rv.__i;
}

__extension__ static __inline int64x2x2_t __attribute__ ((__always_inline__))
vmul_s32_e (int32x4_t __a, int32x4_t __b)
{
  union { int64x2x2_t __i; __builtin_csky_oi __o;} __rv;
  __rv.__o = __builtin_csky_vmulsev4si(__a, __b);
  return __rv.__i;
}

__extension__ static __inline uint16x8x2_t __attribute__ ((__always_inline__))
vmul_u8_e (uint8x16_t __a, uint8x16_t __b)
{
  union { uint16x8x2_t __i; __builtin_csky_oi __o;} __rv;
  __rv.__o =  __builtin_csky_vmuluev16qi(__a, __b);
  return __rv.__i;
}

__extension__ static __inline uint32x4x2_t __attribute__ ((__always_inline__))
vmul_u16_e (uint16x8_t __a, uint16x8_t __b)
{
  union { uint32x4x2_t __i; __builtin_csky_oi __o;} __rv;
  __rv.__o = __builtin_csky_vmuluev8hi(__a, __b);
  return __rv.__i;
}

__extension__ static __inline uint64x2x2_t __attribute__ ((__always_inline__))
vmul_u32_e (uint32x4_t __a, uint32x4_t __b)
{
  union { uint64x2x2_t __i; __builtin_csky_oi __o;} __rv;
  __rv.__o = __builtin_csky_vmuluev4si(__a, __b);
  return __rv.__i;
}

/* vmuli.t.e */
__extension__ static __inline int16x8x2_t __attribute__ ((__always_inline__))
vmuli_s8_e (int8x16_t __a, int8x16_t __b, const int32_t __index)
{
  union { int16x8x2_t __i; __builtin_csky_oi __o;} __rv;
  __rv.__o = __builtin_csky_vmuliesv16qi(__a, __b, __index);
  return __rv.__i;
}

__extension__ static __inline int32x4x2_t __attribute__ ((__always_inline__))
vmuli_s16_e (int16x8_t __a, int16x8_t __b, const int32_t __index)
{
  union { int32x4x2_t __i; __builtin_csky_oi __o;} __rv;
  __rv.__o = __builtin_csky_vmuliesv8hi(__a, __b, __index);
  return __rv.__i;
}

__extension__ static __inline int64x2x2_t __attribute__ ((__always_inline__))
vmuli_s32_e (int32x4_t __a, int32x4_t __b, const int32_t __index)
{
  union { int64x2x2_t __i; __builtin_csky_oi __o;} __rv;
  __rv.__o = __builtin_csky_vmuliesv4si(__a, __b, __index);
  return __rv.__i;
}

__extension__ static __inline uint16x8x2_t __attribute__ ((__always_inline__))
vmuli_u8_e (uint8x16_t __a, uint8x16_t __b, const int32_t __index)
{
  union { uint16x8x2_t __i; __builtin_csky_oi __o;} __rv;
  __rv.__o = __builtin_csky_vmulieuv16qi(__a, __b, __index);
  return __rv.__i;
}

__extension__ static __inline uint32x4x2_t __attribute__ ((__always_inline__))
vmuli_u16_e (uint16x8_t __a, uint16x8_t __b, const int32_t __index)
{
  union { uint32x4x2_t __i; __builtin_csky_oi __o;} __rv;
  __rv.__o = __builtin_csky_vmulieuv8hi(__a, __b, __index);
  return __rv.__i;
}

__extension__ static __inline uint64x2x2_t __attribute__ ((__always_inline__))
vmuli_u32_e (uint32x4_t __a, uint32x4_t __b, const int32_t __index)
{
  union { uint64x2x2_t __i; __builtin_csky_oi __o;} __rv;
  __rv.__o = __builtin_csky_vmulieuv4si(__a, __b, __index);
  return __rv.__i;
}

/* vmula.t */
__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vmula_s8 (int8x16_t __a, int8x16_t __b, int8x16_t __c)
{
  return __builtin_csky_vmulasv16qi(__b, __c, __a);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vmula_s16 (int16x8_t __a, int16x8_t __b, int16x8_t __c)
{
  return __builtin_csky_vmulasv8hi(__b, __c, __a);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vmula_s32 (int32x4_t __a, int32x4_t __b, int32x4_t __c)
{
  return __builtin_csky_vmulasv4si(__b, __c, __a);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vmula_u8 (uint8x16_t __a, uint8x16_t __b, uint8x16_t __c)
{
  return __builtin_csky_vmulauv16qi(__b, __c, __a);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vmula_u16 (uint16x8_t __a, uint16x8_t __b, uint16x8_t __c)
{
  return __builtin_csky_vmulauv8hi(__b, __c, __a);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vmula_u32 (uint32x4_t __a, uint32x4_t __b, uint32x4_t __c)
{
  return __builtin_csky_vmulauv4si(__b, __c, __a);
}

/* vmulai.t */
__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vmulai_s8 (int8x16_t __a, int8x16_t __b, int8x16_t __c, const int32_t __index)
{
  return __builtin_csky_vmulaisv16qi(__b, __c, __index, __a);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vmulai_s16 (int16x8_t __a, int16x8_t __b, int16x8_t __c, const int32_t __index)
{
  return __builtin_csky_vmulaisv8hi(__b, __c, __index, __a);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vmulai_s32 (int32x4_t __a, int32x4_t __b, int32x4_t __c, const int32_t __index)
{
  return __builtin_csky_vmulaisv4si(__b, __c, __index, __a);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vmulai_u8 (uint8x16_t __a, uint8x16_t __b, uint8x16_t __c, const int32_t __index)
{
  return __builtin_csky_vmulaiuv16qi(__b, __c, __index, __a);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vmulai_u16 (uint16x8_t __a, uint16x8_t __b, uint16x8_t __c, const int32_t __index)
{
  return __builtin_csky_vmulaiuv8hi(__b, __c, __index, __a);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vmulai_u32 (uint32x4_t __a, uint32x4_t __b, uint32x4_t __c, const int32_t __index)
{
  return __builtin_csky_vmulaiuv4si(__b, __c, __index, __a);
}

/* vmula.t.e */
__extension__ static __inline int16x8x2_t __attribute__ ((__always_inline__))
vmula_s8_e (int16x8x2_t __a, int8x16_t __b, int8x16_t __c)
{
  union { int16x8x2_t __i; __builtin_csky_oi __o;} __rv;
  union { int16x8x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  __rv.__o =  __builtin_csky_vmulasev16qi(__au.__o, __b, __c);
  return __rv.__i;
}

__extension__ static __inline int32x4x2_t __attribute__ ((__always_inline__))
vmula_s16_e (int32x4x2_t __a, int16x8_t __b, int16x8_t __c)
{
  union { int32x4x2_t __i; __builtin_csky_oi __o;} __rv;
  union { int32x4x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  __rv.__o =  __builtin_csky_vmulasev8hi(__au.__o, __b, __c);
  return __rv.__i;
}

__extension__ static __inline int64x2x2_t __attribute__ ((__always_inline__))
vmula_s32_e (int64x2x2_t __a, int32x4_t __b, int32x4_t __c)
{
  union { int64x2x2_t __i; __builtin_csky_oi __o;} __rv;
  union { int64x2x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  __rv.__o =  __builtin_csky_vmulasev4si(__au.__o, __b, __b);
  return __rv.__i;
}

__extension__ static __inline uint16x8x2_t __attribute__ ((__always_inline__))
vmula_u8_e (uint16x8x2_t __a, uint8x16_t __b, uint8x16_t __c)
{
  union { uint16x8x2_t __i; __builtin_csky_oi __o;} __rv;
  union { uint16x8x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  __rv.__o =  __builtin_csky_vmulauev16qi(__au.__o, __b, __c);
  return __rv.__i;
}

__extension__ static __inline uint32x4x2_t __attribute__ ((__always_inline__))
vmula_u16_e (uint32x4x2_t __a, uint16x8_t __b, uint16x8_t __c)
{
  union { uint32x4x2_t __i; __builtin_csky_oi __o;} __rv;
  union { uint32x4x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  __rv.__o =  __builtin_csky_vmulauev8hi(__au.__o, __b, __c);
  return __rv.__i;
}

__extension__ static __inline uint64x2x2_t __attribute__ ((__always_inline__))
vmula_u32_e (uint64x2x2_t __a, uint32x4_t __b, uint32x4_t __c)
{
  union { uint64x2x2_t __i; __builtin_csky_oi __o;} __rv;
  union { uint64x2x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  __rv.__o =  __builtin_csky_vmulauev4si(__au.__o, __b, __c);
  return __rv.__i;
}

/* vmulai.t.e */
__extension__ static __inline int16x8x2_t __attribute__ ((__always_inline__))
vmulai_s8_e (int16x8x2_t __a, int8x16_t __b, int8x16_t __c, const int32_t __index)
{
  union { int16x8x2_t __i; __builtin_csky_oi __o;} __rv;
  union { int16x8x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  __rv.__o = __builtin_csky_vmulaiesv16qi(__b, __c, __index, __au.__o);
  return __rv.__i;
}

__extension__ static __inline int32x4x2_t __attribute__ ((__always_inline__))
vmulai_s16_e (int32x4x2_t __a, int16x8_t __b, int16x8_t __c, const int32_t __index)
{
  union { int32x4x2_t __i; __builtin_csky_oi __o;} __rv;
  union { int32x4x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  __rv.__o = __builtin_csky_vmulaiesv8hi(__b, __c, __index, __au.__o);
  return __rv.__i;
}

__extension__ static __inline int64x2x2_t __attribute__ ((__always_inline__))
vmulai_s32_e (int64x2x2_t __a, int32x4_t __b, int32x4_t __c, const int32_t __index)
{
  union { int64x2x2_t __i; __builtin_csky_oi __o;} __rv;
  union { int64x2x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  __rv.__o = __builtin_csky_vmulaiesv4si(__b, __c, __index, __au.__o);
  return __rv.__i;
}

__extension__ static __inline uint16x8x2_t __attribute__ ((__always_inline__))
vmulai_u8_e (uint16x8x2_t __a, uint8x16_t __b, uint8x16_t __c, const int32_t __index)
{
  union { uint16x8x2_t __i; __builtin_csky_oi __o;} __rv;
  union { uint16x8x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  __rv.__o = __builtin_csky_vmulaieuv16qi(__b, __c, __index, __au.__o);
  return __rv.__i;
}

__extension__ static __inline uint32x4x2_t __attribute__ ((__always_inline__))
vmulai_u16_e (uint32x4x2_t __a, uint16x8_t __b, uint16x8_t __c, const int32_t __index)
{
  union { uint32x4x2_t __i; __builtin_csky_oi __o;} __rv;
  union { uint32x4x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  __rv.__o = __builtin_csky_vmulaieuv8hi(__b, __c, __index, __au.__o);
  return __rv.__i;
}

__extension__ static __inline uint64x2x2_t __attribute__ ((__always_inline__))
vmulai_u32_e (uint64x2x2_t __a, uint32x4_t __b, uint32x4_t __c, const int32_t __index)
{
  union { uint64x2x2_t __i; __builtin_csky_oi __o;} __rv;
  union { uint64x2x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  __rv.__o = __builtin_csky_vmulaieuv4si(__b, __c, __index, __au.__o);
  return __rv.__i;
}

/* vmuls.t */
__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vmuls_s8 (int8x16_t __a, int8x16_t __b, int8x16_t __c)
{
  return __builtin_csky_vmulssv16qi(__b, __c, __a);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vmuls_s16 (int16x8_t __a, int16x8_t __b, int16x8_t __c)
{
  return __builtin_csky_vmulssv8hi(__b, __c, __a);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vmuls_s32 (int32x4_t __a, int32x4_t __b, int32x4_t __c)
{
  return __builtin_csky_vmulssv4si(__b, __c, __a);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vmuls_u8 (uint8x16_t __a, uint8x16_t __b, uint8x16_t __c)
{
  return __builtin_csky_vmulsuv16qi(__b, __c, __a);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vmuls_u16 (uint16x8_t __a, uint16x8_t __b, uint16x8_t __c)
{
  return __builtin_csky_vmulsuv8hi(__b, __c, __a);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vmuls_u32 (uint32x4_t __a, uint32x4_t __b, uint32x4_t __c)
{
  return __builtin_csky_vmulsuv4si(__b, __c, __a);
}

/* vmulsi.t */
__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vmulsi_s8 (int8x16_t __a, int8x16_t __b, int8x16_t __c, const int32_t __index)
{
  return __builtin_csky_vmulsisv16qi(__b, __c, __index, __a);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vmulsi_s16 (int16x8_t __a, int16x8_t __b, int16x8_t __c, const int32_t __index)
{
  return __builtin_csky_vmulsisv8hi(__b, __c, __index, __a);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vmulsi_s32 (int32x4_t __a, int32x4_t __b, int32x4_t __c, const int32_t __index)
{
  return __builtin_csky_vmulsisv4si(__b, __c, __index, __a);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vmulsi_u8 (uint8x16_t __a, uint8x16_t __b, uint8x16_t __c, const int32_t __index)
{
  return __builtin_csky_vmulsiuv16qi(__b, __c, __index, __a);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vmulsi_u16 (uint16x8_t __a, uint16x8_t __b, uint16x8_t __c, const int32_t __index)
{
  return __builtin_csky_vmulsiuv8hi(__b, __c, __index, __a);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vmulsi_u32 (uint32x4_t __a, uint32x4_t __b, uint32x4_t __c, const int32_t __index)
{
  return __builtin_csky_vmulsiuv4si(__b, __c, __index, __a);
}

/* vmuls.t.e */
__extension__ static __inline int16x8x2_t __attribute__ ((__always_inline__))
vmuls_s8_e (int16x8x2_t __a, int8x16_t __b, int8x16_t __c)
{
  union { int16x8x2_t __i; __builtin_csky_oi __o;} __rv;
  union { int16x8x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  __rv.__o =  __builtin_csky_vmulssev16qi(__au.__o, __b, __c);
  return __rv.__i;
}

__extension__ static __inline int32x4x2_t __attribute__ ((__always_inline__))
vmuls_s16_e (int32x4x2_t __a, int16x8_t __b, int16x8_t __c)
{
  union { int32x4x2_t __i; __builtin_csky_oi __o;} __rv;
  union { int32x4x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  __rv.__o =  __builtin_csky_vmulssev8hi(__au.__o, __b, __c);
  return __rv.__i;
}

__extension__ static __inline int64x2x2_t __attribute__ ((__always_inline__))
vmuls_s32_e (int64x2x2_t __a, int32x4_t __b, int32x4_t __c)
{
  union { int64x2x2_t __i; __builtin_csky_oi __o;} __rv;
  union { int64x2x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  __rv.__o =  __builtin_csky_vmulssev4si(__au.__o, __b, __c);
  return __rv.__i;
}

__extension__ static __inline uint16x8x2_t __attribute__ ((__always_inline__))
vmuls_u8_e (uint16x8x2_t __a, uint8x16_t __b, uint8x16_t __c)
{
  union { uint16x8x2_t __i; __builtin_csky_oi __o;} __rv;
  union { uint16x8x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  __rv.__o =  __builtin_csky_vmulsuev16qi(__au.__o, __b, __c);
  return __rv.__i;
}

__extension__ static __inline uint32x4x2_t __attribute__ ((__always_inline__))
vmuls_u16_e (uint32x4x2_t __a, uint16x8_t __b, uint16x8_t __c)
{
  union { uint32x4x2_t __i; __builtin_csky_oi __o;} __rv;
  union { uint32x4x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  __rv.__o =  __builtin_csky_vmulsuev8hi(__au.__o, __b, __c);
  return __rv.__i;
}

__extension__ static __inline uint64x2x2_t __attribute__ ((__always_inline__))
vmuls_u32_e (uint64x2x2_t __a, uint32x4_t __b, uint32x4_t __c)
{
  union { uint64x2x2_t __i; __builtin_csky_oi __o;} __rv;
  union { uint64x2x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  __rv.__o =  __builtin_csky_vmulsuev4si(__au.__o, __b, __c);
  return __rv.__i;
}

/* vmulsi.t.e */
__extension__ static __inline int16x8x2_t __attribute__ ((__always_inline__))
vmulsi_s8_e (int16x8x2_t __a, int8x16_t __b, int8x16_t __c, const int32_t __index)
{
  union { int16x8x2_t __i; __builtin_csky_oi __o;} __rv;
  union { int16x8x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  __rv.__o = __builtin_csky_vmulsiesv16qi(__b, __c, __index, __au.__o);
  return __rv.__i;
}

__extension__ static __inline int32x4x2_t __attribute__ ((__always_inline__))
vmulsi_s16_e (int32x4x2_t __a, int16x8_t __b, int16x8_t __c, const int32_t __index)
{
  union { int32x4x2_t __i; __builtin_csky_oi __o;} __rv;
  union { int32x4x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  __rv.__o = __builtin_csky_vmulsiesv8hi(__b, __c, __index, __au.__o);
  return __rv.__i;
}

__extension__ static __inline int64x2x2_t __attribute__ ((__always_inline__))
vmulsi_s32_e (int64x2x2_t __a, int32x4_t __b, int32x4_t __c, const int32_t __index)
{
  union { int64x2x2_t __i; __builtin_csky_oi __o;} __rv;
  union { int64x2x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  __rv.__o = __builtin_csky_vmulsiesv4si(__b, __c, __index, __au.__o);
  return __rv.__i;
}

__extension__ static __inline uint16x8x2_t __attribute__ ((__always_inline__))
vmulsi_u8_e (uint16x8x2_t __a, uint8x16_t __b, uint8x16_t __c, const int32_t __index)
{
  union { uint16x8x2_t __i; __builtin_csky_oi __o;} __rv;
  union { uint16x8x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  __rv.__o = __builtin_csky_vmulsieuv16qi(__b, __c, __index, __au.__o);
  return __rv.__i;
}

__extension__ static __inline uint32x4x2_t __attribute__ ((__always_inline__))
vmulsi_u16_e (uint32x4x2_t __a, uint16x8_t __b, uint16x8_t __c, const int32_t __index)
{
  union { uint32x4x2_t __i; __builtin_csky_oi __o;} __rv;
  union { uint32x4x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  __rv.__o = __builtin_csky_vmulsieuv8hi(__b, __c, __index, __au.__o);
  return __rv.__i;
}

__extension__ static __inline uint64x2x2_t __attribute__ ((__always_inline__))
vmulsi_u32_e (uint64x2x2_t __a, uint32x4_t __b, uint32x4_t __c, const int32_t __index)
{
  union { uint64x2x2_t __i; __builtin_csky_oi __o;} __rv;
  union { uint64x2x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  __rv.__o = __builtin_csky_vmulsieuv4si(__b, __c, __index, __au.__o);
  return __rv.__i;
}

/* vmulaca.t */
__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vmulaca_s8 (int8x16_t __a, int8x16_t __b)
{
  return __builtin_csky_vmulacasv16qi(__a, __b);
}

__extension__ static __inline int64x2_t __attribute__ ((__always_inline__))
vmulaca_s16 (int16x8_t __a, int16x8_t __b)
{
  return __builtin_csky_vmulacasv8hi(__a, __b);
}


__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vmulaca_u8 (uint8x16_t __a, uint8x16_t __b)
{
  return __builtin_csky_vmulacauv16qi(__a, __b);
}

__extension__ static __inline uint64x2_t __attribute__ ((__always_inline__))
vmulaca_u16 (uint16x8_t __a, uint16x8_t __b)
{
  return __builtin_csky_vmulacauv8hi(__a, __b);
}

/* vmulacai.t */
__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vmulacai_s8 (int8x16_t __a, int8x16_t __b, const int32_t __index)
{
  return __builtin_csky_vmulacaisv16qi(__a, __b, __index);
}

__extension__ static __inline int64x2_t __attribute__ ((__always_inline__))
vmulacai_s16 (int16x8_t __a, int16x8_t __b, const int32_t __index)
{
  return __builtin_csky_vmulacaisv8hi(__a, __b, __index);
}


__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vmulacai_u8 (uint8x16_t __a, uint8x16_t __b, const int32_t __index)
{
  return __builtin_csky_vmulacaiuv16qi(__a, __b, __index);
}

__extension__ static __inline uint64x2_t __attribute__ ((__always_inline__))
vmulacai_u16 (uint16x8_t __a, uint16x8_t __b, const int32_t __index)
{
  return __builtin_csky_vmulacaiuv8hi(__a, __b, __index);
}

/* vmulacaa.t */
__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vmulacaa_s8 (int32x4_t __a, int8x16_t __b, int8x16_t __c)
{
  return __builtin_csky_vmulacaasv16qi(__a, __b, __c);
}

__extension__ static __inline int64x2_t __attribute__ ((__always_inline__))
vmulacaa_s16 (int64x2_t __a, int16x8_t __b, int16x8_t __c)
{
  return __builtin_csky_vmulacaasv8hi(__a, __b, __c);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vmulacaa_u8 (uint32x4_t __a, uint8x16_t __b, uint8x16_t __c)
{
  return __builtin_csky_vmulacaauv16qi(__a, __b, __c);
}

__extension__ static __inline uint64x2_t __attribute__ ((__always_inline__))
vmulacaa_u16 (uint64x2_t __a, uint16x8_t __b, uint16x8_t __c)
{
  return __builtin_csky_vmulacaauv8hi(__a, __b, __c);
}

/* vmulacaai.t */
__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vmulacaai_s8 (int32x4_t __a, int8x16_t __b, int8x16_t __c, const int32_t __index)
{
  return __builtin_csky_vmulacaaisv16qi(__b, __c, __index, __a);
}

__extension__ static __inline int64x2_t __attribute__ ((__always_inline__))
vmulacaai_s16 (int64x2_t __a, int16x8_t __b, int16x8_t __c, const int32_t __index)
{
  return __builtin_csky_vmulacaaisv8hi(__b, __c, __index, __a);
}


__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vmulacaai_u8 (uint32x4_t __a, uint8x16_t __b, uint8x16_t __c, const int32_t __index)
{
  return __builtin_csky_vmulacaaiuv16qi(__b, __c, __index, __a);
}

__extension__ static __inline uint64x2_t __attribute__ ((__always_inline__))
vmulacaai_u16 (uint64x2_t __a, uint16x8_t __b, uint16x8_t __c, const int32_t __index)
{
  return __builtin_csky_vmulacaaiuv8hi(__b, __c, __index, __a);
}

/* vrmul.t.se */
__extension__ static __inline int16x8x2_t __attribute__ ((__always_inline__))
vrmul_s8_se (int8x16_t __a, int8x16_t __b)
{
  union { int16x8x2_t __i; __builtin_csky_oi __o;} __rv;
  __rv.__o = __builtin_csky_vrmulssev16qi(__a, __b);
  return __rv.__i;
}

__extension__ static __inline int32x4x2_t __attribute__ ((__always_inline__))
vrmul_s16_se (int16x8_t __a, int16x8_t __b)
{
  union { int32x4x2_t __i; __builtin_csky_oi __o;} __rv;
  __rv.__o = __builtin_csky_vrmulssev8hi(__a, __b);
  return __rv.__i;
}

__extension__ static __inline int64x2x2_t __attribute__ ((__always_inline__))
vrmul_s32_se (int32x4_t __a, int32x4_t __b)
{
  union { int64x2x2_t __i; __builtin_csky_oi __o;} __rv;
  __rv.__o = __builtin_csky_vrmulssev4si(__a, __b);
  return __rv.__i;
}

/* vrmuli.t.se */
__extension__ static __inline int16x8x2_t __attribute__ ((__always_inline__))
vrmuli_s8_se (int8x16_t __a, int8x16_t __b, const int32_t __index)
{
  union { int16x8x2_t __i; __builtin_csky_oi __o;} __rv;
  __rv.__o = __builtin_csky_vrmulissev16qi(__a, __b, __index);
  return __rv.__i;
}

__extension__ static __inline int32x4x2_t __attribute__ ((__always_inline__))
vrmuli_s16_se (int16x8_t __a, int16x8_t __b, const int32_t __index)
{
  union { int32x4x2_t __i; __builtin_csky_oi __o;} __rv;
  __rv.__o = __builtin_csky_vrmulissev8hi(__a, __b, __index);
  return __rv.__i;
}

__extension__ static __inline int64x2x2_t __attribute__ ((__always_inline__))
vrmuli_s32_se (int32x4_t __a, int32x4_t __b, const int32_t __index)
{
  union { int64x2x2_t __i; __builtin_csky_oi __o;} __rv;
  __rv.__o = __builtin_csky_vrmulissev4si(__a, __b, __index);
  return __rv.__i;
}

/* vrmulh.t.s */
__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vrmulh_s8_s (int8x16_t __a, int8x16_t __b)
{
  return __builtin_csky_vrmulhssv16qi(__a, __b);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vrmulh_s16_s (int16x8_t __a, int16x8_t __b)
{
  return __builtin_csky_vrmulhssv8hi(__a, __b);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vrmulh_s32_s (int32x4_t __a, int32x4_t __b)
{
  return __builtin_csky_vrmulhssv4si(__a, __b);
}

/* vrmulhi.t.s */
__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vrmulhi_s8_s (int8x16_t __a, int8x16_t __b, const int32_t __index)
{
  return __builtin_csky_vrmulhissv16qi(__a, __b, __index);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vrmulhi_s16_s (int16x8_t __a, int16x8_t __b, const int32_t __index)
{
  return __builtin_csky_vrmulhissv8hi(__a, __b, __index);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vrmulhi_s32_s (int32x4_t __a, int32x4_t __b, const int32_t __index)
{
  return __builtin_csky_vrmulhissv4si(__a, __b, __index);
}

/* vrmulh.t.rs */
__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vrmulh_s8_rs(int8x16_t __a, int8x16_t __b)
{
  return __builtin_csky_vrmulhsrsv16qi(__a, __b);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vrmulh_s16_rs(int16x8_t __a, int16x8_t __b)
{
  return __builtin_csky_vrmulhsrsv8hi(__a, __b);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vrmulh_s32_rs(int32x4_t __a, int32x4_t __b)
{
  return __builtin_csky_vrmulhsrsv4si(__a, __b);
}

/* vrmulhi.t.rs */
__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vrmulhi_s8_rs(int8x16_t __a, int8x16_t __b, const int32_t __index)
{
  return __builtin_csky_vrmulhisrsv16qi(__a, __b, __index);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vrmulhi_s16_rs(int16x8_t __a, int16x8_t __b, const int32_t __index)
{
  return __builtin_csky_vrmulhisrsv8hi(__a, __b, __index);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vrmulhi_s32_rs(int32x4_t __a, int32x4_t __b, const int32_t __index)
{
  return __builtin_csky_vrmulhisrsv4si(__a, __b, __index);
}

/* vrmulha.t.rs */
__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vrmulha_s8_rs(int8x16_t __a, int8x16_t __b, int8x16_t __c)
{
  return __builtin_csky_vrmulhasrsv16qi(__a, __b, __c);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vrmulha_s16_rs(int16x8_t __a, int16x8_t __b, int16x8_t __c)
{
  return __builtin_csky_vrmulhasrsv8hi(__a, __b, __c);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vrmulha_s32_rs(int32x4_t __a, int32x4_t __b, int32x4_t __c)
{
  return __builtin_csky_vrmulhasrsv4si(__a, __b, __c);
}

/* vrmulhai.t.rs */
__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vrmulhai_s8_rs(int8x16_t __a, int8x16_t __b, int8x16_t __c, const int32_t __index)
{
  return __builtin_csky_vrmulhaisrsv16qi(__a, __b, __index, __c);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vrmulhai_s16_rs(int16x8_t __a, int16x8_t __b, int16x8_t __c, const int32_t __index)
{
  return __builtin_csky_vrmulhaisrsv8hi(__a, __b, __index, __c);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vrmulhai_s32_rs(int32x4_t __a, int32x4_t __b, int32x4_t __c, const int32_t __index)
{
  return __builtin_csky_vrmulhaisrsv4si(__a, __b, __index, __c);
}

/* vrmulhs.t.rs */
__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vrmulhs_s8_rs(int8x16_t __a, int8x16_t __b, int8x16_t __c)
{
  return __builtin_csky_vrmulhssrsv16qi(__a, __b, __c);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vrmulhs_s16_rs(int16x8_t __a, int16x8_t __b, int16x8_t __c)
{
  return __builtin_csky_vrmulhssrsv8hi(__a, __b, __c);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vrmulhs_s32_rs(int32x4_t __a, int32x4_t __b, int32x4_t __c)
{
  return __builtin_csky_vrmulhssrsv4si(__a, __b, __c);
}

/* vrmulhsi.t.rs */
__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vrmulhsi_s8_rs(int8x16_t __a, int8x16_t __b, int8x16_t __c, const int32_t __index)
{
  return __builtin_csky_vrmulhsisrsv16qi(__a, __b, __index, __c);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vrmulhsi_s16_rs(int16x8_t __a, int16x8_t __b, int16x8_t __c, const int32_t __index)
{
  return __builtin_csky_vrmulhsisrsv8hi(__a, __b, __index, __c);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vrmulhsi_s32_rs(int32x4_t __a, int32x4_t __b, int32x4_t __c, const int32_t __index)
{
  return __builtin_csky_vrmulhsisrsv4si(__a, __b, __index, __c);
}

/* vrmulshr.t.e */
__extension__ static __inline int16x8x2_t __attribute__ ((__always_inline__))
vrmulshr_s8_e(int8x16_t __a, int8x16_t __b, const int32_t __imm4)
{
  union { int16x8x2_t __i; __builtin_csky_oi __o;} __rv;
  __rv.__o = __builtin_csky_vrmulshrsev16qi(__a, __b, __imm4);
  return __rv.__i;
}

__extension__ static __inline int32x4x2_t __attribute__ ((__always_inline__))
vrmulshr_s16_e(int16x8_t __a, int16x8_t __b, const int32_t __imm4)
{
  union { int32x4x2_t __i; __builtin_csky_oi __o;} __rv;
  __rv.__o = __builtin_csky_vrmulshrsev8hi(__a, __b, __imm4);
  return __rv.__i;
}

__extension__ static __inline int64x2x2_t __attribute__ ((__always_inline__))
vrmulshr_s32_e(int32x4_t __a, int32x4_t __b, const int32_t __imm4)
{
  union { int64x2x2_t __i; __builtin_csky_oi __o;} __rv;
  __rv.__o = __builtin_csky_vrmulshrsev4si(__a, __b, __imm4);
  return __rv.__i;
}

/* vrmulshri.t.e */
__extension__ static __inline int16x8x2_t __attribute__ ((__always_inline__))
vrmulshri_s8_e(int8x16_t __b, const int32_t __imm4, const int32_t __index)
{
  union { int16x8x2_t __i; __builtin_csky_oi __o;} __rv;
  __rv.__o = __builtin_csky_vrmulshrisev16qi(__b, __index, __imm4);
  return __rv.__i;
}

__extension__ static __inline int32x4x2_t __attribute__ ((__always_inline__))
vrmulshri_s16_e(int16x8_t __b, const int32_t __imm4, const int32_t __index)
{
  union { int32x4x2_t __i; __builtin_csky_oi __o;} __rv;
  __rv.__o = __builtin_csky_vrmulshrisev8hi(__b, __index, __imm4);
  return __rv.__i;
}

__extension__ static __inline int64x2x2_t __attribute__ ((__always_inline__))
vrmulshri_s32_e(int32x4_t __b, const int32_t __imm4, const int32_t __index)
{
  union { int64x2x2_t __i; __builtin_csky_oi __o;} __rv;
  __rv.__o = __builtin_csky_vrmulshrisev4si(__b, __index, __imm4);
  return __rv.__i;
}
/* vrmulsa.t.e */
__extension__ static __inline int16x8x2_t __attribute__ ((__always_inline__))
vrmulsa_s8_e(int16x8x2_t __a, int8x16_t __b, int8x16_t __c, const int32_t __imm4)
{
  union { int16x8x2_t __i; __builtin_csky_oi __o;} __rv;
  union { int16x8x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  __rv.__o = __builtin_csky_vrmulsasev16qi(__b, __c, __imm4, __au.__o);
  return __rv.__i;
}

__extension__ static __inline int32x4x2_t __attribute__ ((__always_inline__))
vrmulsa_s16_e(int32x4x2_t __a, int16x8_t __b, int16x8_t __c, const int32_t __imm4)
{
  union { int32x4x2_t __i; __builtin_csky_oi __o;} __rv;
  union { int32x4x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  __rv.__o = __builtin_csky_vrmulsasev8hi(__b, __c, __imm4, __au.__o);
  return __rv.__i;
}

__extension__ static __inline int64x2x2_t __attribute__ ((__always_inline__))
vrmulsa_s32_e(int64x2x2_t __a, int32x4_t __b, int32x4_t __c, const int32_t __imm4)
{
  union { int64x2x2_t __i; __builtin_csky_oi __o;} __rv;
  union { int64x2x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  __rv.__o = __builtin_csky_vrmulsasev4si(__b, __c, __imm4, __au.__o);
  return __rv.__i;
}

/* vrmulsai.t.e */
__extension__ static __inline int16x8x2_t __attribute__ ((__always_inline__))
vrmulsai_s8_e(int16x8x2_t __a, int8x16_t __b, const int32_t __imm4, const int32_t __index)
{
  union { int16x8x2_t __i; __builtin_csky_oi __o;} __rv;
  union { int16x8x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  __rv.__o =  __builtin_csky_vrmulsaisev16qi(__au.__o, __b, __index, __imm4);
  return __rv.__i;
}

__extension__ static __inline int32x4x2_t __attribute__ ((__always_inline__))
vrmulsai_s16_e(int32x4x2_t __a, int16x8_t __b, const int32_t __imm4, const int32_t __index)
{
  union { int32x4x2_t __i; __builtin_csky_oi __o;} __rv;
  union { int32x4x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  __rv.__o = __builtin_csky_vrmulsaisev8hi(__au.__o, __b, __index, __imm4);
  return __rv.__i;
}

__extension__ static __inline int64x2x2_t __attribute__ ((__always_inline__))
vrmulsai_s32_e(int64x2x2_t __a, int32x4_t __b, const int32_t __imm4, const int32_t __index)
{
  union { int64x2x2_t __i; __builtin_csky_oi __o;} __rv;
  union { int64x2x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  __rv.__o = __builtin_csky_vrmulsaisev4si(__au.__o, __b, __index, __imm4);
  return __rv.__i;
}

/* vrmulss.t.e */
__extension__ static __inline int16x8x2_t __attribute__ ((__always_inline__))
vrmulss_s8_e(int16x8x2_t __a, int8x16_t __b, int8x16_t __c, const int32_t __imm4)
{
  union { int16x8x2_t __i; __builtin_csky_oi __o;} __rv;
  union { int16x8x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  __rv.__o = __builtin_csky_vrmulsssev16qi(__b, __c, __imm4, __au.__o);
  return __rv.__i;
}

__extension__ static __inline int32x4x2_t __attribute__ ((__always_inline__))
vrmulss_s16_e(int32x4x2_t __a, int16x8_t __b, int16x8_t __c, const int32_t __imm4)
{
  union { int32x4x2_t __i; __builtin_csky_oi __o;} __rv;
  union { int32x4x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  __rv.__o = __builtin_csky_vrmulsssev8hi(__b, __c, __imm4, __au.__o);
  return __rv.__i;
}

__extension__ static __inline int64x2x2_t __attribute__ ((__always_inline__))
vrmulss_s32_e(int64x2x2_t __a, int32x4_t __b, int32x4_t __c, const int32_t __imm4)
{
  union { int64x2x2_t __i; __builtin_csky_oi __o;} __rv;
  union { int64x2x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  __rv.__o = __builtin_csky_vrmulsssev4si(__b, __c, __imm4, __au.__o);
  return __rv.__i;
}

/* vrmulssi.t.e */
__extension__ static __inline int16x8x2_t __attribute__ ((__always_inline__))
vrmulssi_s8_e(int16x8x2_t __a, int8x16_t __b, const int32_t __imm4, const int32_t __index)
{
  union { int16x8x2_t __i; __builtin_csky_oi __o;} __rv;
  union { int16x8x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  __rv.__o =  __builtin_csky_vrmulssisev16qi(__au.__o, __b, __index, __imm4);
  return __rv.__i;
}

__extension__ static __inline int32x4x2_t __attribute__ ((__always_inline__))
vrmulssi_s16_e(int32x4x2_t __a, int16x8_t __b, const int32_t __imm4, const int32_t __index)
{
  union { int32x4x2_t __i; __builtin_csky_oi __o;} __rv;
  union { int32x4x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  __rv.__o = __builtin_csky_vrmulssisev8hi(__au.__o, __b, __index, __imm4);
  return __rv.__i;
}

__extension__ static __inline int64x2x2_t __attribute__ ((__always_inline__))
vrmulssi_s32_e(int64x2x2_t __a, int32x4_t __b, const int32_t __imm4, const int32_t __index)
{
  union { int64x2x2_t __i; __builtin_csky_oi __o;} __rv;
  union { int64x2x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  __rv.__o = __builtin_csky_vrmulssisev4si(__au.__o, __b, __index, __imm4);
  return __rv.__i;
}

/* vrmulxaa.t.rs */
__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vrmulxaa_s8_rs(int8x16_t __c, int8x16_t __a, int8x16_t __b)
{
  return __builtin_csky_vrmulxaasrsv16qi(__c, __a, __b);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vrmulxaa_s16_rs(int16x8_t __c, int16x8_t __a, int16x8_t __b)
{
  return __builtin_csky_vrmulxaasrsv8hi(__c, __a, __b);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vrmulxaa_s32_rs(int32x4_t __c, int32x4_t __a, int32x4_t __b)
{
  return __builtin_csky_vrmulxaasrsv4si(__c, __a, __b);
}

/* vrmulxaai.t.rs */
__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vrmulxaai_s8_rs(int8x16_t __a, int8x16_t __b, int8x16_t __c, const int32_t __index)
{
  return __builtin_csky_vrmulxaaisrsv16qi(__b, __c, __index, __a);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vrmulxaai_s16_rs(int16x8_t __a, int16x8_t __b, int16x8_t __c, const int32_t __index)
{
  return __builtin_csky_vrmulxaaisrsv8hi(__b, __c, __index, __a);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vrmulxaai_s32_rs(int32x4_t __a, int32x4_t __b, int32x4_t __c, const int32_t __index)
{
  return __builtin_csky_vrmulxaaisrsv4si(__b, __c, __index, __a);
}

/* vrmulxas.t.rs */
__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vrmulxas_s8_rs(int8x16_t __a, int8x16_t __b, int8x16_t __c)
{
  return __builtin_csky_vrmulxassrsv16qi(__a, __b, __c);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vrmulxas_s16_rs(int16x8_t __c, int16x8_t __a, int16x8_t __b)
{
  return __builtin_csky_vrmulxassrsv8hi(__a, __b, __c);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vrmulxas_s32_rs(int32x4_t __a, int32x4_t __b, int32x4_t __c)
{
  return __builtin_csky_vrmulxassrsv4si(__a, __b, __c);
}

/* vrmulxasi.t.rs */
__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vrmulxasi_s8_rs(int8x16_t __a, int8x16_t __b, int8x16_t __c, const int32_t __index)
{
  return __builtin_csky_vrmulxasisrsv16qi(__b, __c, __index, __a);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vrmulxasi_s16_rs(int16x8_t __a, int16x8_t __b, int16x8_t __c, const int32_t __index)
{
  return __builtin_csky_vrmulxasisrsv8hi(__b, __c, __index, __a);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vrmulxasi_s32_rs(int32x4_t __a, int32x4_t __b, int32x4_t __c, const int32_t __index)
{
  return __builtin_csky_vrmulxasisrsv4si(__b, __c, __index, __a);
}

/* vrmulxss.t.rs */
__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vrmulxss_s8_rs(int8x16_t __a, int8x16_t __b, int8x16_t __c)
{
  return __builtin_csky_vrmulxsssrsv16qi(__a, __b, __c);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vrmulxss_s16_rs(int16x8_t __a, int16x8_t __b, int16x8_t __c)
{
  return __builtin_csky_vrmulxsssrsv8hi(__a, __b, __c);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vrmulxss_s32_rs(int32x4_t __a, int32x4_t __b, int32x4_t __c)
{
  return __builtin_csky_vrmulxsssrsv4si(__a, __b, __c);
}

/* vrmulxssi.t.rs */
__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vrmulxssi_s8_rs(int8x16_t __a, int8x16_t __b, int8x16_t __c, const int32_t __index)
{
  return __builtin_csky_vrmulxssisrsv16qi(__b, __c, __index, __a);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vrmulxssi_s16_rs(int16x8_t __a, int16x8_t __b, int16x8_t __c, const int32_t __index)
{
  return __builtin_csky_vrmulxssisrsv8hi(__b, __c, __index, __a);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vrmulxssi_s32_rs(int32x4_t __a, int32x4_t __b, int32x4_t __c, const int32_t __index)
{
  return __builtin_csky_vrmulxssisrsv4si(__b, __c, __index, __a);
}

/* vrmulxsa.t.rs */
__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vrmulxsa_s8_rs(int8x16_t __c, int8x16_t __a, int8x16_t __b)
{
  return __builtin_csky_vrmulxsasrsv16qi(__c, __a, __b);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vrmulxsa_s16_rs(int16x8_t __c, int16x8_t __a, int16x8_t __b)
{
  return __builtin_csky_vrmulxsasrsv8hi(__c, __a, __b);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vrmulxsa_s32_rs(int32x4_t __c, int32x4_t __a, int32x4_t __b)
{
  return __builtin_csky_vrmulxsasrsv4si(__c, __a, __b);
}

/* vrmulxsai.t.rs */
__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vrmulxsai_s8_rs(int8x16_t __a, int8x16_t __b, int8x16_t __c, const int32_t __index)
{
  return __builtin_csky_vrmulxsaisrsv16qi(__b, __c, __index, __a);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vrmulxsai_s16_rs(int16x8_t __a, int16x8_t __b, int16x8_t __c, const int32_t __index)
{
  return __builtin_csky_vrmulxsaisrsv8hi(__b, __c, __index, __a);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vrmulxsai_s32_rs(int32x4_t __a, int32x4_t __b, int32x4_t __c, const int32_t __index)
{
  return __builtin_csky_vrmulxsaisrsv4si(__b, __c, __index, __a);
}

/* vrcmul.t.rs */
__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vrcmul_s8_rs(int8x16_t __a, int8x16_t __b)
{
  return __builtin_csky_vrcmulsrsv16qi(__a, __b);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vrcmul_s16_rs(int16x8_t __a, int16x8_t __b)
{
  return __builtin_csky_vrcmulsrsv8hi(__a, __b);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vrcmul_s32_rs(int32x4_t __a, int32x4_t __b)
{
  return __builtin_csky_vrcmulsrsv4si(__a, __b);
}

/* vrcmula.t.e */
__extension__ static __inline int16x8x2_t __attribute__ ((__always_inline__))
vrcmula_s8_e(int16x8x2_t __a, int8x16_t __b, int8x16_t __c, const int32_t __index)
{
  union { int16x8x2_t __i; __builtin_csky_oi __o;} __rv;
  union { int16x8x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  __rv.__o = __builtin_csky_vrcmulasev16qi(__b, __c, __index, __au.__o);
  return __rv.__i;
}

__extension__ static __inline int32x4x2_t __attribute__ ((__always_inline__))
vrcmula_s16_e(int32x4x2_t __a, int16x8_t __b, int16x8_t __c, const int32_t __index)
{
  union { int32x4x2_t __i; __builtin_csky_oi __o;} __rv;
  union { int32x4x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  __rv.__o = __builtin_csky_vrcmulasev8hi(__b, __c, __index, __au.__o);
  return __rv.__i;
}

__extension__ static __inline int64x2x2_t __attribute__ ((__always_inline__))
vrcmula_s32_e(int64x2x2_t __a, int32x4_t __b, int32x4_t __c, const int32_t __index)
{
  union { int64x2x2_t __i; __builtin_csky_oi __o;} __rv;
  union { int64x2x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  __rv.__o = __builtin_csky_vrcmulasev4si(__b, __c, __index, __au.__o);
  return __rv.__i;
}


/* vrcmulc.t.rs */
__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vrcmulc_s8_rs(int8x16_t __a, int8x16_t __b)
{
  return __builtin_csky_vrcmulcsrsv16qi(__a, __b);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vrcmulc_s16_rs(int16x8_t __a, int16x8_t __b)
{
  return __builtin_csky_vrcmulcsrsv8hi(__a, __b);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vrcmulc_s32_rs(int32x4_t __a, int32x4_t __b)
{
  return __builtin_csky_vrcmulcsrsv4si(__a, __b);
}

/* vrcmulca.t.e */
__extension__ static __inline int16x8x2_t __attribute__ ((__always_inline__))
vrcmulca_s8_e(int16x8x2_t __a, int8x16_t __b, int8x16_t __c, const int32_t __index)
{
  union { int16x8x2_t __i; __builtin_csky_oi __o;} __rv;
  union { int16x8x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  __rv.__o = __builtin_csky_vrcmulcasev16qi(__b, __c, __index, __au.__o);
  return __rv.__i;
}

__extension__ static __inline int32x4x2_t __attribute__ ((__always_inline__))
vrcmulca_s16_e(int32x4x2_t __a, int16x8_t __b, int16x8_t __c, const int32_t __index)
{
  union { int32x4x2_t __i; __builtin_csky_oi __o;} __rv;
  union { int32x4x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  __rv.__o = __builtin_csky_vrcmulcasev8hi(__b, __c, __index, __au.__o);
  return __rv.__i;
}

__extension__ static __inline int64x2x2_t __attribute__ ((__always_inline__))
vrcmulca_s32_e(int64x2x2_t __a, int32x4_t __b, int32x4_t __c, const int32_t __index)
{
  union { int64x2x2_t __i; __builtin_csky_oi __o;} __rv;
  union { int64x2x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  __rv.__o = __builtin_csky_vrcmulcasev4si(__b, __c, __index, __au.__o);
  return __rv.__i;
}


/* vrcmuln.t.rs */
__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vrcmuln_s8_rs(int8x16_t __a, int8x16_t __b)
{
  return __builtin_csky_vrcmulnsrsv16qi(__a, __b);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vrcmuln_s16_rs(int16x8_t __a, int16x8_t __b)
{
  return __builtin_csky_vrcmulnsrsv8hi(__a, __b);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vrcmuln_s32_rs(int32x4_t __a, int32x4_t __b)
{
  return __builtin_csky_vrcmulnsrsv4si(__a, __b);
}

/* vrcmulna.t.e */
__extension__ static __inline int16x8x2_t __attribute__ ((__always_inline__))
vrcmulna_s8_e(int16x8x2_t __a, int8x16_t __b, int8x16_t __c, const int32_t __index)
{
  union { int16x8x2_t __i; __builtin_csky_oi __o;} __rv;
  union { int16x8x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  __rv.__o = __builtin_csky_vrcmulnasev16qi(__b, __c, __index, __au.__o);
  return __rv.__i;
}

__extension__ static __inline int32x4x2_t __attribute__ ((__always_inline__))
vrcmulna_s16_e(int32x4x2_t __a, int16x8_t __b, int16x8_t __c, const int32_t __index)
{
  union { int32x4x2_t __i; __builtin_csky_oi __o;} __rv;
  union { int32x4x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  __rv.__o = __builtin_csky_vrcmulnasev8hi(__b, __c, __index, __au.__o);
  return __rv.__i;
}

__extension__ static __inline int64x2x2_t __attribute__ ((__always_inline__))
vrcmulna_s32_e(int64x2x2_t __a, int32x4_t __b, int32x4_t __c, const int32_t __index)
{
  union { int64x2x2_t __i; __builtin_csky_oi __o;} __rv;
  union { int64x2x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  __rv.__o = __builtin_csky_vrcmulnasev4si(__b, __c, __index, __au.__o);
  return __rv.__i;
}


/* vrcmulcn.t.rs */
__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vrcmulcn_s8_rs(int8x16_t __a, int8x16_t __b)
{
  return __builtin_csky_vrcmulcnsrsv16qi(__a, __b);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vrcmulcn_s16_rs(int16x8_t __a, int16x8_t __b)
{
  return __builtin_csky_vrcmulcnsrsv8hi(__a, __b);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vrcmulcn_s32_rs(int32x4_t __a, int32x4_t __b)
{
  return __builtin_csky_vrcmulcnsrsv4si(__a, __b);
}

/* vrcmulcna.t.e */
__extension__ static __inline int16x8x2_t __attribute__ ((__always_inline__))
vrcmulcna_s8_e(int16x8x2_t __a, int8x16_t __b, int8x16_t __c, const int32_t __index)
{
  union { int16x8x2_t __i; __builtin_csky_oi __o;} __rv;
  union { int16x8x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  __rv.__o = __builtin_csky_vrcmulcnasev16qi(__b, __c, __index, __au.__o);
  return __rv.__i;
}

__extension__ static __inline int32x4x2_t __attribute__ ((__always_inline__))
vrcmulcna_s16_e(int32x4x2_t __a, int16x8_t __b, int16x8_t __c, const int32_t __index)
{
  union { int32x4x2_t __i; __builtin_csky_oi __o;} __rv;
  union { int32x4x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  __rv.__o = __builtin_csky_vrcmulcnasev8hi(__b, __c, __index, __au.__o);
  return __rv.__i;
}

__extension__ static __inline int64x2x2_t __attribute__ ((__always_inline__))
vrcmulcna_s32_e(int64x2x2_t __a, int32x4_t __b, int32x4_t __c, const int32_t __index)
{
  union { int64x2x2_t __i; __builtin_csky_oi __o;} __rv;
  union { int64x2x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  __rv.__o = __builtin_csky_vrcmulcnasev4si(__b, __c, __index, __au.__o);
  return __rv.__i;
}

/* vrecpe.t */

__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vrecpe_s8(int8x16_t __a)
{
  return __builtin_csky_vrecpesv16qi(__a);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vrecpe_s16(int16x8_t __a)
{
  return __builtin_csky_vrecpesv8hi(__a);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vrecpe_s32(int32x4_t __a)
{
  return __builtin_csky_vrecpesv4si(__a);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vrecpe_u8(uint8x16_t __a)
{
  return __builtin_csky_vrecpeuv16qi(__a);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vrecpe_u16(uint16x8_t __a)
{
  return __builtin_csky_vrecpeuv8hi(__a);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vrecpe_u32(uint32x4_t __a)
{
  return __builtin_csky_vrecpeuv4si(__a);
}

/* vrsqrte.t */

__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vrsqrte_s8(int8x16_t __a)
{
  return __builtin_csky_vrsqrtesv16qi(__a);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vrsqrte_s16(int16x8_t __a)
{
  return __builtin_csky_vrsqrtesv8hi(__a);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vrsqrte_s32(int32x4_t __a)
{
  return __builtin_csky_vrsqrtesv4si(__a);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vrsqrte_u8(uint8x16_t __a)
{
  return __builtin_csky_vrsqrteuv16qi(__a);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vrsqrte_u16(uint16x8_t __a)
{
  return __builtin_csky_vrsqrteuv8hi(__a);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vrsqrte_u32(uint32x4_t __a)
{
  return __builtin_csky_vrsqrteuv4si(__a);
}

/* vexpe.t */
__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vexpe_s8(int8x16_t __a)
{
  return __builtin_csky_vexpesv16qi(__a);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vexpe_s16(int16x8_t __a)
{
  return __builtin_csky_vexpesv8hi(__a);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vexpe_s32(int32x4_t __a)
{
  return __builtin_csky_vexpesv4si(__a);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vexpe_u8(uint8x16_t __a)
{
  return __builtin_csky_vexpeuv16qi(__a);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vexpe_u16(uint16x8_t __a)
{
  return __builtin_csky_vexpeuv8hi(__a);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vexpe_u32(uint32x4_t __a)
{
  return __builtin_csky_vexpeuv4si(__a);
}

/* vrecps.t */
__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vrecps_s8(int8x16_t __a, int8x16_t __b)
{
  return __builtin_csky_vrecpssv16qi(__a, __b);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vrecps_s16(int16x8_t __a, int16x8_t __b)
{
  return __builtin_csky_vrecpssv8hi(__a, __b);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vrecps_s32(int32x4_t __a, int32x4_t __b)
{
  return __builtin_csky_vrecpssv4si(__a, __b);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vrecps_u8(uint8x16_t __a, uint8x16_t __b)
{
  return __builtin_csky_vrecpsuv16qi(__a, __b);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vrecps_u16(uint16x8_t __a, uint16x8_t __b)
{
  return __builtin_csky_vrecpsuv8hi(__a, __b);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vrecps_u32(uint32x4_t __a, uint32x4_t __b)
{
  return __builtin_csky_vrecpsuv4si(__a, __b);
}

/* vrsqrts.t */
__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vrsqrts_s8(int8x16_t __a, int8x16_t __b)
{
  return __builtin_csky_vrsqrtssv16qi(__a, __b);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vrsqrts_s16(int16x8_t __a, int16x8_t __b)
{
  return __builtin_csky_vrsqrtssv8hi(__a, __b);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vrsqrts_s32(int32x4_t __a, int32x4_t __b)
{
  return __builtin_csky_vrsqrtssv4si(__a, __b);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vrsqrts_u8(uint8x16_t __a, uint8x16_t __b)
{
  return __builtin_csky_vrsqrtsuv16qi(__a, __b);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vrsqrts_u16(uint16x8_t __a, uint16x8_t __b)
{
  return __builtin_csky_vrsqrtsuv8hi(__a, __b);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vrsqrts_u32(uint32x4_t __a, uint32x4_t __b)
{
  return __builtin_csky_vrsqrtsuv4si(__a, __b);
}

/* vsht.t */
__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vsht_s8 (int8x16_t __a, int8x16_t __b)
{
  return __builtin_csky_vshtsv16qi(__a, __b);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vsht_s16 (int16x8_t __a, int16x8_t __b)
{
  return __builtin_csky_vshtsv8hi(__a, __b);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vsht_s32 (int32x4_t __a, int32x4_t __b)
{
  return __builtin_csky_vshtsv4si(__a, __b);
}

__extension__ static __inline int64x2_t __attribute__ ((__always_inline__))
vsht_s64 (int64x2_t __a, int64x2_t __b)
{
  return __builtin_csky_vshtsv2di(__a, __b);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vsht_u8 (uint8x16_t __a, int8x16_t __b)
{
  return __builtin_csky_vshtuv16qi(__a, __b);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vsht_u16 (uint16x8_t __a, int16x8_t __b)
{
  return __builtin_csky_vshtuv8hi(__a, __b);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vsht_u32 (uint32x4_t __a, int32x4_t __b)
{
  return __builtin_csky_vshtuv4si(__a, __b);
}

__extension__ static __inline uint64x2_t __attribute__ ((__always_inline__))
vsht_u64 (uint64x2_t __a, int64x2_t __b)
{
  return __builtin_csky_vshtuv2di(__a, __b);
}

/* vsht.t.s */
__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vsht_s8_s (int8x16_t __a, int8x16_t __b)
{
  return __builtin_csky_vshtssv16qi(__a, __b);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vsht_s16_s (int16x8_t __a, int16x8_t __b)
{
  return __builtin_csky_vshtssv8hi(__a, __b);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vsht_s32_s (int32x4_t __a, int32x4_t __b)
{
  return __builtin_csky_vshtssv4si(__a, __b);
}

__extension__ static __inline int64x2_t __attribute__ ((__always_inline__))
vsht_s64_s (int64x2_t __a, int64x2_t __b)
{
  return __builtin_csky_vshtssv2di(__a, __b);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vsht_u8_s (uint8x16_t __a, int8x16_t __b)
{
  return __builtin_csky_vshtusv16qi(__a, __b);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vsht_u16_s (uint16x8_t __a, int16x8_t __b)
{
  return __builtin_csky_vshtusv8hi(__a, __b);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vsht_u32_s (uint32x4_t __a, int32x4_t __b)
{
  return __builtin_csky_vshtusv4si(__a, __b);
}

__extension__ static __inline uint64x2_t __attribute__ ((__always_inline__))
vsht_u64_s (uint64x2_t __a, int64x2_t __b)
{
  return __builtin_csky_vshtusv2di(__a, __b);
}

/* vsht.t.r */
__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vsht_s8_r (int8x16_t __a, int8x16_t __b)
{
  return __builtin_csky_vshtsrv16qi(__a, __b);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vsht_s16_r (int16x8_t __a, int16x8_t __b)
{
  return __builtin_csky_vshtsrv8hi(__a, __b);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vsht_s32_r (int32x4_t __a, int32x4_t __b)
{
  return __builtin_csky_vshtsrv4si(__a, __b);
}

__extension__ static __inline int64x2_t __attribute__ ((__always_inline__))
vsht_s64_r (int64x2_t __a, int64x2_t __b)
{
  return __builtin_csky_vshtsrv2di(__a, __b);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vsht_u8_r (uint8x16_t __a, int8x16_t __b)
{
  return __builtin_csky_vshturv16qi(__a, __b);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vsht_u16_r (uint16x8_t __a, int16x8_t __b)
{
  return __builtin_csky_vshturv8hi(__a, __b);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vsht_u32_r (uint32x4_t __a, int32x4_t __b)
{
  return __builtin_csky_vshturv4si(__a, __b);
}

__extension__ static __inline uint64x2_t __attribute__ ((__always_inline__))
vsht_u64_r (uint64x2_t __a, int64x2_t __b)
{
  return __builtin_csky_vshturv2di(__a, __b);
}

/* vsht.t.rs */
__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vsht_s8_rs (int8x16_t __a, int8x16_t __b)
{
  return __builtin_csky_vshtsrsv16qi(__a, __b);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vsht_s16_rs (int16x8_t __a, int16x8_t __b)
{
  return __builtin_csky_vshtsrsv8hi(__a, __b);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vsht_s32_rs (int32x4_t __a, int32x4_t __b)
{
  return __builtin_csky_vshtsrsv4si(__a, __b);
}

__extension__ static __inline int64x2_t __attribute__ ((__always_inline__))
vsht_s64_rs (int64x2_t __a, int64x2_t __b)
{
  return __builtin_csky_vshtsrsv2di(__a, __b);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vsht_u8_rs (uint8x16_t __a, int8x16_t __b)
{
  return __builtin_csky_vshtursv16qi(__a, __b);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vsht_u16_rs (uint16x8_t __a, int16x8_t __b)
{
  return __builtin_csky_vshtursv8hi(__a, __b);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vsht_u32_rs (uint32x4_t __a, int32x4_t __b)
{
  return __builtin_csky_vshtursv4si(__a, __b);
}

__extension__ static __inline uint64x2_t __attribute__ ((__always_inline__))
vsht_u64_rs (uint64x2_t __a, int64x2_t __b)
{
  return __builtin_csky_vshtursv2di(__a, __b);
}

/* vshl.t */
__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vshl_s8 (int8x16_t __a, uint8x16_t __b)
{
  return __builtin_csky_vshlsv16qi(__a, __b);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vshl_s16 (int16x8_t __a, uint16x8_t __b)
{
  return __builtin_csky_vshlsv8hi(__a, __b);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vshl_s32 (int32x4_t __a, uint32x4_t __b)
{
  return __builtin_csky_vshlsv4si(__a, __b);
}

__extension__ static __inline int64x2_t __attribute__ ((__always_inline__))
vshl_s64 (int64x2_t __a, uint64x2_t __b)
{
  return __builtin_csky_vshlsv2di(__a, __b);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vshl_u8 (uint8x16_t __a, uint8x16_t __b)
{
  return __builtin_csky_vshluv16qi(__a, __b);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vshl_u16 (uint16x8_t __a, uint16x8_t __b)
{
  return __builtin_csky_vshluv8hi(__a, __b);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vshl_u32 (uint32x4_t __a, uint32x4_t __b)
{
  return __builtin_csky_vshluv4si(__a, __b);
}

__extension__ static __inline uint64x2_t __attribute__ ((__always_inline__))
vshl_u64 (uint64x2_t __a, uint64x2_t __b)
{
  return __builtin_csky_vshluv2di(__a, __b);
}

/* vshl.t.s */
__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vshl_s8_s (int8x16_t __a, uint8x16_t __b)
{
  return __builtin_csky_vshlssv16qi(__a, __b);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vshl_s16_s (int16x8_t __a, uint16x8_t __b)
{
  return __builtin_csky_vshlssv8hi(__a, __b);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vshl_s32_s (int32x4_t __a, uint32x4_t __b)
{
  return __builtin_csky_vshlssv4si(__a, __b);
}

__extension__ static __inline int64x2_t __attribute__ ((__always_inline__))
vshl_s64_s (int64x2_t __a, uint64x2_t __b)
{
  return __builtin_csky_vshlssv2di(__a, __b);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vshl_u8_s (uint8x16_t __a, uint8x16_t __b)
{
  return __builtin_csky_vshlusv16qi(__a, __b);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vshl_u16_s (uint16x8_t __a, uint16x8_t __b)
{
  return __builtin_csky_vshlusv8hi(__a, __b);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vshl_u32_s (uint32x4_t __a, uint32x4_t __b)
{
  return __builtin_csky_vshlusv4si(__a, __b);
}

__extension__ static __inline uint64x2_t __attribute__ ((__always_inline__))
vshl_u64_s (uint64x2_t __a, uint64x2_t __b)
{
  return __builtin_csky_vshlusv2di(__a, __b);
}

/* vshli.t */
__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vshli_s8 (int8x16_t __a, const int32_t __imm)
{
  return __builtin_csky_vshlisv16qi(__a, __imm);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vshli_s16 (int16x8_t __a, const int32_t __imm)
{
  return __builtin_csky_vshlisv8hi(__a, __imm);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vshli_s32 (int32x4_t __a, const int32_t __imm)
{
  return __builtin_csky_vshlisv4si(__a, __imm);
}

__extension__ static __inline int64x2_t __attribute__ ((__always_inline__))
vshli_s64 (int64x2_t __a, const int32_t __imm)
{
  return __builtin_csky_vshlisv2di(__a, __imm);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vshli_u8 (uint8x16_t __a, const int32_t __imm)
{
  return __builtin_csky_vshliuv16qi(__a, __imm);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vshli_u16 (uint16x8_t __a, const int32_t __imm)
{
  return __builtin_csky_vshliuv8hi(__a, __imm);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vshli_u32 (uint32x4_t __a, const int32_t __imm)
{
  return __builtin_csky_vshliuv4si(__a, __imm);
}

__extension__ static __inline uint64x2_t __attribute__ ((__always_inline__))
vshli_u64 (uint64x2_t __a, const int32_t __imm)
{
  return __builtin_csky_vshliuv2di(__a, __imm);
}

/* vshli.t.s */
__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vshli_s8_s (int8x16_t __a, const int32_t __imm)
{
  return __builtin_csky_vshlissv16qi(__a, __imm);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vshli_s16_s (int16x8_t __a, const int32_t __imm)
{
  return __builtin_csky_vshlissv8hi(__a, __imm);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vshli_s32_s (int32x4_t __a, const int32_t __imm)
{
  return __builtin_csky_vshlissv4si(__a, __imm);
}

__extension__ static __inline int64x2_t __attribute__ ((__always_inline__))
vshli_s64_s (int64x2_t __a, const int32_t __imm)
{
  return __builtin_csky_vshlissv2di(__a, __imm);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vshli_u8_s (uint8x16_t __a, const int32_t __imm)
{
  return __builtin_csky_vshliusv16qi(__a, __imm);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vshli_u16_s (uint16x8_t __a, const int32_t __imm)
{
  return __builtin_csky_vshliusv8hi(__a, __imm);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vshli_u32_s (uint32x4_t __a, const int32_t __imm)
{
  return __builtin_csky_vshliusv4si(__a, __imm);
}

__extension__ static __inline uint64x2_t __attribute__ ((__always_inline__))
vshli_u64_s (uint64x2_t __a, const int32_t __imm)
{
  return __builtin_csky_vshliusv2di(__a, __imm);
}

/* vshli.t.e */
__extension__ static __inline int16x8x2_t __attribute__ ((__always_inline__))
vshli_s8_e (int8x16_t __a, const int32_t __imm)
{
  union { int16x8x2_t __i; __builtin_csky_oi __o;} __rv;
  __rv.__o = __builtin_csky_vshlisev16qi(__a, __imm);
  return __rv.__i;
}

__extension__ static __inline int32x4x2_t __attribute__ ((__always_inline__))
vshli_s16_e (int16x8_t __a, const int32_t __imm)
{
  union { int32x4x2_t __i; __builtin_csky_oi __o;} __rv;
  __rv.__o = __builtin_csky_vshlisev8hi(__a, __imm);
  return __rv.__i;
}

__extension__ static __inline int64x2x2_t __attribute__ ((__always_inline__))
vshli_s32_e (int32x4_t __a, const int32_t __imm)
{
  union { int64x2x2_t __i; __builtin_csky_oi __o;} __rv;
  __rv.__o = __builtin_csky_vshlisev4si(__a, __imm);
  return __rv.__i;
}

__extension__ static __inline uint16x8x2_t __attribute__ ((__always_inline__))
vshli_u8_e (uint8x16_t __a, const int32_t __imm)
{
  union { uint16x8x2_t __i; __builtin_csky_oi __o;} __rv;
  __rv.__o = __builtin_csky_vshliuev16qi(__a, __imm);
  return __rv.__i;
}

__extension__ static __inline uint32x4x2_t __attribute__ ((__always_inline__))
vshli_u16_e (uint16x8_t __a, const int32_t __imm)
{
  union { uint32x4x2_t __i; __builtin_csky_oi __o;} __rv;
  __rv.__o = __builtin_csky_vshliuev8hi(__a, __imm);
  return __rv.__i;
}

__extension__ static __inline uint64x2x2_t __attribute__ ((__always_inline__))
vshli_u32_e (uint32x4_t __a, const int32_t __imm)
{
  union { uint64x2x2_t __i; __builtin_csky_oi __o;} __rv;
  __rv.__o = __builtin_csky_vshliuev4si(__a, __imm);
  return __rv.__i;
}

/* vshr.t */
__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vshr_s8 (int8x16_t __a, uint8x16_t __b)
{
  return __builtin_csky_vshrsv16qi(__a, __b);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vshr_s16 (int16x8_t __a, uint16x8_t __b)
{
  return __builtin_csky_vshrsv8hi(__a, __b);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vshr_s32 (int32x4_t __a, uint32x4_t __b)
{
  return __builtin_csky_vshrsv4si(__a, __b);
}

__extension__ static __inline int64x2_t __attribute__ ((__always_inline__))
vshr_s64 (int64x2_t __a, uint64x2_t __b)
{
  return __builtin_csky_vshrsv2di(__a, __b);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vshr_u8 (uint8x16_t __a, uint8x16_t __b)
{
  return __builtin_csky_vshruv16qi(__a, __b);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vshr_u16 (uint16x8_t __a, uint16x8_t __b)
{
  return __builtin_csky_vshruv8hi(__a, __b);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vshr_u32 (uint32x4_t __a, uint32x4_t __b)
{
  return __builtin_csky_vshruv4si(__a, __b);
}

__extension__ static __inline uint64x2_t __attribute__ ((__always_inline__))
vshr_u64 (uint64x2_t __a, uint64x2_t __b)
{
  return __builtin_csky_vshruv2di(__a, __b);
}

/* vshr.t.r */
__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vshr_s8_r (int8x16_t __a, uint8x16_t __b)
{
  return __builtin_csky_vshrsrv16qi(__a, __b);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vshr_s16_r (int16x8_t __a, uint16x8_t __b)
{
  return __builtin_csky_vshrsrv8hi(__a, __b);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vshr_s32_r (int32x4_t __a, uint32x4_t __b)
{
  return __builtin_csky_vshrsrv4si(__a, __b);
}

__extension__ static __inline int64x2_t __attribute__ ((__always_inline__))
vshr_s64_r (int64x2_t __a, uint64x2_t __b)
{
  return __builtin_csky_vshrsrv2di(__a, __b);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vshr_u8_r (uint8x16_t __a, uint8x16_t __b)
{
  return __builtin_csky_vshrurv16qi(__a, __b);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vshr_u16_r (uint16x8_t __a, uint16x8_t __b)
{
  return __builtin_csky_vshrurv8hi(__a, __b);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vshr_u32_r (uint32x4_t __a, uint32x4_t __b)
{
  return __builtin_csky_vshrurv4si(__a, __b);
}

__extension__ static __inline uint64x2_t __attribute__ ((__always_inline__))
vshr_u64_r (uint64x2_t __a, uint64x2_t __b)
{
  return __builtin_csky_vshrurv2di(__a, __b);
}

/* vshri.t */
__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vshri_s8 (int8x16_t __a, const int32_t __imm)
{
  return __builtin_csky_vshrisv16qi(__a, __imm);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vshri_s16 (int16x8_t __a, const int32_t __imm)
{
  return __builtin_csky_vshrisv8hi(__a, __imm);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vshri_s32 (int32x4_t __a, const int32_t __imm)
{
  return __builtin_csky_vshrisv4si(__a, __imm);
}

__extension__ static __inline int64x2_t __attribute__ ((__always_inline__))
vshri_s64 (int64x2_t __a, const int32_t __imm)
{
  return __builtin_csky_vshrisv2di(__a, __imm);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vshri_u8 (uint8x16_t __a, const int32_t __imm)
{
  return __builtin_csky_vshriuv16qi(__a, __imm);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vshri_u16 (uint16x8_t __a, const int32_t __imm)
{
  return __builtin_csky_vshriuv8hi(__a, __imm);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vshri_u32 (uint32x4_t __a, const int32_t __imm)
{
  return __builtin_csky_vshriuv4si(__a, __imm);
}

__extension__ static __inline uint64x2_t __attribute__ ((__always_inline__))
vshri_u64 (uint64x2_t __a, const int32_t __imm)
{
  return __builtin_csky_vshriuv2di(__a, __imm);
}

/* vshri.t.r */
__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vshri_s8_r (int8x16_t __a, const int32_t __imm)
{
  return __builtin_csky_vshrisrv16qi(__a, __imm);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vshri_s16_r (int16x8_t __a, const int32_t __imm)
{
  return __builtin_csky_vshrisrv8hi(__a, __imm);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vshri_s32_r (int32x4_t __a, const int32_t __imm)
{
  return __builtin_csky_vshrisrv4si(__a, __imm);
}

__extension__ static __inline int64x2_t __attribute__ ((__always_inline__))
vshri_s64_r (int64x2_t __a, const int32_t __imm)
{
  return __builtin_csky_vshrisrv2di(__a, __imm);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vshri_u8_r (uint8x16_t __a, const int32_t __imm)
{
  return __builtin_csky_vshriurv16qi(__a, __imm);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vshri_u16_r (uint16x8_t __a, const int32_t __imm)
{
  return __builtin_csky_vshriurv8hi(__a, __imm);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vshri_u32_r (uint32x4_t __a, const int32_t __imm)
{
  return __builtin_csky_vshriurv4si(__a, __imm);
}

__extension__ static __inline uint64x2_t __attribute__ ((__always_inline__))
vshri_u64_r (uint64x2_t __a, const int32_t __imm)
{
  return __builtin_csky_vshriurv2di(__a, __imm);
}

/* vshri.t.l */
__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vshri_s16_l (int16x8_t __a, const int32_t __imm)
{
  return __builtin_csky_vshrislv8hi(__a, __imm);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vshri_s32_l (int32x4_t __a, const int32_t __imm)
{
  return __builtin_csky_vshrislv4si(__a, __imm);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vshri_s64_l (int64x2_t __a, const int32_t __imm)
{
  return __builtin_csky_vshrislv2di(__a, __imm);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vshri_u16_l (uint16x8_t __a, const int32_t __imm)
{
  return __builtin_csky_vshriulv8hi(__a, __imm);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vshri_u32_l (uint32x4_t __a, const int32_t __imm)
{
  return __builtin_csky_vshriulv4si(__a, __imm);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vshri_u64_l (uint64x2_t __a, const int32_t __imm)
{
  return __builtin_csky_vshriulv2di(__a, __imm);
}

/* vshri.t.lr */

__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vshri_s16_lr (int16x8_t __a, const int32_t __imm)
{
  return __builtin_csky_vshrislrv8hi(__a, __imm);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vshri_s32_lr (int32x4_t __a, const int32_t __imm)
{
  return __builtin_csky_vshrislrv4si(__a, __imm);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vshri_s64_lr (int64x2_t __a, const int32_t __imm)
{
  return __builtin_csky_vshrislrv2di(__a, __imm);
}


__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vshri_u16_lr (uint16x8_t __a, const int32_t __imm)
{
  return __builtin_csky_vshriulrv8hi(__a, __imm);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vshri_u32_lr (uint32x4_t __a, const int32_t __imm)
{
  return __builtin_csky_vshriulrv4si(__a, __imm);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vshri_u64_lr (uint64x2_t __a, const int32_t __imm)
{
  return __builtin_csky_vshriulrv2di(__a, __imm);
}

/* vshri.t.ls */

__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vshri_s16_ls (int16x8_t __a, const int32_t __imm)
{
  return __builtin_csky_vshrislsv8hi(__a, __imm);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vshri_s32_ls (int32x4_t __a, const int32_t __imm)
{
  return __builtin_csky_vshrislsv4si(__a, __imm);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vshri_s64_ls (int64x2_t __a, const int32_t __imm)
{
  return __builtin_csky_vshrislsv2di(__a, __imm);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vshri_u16_ls (uint16x8_t __a, const int32_t __imm)
{
  return __builtin_csky_vshriulsv8hi(__a, __imm);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vshri_u32_ls (uint32x4_t __a, const int32_t __imm)
{
  return __builtin_csky_vshriulsv4si(__a, __imm);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vshri_u64_ls (uint64x2_t __a, const int32_t __imm)
{
  return __builtin_csky_vshriulsv2di(__a, __imm);
}

/* vshri.t.lrs */
__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vshri_s16_lrs (int16x8_t __a, const int32_t __imm)
{
  return __builtin_csky_vshrislrsv8hi(__a, __imm);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vshri_s32_lrs (int32x4_t __a, const int32_t __imm)
{
  return __builtin_csky_vshrislrsv4si(__a, __imm);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vshri_s64_lrs (int64x2_t __a, const int32_t __imm)
{
  return __builtin_csky_vshrislrsv2di(__a, __imm);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vshri_u16_lrs (uint16x8_t __a, const int32_t __imm)
{
  return __builtin_csky_vshriulrsv8hi(__a, __imm);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vshri_u32_lrs (uint32x4_t __a, const int32_t __imm)
{
  return __builtin_csky_vshriulrsv4si(__a, __imm);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vshri_u64_lrs (uint64x2_t __a, const int32_t __imm)
{
  return __builtin_csky_vshriulrsv2di(__a, __imm);
}

/* vshria.t */
__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vshria_s8 (int8x16_t __a, int8x16_t __b, const int32_t __imm)
{
  return __builtin_csky_vshriasv16qi(__a, __b, __imm);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vshria_s16 (int16x8_t __a, int16x8_t __b, const int32_t __imm)
{
  return __builtin_csky_vshriasv8hi(__a, __b, __imm);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vshria_s32 (int32x4_t __a, int32x4_t __b, const int32_t __imm)
{
  return __builtin_csky_vshriasv4si(__a, __b, __imm);
}

__extension__ static __inline int64x2_t __attribute__ ((__always_inline__))
vshria_s64 (int64x2_t __a, int64x2_t __b, const int32_t __imm)
{
  return __builtin_csky_vshriasv2di(__a, __b, __imm);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vshria_u8 (uint8x16_t __a, uint8x16_t __b, const int32_t __imm)
{
  return __builtin_csky_vshriauv16qi(__a, __b, __imm);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vshria_u16 (uint16x8_t __a, uint16x8_t __b, const int32_t __imm)
{
  return __builtin_csky_vshriauv8hi(__a, __b, __imm);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vshria_u32 (uint32x4_t __a, uint32x4_t __b, const int32_t __imm)
{
  return __builtin_csky_vshriauv4si(__a, __b, __imm);
}

__extension__ static __inline uint64x2_t __attribute__ ((__always_inline__))
vshria_u64 (uint64x2_t __a, uint64x2_t __b, const int32_t __imm)
{
  return __builtin_csky_vshriauv2di(__a, __b, __imm);
}

/* vshria.t.r */
__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vshria_s8_r (int8x16_t __a, int8x16_t __b, const int32_t __imm)
{
  return __builtin_csky_vshriasrv16qi(__a, __b, __imm);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vshria_s16_r (int16x8_t __a, int16x8_t __b, const int32_t __imm)
{
  return __builtin_csky_vshriasrv8hi(__a, __b, __imm);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vshria_s32_r (int32x4_t __a, int32x4_t __b, const int32_t __imm)
{
  return __builtin_csky_vshriasrv4si(__a, __b, __imm);
}

__extension__ static __inline int64x2_t __attribute__ ((__always_inline__))
vshria_s64_r (int64x2_t __a, int64x2_t __b, const int32_t __imm)
{
  return __builtin_csky_vshriasrv2di(__a, __b, __imm);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vshria_u8_r (uint8x16_t __a, uint8x16_t __b, const int32_t __imm)
{
  return __builtin_csky_vshriaurv16qi(__a, __b, __imm);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vshria_u16_r (uint16x8_t __a, uint16x8_t __b, const int32_t __imm)
{
  return __builtin_csky_vshriaurv8hi(__a, __b, __imm);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vshria_u32_r (uint32x4_t __a, uint32x4_t __b, const int32_t __imm)
{
  return __builtin_csky_vshriaurv4si(__a, __b, __imm);
}

__extension__ static __inline uint64x2_t __attribute__ ((__always_inline__))
vshria_u64_r (uint64x2_t __a, uint64x2_t __b, const int32_t __imm)
{
  return __builtin_csky_vshriaurv2di(__a, __b, __imm);
}

/* vexh.t */
__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vexh_s8 (int8x16_t __c, int8x16_t __a, int32_t __b)
{
  return __builtin_csky_vexhsv16qi(__c, __a, __b);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vexh_s16 (int16x8_t __c, int16x8_t __a, int32_t  __b)
{
  return __builtin_csky_vexhsv8hi(__c, __a, __b);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vexh_s32 (int32x4_t __c, int32x4_t __a, int32_t __b)
{
  return __builtin_csky_vexhsv4si(__c, __a, __b);
}

__extension__ static __inline int64x2_t __attribute__ ((__always_inline__))
vexh_s64 (int64x2_t __c, int64x2_t __a, int32_t __b)
{
  return __builtin_csky_vexhsv2di(__c, __a, __b);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vexh_u8 (uint8x16_t __c, uint8x16_t __a, uint32_t __b)
{
  return __builtin_csky_vexhuv16qi(__c, __a, __b);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vexh_u16 (uint16x8_t __c, uint16x8_t __a, uint32_t __b)
{
  return __builtin_csky_vexhuv8hi(__c, __a, __b);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vexh_u32 (uint32x4_t __c, uint32x4_t __a, uint32_t __b)
{
  return __builtin_csky_vexhuv4si(__c, __a, __b);
}

__extension__ static __inline uint64x2_t __attribute__ ((__always_inline__))
vexh_u64 (uint64x2_t __c, uint64x2_t __a, uint32_t __b)
{
  return __builtin_csky_vexhuv2di(__c, __a, __b);
}

/* vexl.t */
__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vexl_s8 (int8x16_t __c, int8x16_t __a, int32_t __b)
{
  return __builtin_csky_vexlsv16qi(__c, __a, __b);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vexl_s16 (int16x8_t __c, int16x8_t __a, int32_t __b)
{
  return __builtin_csky_vexlsv8hi(__c, __a, __b);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vexl_s32 (int32x4_t __c, int32x4_t __a, int32_t __b)
{
  return __builtin_csky_vexlsv4si(__c, __a, __b);
}

__extension__ static __inline int64x2_t __attribute__ ((__always_inline__))
vexl_s64 (int64x2_t __c, int64x2_t __a, int32_t __b)
{
  return __builtin_csky_vexlsv2di(__c, __a, __b);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vexl_u8 (uint8x16_t __c, uint8x16_t __a, uint32_t __b)
{
  return __builtin_csky_vexluv16qi(__c, __a, __b);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vexl_u16 (uint16x8_t __c, uint16x8_t __a, uint32_t __b)
{
  return __builtin_csky_vexluv8hi(__c, __a, __b);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vexl_u32 (uint32x4_t __c, uint32x4_t __a, uint32_t __b)
{
  return __builtin_csky_vexluv4si(__c, __a, __b);
}

__extension__ static __inline uint64x2_t __attribute__ ((__always_inline__))
vexl_u64 (uint64x2_t __c, uint64x2_t __a, uint32_t __b)
{
  return __builtin_csky_vexluv2di(__c, __a, __b);
}

/* vmtvr.t.1 */
__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vmtvr_s8_1 (int8x16_t __a, char __b, const int32_t __index)
{
  return __builtin_csky_vmtvrs1v16qi(__b, __a, __index);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vmtvr_s16_1 (int16x8_t __a, int16_t __b, const int32_t __index)
{
  return __builtin_csky_vmtvrs1v8hi(__b, __a, __index);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vmtvr_s32_1 (int32x4_t __a, int32_t __b, const int32_t __index)
{
  return __builtin_csky_vmtvrs1v4si(__b, __a, __index);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vmtvr_u8_1 (uint8x16_t __a, uint8_t __b, const int32_t __index)
{
  return __builtin_csky_vmtvru1v16qi(__b, __a, __index);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vmtvr_u16_1 (uint16x8_t __a, uint16_t __b, const int32_t __index)
{
  return __builtin_csky_vmtvru1v8hi(__b, __a, __index);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vmtvr_u32_1 (uint32x4_t __a, uint32_t __b, const int32_t __index)
{
  return __builtin_csky_vmtvru1v4si(__b, __a, __index);
}

#if defined (__CSKY_VDSPV2_F__)

__extension__ static __inline float16x8_t __attribute__ ((__always_inline__))
vmtvr_f16_1 (float16x8_t __a, float16_t __b, const int32_t __index)
{
  return __builtin_csky_vmtvr1v8hf(__b, __a, __index);
}

__extension__ static __inline float32x4_t __attribute__ ((__always_inline__))
vmtvr_f32_1 (float32x4_t __a, float32_t __b, const int32_t __index)
{
  return __builtin_csky_vmtvr1v4sf(__b, __a, __index);
}

#endif // __CSKY_VDSPV2_F__

/* vmtvr.t.2 */
__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vmtvr_s8_2 (int8x16_t __a, long long __b, const int32_t __index)
{
  return __builtin_csky_vmtvrs2v16qi(__b, __a, __index);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vmtvr_s16_2 (int16x8_t __a, long long __b, const int32_t __index)
{
  return __builtin_csky_vmtvrs2v8hi(__b, __a, __index);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vmtvr_s32_2 (int32x4_t __a, long long __b, const int32_t __index)
{
  return __builtin_csky_vmtvrs2v4si(__b, __a, __index);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vmtvr_u8_2 (uint8x16_t __a, long long __b, const int32_t __index)
{
  return __builtin_csky_vmtvru2v16qi(__b, __a, __index);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vmtvr_u16_2 (uint16x8_t __a, long long __b, const int32_t __index)
{
  return __builtin_csky_vmtvru2v8hi(__b, __a, __index);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vmtvr_u32_2 (uint32x4_t __a, long long __b, const int32_t __index)
{
  return __builtin_csky_vmtvru2v4si(__b, __a, __index);
}

#if defined (__CSKY_VDSPV2_F__)

__extension__ static __inline float16x8_t __attribute__ ((__always_inline__))
vmtvr_f16_2 (float16x8_t __a, float64_t __b, const int32_t __index)
{
  return __builtin_csky_vmtvr2v8hf(__b, __a, __index);
}

__extension__ static __inline float32x4_t __attribute__ ((__always_inline__))
vmtvr_f32_2 (float32x4_t __a, float64_t __b, const int32_t __index)
{
  return __builtin_csky_vmtvr2v4sf(__b, __a, __index);
}

#endif // __CSKY_VDSPV2_F__

/* vmfvr.t */
__extension__ static __inline int8_t __attribute__ ((__always_inline__))
vmfvr_s8 (int8x16_t __a, const int32_t __index)
{
  return (int8_t)__builtin_csky_vmfvr_sv16qi(__a, __index);
}

__extension__ static __inline int16_t __attribute__ ((__always_inline__))
vmfvr_s16 (int16x8_t __a, const int32_t __index)
{
  return (int16_t)__builtin_csky_vmfvr_sv8hi(__a, __index);
}

__extension__ static __inline int32_t __attribute__ ((__always_inline__))
vmfvr_s32 (int32x4_t __a, const int32_t __index)
{
  return __builtin_csky_vmfvr_sv4si(__a, __index);
}

__extension__ static __inline int64_t __attribute__ ((__always_inline__))
vmfvr_s64 (int64x2_t __a, const int32_t __index)
{
  return __builtin_csky_vmfvrv2di(__a, __index);
}

__extension__ static __inline uint8_t __attribute__ ((__always_inline__))
vmfvr_u8 (uint8x16_t __a, const int32_t __index)
{
  return (uint8_t)__builtin_csky_vmfvr_uv16qi(__a, __index);
}

__extension__ static __inline uint16_t __attribute__ ((__always_inline__))
vmfvr_u16 (uint16x8_t __a, const int32_t __index)
{
  return (uint16_t)__builtin_csky_vmfvr_uv8hi(__a, __index);
}

__extension__ static __inline uint32_t __attribute__ ((__always_inline__))
vmfvr_u32 (uint32x4_t __a, const int32_t __index)
{
  return __builtin_csky_vmfvr_uv4si(__a, __index);
}

__extension__ static __inline uint64_t __attribute__ ((__always_inline__))
vmfvr_u64 (uint64x2_t __a, const int32_t __index)
{
  return (uint64_t)__builtin_csky_vmfvrv2di((int64x2_t)__a, __index);
}

#if defined (__CSKY_VDSPV2_F__)

__extension__ static __inline float16_t __attribute__ ((__always_inline__))
vmfvr_f16 (float16x8_t __a, const int32_t __index)
{
  return __builtin_csky_vdupfv8hf(__a, __index);
}

__extension__ static __inline float32_t __attribute__ ((__always_inline__))
vmfvr_f32 (float32x4_t __a, const int32_t __index)
{
  return __builtin_csky_vdupfv4sf(__a, __index);
}

__extension__ static __inline float64_t __attribute__ ((__always_inline__))
vmfvr_f64 (float64x2_t __a, const int32_t __index)
{
  return __builtin_csky_vdupfv2df(__a, __index);
}

#endif // __CSKY_VDSPV2_F__

/* vsext.t */
__extension__ static __inline int32_t __attribute__ ((__always_inline__))
vsext_s8 (int8x16_t __a)
{
  return __builtin_csky_vsextsv16qi(__a);
}

__extension__ static __inline int32_t __attribute__ ((__always_inline__))
vsext_s16 (int16x8_t __a)
{
  return __builtin_csky_vsextsv8hi(__a);
}

__extension__ static __inline int32_t __attribute__ ((__always_inline__))
vsext_s32 (int32x4_t __a)
{
  return __builtin_csky_vsextsv4si(__a);
}

__extension__ static __inline uint32_t __attribute__ ((__always_inline__))
vsext_u8 (uint8x16_t __a)
{
  return __builtin_csky_vsextuv16qi(__a);
}

__extension__ static __inline uint32_t __attribute__ ((__always_inline__))
vsext_u16 (uint16x8_t __a)
{
  return __builtin_csky_vsextuv8hi(__a);
}

__extension__ static __inline uint32_t __attribute__ ((__always_inline__))
vsext_u32 (uint32x4_t __a)
{
  return __builtin_csky_vsextuv4si(__a);
}

/* vmov.t.e */
__extension__ static __inline int16x8x2_t __attribute__ ((__always_inline__))
vmov_s8_e (int8x16_t __a)
{
  union { int16x8x2_t __i; __builtin_csky_oi __o;} __rv;
  __rv.__o = __builtin_csky_vmovsev16qi(__a);
  return __rv.__i;
}

__extension__ static __inline int32x4x2_t __attribute__ ((__always_inline__))
vmov_s16_e (int16x8_t __a)
{
  union { int32x4x2_t __i; __builtin_csky_oi __o;} __rv;
  __rv.__o = __builtin_csky_vmovsev8hi(__a);
  return __rv.__i;
}

__extension__ static __inline int64x2x2_t __attribute__ ((__always_inline__))
vmov_s32_e (int32x4_t __a)
{
  union { int64x2x2_t __i; __builtin_csky_oi __o;} __rv;
  __rv.__o = __builtin_csky_vmovsev4si(__a);
  return __rv.__i;
}

__extension__ static __inline uint16x8x2_t __attribute__ ((__always_inline__))
vmov_u8_e (uint8x16_t __a)
{
  union { uint16x8x2_t __i; __builtin_csky_oi __o;} __rv;
  __rv.__o = __builtin_csky_vmovuev16qi(__a);
  return __rv.__i;
}

__extension__ static __inline uint32x4x2_t __attribute__ ((__always_inline__))
vmov_u16_e (uint16x8_t __a)
{
  union { uint32x4x2_t __i; __builtin_csky_oi __o;} __rv;
  __rv.__o = __builtin_csky_vmovuev8hi(__a);
  return __rv.__i;
}

__extension__ static __inline uint64x2x2_t __attribute__ ((__always_inline__))
vmov_u32_e (uint32x4_t __a)
{
  union { uint64x2x2_t __i; __builtin_csky_oi __o;} __rv;
  __rv.__o = __builtin_csky_vmovuev4si(__a);
  return __rv.__i;
}

/* vmov.t.l */
__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vmov_s16_l (int16x8_t __a, int16x8_t __b)
{
  return __builtin_csky_vmovtlv8hi(__a, __b);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vmov_s32_l (int32x4_t __a, int32x4_t __b)
{
  return __builtin_csky_vmovtlv4si(__a, __b);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vmov_s64_l (int64x2_t __a, int64x2_t __b)
{
  return __builtin_csky_vmovtlv2di(__a, __b);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vmov_u16_l (uint16x8_t __a, uint16x8_t __b)
{
  return (uint8x16_t)__builtin_csky_vmovtlv8hi((int16x8_t)__a, (int16x8_t)__b);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vmov_u32_l (uint32x4_t __a, uint32x4_t __b)
{
  return (uint16x8_t)__builtin_csky_vmovtlv4si((int32x4_t)__a, (int32x4_t)__b);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vmov_u64_l (uint64x2_t __a, uint64x2_t __b)
{
  return (uint32x4_t)__builtin_csky_vmovtlv2di((int64x2_t)__a, (int64x2_t)__b);
}

#if defined (__CSKY_VDSPV2_F__)

__extension__ static __inline float16x8_t __attribute__ ((__always_inline__))
vmov_f32_l (float32x4_t __a, float32x4_t __b)
{
  return __builtin_csky_vmovtlv4sf(__a, __b);
}

__extension__ static __inline float32x4_t __attribute__ ((__always_inline__))
vmov_f64_l (float64x2_t __a, float64x2_t __b)
{
  return __builtin_csky_vmovtlv2df(__a, __b);
}

#endif // __CSKY_VDSPV2_F__

/* vmov.t.h */
__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vmov_s16_h (int16x8_t __a, int16x8_t __b)
{
  return __builtin_csky_vmovthv8hi(__a, __b);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vmov_s32_h (int32x4_t __a, int32x4_t __b)
{
  return __builtin_csky_vmovthv4si(__a, __b);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vmov_s64_h (int64x2_t __a, int64x2_t __b)
{
  return __builtin_csky_vmovthv2di(__a, __b);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vmov_u16_h (uint16x8_t __a, uint16x8_t __b)
{
  return (uint8x16_t)__builtin_csky_vmovthv8hi((int16x8_t )__a, (int16x8_t )__b);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vmov_u32_h (uint32x4_t __a, uint32x4_t __b)
{
  return (uint16x8_t)__builtin_csky_vmovthv4si((int32x4_t)__a, (int32x4_t)__b);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vmov_u64_h (uint64x2_t __a, uint64x2_t __b)
{
  return (uint32x4_t)__builtin_csky_vmovthv2di((int64x2_t)__a, (int64x2_t)__b);
}

#if defined (__CSKY_VDSPV2_F__)

__extension__ static __inline float16x8_t __attribute__ ((__always_inline__))
vmov_f32_h (float32x4_t __a, float32x4_t __b)
{
  return __builtin_csky_vmovthv4sf(__a, __b);
}

__extension__ static __inline float32x4_t __attribute__ ((__always_inline__))
vmov_f64_h (float64x2_t __a, float64x2_t __b)
{
  return __builtin_csky_vmovthv2df(__a, __b);
}

#endif // __CSKY_VDSPV2_F__

/* vlrw.32.4 */
__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vlrw_s32_4 (const int32_t __imm1, const int32_t __imm2, const int32_t __imm3, const int32_t __imm4)
{
  return (int32x4_t){__imm1, __imm2, __imm3, __imm4};
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vlrw_u32_4 (const int32_t __imm1, const int32_t __imm2, const int32_t __imm3, const int32_t __imm4)
{
  return (uint32x4_t){__imm1, __imm2, __imm3, __imm4};
}

/* vmov.t.sl */
__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vmov_s16_sl (int16x8_t __a, int16x8_t __b)
{
  return __builtin_csky_vmovsslv8hi(__a, __b);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vmov_s32_sl (int32x4_t __a, int32x4_t __b)
{
  return __builtin_csky_vmovsslv4si(__a, __b);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vmov_s64_sl (int64x2_t __a, int64x2_t __b)
{
  return __builtin_csky_vmovsslv2di(__a, __b);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vmov_u16_sl (uint16x8_t __a, uint16x8_t __b)
{
  return __builtin_csky_vmovuslv8hi(__a, __b);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vmov_u32_sl (uint32x4_t __a, uint32x4_t __b)
{
  return __builtin_csky_vmovuslv4si(__a, __b);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vmov_u64_sl (uint64x2_t __a, uint64x2_t __b)
{
  return __builtin_csky_vmovuslv2di(__a, __b);
}


/* vmov.t.rh */
__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vmov_s16_rh (int16x8_t __a, int16x8_t __b)
{
  return __builtin_csky_vmovsrhv8hi(__a, __b);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vmov_s32_rh (int32x4_t __a, int32x4_t __b)
{
  return __builtin_csky_vmovsrhv4si(__a, __b);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vmov_s64_rh (int64x2_t __a, int64x2_t __b)
{
  return __builtin_csky_vmovsrhv2di(__a, __b);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vmov_u16_rh (uint16x8_t __a, uint16x8_t __b)
{
  return __builtin_csky_vmovurhv8hi(__a, __b);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vmov_u32_rh (uint32x4_t __a, uint32x4_t __b)
{
  return __builtin_csky_vmovurhv4si(__a, __b);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vmov_u64_rh (uint64x2_t __a, uint64x2_t __b)
{
  return __builtin_csky_vmovurhv2di(__a, __b);
}

///* vswp.t. */
//
//__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
//vswp_s8 (int8x16_t __a, int8x16_t __b)
//{
//  return __builtin_csky_vswpsv16qi(__a, __b);
//}
//
//__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
//vswp_s16 (int16x8_t __a, int16x8_t __b)
//{
//  return __builtin_csky_vswpsv8hi(__a, __b);
//}
//
//__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
//vswp_s32 (int32x4_t __a, int32x4_t __b)
//{
//  return __builtin_csky_vswpsv4si(__a, __b);
//}
//
//__extension__ static __inline int64x2_t __attribute__ ((__always_inline__))
//vswp_s64 (int64x2_t __a, int64x2_t __b)
//{
//  return __builtin_csky_vswpsv2di(__a, __b);
//}
//
//__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
//vswp_u8 (uint8x16_t __a, uint8x16_t __b)
//{
//  return __builtin_csky_vswpuv16qi(__a, __b);
//}
//
//__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
//vswp_u16 (uint16x8_t __a, uint16x8_t __b)
//{
//  return __builtin_csky_vswpuv8hi(__a, __b);
//}
//
//__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
//vswp_u32 (uint32x4_t __a, uint32x4_t __b)
//{
//  return __builtin_csky_vswpuv4si(__a, __b);
//}
//
//__extension__ static __inline uint64x2_t __attribute__ ((__always_inline__))
//vswp_u64 (uint64x2_t __a, uint64x2_t __b)
//{
//  return __builtin_csky_vswpuv2di(__a, __b);
//}

/* vtrn.t. */

__extension__ static __inline int8x16x2_t __attribute__ ((__always_inline__))
vtrn_s8 (int8x16_t __a, int8x16_t __b)
{
  union { int8x16x2_t __i; __builtin_csky_oi __o;} __rv;
  __rv.__o =  __builtin_csky_vtrnsv16qi(__a, __b);
  return __rv.__i;
}

__extension__ static __inline int16x8x2_t __attribute__ ((__always_inline__))
vtrn_s16 (int16x8_t __a, int16x8_t __b)
{
  union { int16x8x2_t __i; __builtin_csky_oi __o;} __rv;
  __rv.__o =  __builtin_csky_vtrnsv8hi(__a, __b);
  return __rv.__i;
}

__extension__ static __inline int32x4x2_t __attribute__ ((__always_inline__))
vtrn_s32 (int32x4_t __a, int32x4_t __b)
{
  union { int32x4x2_t __i; __builtin_csky_oi __o;} __rv;
  __rv.__o =  __builtin_csky_vtrnsv4si(__a, __b);
  return __rv.__i;
}

__extension__ static __inline uint8x16x2_t __attribute__ ((__always_inline__))
vtrn_u8 (uint8x16_t __a, uint8x16_t __b)
{
  union { uint8x16x2_t __i; __builtin_csky_oi __o;} __rv;
  __rv.__o =  __builtin_csky_vtrnuv16qi(__a, __b);
  return __rv.__i;
}

__extension__ static __inline uint16x8x2_t __attribute__ ((__always_inline__))
vtrn_u16 (uint16x8_t __a, uint16x8_t __b)
{
  union { uint16x8x2_t __i; __builtin_csky_oi __o;} __rv;
  __rv.__o =  __builtin_csky_vtrnuv8hi(__a, __b);
  return __rv.__i;
}

__extension__ static __inline uint32x4x2_t __attribute__ ((__always_inline__))
vtrn_u32 (uint32x4_t __a, uint32x4_t __b)
{
  union { uint32x4x2_t __i; __builtin_csky_oi __o;} __rv;
  __rv.__o =  __builtin_csky_vtrnuv4si(__a, __b);
  return __rv.__i;
}

#if defined (__CSKY_VDSPV2_F__)

__extension__ static __inline float16x8x2_t __attribute__ ((__always_inline__))
vtrn_f16 (float16x8_t __a, float16x8_t __b)
{
  union { float16x8x2_t __i; __builtin_csky_oi __o;} __rv;
  __rv.__o =  __builtin_csky_vtrnv8hf(__a, __b);
  return __rv.__i;
}

__extension__ static __inline float32x4x2_t __attribute__ ((__always_inline__))
vtrn_f32 (float32x4_t __a, float32x4_t __b)
{
  union { float32x4x2_t __i; __builtin_csky_oi __o;} __rv;
  __rv.__o =  __builtin_csky_vtrnv4sf(__a, __b);
  return __rv.__i;
}

#endif // __CSKY_VDSPV2_F__

/* vrevd/ vrevw/ vrevh/ vrevq */

__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vrevq_s8 (int8x16_t __a)
{
  return __builtin_csky_vrevqv16qi(__a);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vrevh_s16 (int16x8_t __a)
{
  return __builtin_csky_vrevhv8hi(__a);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vrevw_s32 (int32x4_t __a)
{
  return __builtin_csky_vrevwv4si(__a);
}

__extension__ static __inline int64x2_t __attribute__ ((__always_inline__))
vrevd_s64 (int64x2_t __a)
{
  return __builtin_csky_vrevdv2di(__a);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vrevd_s32 (int32x4_t __a)
{
  return __builtin_csky_vrevdv4si(__a);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vrevd_s16 (int16x8_t __a)
{
  return __builtin_csky_vrevdv8hi(__a);
}

__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vrevd_s8 (int8x16_t __a)
{
  return __builtin_csky_vrevdv16qi(__a);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vrevq_u8 (uint8x16_t __a)
{
  return (uint8x16_t)__builtin_csky_vrevqv16qi((int8x16_t)__a);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vrevh_u16 (uint16x8_t __a)
{
  return (uint16x8_t)__builtin_csky_vrevhv8hi((int16x8_t)__a);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vrevw_u32 (uint32x4_t __a)
{
  return (uint32x4_t)__builtin_csky_vrevwv4si((int32x4_t)__a);
}

__extension__ static __inline uint64x2_t __attribute__ ((__always_inline__))
vrevd_u64 (uint64x2_t __a)
{
  return (uint64x2_t)__builtin_csky_vrevdv2di((int64x2_t)__a);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vrevd_u32 (uint32x4_t __a)
{
  return (uint32x4_t)__builtin_csky_vrevdv4si((int32x4_t)__a);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vrevd_u16 (uint16x8_t __a)
{
  return (uint16x8_t)__builtin_csky_vrevdv8hi((int16x8_t)__a);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vrevd_u8 (uint8x16_t __a)
{
  return (uint8x16_t)__builtin_csky_vrevdv16qi((int8x16_t)__a);
}

#if defined (__CSKY_VDSPV2_F__)

__extension__ static __inline float16x8_t __attribute__ ((__always_inline__))
vrevh_f16 (float16x8_t __a)
{
  return __builtin_csky_vrevhv8hf(__a);
}

__extension__ static __inline float32x4_t __attribute__ ((__always_inline__))
vrevw_f32 (float32x4_t __a)
{
  return __builtin_csky_vrevwv4sf(__a);
}

__extension__ static __inline float64x2_t __attribute__ ((__always_inline__))
vrevd_f64 (float64x2_t __a)
{
  return __builtin_csky_vrevdv2df(__a);
}

__extension__ static __inline float32x4_t __attribute__ ((__always_inline__))
vrevd_f32 (float32x4_t __a)
{
  return __builtin_csky_vrevdv4sf(__a);
}

__extension__ static __inline float16x8_t __attribute__ ((__always_inline__))
vrevd_f16 (float16x8_t __a)
{
  return __builtin_csky_vrevdv8hf(__a);
}

#endif // __CSKY_VDSPV2_F__

/* vexti.t */
__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vexti_s8 (int8x16_t __a, int8x16_t __b, const int32_t __c)
{
  return __builtin_csky_vextiv16qi(__a, __b, __c);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vexti_u8 (uint8x16_t __a, uint8x16_t __b, const int32_t __c)
{
  return (uint8x16_t)__builtin_csky_vextiv16qi((int8x16_t)__a, (int8x16_t)__b, __c);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vexti_s16 (int16x8_t __a, int16x8_t __b, const int32_t __c)
{
  return __builtin_csky_vextiv8hi(__a, __b, __c);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vexti_u16 (uint16x8_t __a, uint16x8_t __b, const int32_t __c)
{
  return (uint16x8_t)__builtin_csky_vextiv8hi((int16x8_t)__a, (int16x8_t)__b, __c);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vexti_s32 (int32x4_t __a, int32x4_t __b, const int32_t __c)
{
  return __builtin_csky_vextiv4si(__a, __b, __c);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vexti_u32 (uint32x4_t __a, uint32x4_t __b, const int32_t __c)
{
  return (uint32x4_t)__builtin_csky_vextiv4si((int32x4_t)__a, (int32x4_t)__b, __c);
}

__extension__ static __inline int64x2_t __attribute__ ((__always_inline__))
vexti_s64 (int64x2_t __a, int64x2_t __b, const int32_t __c)
{
  return __builtin_csky_vextiv2di(__a, __b, __c);
}

__extension__ static __inline uint64x2_t __attribute__ ((__always_inline__))
vexti_u64 (uint64x2_t __a, uint64x2_t __b, const int32_t __c)
{
  return (uint64x2_t)__builtin_csky_vextiv2di((int64x2_t)__a, (int64x2_t)__b, __c);
}

#if defined (__CSKY_VDSPV2_F__)

__extension__ static __inline float16x8_t __attribute__ ((__always_inline__))
vexti_f16 (float16x8_t __a, float16x8_t __b, const int32_t __c)
{
  return __builtin_csky_vextiv8hf(__a, __b, __c);
}

__extension__ static __inline float32x4_t __attribute__ ((__always_inline__))
vexti_f32 (float32x4_t __a, float32x4_t __b, const int32_t __c)
{
  return __builtin_csky_vextiv4sf(__a, __b, __c);
}

#endif // __CSKY_VDSPV2_F__

/* vext.t */
__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vext_s8 (int8x16_t __a, int8x16_t __b, int32_t __c)
{
  return __builtin_csky_vextsv16qi(__a, __b, __c);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vext_u8 (uint8x16_t __a, uint8x16_t __b, int32_t __c)
{
  return __builtin_csky_vextuv16qi(__a, __b, __c);
}

/* vtbl.t */
__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vtbl_s8 (int8x16_t __a, uint8x16_t __b)
{
  return __builtin_csky_vtblsv16qi(__a, __b);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vtbl_s16 (int16x8_t __a, uint16x8_t __b)
{
  return __builtin_csky_vtblsv8hi(__a, __b);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vtbl_s32 (int32x4_t __a, uint32x4_t __b)
{
  return __builtin_csky_vtblsv4si(__a, __b);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vtbl_u8 (uint8x16_t __a, uint8x16_t __b)
{
  return __builtin_csky_vtbluv16qi(__a, __b);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vtbl_u16 (uint16x8_t __a, uint16x8_t __b)
{
  return __builtin_csky_vtbluv8hi(__a, __b);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vtbl_u32 (uint32x4_t __a, uint32x4_t __b)
{
  return __builtin_csky_vtbluv4si(__a, __b);
}

#if defined (__CSKY_VDSPV2_F__)

__extension__ static __inline float16x8_t __attribute__ ((__always_inline__))
vtbl_f16 (float16x8_t __a, uint16x8_t __b)
{
  return __builtin_csky_vtblv8hf(__a, __b);
}

__extension__ static __inline float32x4_t __attribute__ ((__always_inline__))
vtbl_f32 (float32x4_t __a, uint32x4_t __b)
{
  return __builtin_csky_vtblv4sf(__a, __b);
}

#endif // __CSKY_VDSPV2_F__

/* vtbx.t */
__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vtbx_s8 (int8x16_t __a, int8x16_t __b, uint8x16_t __c)
{
  return __builtin_csky_vtbxsv16qi(__a, __b, __c);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vtbx_s16 (int16x8_t __a, int16x8_t __b, uint16x8_t __c)
{
  return __builtin_csky_vtbxsv8hi(__a, __b, __c);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vtbx_s32 (int32x4_t __a, int32x4_t __b, uint32x4_t __c)
{
  return __builtin_csky_vtbxsv4si(__a, __b, __c);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vtbx_u8 (uint8x16_t __a, uint8x16_t __b, uint8x16_t __c)
{
  return __builtin_csky_vtbxuv16qi(__a, __b, __c);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vtbx_u16 (uint16x8_t __a, uint16x8_t __b, uint16x8_t __c)
{
  return __builtin_csky_vtbxuv8hi(__a, __b, __c);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vtbx_u32 (uint32x4_t __a, uint32x4_t __b, uint32x4_t __c)
{
  return __builtin_csky_vtbxuv4si(__a, __b, __c);
}

#if defined (__CSKY_VDSPV2_F__)

__extension__ static __inline float16x8_t __attribute__ ((__always_inline__))
vtbx_f16 (float16x8_t __a, float16x8_t __b, uint16x8_t __c)
{
  return __builtin_csky_vtbxv8hf(__a, __b, __c);
}

__extension__ static __inline float32x4_t __attribute__ ((__always_inline__))
vtbx_f32 (float32x4_t __a, float32x4_t __b, uint32x4_t __c)
{
  return __builtin_csky_vtbxv4sf(__a, __b, __c);
}

#endif // __CSKY_VDSPV2_F__

/* vmovi */
__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vmovi_s8 (const int8_t __a)
{
  return __builtin_csky_vmoviqi(__a);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vmovi_u8 (const int8_t __a)
/* 8-bits constant ranging from 0 ~ 255 will be convert a signed constant
   forcely ranging from -128 ~ 127 , and the binary value is equal */
{
  return __builtin_csky_vmoviuqi(__a);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vmovi_u16 (const int8_t __a, const int32_t __b)
{
  return __builtin_csky_vmoviuv8hiqi(__a, __b);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vmovi_s16 (const int8_t __a, const int32_t __b)
{
  return __builtin_csky_vmovisv8hiqi(__a, __b);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vmovi_u32 (const int8_t __a, const int32_t __b)
{
  return __builtin_csky_vmoviuv4siqi(__a, __b);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vmovi_s32 (const int8_t __a, const int32_t __b)
{
  return __builtin_csky_vmovisv4siqi(__a, __b);
}

__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vmaski_s8_l (const int8_t __a)
{
  return __builtin_csky_vmaskilqi(__a);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vmaski_u8_l (const int8_t __a)
{
  return __builtin_csky_vmaskiluqi(__a);
}

__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vmaski_s8_h (const int8_t __a)
{
  return __builtin_csky_vmaskihqi(__a);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vmaski_u8_h (const int8_t __a)
{
  return __builtin_csky_vmaskihuqi(__a);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vmaski_s16 (const int8_t __a)
{
  return __builtin_csky_vmaskiqi(__a);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vmaski_u16 (const int8_t __a)
{
  return __builtin_csky_vmaskiuqi(__a);
}

/* vand.t */
__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vand_s8 (int8x16_t __a, int8x16_t __b)
{
  return __builtin_csky_vandsv16qi(__a, __b);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vand_s16 (int16x8_t __a, int16x8_t __b)
{
  return __builtin_csky_vandsv8hi(__a, __b);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vand_s32 (int32x4_t __a, int32x4_t __b)
{
  return __builtin_csky_vandsv4si(__a, __b);
}

__extension__ static __inline uint64x2_t __attribute__ ((__always_inline__))
vand_s64 (int64x2_t __a, int64x2_t __b)
{
  return __builtin_csky_vandsv2di(__a, __b);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vand_u8 (uint8x16_t __a, uint8x16_t __b)
{
  return __builtin_csky_vanduv16qi(__a, __b);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vand_u16 (uint16x8_t __a, uint16x8_t __b)
{
  return __builtin_csky_vanduv8hi(__a, __b);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vand_u32 (uint32x4_t __a, uint32x4_t __b)
{
  return __builtin_csky_vanduv4si(__a, __b);
}

__extension__ static __inline uint64x2_t __attribute__ ((__always_inline__))
vand_u64 (uint64x2_t __a, uint64x2_t __b)
{
  return __builtin_csky_vanduv2di(__a, __b);
}

#if defined (__CSKY_VDSPV2_F__)

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vand_f16 (float16x8_t __a, float16x8_t __b)
{
  return __builtin_csky_vandv8hf(__a, __b);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vand_f32 (float32x4_t __a, float32x4_t __b)
{
  return __builtin_csky_vandv4sf(__a, __b);
}

__extension__ static __inline uint64x2_t __attribute__ ((__always_inline__))
vand_f64 (float64x2_t __a, float64x2_t __b)
{
  return __builtin_csky_vandv2df(__a, __b);
}

#endif // __CSKY_VDSPV2_F__

/* vandn.t */
__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vandn_s8 (int8x16_t __a, int8x16_t __b)
{
  return __builtin_csky_vandnsv16qi(__a, __b);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vandn_s16 (int16x8_t __a, int16x8_t __b)
{
  return __builtin_csky_vandnsv8hi(__a, __b);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vandn_s32 (int32x4_t __a, int32x4_t __b)
{
  return __builtin_csky_vandnsv4si(__a, __b);
}

__extension__ static __inline uint64x2_t __attribute__ ((__always_inline__))
vandn_s64 (int64x2_t __a, int64x2_t __b)
{
  return __builtin_csky_vandnsv2di(__a, __b);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vandn_u8 (uint8x16_t __a, uint8x16_t __b)
{
  return __builtin_csky_vandnuv16qi(__a, __b);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vandn_u16 (uint16x8_t __a, uint16x8_t __b)
{
  return __builtin_csky_vandnuv8hi(__a, __b);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vandn_u32 (uint32x4_t __a, uint32x4_t __b)
{
  return __builtin_csky_vandnuv4si(__a, __b);
}

__extension__ static __inline uint64x2_t __attribute__ ((__always_inline__))
vandn_u64 (uint64x2_t __a, uint64x2_t __b)
{
  return __builtin_csky_vandnuv2di(__a, __b);
}

#if defined (__CSKY_VDSPV2_F__)

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vandn_f16 (float16x8_t __a, float16x8_t __b)
{
  return __builtin_csky_vandnv8hf(__a, __b);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vandn_f32 (float32x4_t __a, float32x4_t __b)
{
  return __builtin_csky_vandnv4sf(__a, __b);
}

__extension__ static __inline uint64x2_t __attribute__ ((__always_inline__))
vandn_f64 (float64x2_t __a, float64x2_t __b)
{
  return __builtin_csky_vandnv2df(__a, __b);
}

#endif // __CSKY_VDSPV2_F__

/* vxor.t */
__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vxor_s8 (int8x16_t __a, int8x16_t __b)
{
  return __builtin_csky_vxorsv16qi(__a, __b);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vxor_s16 (int16x8_t __a, int16x8_t __b)
{
  return __builtin_csky_vxorsv8hi(__a, __b);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vxor_s32 (int32x4_t __a, int32x4_t __b)
{
  return __builtin_csky_vxorsv4si(__a, __b);
}

__extension__ static __inline uint64x2_t __attribute__ ((__always_inline__))
vxor_s64 (int64x2_t __a, int64x2_t __b)
{
  return __builtin_csky_vxorsv2di(__a, __b);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vxor_u8 (uint8x16_t __a, uint8x16_t __b)
{
  return __builtin_csky_vxoruv16qi(__a, __b);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vxor_u16 (uint16x8_t __a, uint16x8_t __b)
{
  return __builtin_csky_vxoruv8hi(__a, __b);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vxor_u32 (uint32x4_t __a, uint32x4_t __b)
{
  return __builtin_csky_vxoruv4si(__a, __b);
}

__extension__ static __inline uint64x2_t __attribute__ ((__always_inline__))
vxor_u64 (uint64x2_t __a, uint64x2_t __b)
{
  return __builtin_csky_vxoruv2di(__a, __b);
}

#if defined (__CSKY_VDSPV2_F__)

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vxor_f16 (float16x8_t __a, float16x8_t __b)
{
  return __builtin_csky_vxorv8hf(__a, __b);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vxor_f32 (float32x4_t __a, float32x4_t __b)
{
  return __builtin_csky_vxorv4sf(__a, __b);
}

__extension__ static __inline uint64x2_t __attribute__ ((__always_inline__))
vxor_f64 (float64x2_t __a, float64x2_t __b)
{
  return __builtin_csky_vxorv2df(__a, __b);
}

#endif // __CSKY_VDSPV2_F__

/* vor.t */
__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vor_s8 (int8x16_t __a, int8x16_t __b)
{
  return __builtin_csky_vorsv16qi(__a, __b);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vor_s16 (int16x8_t __a, int16x8_t __b)
{
  return __builtin_csky_vorsv8hi(__a, __b);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vor_s32 (int32x4_t __a, int32x4_t __b)
{
  return __builtin_csky_vorsv4si(__a, __b);
}

__extension__ static __inline uint64x2_t __attribute__ ((__always_inline__))
vor_s64 (int64x2_t __a, int64x2_t __b)
{
  return __builtin_csky_vorsv2di(__a, __b);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vor_u8 (uint8x16_t __a, uint8x16_t __b)
{
  return __builtin_csky_voruv16qi(__a, __b);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vor_u16 (uint16x8_t __a, uint16x8_t __b)
{
  return __builtin_csky_voruv8hi(__a, __b);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vor_u32 (uint32x4_t __a, uint32x4_t __b)
{
  return __builtin_csky_voruv4si(__a, __b);
}

__extension__ static __inline uint64x2_t __attribute__ ((__always_inline__))
vor_u64 (uint64x2_t __a, uint64x2_t __b)
{
  return __builtin_csky_voruv2di(__a, __b);
}

#if defined (__CSKY_VDSPV2_F__)

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vor_f16 (float16x8_t __a, float16x8_t __b)
{
  return __builtin_csky_vorv8hf(__a, __b);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vor_f32 (float32x4_t __a, float32x4_t __b)
{
  return __builtin_csky_vorv4sf(__a, __b);
}

__extension__ static __inline uint64x2_t __attribute__ ((__always_inline__))
vor_f64 (float64x2_t __a, float64x2_t __b)
{
  return __builtin_csky_vorv2df(__a, __b);
}

#endif // __CSKY_VDSPV2_F__

/* vorn.t */
__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vorn_s8 (int8x16_t __a, int8x16_t __b)
{
  return __builtin_csky_vornsv16qi(__a, __b);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vorn_s16 (int16x8_t __a, int16x8_t __b)
{
  return __builtin_csky_vornsv8hi(__a, __b);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vorn_s32 (int32x4_t __a, int32x4_t __b)
{
  return __builtin_csky_vornsv4si(__a, __b);
}

__extension__ static __inline uint64x2_t __attribute__ ((__always_inline__))
vorn_s64 (int64x2_t __a, int64x2_t __b)
{
  return __builtin_csky_vornsv2di(__a, __b);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vorn_u8 (uint8x16_t __a, uint8x16_t __b)
{
  return __builtin_csky_vornuv16qi(__a, __b);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vorn_u16 (uint16x8_t __a, uint16x8_t __b)
{
  return __builtin_csky_vornuv8hi(__a, __b);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vorn_u32 (uint32x4_t __a, uint32x4_t __b)
{
  return __builtin_csky_vornuv4si(__a, __b);
}

__extension__ static __inline uint64x2_t __attribute__ ((__always_inline__))
vorn_u64 (uint64x2_t __a, uint64x2_t __b)
{
  return __builtin_csky_vornuv2di(__a, __b);
}

#if defined (__CSKY_VDSPV2_F__)

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vorn_f16 (float16x8_t __a, float16x8_t __b)
{
  return __builtin_csky_vornv8hf(__a, __b);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vorn_f32 (float32x4_t __a, float32x4_t __b)
{
  return __builtin_csky_vornv4sf(__a, __b);
}

__extension__ static __inline uint64x2_t __attribute__ ((__always_inline__))
vorn_f64 (float64x2_t __a, float64x2_t __b)
{
  return __builtin_csky_vornv2df(__a, __b);
}

#endif // __CSKY_VDSPV2_F__

/* vnot.t */
__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vnot_s8 (int8x16_t __a)
{
  return __builtin_csky_vnotsv16qi(__a);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vnot_s16 (int16x8_t __a)
{
  return __builtin_csky_vnotsv8hi(__a);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vnot_s32 (int32x4_t __a)
{
  return __builtin_csky_vnotsv4si(__a);
}

__extension__ static __inline uint64x2_t __attribute__ ((__always_inline__))
vnot_s64 (int64x2_t __a)
{
  return __builtin_csky_vnotsv2di(__a);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vnot_u8 (uint8x16_t __a)
{
  return __builtin_csky_vnotuv16qi(__a);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vnot_u16 (uint16x8_t __a)
{
  return __builtin_csky_vnotuv8hi(__a);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vnot_u32 (uint32x4_t __a)
{
  return __builtin_csky_vnotuv4si(__a);
}

__extension__ static __inline uint64x2_t __attribute__ ((__always_inline__))
vnot_u64 (uint64x2_t __a)
{
  return __builtin_csky_vnotuv2di(__a);
}

#if defined (__CSKY_VDSPV2_F__)

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vnot_f16 (float16x8_t __a)
{
  return __builtin_csky_vnotv8hf(__a);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vnot_f32 (float32x4_t __a)
{
  return __builtin_csky_vnotv4sf(__a);
}

__extension__ static __inline uint64x2_t __attribute__ ((__always_inline__))
vnot_f64 (float64x2_t __a)
{
  return __builtin_csky_vnotv2df(__a);
}

#endif // __CSKY_VDSPV2_F__

/* vsel.t */
__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vsel_s8 (int8x16_t __a, int8x16_t __b, uint8x16_t __c)
{
  return __builtin_csky_vselsv16qi(__a, __b, __c);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vsel_s16 (int16x8_t __a, int16x8_t __b, uint16x8_t __c)
{
  return __builtin_csky_vselsv8hi(__a, __b, __c);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vsel_s32 (int32x4_t __a, int32x4_t __b, uint32x4_t __c)
{
  return __builtin_csky_vselsv4si(__a, __b, __c);
}

__extension__ static __inline int64x2_t __attribute__ ((__always_inline__))
vsel_s64 (int64x2_t __a, int64x2_t __b, uint64x2_t __c)
{
  return __builtin_csky_vselsv2di(__a, __b, __c);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vsel_u8 (uint8x16_t __a, uint8x16_t __b, uint8x16_t __c)
{
  return __builtin_csky_vseluv16qi(__a, __b, __c);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vsel_u16 (uint16x8_t __a, uint16x8_t __b, uint16x8_t __c)
{
  return __builtin_csky_vseluv8hi(__a, __b, __c);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vsel_u32 (uint32x4_t __a, uint32x4_t __b, uint32x4_t __c)
{
  return __builtin_csky_vseluv4si(__a, __b, __c);
}

__extension__ static __inline uint64x2_t __attribute__ ((__always_inline__))
vsel_u64 (uint64x2_t __a, uint64x2_t __b, uint64x2_t __c)
{
  return __builtin_csky_vseluv2di(__a, __b, __c);
}

#if defined (__CSKY_VDSPV2_F__)

__extension__ static __inline float16x8_t __attribute__ ((__always_inline__))
vsel_f16 (float16x8_t __a, float16x8_t __b, uint16x8_t __c)
{
  return __builtin_csky_vselv8hf(__a, __b, __c);
}

__extension__ static __inline float32x4_t __attribute__ ((__always_inline__))
vsel_f32 (float32x4_t __a, float32x4_t __b, uint32x4_t __c)
{
  return __builtin_csky_vselv4sf(__a, __b, __c);
}

__extension__ static __inline float64x2_t __attribute__ ((__always_inline__))
vsel_f64 (float64x2_t __a, float64x2_t __b, uint64x2_t __c)
{
  return __builtin_csky_vselv2df(__a, __b, __c);
}

#endif // __CSKY_VDSPV2_F__

/* vclz.t */
__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vclz_s8 (int8x16_t __a)
{
  return __builtin_csky_vclzsv16qi(__a);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vclz_s16 (int16x8_t __a)
{
  return __builtin_csky_vclzsv8hi(__a);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vclz_s32 (int32x4_t __a)
{
  return __builtin_csky_vclzsv4si(__a);
}

__extension__ static __inline int64x2_t __attribute__ ((__always_inline__))
vclz_s64 (int64x2_t __a)
{
  return __builtin_csky_vclzsv2di(__a);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vclz_u8 (uint8x16_t __a)
{
  return __builtin_csky_vclzuv16qi(__a);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vclz_u16 (uint16x8_t __a)
{
  return __builtin_csky_vclzuv8hi(__a);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vclz_u32 (uint32x4_t __a)
{
  return __builtin_csky_vclzuv4si(__a);
}

__extension__ static __inline uint64x2_t __attribute__ ((__always_inline__))
vclz_u64 (uint64x2_t __a)
{
  return __builtin_csky_vclzuv2di(__a);
}

#if defined (__CSKY_VDSPV2_F__)

__extension__ static __inline float16x8_t __attribute__ ((__always_inline__))
vclz_f16 (float16x8_t __a)
{
  return __builtin_csky_vclzv8hf(__a);
}

__extension__ static __inline float32x4_t __attribute__ ((__always_inline__))
vclz_f32 (float32x4_t __a)
{
  return __builtin_csky_vclzv4sf(__a);
}

__extension__ static __inline float64x2_t __attribute__ ((__always_inline__))
vclz_f64 (float64x2_t __a)
{
  return __builtin_csky_vclzv2df(__a);
}

#endif // __CSKY_VDSPV2_F__

/* vcnt1.t */
__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vcnt1_s8 (int8x16_t __a)
{
  return __builtin_csky_vcnt1sv16qi(__a);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vcnt1_s16 (int16x8_t __a)
{
  return __builtin_csky_vcnt1sv8hi(__a);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vcnt1_s32 (int32x4_t __a)
{
  return __builtin_csky_vcnt1sv4si(__a);
}

__extension__ static __inline int64x2_t __attribute__ ((__always_inline__))
vcnt1_s64 (int64x2_t __a)
{
  return __builtin_csky_vcnt1sv2di(__a);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vcnt1_u8 (uint8x16_t __a)
{
  return __builtin_csky_vcnt1uv16qi(__a);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vcnt1_u16 (uint16x8_t __a)
{
  return __builtin_csky_vcnt1uv8hi(__a);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vcnt1_u32 (uint32x4_t __a)
{
  return __builtin_csky_vcnt1uv4si(__a);
}

__extension__ static __inline uint64x2_t __attribute__ ((__always_inline__))
vcnt1_u64 (uint64x2_t __a)
{
  return __builtin_csky_vcnt1uv2di(__a);
}

#if defined (__CSKY_VDSPV2_F__)

__extension__ static __inline float16x8_t __attribute__ ((__always_inline__))
vcnt1_f16 (float16x8_t __a)
{
  return __builtin_csky_vcnt1v8hf(__a);
}

__extension__ static __inline float32x4_t __attribute__ ((__always_inline__))
vcnt1_f32 (float32x4_t __a)
{
  return __builtin_csky_vcnt1v4sf(__a);
}

__extension__ static __inline float64x2_t __attribute__ ((__always_inline__))
vcnt1_f64 (float64x2_t __a)
{
  return __builtin_csky_vcnt1v2df(__a);
}

#endif // __CSKY_VDSPV2_F__

/* vtst.t */
__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vtst_s8 (int8x16_t __a, int8x16_t __b)
{
  return __builtin_csky_vtstsv16qi(__a, __b);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vtst_s16 (int16x8_t __a, int16x8_t __b)
{
  return __builtin_csky_vtstsv8hi(__a, __b);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vtst_s32 (int32x4_t __a, int32x4_t __b)
{
  return __builtin_csky_vtstsv4si(__a, __b);
}

__extension__ static __inline uint64x2_t __attribute__ ((__always_inline__))
vtst_s64 (int64x2_t __a, int64x2_t __b)
{
  return __builtin_csky_vtstsv2di(__a, __b);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vtst_u8 (uint8x16_t __a, uint8x16_t __b)
{
  return __builtin_csky_vtstuv16qi(__a, __b);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vtst_u16 (uint16x8_t __a, uint16x8_t __b)
{
  return __builtin_csky_vtstuv8hi(__a, __b);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vtst_u32 (uint32x4_t __a, uint32x4_t __b)
{
  return __builtin_csky_vtstuv4si(__a, __b);
}

__extension__ static __inline uint64x2_t __attribute__ ((__always_inline__))
vtst_u64 (uint64x2_t __a, uint64x2_t __b)
{
  return __builtin_csky_vtstuv2di(__a, __b);
}

#if defined (__CSKY_VDSPV2_F__)

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vtst_f16 (float16x8_t __a, float16x8_t __b)
{
  return __builtin_csky_vtstv8hf(__a, __b);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vtst_f32 (float32x4_t __a, float32x4_t __b)
{
  return __builtin_csky_vtstv4sf(__a, __b);
}

__extension__ static __inline uint64x2_t __attribute__ ((__always_inline__))
vtst_f64 (float64x2_t __a, float64x2_t __b)
{
  return __builtin_csky_vtstv2df(__a, __b);
}

#endif // __CSKY_VDSPV2_F__

/* vcls.t */
__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vcls_s8 (int8x16_t __a)
{
  return __builtin_csky_vclssv16qi(__a);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vcls_s16 (int16x8_t __a)
{
  return __builtin_csky_vclssv8hi(__a);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vcls_s32 (int32x4_t __a)
{
  return __builtin_csky_vclssv4si(__a);
}

__extension__ static __inline int64x2_t __attribute__ ((__always_inline__))
vcls_s64 (int64x2_t __a)
{
  return __builtin_csky_vclssv2di(__a);
}

/* vdupg.t */
__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vdupg_s8 (int8_t __a)
{
  return __builtin_csky_vdupsv16qi(__a);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vdupg_s16 (int16_t __a)
{
  return __builtin_csky_vdupsv8hi(__a);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vdupg_s32 (int32_t __a)
{
  return __builtin_csky_vdupsv4si(__a);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vdupg_u8 (uint8_t __a)
{
  return __builtin_csky_vdupuv16qi(__a);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vdupg_u16 (uint16_t __a)
{
  return __builtin_csky_vdupuv8hi(__a);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vdupg_u32 (uint32_t __a)
{
  return __builtin_csky_vdupuv4si(__a);
}

#if defined (__CSKY_VDSPV2_F__)

__extension__ static __inline float16x8_t __attribute__ ((__always_inline__))
vdupg_f16 (float16_t __a)
{
  return __builtin_csky_vdupgv8hf(__a);
}
__extension__ static __inline float32x4_t __attribute__ ((__always_inline__))
vdupg_f32 (float32_t __a)
{
  return __builtin_csky_vdupgv4sf(__a);
}

#endif // __CSKY_VDSPV2_F__

/* vdup.t.1 */
__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vdup_s8_1 (int8x16_t __a, const int32_t __index)
{
  return __builtin_csky_vdups1v16qi(__a, __index);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vdup_s16_1 (int16x8_t __a, const int32_t __index)
{
  return __builtin_csky_vdups1v8hi(__a, __index);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vdup_s32_1 (int32x4_t __a, const int32_t __index)
{
  return __builtin_csky_vdups1v4si(__a, __index);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vdup_u8_1 (uint8x16_t __a, const int32_t __index)
{
  return __builtin_csky_vdupu1v16qi(__a, __index);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vdup_u16_1 (uint16x8_t __a, const int32_t __index)
{
  return __builtin_csky_vdupu1v8hi(__a, __index);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vdup_u32_1 (uint32x4_t __a, const int32_t __index)
{
  return __builtin_csky_vdupu1v4si(__a, __index);
}

#if defined (__CSKY_VDSPV2_F__)

__extension__ static __inline float16x8_t __attribute__ ((__always_inline__))
vdup_f16_1 (float16x8_t __a, const int32_t __index)
{
  return __builtin_csky_vdup1v8hf(__a, __index);
}
__extension__ static __inline float32x4_t __attribute__ ((__always_inline__))
vdup_f32_1 (float32x4_t __a, const int32_t __index)
{
  return __builtin_csky_vdup1v4sf(__a, __index);
}

#endif // __CSKY_VDSPV2_F__

/* vdup.t.2 */
__extension__ static __inline int8x16x2_t __attribute__ ((__always_inline__))
vdup_s8_2 (int8x16x2_t __a, const int32_t __index)
{
  union { int8x16x2_t __i; __builtin_csky_oi __o;} __rv;
  union { int8x16x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  __rv.__o =  __builtin_csky_vdups2v16qi(__au.__o, __index);
  return __rv.__i;
}

__extension__ static __inline int16x8x2_t __attribute__ ((__always_inline__))
vdup_s16_2 (int16x8x2_t __a, const int32_t __index)
{
  union { int16x8x2_t __i; __builtin_csky_oi __o;} __rv;
  union { int16x8x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  __rv.__o =  __builtin_csky_vdups2v8hi(__au.__o, __index);
  return __rv.__i;
}

__extension__ static __inline int32x4x2_t __attribute__ ((__always_inline__))
vdup_s32_2 (int32x4x2_t __a, const int32_t __index)
{
  union { int32x4x2_t __i; __builtin_csky_oi __o;} __rv;
  union { int32x4x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  __rv.__o =  __builtin_csky_vdups2v4si(__au.__o, __index);
  return __rv.__i;
}

__extension__ static __inline uint8x16x2_t __attribute__ ((__always_inline__))
vdup_u8_2 (uint8x16x2_t __a, const int32_t __index)
{
  union { uint8x16x2_t __i; __builtin_csky_oi __o;} __rv;
  union { uint8x16x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  __rv.__o =  __builtin_csky_vdupu2v16qi(__au.__o, __index);
  return __rv.__i;
}

__extension__ static __inline uint16x8x2_t __attribute__ ((__always_inline__))
vdup_u16_2 (uint16x8x2_t __a, const int32_t __index)
{
  union { uint16x8x2_t __i; __builtin_csky_oi __o;} __rv;
  union { uint16x8x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  __rv.__o =  __builtin_csky_vdupu2v8hi(__au.__o, __index);
  return __rv.__i;
}

__extension__ static __inline uint32x4x2_t __attribute__ ((__always_inline__))
vdup_u32_2 (uint32x4x2_t __a, const int32_t __index)
{
  union { uint32x4x2_t __i; __builtin_csky_oi __o;} __rv;
  union { uint32x4x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  __rv.__o =  __builtin_csky_vdupu2v4si(__au.__o, __index);
  return __rv.__i;
}

#if defined (__CSKY_VDSPV2_F__)

__extension__ static __inline float16x8x2_t __attribute__ ((__always_inline__))
vdup_f16_2 (float16x8x2_t __a, const int32_t __index)
{
  union { float16x8x2_t __i; __builtin_csky_oi __o;} __rv;
  union { float16x8x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  __rv.__o =  __builtin_csky_vdup2v8hf(__au.__o, __index);
  return __rv.__i;
}
__extension__ static __inline float32x4x2_t __attribute__ ((__always_inline__))
vdup_f32_2 (float32x4x2_t __a, const int32_t __index)
{
  union { float32x4x2_t __i; __builtin_csky_oi __o;} __rv;
  union { float32x4x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  __rv.__o =  __builtin_csky_vdup2v4sf(__au.__o, __index);
  return __rv.__i;
}

#endif // __CSKY_VDSPV2_F__

/* vdup.t.3 */
__extension__ static __inline int8x16x3_t __attribute__ ((__always_inline__))
vdup_s8_3 (int8x16x2_t __a, const int32_t __index)
{
  union { int8x16x3_t __i; __builtin_csky_ci __o;} __rv;
  union { int8x16x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  __rv.__o =  __builtin_csky_vdups3v16qi(__au.__o, __index);
  return __rv.__i;
}

__extension__ static __inline int16x8x3_t __attribute__ ((__always_inline__))
vdup_s16_3 (int16x8x2_t __a, const int32_t __index)
{
  union { int16x8x3_t __i; __builtin_csky_ci __o;} __rv;
  union { int16x8x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  __rv.__o =  __builtin_csky_vdups3v8hi(__au.__o, __index);
  return __rv.__i;
}

__extension__ static __inline int32x4x3_t __attribute__ ((__always_inline__))
vdup_s32_3 (int32x4x2_t __a, const int32_t __index)
{
  union { int32x4x3_t __i; __builtin_csky_ci __o;} __rv;
  union { int32x4x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  __rv.__o =  __builtin_csky_vdups3v4si(__au.__o, __index);
  return __rv.__i;
}

__extension__ static __inline uint8x16x3_t __attribute__ ((__always_inline__))
vdup_u8_3 (uint8x16x2_t __a, const int32_t __index)
{
  union { uint8x16x3_t __i; __builtin_csky_ci __o;} __rv;
  union { uint8x16x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  __rv.__o =  __builtin_csky_vdupu3v16qi(__au.__o, __index);
  return __rv.__i;
}

__extension__ static __inline uint16x8x3_t __attribute__ ((__always_inline__))
vdup_u16_3 (uint16x8x2_t __a, const int32_t __index)
{
  union { uint16x8x3_t __i; __builtin_csky_ci __o;} __rv;
  union { uint16x8x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  __rv.__o =  __builtin_csky_vdupu3v8hi(__au.__o, __index);
  return __rv.__i;
}

__extension__ static __inline uint32x4x3_t __attribute__ ((__always_inline__))
vdup_u32_3 (uint32x4x2_t __a, const int32_t __index)
{
  union { uint32x4x3_t __i; __builtin_csky_ci __o;} __rv;
  union { uint32x4x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  __rv.__o =  __builtin_csky_vdupu3v4si(__au.__o, __index);
  return __rv.__i;
}

#if defined (__CSKY_VDSPV2_F__)

__extension__ static __inline float16x8x3_t __attribute__ ((__always_inline__))
vdup_f16_3 (float16x8x2_t __a, const int32_t __index)
{
  union { float16x8x3_t __i; __builtin_csky_ci __o;} __rv;
  union { float16x8x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  __rv.__o =  __builtin_csky_vdup3v8hf(__au.__o, __index);
  return __rv.__i;
}
__extension__ static __inline float32x4x3_t __attribute__ ((__always_inline__))
vdup_f32_3 (float32x4x2_t __a, const int32_t __index)
{
  union { float32x4x3_t __i; __builtin_csky_ci __o;} __rv;
  union { float32x4x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  __rv.__o =  __builtin_csky_vdup3v4sf(__au.__o, __index);
  return __rv.__i;
}

#endif // __CSKY_VDSPV2_F__

/* vdup.t.4 */
__extension__ static __inline int8x16x4_t __attribute__ ((__always_inline__))
vdup_s8_4 (int8x16x2_t __a, const int32_t __index)
{
  union { int8x16x4_t __i; __builtin_csky_xi __o;} __rv;
  union { int8x16x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  __rv.__o =  __builtin_csky_vdups4v16qi(__au.__o, __index);
  return __rv.__i;
}

__extension__ static __inline int16x8x4_t __attribute__ ((__always_inline__))
vdup_s16_4 (int16x8x2_t __a, const int32_t __index)
{
  union { int16x8x4_t __i; __builtin_csky_xi __o;} __rv;
  union { int16x8x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  __rv.__o =  __builtin_csky_vdups4v8hi(__au.__o, __index);
  return __rv.__i;
}

__extension__ static __inline int32x4x4_t __attribute__ ((__always_inline__))
vdup_s32_4 (int32x4x2_t __a, const int32_t __index)
{
  union { int32x4x4_t __i; __builtin_csky_xi __o;} __rv;
  union { int32x4x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  __rv.__o =  __builtin_csky_vdups4v4si(__au.__o, __index);
  return __rv.__i;
}

__extension__ static __inline uint8x16x4_t __attribute__ ((__always_inline__))
vdup_u8_4 (uint8x16x2_t __a, const int32_t __index)
{
  union { uint8x16x4_t __i; __builtin_csky_xi __o;} __rv;
  union { uint8x16x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  __rv.__o =  __builtin_csky_vdupu4v16qi(__au.__o, __index);
  return __rv.__i;
}

__extension__ static __inline uint16x8x4_t __attribute__ ((__always_inline__))
vdup_u16_4 (uint16x8x2_t __a, const int32_t __index)
{
  union { uint16x8x4_t __i; __builtin_csky_xi __o;} __rv;
  union { uint16x8x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  __rv.__o =  __builtin_csky_vdupu4v8hi(__au.__o, __index);
  return __rv.__i;
}

__extension__ static __inline uint32x4x4_t __attribute__ ((__always_inline__))
vdup_u32_4 (uint32x4x2_t __a, const int32_t __index)
{
  union { uint32x4x4_t __i; __builtin_csky_xi __o;} __rv;
  union { uint32x4x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  __rv.__o =  __builtin_csky_vdupu4v4si(__au.__o, __index);
  return __rv.__i;
}

#if defined (__CSKY_VDSPV2_F__)

__extension__ static __inline float16x8x4_t __attribute__ ((__always_inline__))
vdup_f16_4 (float16x8x2_t __a, const int32_t __index)
{
  union { float16x8x4_t __i; __builtin_csky_xi __o;} __rv;
  union { float16x8x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  __rv.__o =  __builtin_csky_vdup4v8hf(__au.__o, __index);
  return __rv.__i;
}
__extension__ static __inline float32x4x4_t __attribute__ ((__always_inline__))
vdup_f32_4 (float32x4x2_t __a, const int32_t __index)
{
  union { float32x4x4_t __i; __builtin_csky_xi __o;} __rv;
  union { float32x4x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  __rv.__o =  __builtin_csky_vdup4v4sf(__au.__o, __index);
  return __rv.__i;
}

#endif // __CSKY_VDSPV2_F__

/* vins.t.1 */
__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vins_s8_1 (int8x16_t __a,int8x16_t __b, const int32_t __index, const int32_t __index2)
{
  return __builtin_csky_vinss1v16qi(__a, __index, __b, __index2);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vins_s16_1 (int16x8_t __a, int16x8_t __b, const int32_t __index, const int32_t __index2)
{
  return __builtin_csky_vinss1v8hi(__a, __index, __b, __index2);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vins_s32_1 (int32x4_t __a, int32x4_t __b, const int32_t __index, const int32_t __index2)
{
  return __builtin_csky_vinss1v4si(__a, __index, __b, __index2);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vins_u8_1 (uint8x16_t __a, uint8x16_t __b, const int32_t __index, const int32_t __index2)
{
  return __builtin_csky_vinsu1v16qi(__a, __index, __b, __index2);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vins_u16_1 (uint16x8_t __a, uint16x8_t __b, const int32_t __index, const int32_t __index2)
{
  return __builtin_csky_vinsu1v8hi(__a, __index, __b, __index2);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vins_u32_1 (uint32x4_t __a, uint32x4_t __b, const int32_t __index, const int32_t __index2)
{
  return __builtin_csky_vinsu1v4si(__a, __index, __b, __index2);
}

#if defined (__CSKY_VDSPV2_F__)

__extension__ static __inline float16x8_t __attribute__ ((__always_inline__))
vins_f16_1 (float16x8_t __a, float16x8_t __b, const int32_t __index, const int32_t __index2)
{
  return __builtin_csky_vins1v8hf(__a, __index, __b, __index2);
}
__extension__ static __inline float32x4_t __attribute__ ((__always_inline__))
vins_f32_1 (float32x4_t __a, float32x4_t __b, const int32_t __index, const int32_t __index2)
{
  return __builtin_csky_vins1v4sf(__a, __index, __b, __index2);
}

#endif // __CSKY_VDSPV2_F__

/* vins.t.2 */
__extension__ static __inline int8x16x2_t __attribute__ ((__always_inline__))
vins_s8_2 (int8x16x2_t __a,int8x16x2_t __b, const int32_t __index, const int32_t __index2)
{
  union { int8x16x2_t __i; __builtin_csky_oi __o;} __rv;
  union { int8x16x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  union { int8x16x2_t __i; __builtin_csky_oi __o;} __bu = { __b};
  __rv.__o =  __builtin_csky_vinss2v16qi(__au.__o, __index, __bu.__o, __index2);
  return __rv.__i;
}

__extension__ static __inline int16x8x2_t __attribute__ ((__always_inline__))
vins_s16_2 (int16x8x2_t __a, int16x8x2_t __b, const int32_t __index, const int32_t __index2)
{
  union { int16x8x2_t __i; __builtin_csky_oi __o;} __rv;
  union { int16x8x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  union { int16x8x2_t __i; __builtin_csky_oi __o;} __bu = { __b};
  __rv.__o =  __builtin_csky_vinss2v8hi(__au.__o, __index, __bu.__o, __index2);
  return __rv.__i;
}

__extension__ static __inline int32x4x2_t __attribute__ ((__always_inline__))
vins_s32_2 (int32x4x2_t __a, int32x4x2_t __b, const int32_t __index, const int32_t __index2)
{
  union { int32x4x2_t __i; __builtin_csky_oi __o;} __rv;
  union { int32x4x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  union { int32x4x2_t __i; __builtin_csky_oi __o;} __bu = { __b};
  __rv.__o =  __builtin_csky_vinss2v4si(__au.__o, __index, __bu.__o, __index2);
  return __rv.__i;
}

__extension__ static __inline uint8x16x2_t __attribute__ ((__always_inline__))
vins_u8_2 (uint8x16x2_t __a, uint8x16x2_t __b, const int32_t __index, const int32_t __index2)
{
  union { uint8x16x2_t __i; __builtin_csky_oi __o;} __rv;
  union { uint8x16x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  union { uint8x16x2_t __i; __builtin_csky_oi __o;} __bu = { __b};
  __rv.__o =  __builtin_csky_vinsu2v16qi(__au.__o, __index, __bu.__o, __index2);
  return __rv.__i;
}

__extension__ static __inline uint16x8x2_t __attribute__ ((__always_inline__))
vins_u16_2 (uint16x8x2_t __a, uint16x8x2_t __b, const int32_t __index, const int32_t __index2)
{
  union { uint16x8x2_t __i; __builtin_csky_oi __o;} __rv;
  union { uint16x8x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  union { uint16x8x2_t __i; __builtin_csky_oi __o;} __bu = { __b};
  __rv.__o =  __builtin_csky_vinsu2v8hi(__au.__o, __index, __bu.__o, __index2);
  return __rv.__i;
}

__extension__ static __inline uint32x4x2_t __attribute__ ((__always_inline__))
vins_u32_2 (uint32x4x2_t __a, uint32x4x2_t __b, const int32_t __index, const int32_t __index2)
{
  union { uint32x4x2_t __i; __builtin_csky_oi __o;} __rv;
  union { uint32x4x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  union { uint32x4x2_t __i; __builtin_csky_oi __o;} __bu = { __b};
  __rv.__o =  __builtin_csky_vinsu2v4si(__au.__o, __index, __bu.__o, __index2);
  return __rv.__i;
}

#if defined (__CSKY_VDSPV2_F__)

__extension__ static __inline float16x8x2_t __attribute__ ((__always_inline__))
vins_f16_2 (float16x8x2_t __a, float16x8x2_t __b, const int32_t __index, const int32_t __index2)
{
  union { float16x8x2_t __i; __builtin_csky_oi __o;} __rv;
  union { float16x8x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  union { float16x8x2_t __i; __builtin_csky_oi __o;} __bu = { __b};
  __rv.__o =  __builtin_csky_vins2v8hf(__au.__o, __index, __bu.__o, __index2);
  return __rv.__i;
}

__extension__ static __inline float32x4x2_t __attribute__ ((__always_inline__))
vins_f32_2 (float32x4x2_t __a, float32x4x2_t __b, const int32_t __index, const int32_t __index2)
{
  union { float32x4x2_t __i; __builtin_csky_oi __o;} __rv;
  union { float32x4x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  union { float32x4x2_t __i; __builtin_csky_oi __o;} __bu = { __b};
  __rv.__o =  __builtin_csky_vins2v4sf(__au.__o, __index, __bu.__o, __index2);
  return __rv.__i;
}

#endif // __CSKY_VDSPV2_F__

/* vins.t.3 */
__extension__ static __inline int8x16x3_t __attribute__ ((__always_inline__))
vins_s8_3 (int8x16x3_t __a,int8x16x2_t __b, const int32_t __index, const int32_t __index2)
{
  union { int8x16x3_t __i; __builtin_csky_ci __o;} __rv;
  union { int8x16x3_t __i; __builtin_csky_ci __o;} __au = { __a};
  union { int8x16x2_t __i; __builtin_csky_oi __o;} __bu = { __b};
  __rv.__o =  __builtin_csky_vinss3v16qi(__au.__o, __index, __bu.__o, __index2);
  return __rv.__i;
}

__extension__ static __inline int16x8x3_t __attribute__ ((__always_inline__))
vins_s16_3 (int16x8x3_t __a, int16x8x2_t __b, const int32_t __index, const int32_t __index2)
{
  union { int16x8x3_t __i; __builtin_csky_ci __o;} __rv;
  union { int16x8x3_t __i; __builtin_csky_ci __o;} __au = { __a};
  union { int16x8x2_t __i; __builtin_csky_oi __o;} __bu = { __b};
  __rv.__o =  __builtin_csky_vinss3v8hi(__au.__o, __index, __bu.__o, __index2);
  return __rv.__i;
}

__extension__ static __inline int32x4x3_t __attribute__ ((__always_inline__))
vins_s32_3 (int32x4x3_t __a, int32x4x2_t __b, const int32_t __index, const int32_t __index2)
{
  union { int32x4x3_t __i; __builtin_csky_ci __o;} __rv;
  union { int32x4x3_t __i; __builtin_csky_ci __o;} __au = { __a};
  union { int32x4x2_t __i; __builtin_csky_oi __o;} __bu = { __b};
  __rv.__o =  __builtin_csky_vinss3v4si(__au.__o, __index, __bu.__o, __index2);
  return __rv.__i;
}

__extension__ static __inline uint8x16x3_t __attribute__ ((__always_inline__))
vins_u8_3 (uint8x16x3_t __a, uint8x16x2_t __b, const int32_t __index, const int32_t __index2)
{
  union { uint8x16x3_t __i; __builtin_csky_ci __o;} __rv;
  union { uint8x16x3_t __i; __builtin_csky_ci __o;} __au = { __a};
  union { uint8x16x2_t __i; __builtin_csky_oi __o;} __bu = { __b};
  __rv.__o =  __builtin_csky_vinsu3v16qi(__au.__o, __index, __bu.__o, __index2);
  return __rv.__i;
}

__extension__ static __inline uint16x8x3_t __attribute__ ((__always_inline__))
vins_u16_3 (uint16x8x3_t __a, uint16x8x2_t __b, const int32_t __index, const int32_t __index2)
{
  union { uint16x8x3_t __i; __builtin_csky_ci __o;} __rv;
  union { uint16x8x3_t __i; __builtin_csky_ci __o;} __au = { __a};
  union { uint16x8x2_t __i; __builtin_csky_oi __o;} __bu = { __b};
  __rv.__o =  __builtin_csky_vinsu3v8hi(__au.__o, __index, __bu.__o, __index2);
  return __rv.__i;
}

__extension__ static __inline uint32x4x3_t __attribute__ ((__always_inline__))
vins_u32_3 (uint32x4x3_t __a, uint32x4x2_t __b, const int32_t __index, const int32_t __index2)
{
  union { uint32x4x3_t __i; __builtin_csky_ci __o;} __rv;
  union { uint32x4x3_t __i; __builtin_csky_ci __o;} __au = { __a};
  union { uint32x4x2_t __i; __builtin_csky_oi __o;} __bu = { __b};
  __rv.__o =  __builtin_csky_vinsu3v4si(__au.__o, __index, __bu.__o, __index2);
  return __rv.__i;
}

#if defined (__CSKY_VDSPV2_F__)

__extension__ static __inline float16x8x3_t __attribute__ ((__always_inline__))
vins_f16_3 (float16x8x3_t __a, float16x8x2_t __b, const int32_t __index, const int32_t __index2)
{
  union { float16x8x3_t __i; __builtin_csky_ci __o;} __rv;
  union { float16x8x3_t __i; __builtin_csky_ci __o;} __au = { __a};
  union { float16x8x2_t __i; __builtin_csky_oi __o;} __bu = { __b};
  __rv.__o =  __builtin_csky_vins3v8hf(__au.__o, __index, __bu.__o, __index2);
  return __rv.__i;
}
__extension__ static __inline float32x4x3_t __attribute__ ((__always_inline__))
vins_f32_3 (float32x4x3_t __a, float32x4x2_t __b, const int32_t __index, const int32_t __index2)
{
  union { float32x4x3_t __i; __builtin_csky_ci __o;} __rv;
  union { float32x4x3_t __i; __builtin_csky_ci __o;} __au = { __a};
  union { float32x4x2_t __i; __builtin_csky_oi __o;} __bu = { __b};
  __rv.__o =  __builtin_csky_vins3v4sf(__au.__o, __index, __bu.__o, __index2);
  return __rv.__i;
}

#endif // __CSKY_VDSPV2_F__

/* vins.t.4 */
__extension__ static __inline int8x16x4_t __attribute__ ((__always_inline__))
vins_s8_4 (int8x16x4_t __a,int8x16x2_t __b, const int32_t __index, const int32_t __index2)
{
  union { int8x16x4_t __i; __builtin_csky_xi __o;} __rv;
  union { int8x16x4_t __i; __builtin_csky_xi __o;} __au = { __a};
  union { int8x16x2_t __i; __builtin_csky_oi __o;} __bu = { __b};
  __rv.__o =  __builtin_csky_vinss4v16qi(__au.__o, __index, __bu.__o, __index2);
  return __rv.__i;
}

__extension__ static __inline int16x8x4_t __attribute__ ((__always_inline__))
vins_s16_4 (int16x8x4_t __a, int16x8x2_t __b, const int32_t __index, const int32_t __index2)
{
  union { int16x8x4_t __i; __builtin_csky_xi __o;} __rv;
  union { int16x8x4_t __i; __builtin_csky_xi __o;} __au = { __a};
  union { int16x8x2_t __i; __builtin_csky_oi __o;} __bu = { __b};
  __rv.__o =  __builtin_csky_vinss4v8hi(__au.__o, __index, __bu.__o, __index2);
  return __rv.__i;
}

__extension__ static __inline int32x4x4_t __attribute__ ((__always_inline__))
vins_s32_4 (int32x4x4_t __a, int32x4x2_t __b, const int32_t __index, const int32_t __index2)
{
  union { int32x4x4_t __i; __builtin_csky_xi __o;} __rv;
  union { int32x4x4_t __i; __builtin_csky_xi __o;} __au = { __a};
  union { int32x4x2_t __i; __builtin_csky_oi __o;} __bu = { __b};
  __rv.__o =  __builtin_csky_vinss4v4si(__au.__o, __index, __bu.__o, __index2);
  return __rv.__i;
}

__extension__ static __inline uint8x16x4_t __attribute__ ((__always_inline__))
vins_u8_4 (uint8x16x4_t __a, uint8x16x2_t __b, const int32_t __index, const int32_t __index2)
{
  union { uint8x16x4_t __i; __builtin_csky_xi __o;} __rv;
  union { uint8x16x4_t __i; __builtin_csky_xi __o;} __au = { __a};
  union { uint8x16x2_t __i; __builtin_csky_oi __o;} __bu = { __b};
  __rv.__o =  __builtin_csky_vinsu4v16qi(__au.__o, __index, __bu.__o, __index2);
  return __rv.__i;
}

__extension__ static __inline uint16x8x4_t __attribute__ ((__always_inline__))
vins_u16_4 (uint16x8x4_t __a, uint16x8x2_t __b, const int32_t __index, const int32_t __index2)
{
  union { uint16x8x4_t __i; __builtin_csky_xi __o;} __rv;
  union { uint16x8x4_t __i; __builtin_csky_xi __o;} __au = { __a};
  union { uint16x8x2_t __i; __builtin_csky_oi __o;} __bu = { __b};
  __rv.__o =  __builtin_csky_vinsu4v8hi(__au.__o, __index, __bu.__o, __index2);
  return __rv.__i;
}

__extension__ static __inline uint32x4x4_t __attribute__ ((__always_inline__))
vins_u32_4 (uint32x4x4_t __a, uint32x4x2_t __b, const int32_t __index, const int32_t __index2)
{
  union { uint32x4x4_t __i; __builtin_csky_xi __o;} __rv;
  union { uint32x4x4_t __i; __builtin_csky_xi __o;} __au = { __a};
  union { uint32x4x2_t __i; __builtin_csky_oi __o;} __bu = { __b};
  __rv.__o =  __builtin_csky_vinsu4v4si(__au.__o, __index, __bu.__o, __index2);
  return __rv.__i;
}

#if defined (__CSKY_VDSPV2_F__)

__extension__ static __inline float16x8x4_t __attribute__ ((__always_inline__))
vins_f16_4 (float16x8x4_t __a, float16x8x2_t __b, const int32_t __index, const int32_t __index2)
{
  union { float16x8x4_t __i; __builtin_csky_xi __o;} __rv;
  union { float16x8x4_t __i; __builtin_csky_xi __o;} __au = { __a};
  union { float16x8x2_t __i; __builtin_csky_oi __o;} __bu = { __b};
  __rv.__o =  __builtin_csky_vins4v8hf(__au.__o, __index, __bu.__o, __index2);
  return __rv.__i;
}
__extension__ static __inline float32x4x4_t __attribute__ ((__always_inline__))
vins_f32_4 (float32x4x4_t __a, float32x4x2_t __b, const int32_t __index, const int32_t __index2)
{
  union { float32x4x4_t __i; __builtin_csky_xi __o;} __rv;
  union { float32x4x4_t __i; __builtin_csky_xi __o;} __au = { __a};
  union { float32x4x2_t __i; __builtin_csky_oi __o;} __bu = { __b};
  __rv.__o =  __builtin_csky_vins4v4sf(__au.__o, __index, __bu.__o, __index2);
  return __rv.__i;
}

#endif // __CSKY_VDSPV2_F__

/* vpkg.t.2 */
__extension__ static __inline int8x16x2_t __attribute__ ((__always_inline__))
vpkg_s8_2 (int8x16x2_t __a,int8x16x2_t __b, const int32_t __index, const int32_t __index2)
{
  union { int8x16x2_t __i; __builtin_csky_oi __o;} __rv;
  union { int8x16x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  union { int8x16x2_t __i; __builtin_csky_oi __o;} __bu = { __b};
  __rv.__o =  __builtin_csky_vpkgs2v16qi(__au.__o, __index, __bu.__o, __index2);
  return __rv.__i;
}

__extension__ static __inline int16x8x2_t __attribute__ ((__always_inline__))
vpkg_s16_2 (int16x8x2_t __a, int16x8x2_t __b, const int32_t __index, const int32_t __index2)
{
  union { int16x8x2_t __i; __builtin_csky_oi __o;} __rv;
  union { int16x8x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  union { int16x8x2_t __i; __builtin_csky_oi __o;} __bu = { __b};
  __rv.__o =  __builtin_csky_vpkgs2v8hi(__au.__o, __index, __bu.__o, __index2);
  return __rv.__i;
}

__extension__ static __inline int32x4x2_t __attribute__ ((__always_inline__))
vpkg_s32_2 (int32x4x2_t __a, int32x4x2_t __b, const int32_t __index, const int32_t __index2)
{
  union { int32x4x2_t __i; __builtin_csky_oi __o;} __rv;
  union { int32x4x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  union { int32x4x2_t __i; __builtin_csky_oi __o;} __bu = { __b};
  __rv.__o =  __builtin_csky_vpkgs2v4si(__au.__o, __index, __bu.__o, __index2);
  return __rv.__i;
}

__extension__ static __inline uint8x16x2_t __attribute__ ((__always_inline__))
vpkg_u8_2 (uint8x16x2_t __a, uint8x16x2_t __b, const int32_t __index, const int32_t __index2)
{
  union { uint8x16x2_t __i; __builtin_csky_oi __o;} __rv;
  union { uint8x16x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  union { uint8x16x2_t __i; __builtin_csky_oi __o;} __bu = { __b};
  __rv.__o =  __builtin_csky_vpkgu2v16qi(__au.__o, __index, __bu.__o, __index2);
  return __rv.__i;
}

__extension__ static __inline uint16x8x2_t __attribute__ ((__always_inline__))
vpkg_u16_2 (uint16x8x2_t __a, uint16x8x2_t __b, const int32_t __index, const int32_t __index2)
{
  union { uint16x8x2_t __i; __builtin_csky_oi __o;} __rv;
  union { uint16x8x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  union { uint16x8x2_t __i; __builtin_csky_oi __o;} __bu = { __b};
  __rv.__o =  __builtin_csky_vpkgu2v8hi(__au.__o, __index, __bu.__o, __index2);
  return __rv.__i;
}

__extension__ static __inline uint32x4x2_t __attribute__ ((__always_inline__))
vpkg_u32_2 (uint32x4x2_t __a, uint32x4x2_t __b, const int32_t __index, const int32_t __index2)
{
  union { uint32x4x2_t __i; __builtin_csky_oi __o;} __rv;
  union { uint32x4x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  union { uint32x4x2_t __i; __builtin_csky_oi __o;} __bu = { __b};
  __rv.__o =  __builtin_csky_vpkgu2v4si(__au.__o, __index, __bu.__o, __index2);
  return __rv.__i;
}

#if defined (__CSKY_VDSPV2_F__)

__extension__ static __inline float16x8x2_t __attribute__ ((__always_inline__))
vpkg_f16_2 (float16x8x2_t __a, float16x8x2_t __b, const int32_t __index, const int32_t __index2)
{
  union { float16x8x2_t __i; __builtin_csky_oi __o;} __rv;
  union { float16x8x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  union { float16x8x2_t __i; __builtin_csky_oi __o;} __bu = { __b};
  __rv.__o =  __builtin_csky_vpkg2v8hf(__au.__o, __index, __bu.__o, __index2);
  return __rv.__i;
}
__extension__ static __inline float32x4x2_t __attribute__ ((__always_inline__))
vpkg_f32_2 (float32x4x2_t __a, float32x4x2_t __b, const int32_t __index, const int32_t __index2)
{
  union { float32x4x2_t __i; __builtin_csky_oi __o;} __rv;
  union { float32x4x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  union { float32x4x2_t __i; __builtin_csky_oi __o;} __bu = { __b};
  __rv.__o =  __builtin_csky_vpkg2v4sf(__au.__o, __index, __bu.__o, __index2);
  return __rv.__i;
}

#endif // __CSKY_VDSPV2_F__

/* vpkg.t.3 */
__extension__ static __inline int8x16x2_t __attribute__ ((__always_inline__))
vpkg_s8_3 (int8x16x2_t __a,int8x16x3_t __b, const int32_t __index, const int32_t __index2)
{
  union { int8x16x2_t __i; __builtin_csky_oi __o;} __rv;
  union { int8x16x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  union { int8x16x3_t __i; __builtin_csky_ci __o;} __bu = { __b};
  __rv.__o =  __builtin_csky_vpkgs3v16qi(__au.__o, __index, __bu.__o, __index2);
  return __rv.__i;
}

__extension__ static __inline int16x8x2_t __attribute__ ((__always_inline__))
vpkg_s16_3 (int16x8x2_t __a, int16x8x3_t __b, const int32_t __index, const int32_t __index2)
{
  union { int16x8x2_t __i; __builtin_csky_oi __o;} __rv;
  union { int16x8x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  union { int16x8x3_t __i; __builtin_csky_ci __o;} __bu = { __b};
  __rv.__o =  __builtin_csky_vpkgs3v8hi(__au.__o, __index, __bu.__o, __index2);
  return __rv.__i;
}

__extension__ static __inline int32x4x2_t __attribute__ ((__always_inline__))
vpkg_s32_3 (int32x4x2_t __a, int32x4x3_t __b, const int32_t __index, const int32_t __index2)
{
  union { int32x4x2_t __i; __builtin_csky_oi __o;} __rv;
  union { int32x4x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  union { int32x4x3_t __i; __builtin_csky_ci __o;} __bu = { __b};
  __rv.__o =  __builtin_csky_vpkgs3v4si(__au.__o, __index, __bu.__o, __index2);
  return __rv.__i;
}

__extension__ static __inline uint8x16x2_t __attribute__ ((__always_inline__))
vpkg_u8_3 (uint8x16x2_t __a, uint8x16x3_t __b, const int32_t __index, const int32_t __index2)
{
  union { uint8x16x2_t __i; __builtin_csky_oi __o;} __rv;
  union { uint8x16x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  union { uint8x16x3_t __i; __builtin_csky_ci __o;} __bu = { __b};
  __rv.__o =  __builtin_csky_vpkgu3v16qi(__au.__o, __index, __bu.__o, __index2);
  return __rv.__i;
}

__extension__ static __inline uint16x8x2_t __attribute__ ((__always_inline__))
vpkg_u16_3 (uint16x8x2_t __a, uint16x8x3_t __b, const int32_t __index, const int32_t __index2)
{
  union { uint16x8x2_t __i; __builtin_csky_oi __o;} __rv;
  union { uint16x8x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  union { uint16x8x3_t __i; __builtin_csky_ci __o;} __bu = { __b};
  __rv.__o =  __builtin_csky_vpkgu3v8hi(__au.__o, __index, __bu.__o, __index2);
  return __rv.__i;
}

__extension__ static __inline uint32x4x2_t __attribute__ ((__always_inline__))
vpkg_u32_3 (uint32x4x2_t __a, uint32x4x3_t __b, const int32_t __index, const int32_t __index2)
{
  union { uint32x4x2_t __i; __builtin_csky_oi __o;} __rv;
  union { uint32x4x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  union { uint32x4x3_t __i; __builtin_csky_ci __o;} __bu = { __b};
  __rv.__o =  __builtin_csky_vpkgu3v4si(__au.__o, __index, __bu.__o, __index2);
  return __rv.__i;
}

#if defined (__CSKY_VDSPV2_F__)

__extension__ static __inline float16x8x2_t __attribute__ ((__always_inline__))
vpkg_f16_3 (float16x8x2_t __a, float16x8x3_t __b, const int32_t __index, const int32_t __index2)
{
  union { float16x8x2_t __i; __builtin_csky_oi __o;} __rv;
  union { float16x8x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  union { float16x8x3_t __i; __builtin_csky_ci __o;} __bu = { __b};
  __rv.__o =  __builtin_csky_vpkg3v8hf(__au.__o, __index, __bu.__o, __index2);
  return __rv.__i;
}

__extension__ static __inline float32x4x2_t __attribute__ ((__always_inline__))
vpkg_f32_3 (float32x4x2_t __a, float32x4x3_t __b, const int32_t __index, const int32_t __index2)
{
  union { float32x4x2_t __i; __builtin_csky_oi __o;} __rv;
  union { float32x4x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  union { float32x4x3_t __i; __builtin_csky_ci __o;} __bu = { __b};
  __rv.__o =  __builtin_csky_vpkg3v4sf(__au.__o, __index, __bu.__o, __index2);
  return __rv.__i;
}

#endif // __CSKY_VDSPV2_F__

/* vpkg.t.4 */
__extension__ static __inline int8x16x2_t __attribute__ ((__always_inline__))
vpkg_s8_4 (int8x16x2_t __a,int8x16x4_t __b, const int32_t __index, const int32_t __index2)
{
  union { int8x16x2_t __i; __builtin_csky_oi __o;} __rv;
  union { int8x16x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  union { int8x16x4_t __i; __builtin_csky_xi __o;} __bu = { __b};
  __rv.__o =  __builtin_csky_vpkgs4v16qi(__au.__o, __index, __bu.__o, __index2);
  return __rv.__i;
}

__extension__ static __inline int16x8x2_t __attribute__ ((__always_inline__))
vpkg_s16_4 (int16x8x2_t __a, int16x8x4_t __b, const int32_t __index, const int32_t __index2)
{
  union { int16x8x2_t __i; __builtin_csky_oi __o;} __rv;
  union { int16x8x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  union { int16x8x4_t __i; __builtin_csky_xi __o;} __bu = { __b};
  __rv.__o =  __builtin_csky_vpkgs4v8hi(__au.__o, __index, __bu.__o, __index2);
  return __rv.__i;
}

__extension__ static __inline int32x4x2_t __attribute__ ((__always_inline__))
vpkg_s32_4 (int32x4x2_t __a, int32x4x4_t __b, const int32_t __index, const int32_t __index2)
{
  union { int32x4x2_t __i; __builtin_csky_oi __o;} __rv;
  union { int32x4x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  union { int32x4x4_t __i; __builtin_csky_xi __o;} __bu = { __b};
  __rv.__o =  __builtin_csky_vpkgs4v4si(__au.__o, __index, __bu.__o, __index2);
  return __rv.__i;
}

__extension__ static __inline uint8x16x2_t __attribute__ ((__always_inline__))
vpkg_u8_4 (uint8x16x2_t __a, uint8x16x4_t __b, const int32_t __index, const int32_t __index2)
{
  union { uint8x16x2_t __i; __builtin_csky_oi __o;} __rv;
  union { uint8x16x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  union { uint8x16x4_t __i; __builtin_csky_xi __o;} __bu = { __b};
  __rv.__o =  __builtin_csky_vpkgu4v16qi(__au.__o, __index, __bu.__o, __index2);
  return __rv.__i;
}

__extension__ static __inline uint16x8x2_t __attribute__ ((__always_inline__))
vpkg_u16_4 (uint16x8x2_t __a, uint16x8x4_t __b, const int32_t __index, const int32_t __index2)
{
  union { uint16x8x2_t __i; __builtin_csky_oi __o;} __rv;
  union { uint16x8x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  union { uint16x8x4_t __i; __builtin_csky_xi __o;} __bu = { __b};
  __rv.__o =  __builtin_csky_vpkgu4v8hi(__au.__o, __index, __bu.__o, __index2);
  return __rv.__i;
}

__extension__ static __inline uint32x4x2_t __attribute__ ((__always_inline__))
vpkg_u32_4 (uint32x4x2_t __a, uint32x4x4_t __b, const int32_t __index, const int32_t __index2)
{
  union { uint32x4x2_t __i; __builtin_csky_oi __o;} __rv;
  union { uint32x4x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  union { uint32x4x4_t __i; __builtin_csky_xi __o;} __bu = { __b};
  __rv.__o =  __builtin_csky_vpkgu4v4si(__au.__o, __index, __bu.__o, __index2);
  return __rv.__i;
}

#if defined (__CSKY_VDSPV2_F__)

__extension__ static __inline float16x8x2_t __attribute__ ((__always_inline__))
vpkg_f16_4 (float16x8x2_t __a, float16x8x4_t __b, const int32_t __index, const int32_t __index2)
{
  union { float16x8x2_t __i; __builtin_csky_oi __o;} __rv;
  union { float16x8x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  union { float16x8x4_t __i; __builtin_csky_xi __o;} __bu = { __b};
  __rv.__o =  __builtin_csky_vpkg4v8hf(__au.__o, __index, __bu.__o, __index2);
  return __rv.__i;
}

__extension__ static __inline float32x4x2_t __attribute__ ((__always_inline__))
vpkg_f32_4 (float32x4x2_t __a, float32x4x4_t __b, const int32_t __index, const int32_t __index2)
{
  union { float32x4x2_t __i; __builtin_csky_oi __o;} __rv;
  union { float32x4x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  union { float32x4x4_t __i; __builtin_csky_xi __o;} __bu = { __b};
  __rv.__o =  __builtin_csky_vpkg4v4sf(__au.__o, __index, __bu.__o, __index2);
  return __rv.__i;
}

#endif // __CSKY_VDSPV2_F__

/* vitl.t.2 */
__extension__ static __inline int8x16x2_t __attribute__ ((__always_inline__))
vitl_s8_2 (int8x16x2_t __a)
{
  union { int8x16x2_t __i; __builtin_csky_oi __o;} __rv;
  union { int8x16x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  __rv.__o =  __builtin_csky_vitls2v16qi(__au.__o);
  return __rv.__i;
}

__extension__ static __inline int16x8x2_t __attribute__ ((__always_inline__))
vitl_s16_2 (int16x8x2_t __a)
{
  union { int16x8x2_t __i; __builtin_csky_oi __o;} __rv;
  union { int16x8x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  __rv.__o =  __builtin_csky_vitls2v8hi(__au.__o);
  return __rv.__i;
}

__extension__ static __inline int32x4x2_t __attribute__ ((__always_inline__))
vitl_s32_2 (int32x4x2_t __a)
{
  union { int32x4x2_t __i; __builtin_csky_oi __o;} __rv;
  union { int32x4x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  __rv.__o =  __builtin_csky_vitls2v4si(__au.__o);
  return __rv.__i;
}

__extension__ static __inline uint8x16x2_t __attribute__ ((__always_inline__))
vitl_u8_2 (uint8x16x2_t __a)
{
  union { uint8x16x2_t __i; __builtin_csky_oi __o;} __rv;
  union { uint8x16x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  __rv.__o =  __builtin_csky_vitlu2v16qi(__au.__o);
  return __rv.__i;
}

__extension__ static __inline uint16x8x2_t __attribute__ ((__always_inline__))
vitl_u16_2 (uint16x8x2_t __a)
{
  union { uint16x8x2_t __i; __builtin_csky_oi __o;} __rv;
  union { uint16x8x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  __rv.__o =  __builtin_csky_vitlu2v8hi(__au.__o);
  return __rv.__i;
}

__extension__ static __inline uint32x4x2_t __attribute__ ((__always_inline__))
vitl_u32_2 (uint32x4x2_t __a)
{
  union { uint32x4x2_t __i; __builtin_csky_oi __o;} __rv;
  union { uint32x4x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  __rv.__o =  __builtin_csky_vitlu2v4si(__au.__o);
  return __rv.__i;
}

#if defined (__CSKY_VDSPV2_F__)

__extension__ static __inline float16x8x2_t __attribute__ ((__always_inline__))
vitl_f16_2 (float16x8x2_t __a)
{
  union { float16x8x2_t __i; __builtin_csky_oi __o;} __rv;
  union { float16x8x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  __rv.__o =  __builtin_csky_vitl2v8hf(__au.__o);
  return __rv.__i;
}

__extension__ static __inline float32x4x2_t __attribute__ ((__always_inline__))
vitl_f32_2 (float32x4x2_t __a)
{
  union { float32x4x2_t __i; __builtin_csky_oi __o;} __rv;
  union { float32x4x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  __rv.__o =  __builtin_csky_vitl2v4sf(__au.__o);
  return __rv.__i;
}

#endif // __CSKY_VDSPV2_F__

/* vdtl.t.2 */
__extension__ static __inline int8x16x2_t __attribute__ ((__always_inline__))
vdtl_s8_2 (int8x16x2_t __a)
{
  union { int8x16x2_t __i; __builtin_csky_oi __o;} __rv;
  union { int8x16x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  __rv.__o =  __builtin_csky_vdtls2v16qi(__au.__o);
  return __rv.__i;
}

__extension__ static __inline int16x8x2_t __attribute__ ((__always_inline__))
vdtl_s16_2 (int16x8x2_t __a)
{
  union { int16x8x2_t __i; __builtin_csky_oi __o;} __rv;
  union { int16x8x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  __rv.__o =  __builtin_csky_vdtls2v8hi(__au.__o);
  return __rv.__i;
}

__extension__ static __inline int32x4x2_t __attribute__ ((__always_inline__))
vdtl_s32_2 (int32x4x2_t __a)
{
  union { int32x4x2_t __i; __builtin_csky_oi __o;} __rv;
  union { int32x4x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  __rv.__o =  __builtin_csky_vdtls2v4si(__au.__o);
  return __rv.__i;
}

__extension__ static __inline uint8x16x2_t __attribute__ ((__always_inline__))
vdtl_u8_2 (uint8x16x2_t __a)
{
  union { uint8x16x2_t __i; __builtin_csky_oi __o;} __rv;
  union { uint8x16x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  __rv.__o =  __builtin_csky_vdtlu2v16qi(__au.__o);
  return __rv.__i;
}

__extension__ static __inline uint16x8x2_t __attribute__ ((__always_inline__))
vdtl_u16_2 (uint16x8x2_t __a)
{
  union { uint16x8x2_t __i; __builtin_csky_oi __o;} __rv;
  union { uint16x8x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  __rv.__o =  __builtin_csky_vdtlu2v8hi(__au.__o);
  return __rv.__i;
}

__extension__ static __inline uint32x4x2_t __attribute__ ((__always_inline__))
vdtl_u32_2 (uint32x4x2_t __a)
{
  union { uint32x4x2_t __i; __builtin_csky_oi __o;} __rv;
  union { uint32x4x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  __rv.__o =  __builtin_csky_vdtlu2v4si(__au.__o);
  return __rv.__i;
}

#if defined (__CSKY_VDSPV2_F__)

__extension__ static __inline float16x8x2_t __attribute__ ((__always_inline__))
vdtl_f16_2 (float16x8x2_t __a)
{
  union { float16x8x2_t __i; __builtin_csky_oi __o;} __rv;
  union { float16x8x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  __rv.__o =  __builtin_csky_vdtl2v8hf(__au.__o);
  return __rv.__i;
}
__extension__ static __inline float32x4x2_t __attribute__ ((__always_inline__))
vdtl_f32_2 (float32x4x2_t __a)
{
  union { float32x4x2_t __i; __builtin_csky_oi __o;} __rv;
  union { float32x4x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  __rv.__o =  __builtin_csky_vdtl2v4sf(__au.__o);
  return __rv.__i;
}

#endif // __CSKY_VDSPV2_F__

/* Vector Load/Store */
/* vld.t.1 */
__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vld_s8_1 (const int8_t* __a, const int32_t __offset)
{
  return __builtin_csky_vld1v16qi((int32_t)__a, __offset);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vld_s16_1 (const int16_t* __a, const int32_t __offset)
{
  return __builtin_csky_vld1v8hi((int32_t)__a, __offset);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vld_s32_1 (const int32_t* __a, const int32_t __offset)
{
  return __builtin_csky_vld1v4si((int32_t)__a, __offset);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vld_u8_1 (const uint8_t* __a, const int32_t __offset)
{
  return (uint8x16_t)__builtin_csky_vld1v16qi((int32_t)__a, __offset);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vld_u16_1 (const uint16_t* __a, const int32_t __offset)
{
  return (uint16x8_t)__builtin_csky_vld1v8hi((int32_t)__a, __offset);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vld_u32_1 (const uint32_t* __a, const int32_t __offset)
{
  return (uint32x4_t)__builtin_csky_vld1v4si((int32_t)__a, __offset);
}

#if defined (__CSKY_VDSPV2_F__)

__extension__ static __inline float16x8_t __attribute__ ((__always_inline__))
vld_f16_1 (const float16_t* __a, const int32_t __offset)
{
  return __builtin_csky_vld1v8hf((int32_t)__a, __offset);
}

__extension__ static __inline float32x4_t __attribute__ ((__always_inline__))
vld_f32_1 (const float32_t* __a, const int32_t __offset)
{
  return __builtin_csky_vld1v4sf((int32_t)__a, __offset);
}

#endif // __CSKY_VDSPV2_F__

/* vld.t.2 */
__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vld_s8_2 (const int8_t* __a, const int32_t __offset)
{
  return __builtin_csky_vld2v16qi((int32_t)__a, __offset);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vld_s16_2 (const int16_t* __a, const int32_t __offset)
{
  return __builtin_csky_vld2v8hi((int32_t)__a, __offset);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vld_s32_2 (const int32_t* __a, const int32_t __offset)
{
  return __builtin_csky_vld2v4si((int32_t)__a, __offset);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vld_u8_2 (const uint8_t* __a, const int32_t __offset)
{
  return (uint8x16_t)__builtin_csky_vld2v16qi((int32_t)__a, __offset);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vld_u16_2 (const uint16_t* __a, const int32_t __offset)
{
  return (uint16x8_t)__builtin_csky_vld2v8hi((int32_t)__a, __offset);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vld_u32_2 (const uint32_t* __a, const int32_t __offset)
{
  return (uint32x4_t)__builtin_csky_vld2v4si((int32_t)__a, __offset);
}

#if defined (__CSKY_VDSPV2_F__)

__extension__ static __inline float16x8_t __attribute__ ((__always_inline__))
vld_f16_2 (const float16_t* __a, const int32_t __offset)
{
  return __builtin_csky_vld2v8hf((int32_t)__a, __offset);
}

__extension__ static __inline float32x4_t __attribute__ ((__always_inline__))
vld_f32_2 (const float32_t* __a, const int32_t __offset)
{
  return __builtin_csky_vld2v4sf((int32_t)__a, __offset);
}

#endif // __CSKY_VDSPV2_F__

/* vld.t.3 */
__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vld_s8_3 (const int8_t* __a, const int32_t __offset)
{
  return __builtin_csky_vld3v16qi((int32_t)__a, __offset);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vld_s16_3 (const int16_t* __a, const int32_t __offset)
{
  return __builtin_csky_vld3v8hi((int32_t)__a, __offset);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vld_s32_3 (const int32_t* __a, const int32_t __offset)
{
  return __builtin_csky_vld3v4si((int32_t)__a, __offset);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vld_u8_3 (const uint8_t* __a, const int32_t __offset)
{
  return (uint8x16_t)__builtin_csky_vld3v16qi((int32_t)__a, __offset);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vld_u16_3 (uint16_t* __a, const int32_t __offset)
{
  return (const uint16x8_t)__builtin_csky_vld3v8hi((int32_t)__a, __offset);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vld_u32_3 (const uint32_t* __a, const int32_t __offset)
{
  return (uint32x4_t)__builtin_csky_vld3v4si((int32_t)__a, __offset);
}

#if defined (__CSKY_VDSPV2_F__)

__extension__ static __inline float16x8_t __attribute__ ((__always_inline__))
vld_f16_3 (const float16_t* __a, const int32_t __offset)
{
  return __builtin_csky_vld3v8hf((int32_t)__a, __offset);
}

__extension__ static __inline float32x4_t __attribute__ ((__always_inline__))
vld_f32_3 (const float32_t* __a, const int32_t __offset)
{
  return __builtin_csky_vld3v4sf((int32_t)__a, __offset);
}

#endif // __CSKY_VDSPV2_F__

/* vld.t.4 */
__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vld_s8_4 (const int8_t* __a, const int32_t __offset)
{
  return __builtin_csky_vld4v16qi((int32_t)__a, __offset);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vld_s16_4 (const int16_t* __a, const int32_t __offset)
{
  return __builtin_csky_vld4v8hi((int32_t)__a, __offset);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vld_s32_4 (const int32_t* __a, const int32_t __offset)
{
  return __builtin_csky_vld4v4si((int32_t)__a, __offset);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vld_u8_4 (const uint8_t* __a, const int32_t __offset)
{
  return (uint8x16_t)__builtin_csky_vld4v16qi((int32_t)__a, __offset);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vld_u16_4 (const uint16_t* __a, const int32_t __offset)
{
  return (uint16x8_t)__builtin_csky_vld4v8hi((int32_t)__a, __offset);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vld_u32_4 (const uint32_t* __a, const int32_t __offset)
{
  return (uint32x4_t)__builtin_csky_vld4v4si((int32_t)__a, __offset);
}

#if defined (__CSKY_VDSPV2_F__)

__extension__ static __inline float16x8_t __attribute__ ((__always_inline__))
vld_f16_4 (const float16_t* __a, const int32_t __offset)
{
  return __builtin_csky_vld4v8hf((int32_t)__a, __offset);
}

__extension__ static __inline float32x4_t __attribute__ ((__always_inline__))
vld_f32_4 (const float32_t* __a, const int32_t __offset)
{
  return __builtin_csky_vld4v4sf((int32_t)__a, __offset);
}

#endif // __CSKY_VDSPV2_F__

/* vldru.t.1 */
__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vldru_s8_1 (const int8_t* __a, int32_t __b)
{
  return __builtin_csky_vldru1v16qi((int32_t)__a, __b);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vldru_s16_1 (const int16_t* __a, int32_t __b)
{
  return __builtin_csky_vldru1v8hi((int32_t)__a, __b);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vldru_s32_1 (const int32_t* __a, int32_t __b)
{
  return __builtin_csky_vldru1v4si((int32_t)__a, __b);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vldru_u8_1 (const uint8_t* __a, uint32_t __b)
{
  return (uint8x16_t)__builtin_csky_vldru1v16qi((int32_t)__a, (int32_t)__b);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vldru_u16_1 (const uint16_t* __a, uint32_t __b)
{
  return (uint16x8_t)__builtin_csky_vldru1v8hi((int32_t)__a, (int32_t)__b);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vldru_u32_1 (const uint32_t* __a, uint32_t __b)
{
  return (uint32x4_t)__builtin_csky_vldru1v4si((int32_t)__a, (int32_t)__b);
}

#if defined (__CSKY_VDSPV2_F__)

__extension__ static __inline float16x8_t __attribute__ ((__always_inline__))
vldru_f16_1 (const float16_t* __a, int32_t __b)
{
  return __builtin_csky_vldru1v8hf((int32_t)__a, __b);
}

__extension__ static __inline float32x4_t __attribute__ ((__always_inline__))
vldru_f32_1 (const float32_t* __a, int32_t __b)
{
  return __builtin_csky_vldru1v4sf((int32_t)__a, __b);
}

#endif // __CSKY_VDSPV2_F__

/* vldru.t.2 */
__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vldru_s8_2 (const int8_t* __a, int32_t __b)
{
  return __builtin_csky_vldru2v16qi((int32_t)__a, __b);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vldru_s16_2 (const int16_t* __a, int32_t __b)
{
  return __builtin_csky_vldru2v8hi((int32_t)__a, __b);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vldru_s32_2 (const int32_t* __a, int32_t __b)
{
  return __builtin_csky_vldru2v4si((int32_t)__a, __b);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vldru_u8_2 (const uint8_t* __a, uint32_t __b)
{
  return (uint8x16_t)__builtin_csky_vldru2v16qi((int32_t)__a, (int32_t)__b);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vldru_u16_2 (const uint16_t* __a, uint32_t __b)
{
  return (uint16x8_t)__builtin_csky_vldru2v8hi((int32_t)__a, (int32_t)__b);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vldru_u32_2 (const uint32_t* __a, uint32_t __b)
{
  return (uint32x4_t)__builtin_csky_vldru2v4si((int32_t)__a, (int32_t)__b);
}

#if defined (__CSKY_VDSPV2_F__)

__extension__ static __inline float16x8_t __attribute__ ((__always_inline__))
vldru_f16_2 (const float16_t* __a, int32_t __b)
{
  return __builtin_csky_vldru2v8hf((int32_t)__a, __b);
}

__extension__ static __inline float32x4_t __attribute__ ((__always_inline__))
vldru_f32_2 (const float32_t* __a, int32_t __b)
{
  return __builtin_csky_vldru2v4sf((int32_t)__a, __b);
}

#endif // __CSKY_VDSPV2_F__

/* vldru.t.3 */
__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vldru_s8_3 (const int8_t* __a, int32_t __b)
{
  return __builtin_csky_vldru3v16qi((int32_t)__a, __b);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vldru_s16_3 (const int16_t* __a, int32_t __b)
{
  return __builtin_csky_vldru3v8hi((int32_t)__a, __b);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vldru_s32_3 (const int32_t* __a, int32_t __b)
{
  return __builtin_csky_vldru3v4si((int32_t)__a, __b);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vldru_u8_3 (const uint8_t* __a, uint32_t __b)
{
  return (uint8x16_t)__builtin_csky_vldru3v16qi((int32_t)__a, (int32_t)__b);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vldru_u16_3 (const uint16_t* __a, uint32_t __b)
{
  return (uint16x8_t)__builtin_csky_vldru3v8hi((int32_t)__a, (int32_t)__b);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vldru_u32_3 (const uint32_t* __a, uint32_t __b)
{
  return (uint32x4_t)__builtin_csky_vldru3v4si((int32_t)__a, (int32_t)__b);
}

#if defined (__CSKY_VDSPV2_F__)

__extension__ static __inline float16x8_t __attribute__ ((__always_inline__))
vldru_f16_3 (const float16_t* __a, int32_t __b)
{
  return __builtin_csky_vldru3v8hf((int32_t)__a, __b);
}

__extension__ static __inline float32x4_t __attribute__ ((__always_inline__))
vldru_f32_3 (const float32_t* __a, int32_t __b)
{
  return __builtin_csky_vldru3v4sf((int32_t)__a, __b);
}

#endif // __CSKY_VDSPV2_F__

/* vldru.t.4 */
__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vldru_s8_4 (const int8_t* __a, int32_t __b)
{
  return __builtin_csky_vldru4v16qi((int32_t)__a, __b);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vldru_s16_4 (const int16_t* __a, int32_t __b)
{
  return __builtin_csky_vldru4v8hi((int32_t)__a, __b);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vldru_s32_4 (const int32_t* __a, int32_t __b)
{
  return __builtin_csky_vldru4v4si((int32_t)__a, __b);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vldru_u8_4 (const uint8_t* __a, uint32_t __b)
{
  return (uint8x16_t)__builtin_csky_vldru4v16qi((int32_t)__a, (int32_t)__b);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vldru_u16_4 (const uint16_t* __a, uint32_t __b)
{
  return (uint16x8_t)__builtin_csky_vldru4v8hi((int32_t)__a, (int32_t)__b);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vldru_u32_4 (const uint32_t* __a, uint32_t __b)
{
  return (uint32x4_t)__builtin_csky_vldru4v4si((int32_t)__a, (int32_t)__b);
}

#if defined (__CSKY_VDSPV2_F__)

__extension__ static __inline float16x8_t __attribute__ ((__always_inline__))
vldru_f16_4 (const float16_t* __a, int32_t __b)
{
  return __builtin_csky_vldru4v8hf((int32_t)__a, __b);
}

__extension__ static __inline float32x4_t __attribute__ ((__always_inline__))
vldru_f32_4 (const float32_t* __a, int32_t __b)
{
  return __builtin_csky_vldru4v4sf((int32_t)__a, __b);
}

#endif // __CSKY_VDSPV2_F__

/* vldu.t.1 */
__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vldu_s8_1 (const int8_t* __a)
{
  return __builtin_csky_vldu1v16qi((int32_t)__a);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vldu_s16_1 (const int16_t* __a)
{
  return __builtin_csky_vldu1v8hi((int32_t)__a);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vldu_s32_1 (const int32_t* __a)
{
  return __builtin_csky_vldu1v4si((int32_t)__a);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vldu_u8_1 (const uint8_t* __a)
{
  return (uint8x16_t)__builtin_csky_vldu1v16qi((int32_t)__a);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vldu_u16_1 (const uint16_t* __a)
{
  return (uint16x8_t)__builtin_csky_vldu1v8hi((int32_t)__a);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vldu_u32_1 (const uint32_t* __a)
{
  return (uint32x4_t)__builtin_csky_vldu1v4si((int32_t)__a);
}

#if defined (__CSKY_VDSPV2_F__)

__extension__ static __inline float16x8_t __attribute__ ((__always_inline__))
vldu_f16_1 (const float16_t* __a)
{
  return __builtin_csky_vldu1v8hf((int32_t)__a);
}

__extension__ static __inline float32x4_t __attribute__ ((__always_inline__))
vldu_f32_1 (const float32_t* __a)
{
  return __builtin_csky_vldu1v4sf((int32_t)__a);
}

#endif // __CSKY_VDSPV2_F__

/* vldu.t.2 */
__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vldu_s8_2 (const int8_t* __a)
{
  return __builtin_csky_vldu2v16qi((int32_t)__a);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vldu_s16_2 (const int16_t* __a)
{
  return __builtin_csky_vldu2v8hi((int32_t)__a);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vldu_s32_2 (const int32_t* __a)
{
  return __builtin_csky_vldu2v4si((int32_t)__a);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vldu_u8_2 (const uint8_t* __a)
{
  return (uint8x16_t)__builtin_csky_vldu2v16qi((int32_t)__a);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vldu_u16_2 (const uint16_t* __a)
{
  return (uint16x8_t)__builtin_csky_vldu2v8hi((int32_t)__a);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vldu_u32_2 (const uint32_t* __a)
{
  return (uint32x4_t)__builtin_csky_vldu2v4si((int32_t)__a);
}

#if defined (__CSKY_VDSPV2_F__)

__extension__ static __inline float16x8_t __attribute__ ((__always_inline__))
vldu_f16_2 (const float16_t* __a)
{
  return __builtin_csky_vldu2v8hf((int32_t)__a);
}

__extension__ static __inline float32x4_t __attribute__ ((__always_inline__))
vldu_f32_2 (const float32_t* __a)
{
  return __builtin_csky_vldu2v4sf((int32_t)__a);
}

#endif // __CSKY_VDSPV2_F__

/* vldu.t.3 */
__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vldu_s8_3 (const int8_t* __a)
{
  return __builtin_csky_vldu3v16qi((int32_t)__a);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vldu_s16_3 (const int16_t* __a)
{
  return __builtin_csky_vldu3v8hi((int32_t)__a);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vldu_s32_3 (const int32_t* __a)
{
  return __builtin_csky_vldu3v4si((int32_t)__a);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vldu_u8_3 (const uint8_t* __a)
{
  return (uint8x16_t)__builtin_csky_vldu3v16qi((int32_t)__a);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vldu_u16_3 (const uint16_t* __a)
{
  return (uint16x8_t)__builtin_csky_vldu3v8hi((int32_t)__a);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vldu_u32_3 (const uint32_t* __a)
{
  return (uint32x4_t)__builtin_csky_vldu3v4si((int32_t)__a);
}

#if defined (__CSKY_VDSPV2_F__)

__extension__ static __inline float16x8_t __attribute__ ((__always_inline__))
vldu_f16_3 (const float16_t* __a)
{
  return __builtin_csky_vldu3v8hf((int32_t)__a);
}

__extension__ static __inline float32x4_t __attribute__ ((__always_inline__))
vldu_f32_3 (const float32_t* __a)
{
  return __builtin_csky_vldu3v4sf((int32_t)__a);
}

#endif // __CSKY_VDSPV2_F__

/* vldu.t.4 */
__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vldu_s8_4 (const int8_t* __a)
{
  return __builtin_csky_vldu4v16qi((int32_t)__a);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vldu_s16_4 (const int16_t* __a)
{
  return __builtin_csky_vldu4v8hi((int32_t)__a);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vldu_s32_4 (const int32_t* __a)
{
  return __builtin_csky_vldu4v4si((int32_t)__a);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vldu_u8_4 (const uint8_t* __a)
{
  return (uint8x16_t)__builtin_csky_vldu4v16qi((int32_t)__a);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vldu_u16_4 (const uint16_t* __a)
{
  return (uint16x8_t)__builtin_csky_vldu4v8hi((int32_t)__a);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vldu_u32_4 (const uint32_t* __a)
{
  return (uint32x4_t)__builtin_csky_vldu4v4si((int32_t)__a);
}

#if defined (__CSKY_VDSPV2_F__)

__extension__ static __inline float16x8_t __attribute__ ((__always_inline__))
vldu_f16_4 (const float16_t* __a)
{
  return __builtin_csky_vldu4v8hf((int32_t)__a);
}

__extension__ static __inline float32x4_t __attribute__ ((__always_inline__))
vldu_f32_4 (const float32_t* __a)
{
  return __builtin_csky_vldu4v4sf((int32_t)__a);
}

#endif // __CSKY_VDSPV2_F__

/* vldm.t */
__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vld1_s8 (const int8_t* __a)
{
  return __builtin_csky_vldmv16qi((int32_t)__a);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vld1_s16 (const int16_t* __a)
{
  return __builtin_csky_vldmv8hi((int32_t)__a);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vld1_s32 (const int32_t* __a)
{
  return __builtin_csky_vldmv4si((int32_t)__a);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vld1_u8 (const uint8_t* __a)
{
  return (uint8x16_t)__builtin_csky_vldmv16qi((int32_t)__a);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vld1_u16 (const uint16_t* __a)
{
  return (uint16x8_t)__builtin_csky_vldmv8hi((int32_t)__a);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vld1_u32 (const uint32_t* __a)
{
  return (uint32x4_t)__builtin_csky_vldmv4si((int32_t)__a);
}

#if defined (__CSKY_VDSPV2_F__)

__extension__ static __inline float16x8_t __attribute__ ((__always_inline__))
vld1_f16 (const float16_t* __a)
{
  return __builtin_csky_vldmv8hf((int32_t)__a);
}

__extension__ static __inline float32x4_t __attribute__ ((__always_inline__))
vld1_f32 (const float32_t* __a)
{
  return __builtin_csky_vldmv4sf((int32_t)__a);
}

#endif // __CSKY_VDSPV2_F__

__extension__ static __inline int8x16x2_t __attribute__ ((__always_inline__))
vld2_s8 (const int8_t* __a)
{
  union { int8x16x2_t __i; __builtin_csky_oi __o;} __rv;
  __rv.__o = __builtin_csky_vldm128x2v16qi((int32_t)__a);
  return __rv.__i;
}

__extension__ static __inline int16x8x2_t __attribute__ ((__always_inline__))
vld2_s16 (const int16_t* __a)
{
  union { int16x8x2_t __i; __builtin_csky_oi __o;} __rv;
  __rv.__o = __builtin_csky_vldm128x2v8hi((int32_t)__a);
  return __rv.__i;
}

__extension__ static __inline int32x4x2_t __attribute__ ((__always_inline__))
vld2_s32 (const int32_t* __a)
{
  union { int32x4x2_t __i; __builtin_csky_oi __o;} __rv;
  __rv.__o = __builtin_csky_vldm128x2v4si((int32_t)__a);
  return __rv.__i;
}

__extension__ static __inline uint8x16x2_t __attribute__ ((__always_inline__))
vld2_u8 (const uint8_t* __a)
{
  union { uint8x16x2_t __i; __builtin_csky_oi __o;} __rv;
  __rv.__o = __builtin_csky_vldm128x2v16qi((int32_t)__a);
  return __rv.__i;
}

__extension__ static __inline uint16x8x2_t __attribute__ ((__always_inline__))
vld2_u16 (const uint16_t* __a)
{
  union { uint16x8x2_t __i; __builtin_csky_oi __o;} __rv;
  __rv.__o = __builtin_csky_vldm128x2v8hi((int32_t)__a);
  return __rv.__i;
}

__extension__ static __inline uint32x4x2_t __attribute__ ((__always_inline__))
vld2_u32 (const uint32_t* __a)
{
  union { uint32x4x2_t __i; __builtin_csky_oi __o;} __rv;
  __rv.__o = __builtin_csky_vldm128x2v4si((int32_t)__a);
  return __rv.__i;
}

#if defined (__CSKY_VDSPV2_F__)

__extension__ static __inline float16x8x2_t __attribute__ ((__always_inline__))
vld2_f16 (const float16_t* __a)
{
  union { float16x8x2_t __i; __builtin_csky_oi __o;} __rv;
  __rv.__o = __builtin_csky_vldm128x2v8hf((int32_t)__a);
  return __rv.__i;
}

__extension__ static __inline float32x4x2_t __attribute__ ((__always_inline__))
vld2_f32 (const float32_t* __a)
{
  union { float32x4x2_t __i; __builtin_csky_oi __o;} __rv;
  __rv.__o = __builtin_csky_vldm128x2v4sf((int32_t)__a);
  return __rv.__i;
}

#endif // __CSKY_VDSPV2_F__

__extension__ static __inline int8x16x3_t __attribute__ ((__always_inline__))
vld3_s8 (const int8_t* __a)
{
  union { int8x16x3_t __i; __builtin_csky_ci __o;} __rv;
  __rv.__o = __builtin_csky_vldm128x3v16qi((int32_t)__a);
  return __rv.__i;
}

__extension__ static __inline int16x8x3_t __attribute__ ((__always_inline__))
vld3_s16 (const int16_t* __a)
{
  union { int16x8x3_t __i; __builtin_csky_ci __o;} __rv;
  __rv.__o = __builtin_csky_vldm128x3v8hi((int32_t)__a);
  return __rv.__i;
}

__extension__ static __inline int32x4x3_t __attribute__ ((__always_inline__))
vld3_s32 (const int32_t* __a)
{
  union { int32x4x3_t __i; __builtin_csky_ci __o;} __rv;
  __rv.__o = __builtin_csky_vldm128x3v4si((int32_t)__a);
  return __rv.__i;
}

__extension__ static __inline uint8x16x3_t __attribute__ ((__always_inline__))
vld3_u8 (const uint8_t* __a)
{
  union { uint8x16x3_t __i; __builtin_csky_ci __o;} __rv;
  __rv.__o = __builtin_csky_vldm128x3v16qi((int32_t)__a);
  return __rv.__i;
}

__extension__ static __inline uint16x8x3_t __attribute__ ((__always_inline__))
vld3_u16 (const uint16_t* __a)
{
  union { uint16x8x3_t __i; __builtin_csky_ci __o;} __rv;
  __rv.__o = __builtin_csky_vldm128x3v8hi((int32_t)__a);
  return __rv.__i;
}

__extension__ static __inline uint32x4x3_t __attribute__ ((__always_inline__))
vld3_u32 (const uint32_t* __a)
{
  union { uint32x4x3_t __i; __builtin_csky_ci __o;} __rv;
  __rv.__o = __builtin_csky_vldm128x3v4si((int32_t)__a);
  return __rv.__i;
}

#if defined (__CSKY_VDSPV2_F__)

__extension__ static __inline float16x8x3_t __attribute__ ((__always_inline__))
vld3_f16 (const float16_t* __a)
{
  union { float16x8x3_t __i; __builtin_csky_ci __o;} __rv;
  __rv.__o = __builtin_csky_vldm128x3v8hf((int32_t)__a);
  return __rv.__i;
}

__extension__ static __inline float32x4x3_t __attribute__ ((__always_inline__))
vld3_f32 (const float32_t* __a)
{
  union { float32x4x3_t __i; __builtin_csky_ci __o;} __rv;
  __rv.__o = __builtin_csky_vldm128x3v4sf((int32_t)__a);
  return __rv.__i;
}

#endif // __CSKY_VDSPV2_F__

__extension__ static __inline int8x16x4_t __attribute__ ((__always_inline__))
vld4_s8 (const int8_t* __a)
{
  union { int8x16x4_t __i; __builtin_csky_xi __o;} __rv;
  __rv.__o = __builtin_csky_vldm128x4v16qi((int32_t)__a);
  return __rv.__i;
}

__extension__ static __inline int16x8x4_t __attribute__ ((__always_inline__))
vld4_s16 (const int16_t* __a)
{
  union { int16x8x4_t __i; __builtin_csky_xi __o;} __rv;
  __rv.__o = __builtin_csky_vldm128x4v8hi((int32_t)__a);
  return __rv.__i;
}

__extension__ static __inline int32x4x4_t __attribute__ ((__always_inline__))
vld4_s32 (const int32_t* __a)
{
  union { int32x4x4_t __i; __builtin_csky_xi __o;} __rv;
  __rv.__o = __builtin_csky_vldm128x4v4si((int32_t)__a);
  return __rv.__i;
}

__extension__ static __inline uint8x16x4_t __attribute__ ((__always_inline__))
vld4_u8 (const uint8_t* __a)
{
  union { uint8x16x4_t __i; __builtin_csky_xi __o;} __rv;
  __rv.__o = __builtin_csky_vldm128x4v16qi((int32_t)__a);
  return __rv.__i;
}

__extension__ static __inline uint16x8x4_t __attribute__ ((__always_inline__))
vld4_u16 (const uint16_t* __a)
{
  union { uint16x8x4_t __i; __builtin_csky_xi __o;} __rv;
  __rv.__o = __builtin_csky_vldm128x4v8hi((int32_t)__a);
  return __rv.__i;
}

__extension__ static __inline uint32x4x4_t __attribute__ ((__always_inline__))
vld4_u32 (const uint32_t* __a)
{
  union { uint32x4x4_t __i; __builtin_csky_xi __o;} __rv;
  __rv.__o = __builtin_csky_vldm128x4v4si((int32_t)__a);
  return __rv.__i;
}

#if defined (__CSKY_VDSPV2_F__)

__extension__ static __inline float16x8x4_t __attribute__ ((__always_inline__))
vld4_f16 (const float16_t* __a)
{
  union { float16x8x4_t __i; __builtin_csky_xi __o;} __rv;
  __rv.__o = __builtin_csky_vldm128x4v8hf((int32_t)__a);
  return __rv.__i;
}

__extension__ static __inline float32x4x4_t __attribute__ ((__always_inline__))
vld4_f32 (const float32_t* __a)
{
  union { float32x4x4_t __i; __builtin_csky_xi __o;} __rv;
  __rv.__o = __builtin_csky_vldm128x4v4sf((int32_t)__a);
  return __rv.__i;
}

#endif // __CSKY_VDSPV2_F__

/* vldmu.t */
__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vld1u_s8 (const int8_t* __a)
{
  return __builtin_csky_vldmuv16qi((int32_t)__a);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vld1u_s16 (const int16_t* __a)
{
  return __builtin_csky_vldmuv8hi((int32_t)__a);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vld1u_s32 (const int32_t* __a)
{
  return __builtin_csky_vldmuv4si((int32_t)__a);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vld1u_u8 (const uint8_t* __a)
{
  return (uint8x16_t)__builtin_csky_vldmuv16qi((int32_t)__a);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vld1u_u16 (const uint16_t* __a)
{
  return (uint16x8_t)__builtin_csky_vldmuv8hi((int32_t)__a);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vld1u_u32 (const uint32_t* __a)
{
  return (uint32x4_t)__builtin_csky_vldmuv4si((int32_t)__a);
}

#if defined (__CSKY_VDSPV2_F__)

__extension__ static __inline float16x8_t __attribute__ ((__always_inline__))
vld1u_f16 (const float16_t* __a)
{
  return __builtin_csky_vldmuv8hf((int32_t)__a);
}

__extension__ static __inline float32x4_t __attribute__ ((__always_inline__))
vld1u_f32 (const float32_t* __a)
{
  return __builtin_csky_vldmuv4sf((int32_t)__a);
}

#endif // __CSKY_VDSPV2_F__

__extension__ static __inline int8x16x2_t __attribute__ ((__always_inline__))
vld2u_s8 (const int8_t* __a)
{
  union { int8x16x2_t __i; __builtin_csky_oi __o;} __rv;
  __rv.__o = __builtin_csky_vldmu128x2v16qi((int32_t)__a);
  return __rv.__i;
}

__extension__ static __inline int16x8x2_t __attribute__ ((__always_inline__))
vld2u_s16 (const int16_t* __a)
{
  union { int16x8x2_t __i; __builtin_csky_oi __o;} __rv;
  __rv.__o = __builtin_csky_vldmu128x2v8hi((int32_t)__a);
  return __rv.__i;
}

__extension__ static __inline int32x4x2_t __attribute__ ((__always_inline__))
vld2u_s32 (const int32_t* __a)
{
  union { int32x4x2_t __i; __builtin_csky_oi __o;} __rv;
  __rv.__o = __builtin_csky_vldmu128x2v4si((int32_t)__a);
  return __rv.__i;
}

__extension__ static __inline uint8x16x2_t __attribute__ ((__always_inline__))
vld2u_u8 (const uint8_t* __a)
{
  union { uint8x16x2_t __i; __builtin_csky_oi __o;} __rv;
  __rv.__o = __builtin_csky_vldmu128x2v16qi((int32_t)__a);
  return __rv.__i;
}

__extension__ static __inline uint16x8x2_t __attribute__ ((__always_inline__))
vld2u_u16 (const uint16_t* __a)
{
  union { uint16x8x2_t __i; __builtin_csky_oi __o;} __rv;
  __rv.__o = __builtin_csky_vldmu128x2v8hi((int32_t)__a);
  return __rv.__i;
}

__extension__ static __inline uint32x4x2_t __attribute__ ((__always_inline__))
vld2u_u32 (const uint32_t* __a)
{
  union { uint32x4x2_t __i; __builtin_csky_oi __o;} __rv;
  __rv.__o = __builtin_csky_vldmu128x2v4si((int32_t)__a);
  return __rv.__i;
}

#if defined (__CSKY_VDSPV2_F__)

__extension__ static __inline float16x8x2_t __attribute__ ((__always_inline__))
vld2u_f16 (const float16_t* __a)
{
  union { float16x8x2_t __i; __builtin_csky_oi __o;} __rv;
  __rv.__o = __builtin_csky_vldmu128x2v8hf((int32_t)__a);
  return __rv.__i;
}

__extension__ static __inline float32x4x2_t __attribute__ ((__always_inline__))
vld2u_f32 (const float32_t* __a)
{
  union { float32x4x2_t __i; __builtin_csky_oi __o;} __rv;
  __rv.__o = __builtin_csky_vldmu128x2v4sf((int32_t)__a);
  return __rv.__i;
}

#endif // __CSKY_VDSPV2_F__

__extension__ static __inline int8x16x3_t __attribute__ ((__always_inline__))
vld3u_s8 (const int8_t* __a)
{
  union { int8x16x3_t __i; __builtin_csky_ci __o;} __rv;
  __rv.__o = __builtin_csky_vldmu128x3v16qi((int32_t)__a);
  return __rv.__i;
}

__extension__ static __inline int16x8x3_t __attribute__ ((__always_inline__))
vld3u_s16 (const int16_t* __a)
{
  union { int16x8x3_t __i; __builtin_csky_ci __o;} __rv;
  __rv.__o = __builtin_csky_vldmu128x3v8hi((int32_t)__a);
  return __rv.__i;
}

__extension__ static __inline int32x4x3_t __attribute__ ((__always_inline__))
vld3u_s32 (const int32_t* __a)
{
  union { int32x4x3_t __i; __builtin_csky_ci __o;} __rv;
  __rv.__o = __builtin_csky_vldmu128x3v4si((int32_t)__a);
  return __rv.__i;
}

__extension__ static __inline uint8x16x3_t __attribute__ ((__always_inline__))
vld3u_u8 (const uint8_t* __a)
{
  union { uint8x16x3_t __i; __builtin_csky_ci __o;} __rv;
  __rv.__o = __builtin_csky_vldmu128x3v16qi((int32_t)__a);
  return __rv.__i;
}

__extension__ static __inline uint16x8x3_t __attribute__ ((__always_inline__))
vld3u_u16 (const uint16_t* __a)
{
  union { uint16x8x3_t __i; __builtin_csky_ci __o;} __rv;
  __rv.__o = __builtin_csky_vldmu128x3v8hi((int32_t)__a);
  return __rv.__i;
}

__extension__ static __inline uint32x4x3_t __attribute__ ((__always_inline__))
vld3u_u32 (const uint32_t* __a)
{
  union { uint32x4x3_t __i; __builtin_csky_ci __o;} __rv;
  __rv.__o = __builtin_csky_vldmu128x3v4si((int32_t)__a);
  return __rv.__i;
}

#if defined (__CSKY_VDSPV2_F__)

__extension__ static __inline float16x8x3_t __attribute__ ((__always_inline__))
vld3u_f16 (const float16_t* __a)
{
  union { float16x8x3_t __i; __builtin_csky_ci __o;} __rv;
  __rv.__o = __builtin_csky_vldmu128x3v8hf((int32_t)__a);
  return __rv.__i;
}

__extension__ static __inline float32x4x3_t __attribute__ ((__always_inline__))
vld3u_f32 (const float32_t* __a)
{
  union { float32x4x3_t __i; __builtin_csky_ci __o;} __rv;
  __rv.__o = __builtin_csky_vldmu128x3v4sf((int32_t)__a);
  return __rv.__i;
}

#endif // __CSKY_VDSPV2_F__

__extension__ static __inline int8x16x4_t __attribute__ ((__always_inline__))
vld4u_s8 (const int8_t* __a)
{
  union { int8x16x4_t __i; __builtin_csky_xi __o;} __rv;
  __rv.__o = __builtin_csky_vldmu128x4v16qi((int32_t)__a);
  return __rv.__i;
}

__extension__ static __inline int16x8x4_t __attribute__ ((__always_inline__))
vld4u_s16 (const int16_t* __a)
{
  union { int16x8x4_t __i; __builtin_csky_xi __o;} __rv;
  __rv.__o = __builtin_csky_vldmu128x4v8hi((int32_t)__a);
  return __rv.__i;
}

__extension__ static __inline int32x4x4_t __attribute__ ((__always_inline__))
vld4u_s32 (const int32_t* __a)
{
  union { int32x4x4_t __i; __builtin_csky_xi __o;} __rv;
  __rv.__o = __builtin_csky_vldmu128x4v4si((int32_t)__a);
  return __rv.__i;
}

__extension__ static __inline uint8x16x4_t __attribute__ ((__always_inline__))
vld4u_u8 (const uint8_t* __a)
{
  union { uint8x16x4_t __i; __builtin_csky_xi __o;} __rv;
  __rv.__o = __builtin_csky_vldmu128x4v16qi((int32_t)__a);
  return __rv.__i;
}

__extension__ static __inline uint16x8x4_t __attribute__ ((__always_inline__))
vld4u_u16 (const uint16_t* __a)
{
  union { uint16x8x4_t __i; __builtin_csky_xi __o;} __rv;
  __rv.__o = __builtin_csky_vldmu128x4v8hi((int32_t)__a);
  return __rv.__i;
}

__extension__ static __inline uint32x4x4_t __attribute__ ((__always_inline__))
vld4u_u32 (const uint32_t* __a)
{
  union { uint32x4x4_t __i; __builtin_csky_xi __o;} __rv;
  __rv.__o = __builtin_csky_vldmu128x4v4si((int32_t)__a);
  return __rv.__i;
}

#if defined (__CSKY_VDSPV2_F__)

__extension__ static __inline float16x8x4_t __attribute__ ((__always_inline__))
vld4u_f16 (const float16_t* __a)
{
  union { float16x8x4_t __i; __builtin_csky_xi __o;} __rv;
  __rv.__o = __builtin_csky_vldmu128x4v8hf((int32_t)__a);
  return __rv.__i;
}

__extension__ static __inline float32x4x4_t __attribute__ ((__always_inline__))
vld4u_f32 (const float32_t* __a)
{
  union { float32x4x4_t __i; __builtin_csky_xi __o;} __rv;
  __rv.__o = __builtin_csky_vldmu128x4v4sf((int32_t)__a);
  return __rv.__i;
}

#endif // __CSKY_VDSPV2_F__

/* vldmru.t */
__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vld1ru_s8 (const int8_t* __a, int32_t __b)
{
  return __builtin_csky_vldmruv16qi((int32_t)__a, __b);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vld1ru_s16 (const int16_t* __a, int32_t __b)
{
  return __builtin_csky_vldmruv8hi((int32_t)__a, __b);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vld1ru_s32 (const int32_t* __a, int32_t __b)
{
  return __builtin_csky_vldmruv4si((int32_t)__a, __b);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vld1ru_u8 (const uint8_t* __a, uint32_t __b)
{
  return (uint8x16_t)__builtin_csky_vldmruv16qi((int32_t)__a, (int32_t)__b);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vld1ru_u16 (const uint16_t* __a, uint32_t __b)
{
  return (uint16x8_t)__builtin_csky_vldmruv8hi((int32_t)__a, (int32_t)__b);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vld1ru_u32 (const uint32_t* __a, uint32_t __b)
{
  return (uint32x4_t)__builtin_csky_vldmruv4si((int32_t)__a, (int32_t)__b);
}

#if defined (__CSKY_VDSPV2_F__)

__extension__ static __inline float16x8_t __attribute__ ((__always_inline__))
vld1ru_f16 (const float16_t* __a, int32_t __b)
{
  return __builtin_csky_vldmruv8hf((int32_t)__a, __b);
}

__extension__ static __inline float32x4_t __attribute__ ((__always_inline__))
vld1ru_f32 (const float32_t* __a, int32_t __b)
{
  return __builtin_csky_vldmruv4sf((int32_t)__a, __b);
}

#endif // __CSKY_VDSPV2_F__

__extension__ static __inline int8x16x2_t __attribute__ ((__always_inline__))
vld2ru_s8 (const int8_t* __a, int32_t __b)
{
  union { int8x16x2_t __i; __builtin_csky_oi __o;} __rv;
  __rv.__o = __builtin_csky_vldmru128x2v16qi((int32_t)__a, __b);
  return __rv.__i;
}

__extension__ static __inline int16x8x2_t __attribute__ ((__always_inline__))
vld2ru_s16 (const int16_t* __a, int32_t __b)
{
  union { int16x8x2_t __i; __builtin_csky_oi __o;} __rv;
  __rv.__o = __builtin_csky_vldmru128x2v8hi((int32_t)__a, __b);
  return __rv.__i;
}

__extension__ static __inline int32x4x2_t __attribute__ ((__always_inline__))
vld2ru_s32 (const int32_t* __a, int32_t __b)
{
  union { int32x4x2_t __i; __builtin_csky_oi __o;} __rv;
  __rv.__o = __builtin_csky_vldmru128x2v4si((int32_t)__a, __b);
  return __rv.__i;
}

__extension__ static __inline uint8x16x2_t __attribute__ ((__always_inline__))
vld2ru_u8 (const uint8_t* __a, uint32_t __b)
{
  union { uint8x16x2_t __i; __builtin_csky_oi __o;} __rv;
  __rv.__o = __builtin_csky_vldmru128x2v16qi((int32_t)__a, (int32_t)__b);
  return __rv.__i;
}

__extension__ static __inline uint16x8x2_t __attribute__ ((__always_inline__))
vld2ru_u16 (const uint16_t* __a, uint32_t __b)
{
  union { uint16x8x2_t __i; __builtin_csky_oi __o;} __rv;
  __rv.__o = __builtin_csky_vldmru128x2v8hi((int32_t)__a, (int32_t)__b);
  return __rv.__i;
}

__extension__ static __inline uint32x4x2_t __attribute__ ((__always_inline__))
vld2ru_u32 (const uint32_t* __a, uint32_t __b)
{
  union { uint32x4x2_t __i; __builtin_csky_oi __o;} __rv;
  __rv.__o = __builtin_csky_vldmru128x2v4si((int32_t)__a, (int32_t)__b);
  return __rv.__i;
}

#if defined (__CSKY_VDSPV2_F__)

__extension__ static __inline float16x8x2_t __attribute__ ((__always_inline__))
vld2ru_f16 (const float16_t* __a, int32_t __b)
{
  union { float16x8x2_t __i; __builtin_csky_oi __o;} __rv;
  __rv.__o = __builtin_csky_vldmru128x2v8hf((int32_t)__a, __b);
  return __rv.__i;
}

__extension__ static __inline float32x4x2_t __attribute__ ((__always_inline__))
vld2ru_f32 (const float32_t* __a, int32_t __b)
{
  union { float32x4x2_t __i; __builtin_csky_oi __o;} __rv;
  __rv.__o = __builtin_csky_vldmru128x2v4sf((int32_t)__a, __b);
  return __rv.__i;
}

#endif // __CSKY_VDSPV2_F__

__extension__ static __inline int8x16x3_t __attribute__ ((__always_inline__))
vld3ru_s8 (const int8_t* __a, int32_t __b)
{
  union { int8x16x3_t __i; __builtin_csky_ci __o;} __rv;
  __rv.__o = __builtin_csky_vldmru128x3v16qi((int32_t)__a, __b);
  return __rv.__i;
}

__extension__ static __inline int16x8x3_t __attribute__ ((__always_inline__))
vld3ru_s16 (const int16_t* __a, int32_t __b)
{
  union { int16x8x3_t __i; __builtin_csky_ci __o;} __rv;
  __rv.__o = __builtin_csky_vldmru128x3v8hi((int32_t)__a, __b);
  return __rv.__i;
}

__extension__ static __inline int32x4x3_t __attribute__ ((__always_inline__))
vld3ru_s32 (const int32_t* __a, int32_t __b)
{
  union { int32x4x3_t __i; __builtin_csky_ci __o;} __rv;
  __rv.__o = __builtin_csky_vldmru128x3v4si((int32_t)__a, __b);
  return __rv.__i;
}

__extension__ static __inline uint8x16x3_t __attribute__ ((__always_inline__))
vld3ru_u8 (const uint8_t* __a, uint32_t __b)
{
  union { uint8x16x3_t __i; __builtin_csky_ci __o;} __rv;
  __rv.__o = __builtin_csky_vldmru128x3v16qi((int32_t)__a, (int32_t)__b);
  return __rv.__i;
}

__extension__ static __inline uint16x8x3_t __attribute__ ((__always_inline__))
vld3ru_u16 (const uint16_t* __a, uint32_t __b)
{
  union { uint16x8x3_t __i; __builtin_csky_ci __o;} __rv;
  __rv.__o = __builtin_csky_vldmru128x3v8hi((int32_t)__a, (int32_t)__b);
  return __rv.__i;
}

__extension__ static __inline uint32x4x3_t __attribute__ ((__always_inline__))
vld3ru_u32 (const uint32_t* __a, uint32_t __b)
{
  union { uint32x4x3_t __i; __builtin_csky_ci __o;} __rv;
  __rv.__o = __builtin_csky_vldmru128x3v4si((int32_t)__a, (int32_t)__b);
  return __rv.__i;
}

#if defined (__CSKY_VDSPV2_F__)

__extension__ static __inline float16x8x3_t __attribute__ ((__always_inline__))
vld3ru_f16 (const float16_t* __a, int32_t __b)
{
  union { float16x8x3_t __i; __builtin_csky_ci __o;} __rv;
  __rv.__o = __builtin_csky_vldmru128x3v8hf((int32_t)__a, __b);
  return __rv.__i;
}

__extension__ static __inline float32x4x3_t __attribute__ ((__always_inline__))
vld3ru_f32 (const float32_t* __a, int32_t __b)
{
  union { float32x4x3_t __i; __builtin_csky_ci __o;} __rv;
  __rv.__o = __builtin_csky_vldmru128x3v4sf((int32_t)__a, __b);
  return __rv.__i;
}

#endif // __CSKY_VDSPV2_F__

__extension__ static __inline int8x16x4_t __attribute__ ((__always_inline__))
vld4ru_s8 (const int8_t* __a, int32_t __b)
{
  union { int8x16x4_t __i; __builtin_csky_xi __o;} __rv;
  __rv.__o = __builtin_csky_vldmru128x4v16qi((int32_t)__a, __b);
  return __rv.__i;
}

__extension__ static __inline int16x8x4_t __attribute__ ((__always_inline__))
vld4ru_s16 (const int16_t* __a, int32_t __b)
{
  union { int16x8x4_t __i; __builtin_csky_xi __o;} __rv;
  __rv.__o = __builtin_csky_vldmru128x4v8hi((int32_t)__a, __b);
  return __rv.__i;
}

__extension__ static __inline int32x4x4_t __attribute__ ((__always_inline__))
vld4ru_s32 (const int32_t* __a, int32_t __b)
{
  union { int32x4x4_t __i; __builtin_csky_xi __o;} __rv;
  __rv.__o = __builtin_csky_vldmru128x4v4si((int32_t)__a, __b);
  return __rv.__i;
}

__extension__ static __inline uint8x16x4_t __attribute__ ((__always_inline__))
vld4ru_u8 (const uint8_t* __a, uint32_t __b)
{
  union { uint8x16x4_t __i; __builtin_csky_xi __o;} __rv;
  __rv.__o = __builtin_csky_vldmru128x4v16qi((int32_t)__a, (int32_t)__b);
  return __rv.__i;
}

__extension__ static __inline uint16x8x4_t __attribute__ ((__always_inline__))
vld4ru_u16 (const uint16_t* __a, uint32_t __b)
{
  union { uint16x8x4_t __i; __builtin_csky_xi __o;} __rv;
  __rv.__o = __builtin_csky_vldmru128x4v8hi((int32_t)__a, (int32_t)__b);
  return __rv.__i;
}

__extension__ static __inline uint32x4x4_t __attribute__ ((__always_inline__))
vld4ru_u32 (const uint32_t* __a, uint32_t __b)
{
  union { uint32x4x4_t __i; __builtin_csky_xi __o;} __rv;
  __rv.__o = __builtin_csky_vldmru128x4v4si((int32_t)__a, (int32_t)__b);
  return __rv.__i;
}

#if defined (__CSKY_VDSPV2_F__)

__extension__ static __inline float16x8x4_t __attribute__ ((__always_inline__))
vld4ru_f16 (const float16_t* __a, int32_t __b)
{
  union { float16x8x4_t __i; __builtin_csky_xi __o;} __rv;
  __rv.__o = __builtin_csky_vldmru128x4v8hf((int32_t)__a, __b);
  return __rv.__i;
}

__extension__ static __inline float32x4x4_t __attribute__ ((__always_inline__))
vld4ru_f32 (const float32_t* __a, int32_t __b)
{
  union { float32x4x4_t __i; __builtin_csky_xi __o;} __rv;
  __rv.__o = __builtin_csky_vldmru128x4v4sf((int32_t)__a, __b);
  return __rv.__i;
}

#endif // __CSKY_VDSPV2_F__

/* vldx.t */
__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
vldx_s8 (const int8_t* __a, int32_t __b)
{
  return __builtin_csky_vldxv16qi((int32_t)__a, __b);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vldx_s16 (const int16_t* __a, int32_t __b)
{
  return __builtin_csky_vldxv8hi((int32_t)__a, __b);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vldx_s32 (const int32_t* __a, int32_t __b)
{
  return __builtin_csky_vldxv4si((int32_t)__a, __b);
}

__extension__ static __inline uint8x16_t __attribute__ ((__always_inline__))
vldx_u8 (const uint8_t* __a, int32_t __b)
{
  return (uint8x16_t)__builtin_csky_vldxv16qi((int32_t)__a, __b);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vldx_u16 (const uint16_t* __a, int32_t __b)
{
  return (uint16x8_t)__builtin_csky_vldxv8hi((int32_t)__a, __b);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vldx_u32 (const uint32_t* __a, int32_t __b)
{
  return (uint32x4_t)__builtin_csky_vldxv4si((int32_t)__a, __b);
}

#if defined (__CSKY_VDSPV2_F__)

__extension__ static __inline float16x8_t __attribute__ ((__always_inline__))
vldx_f16 (const float16_t* __a, int32_t __b)
{
  return __builtin_csky_vldxv8hf((int32_t)__a, __b);
}

__extension__ static __inline float32x4_t __attribute__ ((__always_inline__))
vldx_f32 (const float32_t* __a, int32_t __b)
{
  return __builtin_csky_vldxv4sf((int32_t)__a, __b);
}

#endif // __CSKY_VDSPV2_F__

///* vlde.t */
//__extension__ static __inline int8x16_t __attribute__ ((__always_inline__))
//vlde_8 (int8_t* __a, int8x16_t __b)
//{
//  return __builtin_csky_vldev16qi((int32_t)__a, __b);
//}
//
//__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
//vlde_16 (int16_t* __a, int16x8_t __b)
//{
//  return __builtin_csky_vldev8hi((int32_t)__a, __b);
//}
//
//__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
//vlde_32 (int32_t* __a, int32x4_t __b)
//{
//  return __builtin_csky_vldev4si((int32_t)__a, __b);
//}

/* vst.t.1 */
__extension__ static __inline void __attribute__ ((__always_inline__))
vst_s8_1 (const int8_t* __a, const int32_t __offset, int8x16_t __b)
{
  __builtin_csky_vst1v16qi(__b, (int32_t)__a, __offset);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vst_s16_1 (const int16_t* __a, const int32_t __offset, int16x8_t __b)
{
  __builtin_csky_vst1v8hi(__b, (int32_t)__a, __offset);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vst_s32_1 (const int32_t* __a, const int32_t __offset, int32x4_t __b)
{
  __builtin_csky_vst1v4si(__b, (int32_t)__a, __offset);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vst_u8_1 (const uint8_t* __a, const int32_t __offset, uint8x16_t __b)
{
  __builtin_csky_vst1v16qi((int8x16_t)__b, (int32_t)__a, __offset);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vst_u16_1 (const uint16_t* __a, const int32_t __offset, uint16x8_t __b)
{
  __builtin_csky_vst1v8hi((int16x8_t)__b, (int32_t)__a, __offset);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vst_u32_1 (const uint32_t* __a, const int32_t __offset, uint32x4_t __b)
{
  __builtin_csky_vst1v4si((int32x4_t)__b, (int32_t)__a, __offset);
}

#if defined (__CSKY_VDSPV2_F__)

__extension__ static __inline void __attribute__ ((__always_inline__))
vst_f16_1 (const float16_t* __a, const int32_t __offset, float16x8_t __b)
{
  __builtin_csky_vst1v8hf(__b, (int32_t)__a, __offset);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vst_f32_1 (const float32_t* __a, const int32_t __offset, float32x4_t __b)
{
  __builtin_csky_vst1v4sf(__b, (int32_t)__a, __offset);
}

#endif // __CSKY_VDSPV2_F__

/* vst.t.2 */
__extension__ static __inline void __attribute__ ((__always_inline__))
vst_s8_2 (const int8_t* __a, const int32_t __offset, int8x16_t __b)
{
  __builtin_csky_vst2v16qi(__b, (int32_t)__a, __offset);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vst_s16_2 (const int16_t* __a, const int32_t __offset, int16x8_t __b)
{
  __builtin_csky_vst2v8hi(__b, (int32_t)__a, __offset);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vst_s32_2 (const int32_t* __a, const int32_t __offset, int32x4_t __b)
{
  __builtin_csky_vst2v4si(__b, (int32_t)__a, __offset);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vst_u8_2 (const uint8_t* __a, const int32_t __offset, uint8x16_t __b)
{
  __builtin_csky_vst2v16qi((int8x16_t)__b, (int32_t)__a, __offset);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vst_u16_2 (const uint16_t* __a, const int32_t __offset, uint16x8_t __b)
{
  __builtin_csky_vst2v8hi((int16x8_t)__b, (int32_t)__a, __offset);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vst_u32_2 (const uint32_t* __a, const int32_t __offset, uint32x4_t __b)
{
  __builtin_csky_vst2v4si((int32x4_t)__b, (int32_t)__a, __offset);
}

#if defined (__CSKY_VDSPV2_F__)

__extension__ static __inline void __attribute__ ((__always_inline__))
vst_f16_2 (const float16_t* __a, const int32_t __offset, float16x8_t __b)
{
  __builtin_csky_vst2v8hf(__b, (int32_t)__a, __offset);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vst_f32_2 (const float32_t* __a, const int32_t __offset, float32x4_t __b)
{
  __builtin_csky_vst2v4sf(__b, (int32_t)__a, __offset);
}

#endif // __CSKY_VDSPV2_F__

/* vst.t.3 */
__extension__ static __inline void __attribute__ ((__always_inline__))
vst_s8_3 (const int8_t* __a, const int32_t __offset, int8x16_t __b)
{
  __builtin_csky_vst3v16qi(__b, (int32_t)__a, __offset);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vst_s16_3 (const int16_t* __a, const int32_t __offset, int16x8_t __b)
{
  __builtin_csky_vst3v8hi(__b, (int32_t)__a, __offset);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vst_s32_3 (const int32_t* __a, const int32_t __offset, int32x4_t __b)
{
  __builtin_csky_vst3v4si(__b, (int32_t)__a, __offset);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vst_u8_3 (const uint8_t* __a, const int32_t __offset, uint8x16_t __b)
{
  __builtin_csky_vst3v16qi((int8x16_t)__b, (int32_t)__a, __offset);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vst_u16_3 (const uint16_t* __a, const int32_t __offset, uint16x8_t __b)
{
  __builtin_csky_vst3v8hi((int16x8_t)__b, (int32_t)__a, __offset);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vst_u32_3 (const uint32_t* __a, const int32_t __offset, uint32x4_t __b)
{
  __builtin_csky_vst3v4si((int32x4_t)__b, (int32_t)__a, __offset);
}

#if defined (__CSKY_VDSPV2_F__)

__extension__ static __inline void __attribute__ ((__always_inline__))
vst_f16_3 (const float16_t* __a, const int32_t __offset, float16x8_t __b)
{
  __builtin_csky_vst3v8hf(__b, (int32_t)__a, __offset);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vst_f32_3 (const float32_t* __a, const int32_t __offset, float32x4_t __b)
{
  __builtin_csky_vst3v4sf(__b, (int32_t)__a, __offset);
}

#endif // __CSKY_VDSPV2_F__

/* vst.t.4 */
__extension__ static __inline void __attribute__ ((__always_inline__))
vst_s8_4 (const int8_t* __a, const int32_t __offset, int8x16_t __b)
{
  __builtin_csky_vst4v16qi(__b, (int32_t)__a, __offset);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vst_s16_4 (const int16_t* __a, const int32_t __offset, int16x8_t __b)
{
  __builtin_csky_vst4v8hi(__b, (int32_t)__a, __offset);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vst_s32_4 (const int32_t* __a, const int32_t __offset, int32x4_t __b)
{
  __builtin_csky_vst4v4si(__b, (int32_t)__a, __offset);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vst_u8_4 (const uint8_t* __a, const int32_t __offset, uint8x16_t __b)
{
  __builtin_csky_vst4v16qi((int8x16_t)__b, (int32_t)__a, __offset);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vst_u16_4 (const uint16_t* __a, const int32_t __offset, uint16x8_t __b)
{
  __builtin_csky_vst4v8hi((int16x8_t)__b, (int32_t)__a, __offset);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vst_u32_4 (const uint32_t* __a, const int32_t __offset, uint32x4_t __b)
{
  __builtin_csky_vst4v4si((int32x4_t)__b, (int32_t)__a, __offset);
}

#if defined (__CSKY_VDSPV2_F__)

__extension__ static __inline void __attribute__ ((__always_inline__))
vst_f16_4 (const float16_t* __a, const int32_t __offset, float16x8_t __b)
{
  __builtin_csky_vst4v8hf(__b, (int32_t)__a, __offset);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vst_f32_4 (const float32_t* __a, const int32_t __offset, float32x4_t __b)
{
  __builtin_csky_vst4v4sf(__b, (int32_t)__a, __offset);
}

#endif // __CSKY_VDSPV2_F__

/* vstru.t.1 */
__extension__ static __inline  void __attribute__ ((__always_inline__))
vstru_s8_1 (const int8_t* __a, int32_t __b, int8x16_t __c)
{
  __builtin_csky_vstru1v16qi((int32_t)__a, __b, __c);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vstru_s16_1 (const int16_t* __a, int32_t __b, int16x8_t __c)
{
  __builtin_csky_vstru1v8hi((int32_t)__a, __b, __c);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vstru_s32_1 (const int32_t* __a, int32_t __b, int32x4_t __c)
{
  __builtin_csky_vstru1v4si((int32_t)__a, __b, __c);
}

__extension__ static __inline  void __attribute__ ((__always_inline__))
vstru_u8_1 (const uint8_t* __a, uint32_t __b, uint8x16_t __c)
{
  __builtin_csky_vstru1v16qi((int32_t)__a, (int32_t)__b, (int8x16_t)__c);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vstru_u16_1 (const uint16_t* __a, uint32_t __b, uint16x8_t __c)
{
  __builtin_csky_vstru1v8hi((int32_t)__a, (int32_t)__b, (int16x8_t)__c);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vstru_u32_1 (const uint32_t* __a, uint32_t __b, uint32x4_t __c)
{
  __builtin_csky_vstru1v4si((int32_t)__a, (int32_t)__b, (int32x4_t)__c);
}

#if defined (__CSKY_VDSPV2_F__)

__extension__ static __inline void __attribute__ ((__always_inline__))
vstru_f16_1 (const float16_t* __a, int32_t __b, float16x8_t __c)
{
  __builtin_csky_vstru1v8hf((int32_t)__a, __b, __c);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vstru_f32_1 (const float32_t* __a, int32_t __b, float32x4_t __c)
{
  __builtin_csky_vstru1v4sf((int32_t)__a, __b, __c);
}

#endif // __CSKY_VDSPV2_F__

/* vstru.t.2 */
__extension__ static __inline void __attribute__ ((__always_inline__))
vstru_s8_2 (const int8_t* __a, int32_t __b, int8x16_t __c)
{
  __builtin_csky_vstru2v16qi((int32_t)__a, __b, __c);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vstru_s16_2 (const int16_t* __a, int32_t __b, int16x8_t __c)
{
  __builtin_csky_vstru2v8hi((int32_t)__a, __b, __c);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vstru_s32_2 (const int32_t* __a, int32_t __b, int32x4_t __c)
{
  __builtin_csky_vstru2v4si((int32_t)__a, __b, __c);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vstru_u8_2 (const uint8_t* __a, uint32_t __b, uint8x16_t __c)
{
  __builtin_csky_vstru2v16qi((int32_t)__a, (int32_t)__b, (int8x16_t)__c);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vstru_u16_2 (const uint16_t* __a, uint32_t __b, uint16x8_t __c)
{
  __builtin_csky_vstru2v8hi((int32_t)__a, (int32_t)__b, (int16x8_t)__c);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vstru_u32_2 (const uint32_t* __a, uint32_t __b, uint32x4_t __c)
{
  __builtin_csky_vstru2v4si((int32_t)__a, (int32_t)__b, (int32x4_t)__c);
}

#if defined (__CSKY_VDSPV2_F__)

__extension__ static __inline void __attribute__ ((__always_inline__))
vstru_f16_2 (const float16_t* __a, int32_t __b, float16x8_t __c)
{
  __builtin_csky_vstru2v8hf((int32_t)__a, __b, __c);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vstru_f32_2 (const float32_t* __a, int32_t __b, float32x4_t __c)
{
  __builtin_csky_vstru2v4sf((int32_t)__a, __b, __c);
}

#endif // __CSKY_VDSPV2_F__

/* vstru.t.3 */
__extension__ static __inline void __attribute__ ((__always_inline__))
vstru_s8_3 (const int8_t* __a, int32_t __b, int8x16_t __c)
{
  __builtin_csky_vstru3v16qi((int32_t)__a, __b, __c);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vstru_s16_3 (const int16_t* __a, int32_t __b, int16x8_t __c)
{
  __builtin_csky_vstru3v8hi((int32_t)__a, __b, __c);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vstru_s32_3 (const int32_t* __a, int32_t __b, int32x4_t __c)
{
  __builtin_csky_vstru3v4si((int32_t)__a, __b, __c);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vstru_u8_3 (const uint8_t* __a, uint32_t __b, uint8x16_t __c)
{
  __builtin_csky_vstru3v16qi((int32_t)__a, (int32_t)__b, (int8x16_t)__c);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vstru_u16_3 (const uint16_t* __a, uint32_t __b, uint16x8_t __c)
{
  __builtin_csky_vstru3v8hi((int32_t)__a, (int32_t)__b, (int16x8_t)__c);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vstru_u32_3 (const uint32_t* __a, uint32_t __b, uint32x4_t __c)
{
  __builtin_csky_vstru3v4si((int32_t)__a, (int32_t)__b, (int32x4_t)__c);
}

#if defined (__CSKY_VDSPV2_F__)

__extension__ static __inline void __attribute__ ((__always_inline__))
vstru_f16_3 (const float16_t* __a, int32_t __b, float16x8_t __c)
{
  __builtin_csky_vstru3v8hf((int32_t)__a, __b, __c);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vstru_f32_3 (const float32_t* __a, int32_t __b, float32x4_t __c)
{
  __builtin_csky_vstru3v4sf((int32_t)__a, __b, __c);
}

#endif // __CSKY_VDSPV2_F__

/* vstru.t.4 */
__extension__ static __inline void __attribute__ ((__always_inline__))
vstru_s8_4 (const int8_t* __a, int32_t __b, int8x16_t __c)
{
  __builtin_csky_vstru4v16qi((int32_t)__a, __b, __c);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vstru_s16_4 (const int16_t* __a, int32_t __b, int16x8_t __c)
{
  __builtin_csky_vstru4v8hi((int32_t)__a, __b, __c);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vstru_s32_4 (const int32_t* __a, int32_t __b, int32x4_t __c)
{
  __builtin_csky_vstru4v4si((int32_t)__a, __b, __c);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vstru_u8_4 (const uint8_t* __a, uint32_t __b, uint8x16_t __c)
{
  __builtin_csky_vstru4v16qi((int32_t)__a, (int32_t)__b, (int8x16_t)__c);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vstru_u16_4 (const uint16_t* __a, uint32_t __b, uint16x8_t __c)
{
  __builtin_csky_vstru4v8hi((int32_t)__a, (int32_t)__b, (int16x8_t)__c);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vstru_u32_4 (const uint32_t* __a, uint32_t __b, uint32x4_t __c)
{
  __builtin_csky_vstru4v4si((int32_t)__a, (int32_t)__b, (int32x4_t)__c);
}

#if defined (__CSKY_VDSPV2_F__)

__extension__ static __inline void __attribute__ ((__always_inline__))
vstru_f16_4 (const float16_t* __a, int32_t __b, float16x8_t __c)
{
  __builtin_csky_vstru4v8hf((int32_t)__a, __b, __c);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vstru_f32_4 (const float32_t* __a, int32_t __b, float32x4_t __c)
{
  __builtin_csky_vstru4v4sf((int32_t)__a, __b, __c);
}

#endif // __CSKY_VDSPV2_F__

/* vstu.t.1 */
__extension__ static __inline void __attribute__ ((__always_inline__))
vstu_s8_1 (const int8_t* __a, int8x16_t __b)
{
  __builtin_csky_vstu1v16qi((int32_t)__a, __b);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vstu_s16_1 (const int16_t* __a, int16x8_t __b)
{
  __builtin_csky_vstu1v8hi((int32_t)__a, __b);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vstu_s32_1 (const int32_t* __a, int32x4_t __b)
{
  __builtin_csky_vstu1v4si((int32_t)__a, __b);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vstu_u8_1 (const uint8_t* __a, uint8x16_t __b)
{
  __builtin_csky_vstu1v16qi((int32_t)__a, (int8x16_t)__b);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vstu_u16_1 (const uint16_t* __a, uint16x8_t __b)
{
  __builtin_csky_vstu1v8hi((int32_t)__a, (int16x8_t)__b);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vstu_u32_1 (const uint32_t* __a, uint32x4_t __b)
{
  __builtin_csky_vstu1v4si((int32_t)__a, (int32x4_t)__b);
}

#if defined (__CSKY_VDSPV2_F__)

__extension__ static __inline void __attribute__ ((__always_inline__))
vstu_f16_1 (const float16_t* __a, float16x8_t __b)
{
  __builtin_csky_vstu1v8hf((int32_t)__a, __b);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vstu_f32_1 (const float32_t* __a, float32x4_t __b)
{
  __builtin_csky_vstu1v4sf((int32_t)__a, __b);
}

#endif // __CSKY_VDSPV2_F__

/* vstu.t.2 */
__extension__ static __inline void __attribute__ ((__always_inline__))
vstu_s8_2 (const int8_t* __a, int8x16_t __b)
{
  __builtin_csky_vstu2v16qi((int32_t)__a, __b);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vstu_s16_2 (const int16_t* __a, int16x8_t __b)
{
  __builtin_csky_vstu2v8hi((int32_t)__a, __b);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vstu_s32_2 (const int32_t* __a, int32x4_t __b)
{
  __builtin_csky_vstu2v4si((int32_t)__a, __b);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vstu_u8_2 (const uint8_t* __a, uint8x16_t __b)
{
  __builtin_csky_vstu2v16qi((int32_t)__a, (int8x16_t)__b);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vstu_u16_2 (const uint16_t* __a, uint16x8_t __b)
{
  __builtin_csky_vstu2v8hi((int32_t)__a, (int16x8_t)__b);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vstu_u32_2 (const uint32_t* __a, uint32x4_t __b)
{
  __builtin_csky_vstu2v4si((int32_t)__a, (int32x4_t)__b);
}

#if defined (__CSKY_VDSPV2_F__)

__extension__ static __inline void __attribute__ ((__always_inline__))
vstu_f16_2 (const float16_t* __a, float16x8_t __b)
{
  __builtin_csky_vstu2v8hf((int32_t)__a, __b);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vstu_f32_2 (const float32_t* __a, float32x4_t __b)
{
  __builtin_csky_vstu2v4sf((int32_t)__a, __b);
}

#endif // __CSKY_VDSPV2_F__

/* vstu.t.3 */
__extension__ static __inline void __attribute__ ((__always_inline__))
vstu_s8_3 (const int8_t* __a, int8x16_t __b)
{
  __builtin_csky_vstu3v16qi((int32_t)__a, __b);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vstu_s16_3 (const int16_t* __a, int16x8_t __b)
{
  __builtin_csky_vstu3v8hi((int32_t)__a, __b);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vstu_s32_3 (const int32_t* __a, int32x4_t __b)
{
  __builtin_csky_vstu3v4si((int32_t)__a, __b);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vstu_u8_3 (const uint8_t* __a, uint8x16_t __b)
{
  __builtin_csky_vstu3v16qi((int32_t)__a, (int8x16_t)__b);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vstu_u16_3 (const uint16_t* __a, uint16x8_t __b)
{
  __builtin_csky_vstu3v8hi((int32_t)__a, (int16x8_t)__b);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vstu_u32_3 (const uint32_t* __a, uint32x4_t __b)
{
  __builtin_csky_vstu3v4si((int32_t)__a, (int32x4_t)__b);
}

#if defined (__CSKY_VDSPV2_F__)

__extension__ static __inline void __attribute__ ((__always_inline__))
vstu_f16_3 (const float16_t* __a, float16x8_t __b)
{
  __builtin_csky_vstu3v8hf((int32_t)__a, __b);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vstu_f32_3 (const float32_t* __a, float32x4_t __b)
{
  __builtin_csky_vstu3v4sf((int32_t)__a, __b);
}

#endif // __CSKY_VDSPV2_F__

/* vstu.t.4 */
__extension__ static __inline void __attribute__ ((__always_inline__))
vstu_s8_4 (const int8_t* __a, int8x16_t __b)
{
  __builtin_csky_vstu4v16qi((int32_t)__a, __b);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vstu_s16_4 (const int16_t* __a, int16x8_t __b)
{
  __builtin_csky_vstu4v8hi((int32_t)__a, __b);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vstu_s32_4 (const int32_t* __a, int32x4_t __b)
{
  __builtin_csky_vstu4v4si((int32_t)__a, __b);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vstu_u8_4 (const uint8_t* __a, uint8x16_t __b)
{
  __builtin_csky_vstu4v16qi((int32_t)__a, (int8x16_t)__b);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vstu_u16_4 (const uint16_t* __a, uint16x8_t __b)
{
  __builtin_csky_vstu4v8hi((int32_t)__a, (int16x8_t)__b);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vstu_u32_4 (const uint32_t* __a, uint32x4_t __b)
{
  __builtin_csky_vstu4v4si((int32_t)__a, (int32x4_t)__b);
}

#if defined (__CSKY_VDSPV2_F__)

__extension__ static __inline void __attribute__ ((__always_inline__))
vstu_f16_4 (const float16_t* __a, float16x8_t __b)
{
  __builtin_csky_vstu4v8hf((int32_t)__a, __b);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vstu_f32_4 (const float32_t* __a, float32x4_t __b)
{
  __builtin_csky_vstu4v4sf((int32_t)__a, __b);
}

#endif // __CSKY_VDSPV2_F__

/* vstx.t */

__extension__ static __inline void __attribute__ ((__always_inline__))
vstx_s8 (const int8_t* __a, int8x16_t __b, int32_t __c)
{
  __builtin_csky_vstxv16qi((int32_t)__a, __c, __b);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vstx_s16 (const int16_t* __a, int16x8_t __b, int32_t __c)
{
  __builtin_csky_vstxv8hi((int32_t)__a, __c, __b);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vstx_s32 (const int32_t* __a, int32x4_t __b, int32_t __c)
{
  __builtin_csky_vstxv4si((int32_t)__a, __c, __b);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vstx_u8 (const uint8_t* __a, uint8x16_t __b, int32_t __c)
{
  __builtin_csky_vstxv16qi((int32_t)__a, __c, (int8x16_t)__b);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vstx_u16 (const uint16_t* __a, uint16x8_t __b, int32_t __c)
{
  __builtin_csky_vstxv8hi((int32_t)__a, __c, (int16x8_t)__b);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vstx_u32 (const uint32_t* __a, uint32x4_t __b, int32_t __c)
{
  __builtin_csky_vstxv4si((int32_t)__a, __c, (int32x4_t)__b);
}

#if defined (__CSKY_VDSPV2_F__)

__extension__ static __inline void __attribute__ ((__always_inline__))
vstx_f16 (const float16_t* __a, float16x8_t __b, int32_t __c)
{
  __builtin_csky_vstxv8hf((int32_t)__a, __c, __b);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vstx_f32 (const float32_t* __a, float32x4_t __b, int32_t __c)
{
  __builtin_csky_vstxv4sf((int32_t)__a, __c, __b);
}

#endif // __CSKY_VDSPV2_F__

/* vstm.t */
__extension__ static __inline void __attribute__ ((__always_inline__))
vst1_s8 (const int8_t* __a, int8x16_t __b)
{
  __builtin_csky_vstmv16qi(__b, (int32_t)__a);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vst1_s16 (const int16_t* __a, int16x8_t __b)
{
  __builtin_csky_vstmv8hi(__b, (int32_t)__a);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vst1_s32 (const int32_t* __a, int32x4_t __b)
{
  __builtin_csky_vstmv4si(__b, (int32_t)__a);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vst1_u8 (const uint8_t* __a, uint8x16_t __b)
{
  __builtin_csky_vstmv16qi((int8x16_t)__b, (int32_t)__a);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vst1_u16 (const uint16_t* __a, uint16x8_t __b)
{
  __builtin_csky_vstmv8hi((int16x8_t)__b, (int32_t)__a);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vst1_u32 (const uint32_t* __a, uint32x4_t __b)
{
  __builtin_csky_vstmv4si((int32x4_t)__b, (int32_t)__a);
}

#if defined (__CSKY_VDSPV2_F__)

__extension__ static __inline void __attribute__ ((__always_inline__))
vst1_f16 (const float16_t* __a, float16x8_t __b)
{
  __builtin_csky_vstmv8hf(__b, (int32_t)__a);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vst1_f32 (const float32_t* __a, float32x4_t __b)
{
  __builtin_csky_vstmv4sf(__b, (int32_t)__a);
}

#endif // __CSKY_VDSPV2_F__

__extension__ static __inline void __attribute__ ((__always_inline__))
vst2_s8 (const int8_t* __a, int8x16x2_t __b)
{
  union { int8x16x2_t __i; __builtin_csky_oi __o;} __cu = { __b};
  __builtin_csky_vstm128x2v16qi(__cu.__o, (int32_t)__a);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vst2_s16 (const int16_t* __a, int16x8x2_t __b)
{
  union { int16x8x2_t __i; __builtin_csky_oi __o;} __cu = { __b};
  __builtin_csky_vstm128x2v8hi(__cu.__o, (int32_t)__a);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vst2_s32 (const int32_t* __a, int32x4x2_t __b)
{
  union { int32x4x2_t __i; __builtin_csky_oi __o;} __cu = { __b};
  __builtin_csky_vstm128x2v4si(__cu.__o, (int32_t)__a);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vst2_u8 (const uint8_t* __a, uint8x16x2_t __b)
{
  union { uint8x16x2_t __i; __builtin_csky_oi __o;} __cu = { __b};
  __builtin_csky_vstm128x2v16qi(__cu.__o, (int32_t)__a);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vst2_u16 (const uint16_t* __a, uint16x8x2_t __b)
{
  union { uint16x8x2_t __i; __builtin_csky_oi __o;} __cu = { __b};
  __builtin_csky_vstm128x2v8hi(__cu.__o, (int32_t)__a);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vst2_u32 (const uint32_t* __a, uint32x4x2_t __b)
{
  union { uint32x4x2_t __i; __builtin_csky_oi __o;} __cu = { __b};
  __builtin_csky_vstm128x2v4si(__cu.__o, (int32_t)__a);
}

#if defined (__CSKY_VDSPV2_F__)

__extension__ static __inline void __attribute__ ((__always_inline__))
vst2_f16 (const float16_t* __a, float16x8x2_t __b)
{
  union { float16x8x2_t __i; __builtin_csky_oi __o;} __cu = { __b};
  __builtin_csky_vstm128x2v8hf(__cu.__o, (int32_t)__a);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vst2_f32 (const float32_t* __a, float32x4x2_t __b)
{
  union { float32x4x2_t __i; __builtin_csky_oi __o;} __cu = { __b};
  __builtin_csky_vstm128x2v4sf(__cu.__o, (int32_t)__a);
}

#endif // __CSKY_VDSPV2_F__

__extension__ static __inline void __attribute__ ((__always_inline__))
vst3_s8 (const int8_t* __a, int8x16x3_t __b)
{
  union { int8x16x3_t __i; __builtin_csky_ci __o;} __cu = { __b};
  __builtin_csky_vstm128x3v16qi(__cu.__o, (int32_t)__a);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vst3_s16 (const int16_t* __a, int16x8x3_t __b)
{
  union { int16x8x3_t __i; __builtin_csky_ci __o;} __cu = { __b};
  __builtin_csky_vstm128x3v8hi(__cu.__o, (int32_t)__a);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vst3_s32 (const int32_t* __a, int32x4x3_t __b)
{
  union { int32x4x3_t __i; __builtin_csky_ci __o;} __cu = { __b};
  __builtin_csky_vstm128x3v4si(__cu.__o, (int32_t)__a);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vst3_u8 (const uint8_t* __a, uint8x16x3_t __b)
{
  union { uint8x16x3_t __i; __builtin_csky_ci __o;} __cu = { __b};
  __builtin_csky_vstm128x3v16qi(__cu.__o, (int32_t)__a);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vst3_u16 (const uint16_t* __a, uint16x8x3_t __b)
{
  union { uint16x8x3_t __i; __builtin_csky_ci __o;} __cu = { __b};
  __builtin_csky_vstm128x3v8hi(__cu.__o, (int32_t)__a);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vst3_u32 (const uint32_t* __a, uint32x4x3_t __b)
{
  union { uint32x4x3_t __i; __builtin_csky_ci __o;} __cu = { __b};
  __builtin_csky_vstm128x3v4si(__cu.__o, (int32_t)__a);
}

#if defined (__CSKY_VDSPV2_F__)

__extension__ static __inline void __attribute__ ((__always_inline__))
vst3_f16 (const float16_t* __a, float16x8x3_t __b)
{
  union { float16x8x3_t __i; __builtin_csky_ci __o;} __cu = { __b};
  __builtin_csky_vstm128x3v8hf(__cu.__o, (int32_t)__a);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vst3_f32 (const float32_t* __a, float32x4x3_t __b)
{
  union { float32x4x3_t __i; __builtin_csky_ci __o;} __cu = { __b};
  __builtin_csky_vstm128x3v4sf(__cu.__o, (int32_t)__a);
}

#endif // __CSKY_VDSPV2_F__

__extension__ static __inline void __attribute__ ((__always_inline__))
vst4_s8 (const int8_t* __a, int8x16x4_t __b)
{
  union { int8x16x4_t __i; __builtin_csky_xi __o;} __cu = { __b};
  __builtin_csky_vstm128x4v16qi(__cu.__o, (int32_t)__a);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vst4_s16 (const int16_t* __a, int16x8x4_t __b)
{
  union { int16x8x4_t __i; __builtin_csky_xi __o;} __cu = { __b};
  __builtin_csky_vstm128x4v8hi(__cu.__o, (int32_t)__a);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vst4_s32 (const int32_t* __a, int32x4x4_t __b)
{
  union { int32x4x4_t __i; __builtin_csky_xi __o;} __cu = { __b};
  __builtin_csky_vstm128x4v4si(__cu.__o, (int32_t)__a);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vst4_u8 (const uint8_t* __a, uint8x16x4_t __b)
{
  union { uint8x16x4_t __i; __builtin_csky_xi __o;} __cu = { __b};
  __builtin_csky_vstm128x4v16qi(__cu.__o, (int32_t)__a);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vst4_u16 (const uint16_t* __a, uint16x8x4_t __b)
{
  union { uint16x8x4_t __i; __builtin_csky_xi __o;} __cu = { __b};
  __builtin_csky_vstm128x4v8hi(__cu.__o, (int32_t)__a);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vst4_u32 (const uint32_t* __a, uint32x4x4_t __b)
{
  union { uint32x4x4_t __i; __builtin_csky_xi __o;} __cu = { __b};
  __builtin_csky_vstm128x4v4si(__cu.__o, (int32_t)__a);
}

#if defined (__CSKY_VDSPV2_F__)

__extension__ static __inline void __attribute__ ((__always_inline__))
vst4_f16 (const float16_t* __a, float16x8x4_t __b)
{
  union { float16x8x4_t __i; __builtin_csky_xi __o;} __cu = { __b};
  __builtin_csky_vstm128x4v8hf(__cu.__o, (int32_t)__a);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vst4_f32 (const float32_t* __a, float32x4x4_t __b)
{
  union { float32x4x4_t __i; __builtin_csky_xi __o;} __cu = { __b};
  __builtin_csky_vstm128x4v4sf(__cu.__o, (int32_t)__a);
}

#endif // __CSKY_VDSPV2_F__

/* vstmu.t */
__extension__ static __inline void __attribute__ ((__always_inline__))
vst1u_s8 (const int8_t* __a, int8x16_t __b)
{
  __builtin_csky_vstmuv16qi(__b, (int32_t)__a);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vst1u_s16 (const int16_t* __a, int16x8_t __b)
{
  __builtin_csky_vstmuv8hi(__b, (int32_t)__a);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vst1u_s32 (const int32_t* __a, int32x4_t __b)
{
  __builtin_csky_vstmuv4si(__b, (int32_t)__a);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vst1u_u8 (const uint8_t* __a, uint8x16_t __b)
{
  __builtin_csky_vstmuv16qi((int8x16_t)__b, (int32_t)__a);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vst1u_u16 (const uint16_t* __a, uint16x8_t __b)
{
  __builtin_csky_vstmuv8hi((int16x8_t)__b, (int32_t)__a);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vst1u_u32 (const uint32_t* __a, uint32x4_t __b)
{
  __builtin_csky_vstmuv4si((int32x4_t)__b, (int32_t)__a);
}

#if defined (__CSKY_VDSPV2_F__)

__extension__ static __inline void __attribute__ ((__always_inline__))
vst1u_f16 (const float16_t* __a, float16x8_t __b)
{
  __builtin_csky_vstmuv8hf(__b, (int32_t)__a);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vst1u_f32 (const float32_t* __a, float32x4_t __b)
{
  __builtin_csky_vstmuv4sf(__b, (int32_t)__a);
}

#endif // __CSKY_VDSPV2_F__

__extension__ static __inline void __attribute__ ((__always_inline__))
vst2u_s8 (const int8_t* __a, int8x16x2_t __b)
{
  union { int8x16x2_t __i; __builtin_csky_oi __o;} __cu = { __b};
  __builtin_csky_vstmu128x2v16qi(__cu.__o, (int32_t)__a);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vst2u_s16 (const int16_t* __a, int16x8x2_t __b)
{
  union { int16x8x2_t __i; __builtin_csky_oi __o;} __cu = { __b};
  __builtin_csky_vstmu128x2v8hi(__cu.__o, (int32_t)__a);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vst2u_s32 (const int32_t* __a, int32x4x2_t __b)
{
  union { int32x4x2_t __i; __builtin_csky_oi __o;} __cu = { __b};
  __builtin_csky_vstmu128x2v4si(__cu.__o, (int32_t)__a);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vst2u_u8 (const uint8_t* __a, uint8x16x2_t __b)
{
  union { uint8x16x2_t __i; __builtin_csky_oi __o;} __cu = { __b};
  __builtin_csky_vstmu128x2v16qi(__cu.__o, (int32_t)__a);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vst2u_u16 (const uint16_t* __a, uint16x8x2_t __b)
{
  union { uint16x8x2_t __i; __builtin_csky_oi __o;} __cu = { __b};
  __builtin_csky_vstmu128x2v8hi(__cu.__o, (int32_t)__a);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vst2u_u32 (const uint32_t* __a, uint32x4x2_t __b)
{
  union { uint32x4x2_t __i; __builtin_csky_oi __o;} __cu = { __b};
  __builtin_csky_vstmu128x2v4si(__cu.__o, (int32_t)__a);
}

#if defined (__CSKY_VDSPV2_F__)

__extension__ static __inline void __attribute__ ((__always_inline__))
vst2u_f16 (const float16_t* __a, float16x8x2_t __b)
{
  union { float16x8x2_t __i; __builtin_csky_oi __o;} __cu = { __b};
  __builtin_csky_vstmu128x2v8hf(__cu.__o, (int32_t)__a);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vst2u_f32 (const float32_t* __a, float32x4x2_t __b)
{
  union { float32x4x2_t __i; __builtin_csky_oi __o;} __cu = { __b};
  __builtin_csky_vstmu128x2v4sf(__cu.__o, (int32_t)__a);
}

#endif // __CSKY_VDSPV2_F__

__extension__ static __inline void __attribute__ ((__always_inline__))
vst3u_s8 (const int8_t* __a, int8x16x3_t __b)
{
  union { int8x16x3_t __i; __builtin_csky_ci __o;} __cu = { __b};
  __builtin_csky_vstmu128x3v16qi(__cu.__o, (int32_t)__a);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vst3u_s16 (const int16_t* __a, int16x8x3_t __b)
{
  union { int16x8x3_t __i; __builtin_csky_ci __o;} __cu = { __b};
  __builtin_csky_vstmu128x3v8hi(__cu.__o, (int32_t)__a);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vst3u_s32 (const int32_t* __a, int32x4x3_t __b)
{
  union { int32x4x3_t __i; __builtin_csky_ci __o;} __cu = { __b};
  __builtin_csky_vstmu128x3v4si(__cu.__o, (int32_t)__a);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vst3u_u8 (const uint8_t* __a, uint8x16x3_t __b)
{
  union { uint8x16x3_t __i; __builtin_csky_ci __o;} __cu = { __b};
  __builtin_csky_vstmu128x3v16qi(__cu.__o, (int32_t)__a);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vst3u_u16 (const uint16_t* __a, uint16x8x3_t __b)
{
  union { uint16x8x3_t __i; __builtin_csky_ci __o;} __cu = { __b};
  __builtin_csky_vstmu128x3v8hi(__cu.__o, (int32_t)__a);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vst3u_u32 (const uint32_t* __a, uint32x4x3_t __b)
{
  union { uint32x4x3_t __i; __builtin_csky_ci __o;} __cu = { __b};
  __builtin_csky_vstmu128x3v4si(__cu.__o, (int32_t)__a);
}

#if defined (__CSKY_VDSPV2_F__)

__extension__ static __inline void __attribute__ ((__always_inline__))
vst3u_f16 (const float16_t* __a, float16x8x3_t __b)
{
  union { float16x8x3_t __i; __builtin_csky_ci __o;} __cu = { __b};
  __builtin_csky_vstmu128x3v8hf(__cu.__o, (int32_t)__a);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vst3u_f32 (const float32_t* __a, float32x4x3_t __b)
{
  union { float32x4x3_t __i; __builtin_csky_ci __o;} __cu = { __b};
  __builtin_csky_vstmu128x3v4sf(__cu.__o, (int32_t)__a);
}

#endif // __CSKY_VDSPV2_F__

__extension__ static __inline void __attribute__ ((__always_inline__))
vst4u_s8 (const int8_t* __a, int8x16x4_t __b)
{
  union { int8x16x4_t __i; __builtin_csky_xi __o;} __cu = { __b};
  __builtin_csky_vstmu128x4v16qi(__cu.__o, (int32_t)__a);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vst4u_s16 (const int16_t* __a, int16x8x4_t __b)
{
  union { int16x8x4_t __i; __builtin_csky_xi __o;} __cu = { __b};
  __builtin_csky_vstmu128x4v8hi(__cu.__o, (int32_t)__a);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vst4u_s32 (const int32_t* __a, int32x4x4_t __b)
{
  union { int32x4x4_t __i; __builtin_csky_xi __o;} __cu = { __b};
  __builtin_csky_vstmu128x4v4si(__cu.__o, (int32_t)__a);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vst4u_u8 (const uint8_t* __a, uint8x16x4_t __b)
{
  union { uint8x16x4_t __i; __builtin_csky_xi __o;} __cu = { __b};
  __builtin_csky_vstmu128x4v16qi(__cu.__o, (int32_t)__a);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vst4u_u16 (const uint16_t* __a, uint16x8x4_t __b)
{
  union { uint16x8x4_t __i; __builtin_csky_xi __o;} __cu = { __b};
  __builtin_csky_vstmu128x4v8hi(__cu.__o, (int32_t)__a);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vst4u_u32 (const uint32_t* __a, uint32x4x4_t __b)
{
  union { uint32x4x4_t __i; __builtin_csky_xi __o;} __cu = { __b};
  __builtin_csky_vstmu128x4v4si(__cu.__o, (int32_t)__a);
}

#if defined (__CSKY_VDSPV2_F__)

__extension__ static __inline void __attribute__ ((__always_inline__))
vst4u_f16 (const float16_t* __a, float16x8x4_t __b)
{
  union { float16x8x4_t __i; __builtin_csky_xi __o;} __cu = { __b};
  __builtin_csky_vstmu128x4v8hf(__cu.__o, (int32_t)__a);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vst4u_f32 (const float32_t* __a, float32x4x4_t __b)
{
  union { float32x4x4_t __i; __builtin_csky_xi __o;} __cu = { __b};
  __builtin_csky_vstmu128x4v4sf(__cu.__o, (int32_t)__a);
}

#endif // __CSKY_VDSPV2_F__

/* vstmru.t */
__extension__ static __inline void __attribute__ ((__always_inline__))
vst1ru_s8 (const int8_t* __a, int32_t __b, int8x16_t __c)
{
  __builtin_csky_vstmruv16qi(__c, (int32_t)__a, __b);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vst1ru_s16 (const int16_t* __a, int32_t __b, int16x8_t __c)
{
  __builtin_csky_vstmruv8hi(__c, (int32_t)__a, __b);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vst1ru_s32 (const int32_t* __a, int32_t __b, int32x4_t __c)
{
  __builtin_csky_vstmruv4si(__c, (int32_t)__a, __b);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vst1ru_u8 (const uint8_t* __a, uint32_t __b, uint8x16_t __c)
{
  __builtin_csky_vstmruv16qi((int8x16_t)__c, (int32_t)__a, (int32_t)__b);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vst1ru_u16 (const uint16_t* __a, uint32_t __b, uint16x8_t __c)
{
  __builtin_csky_vstmruv8hi((int16x8_t)__c, (int32_t)__a, (int32_t)__b);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vst1ru_u32 (const uint32_t* __a, uint32_t __b, uint32x4_t __c)
{
  __builtin_csky_vstmruv4si((int32x4_t)__c, (int32_t)__a, (int32_t)__b);
}

#if defined (__CSKY_VDSPV2_F__)

__extension__ static __inline void __attribute__ ((__always_inline__))
vst1ru_f16 (const float16_t* __a, int32_t __b, float16x8_t __c)
{
  __builtin_csky_vstmruv8hf(__c, (int32_t)__a, __b);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vst1ru_f32 (const float32_t* __a, int32_t __b, float32x4_t __c)
{
  __builtin_csky_vstmruv4sf(__c, (int32_t)__a, __b);
}

#endif // __CSKY_VDSPV2_F__

__extension__ static __inline void __attribute__ ((__always_inline__))
vst2ru_s8 (const int8_t* __a, int32_t __b, int8x16x2_t __c)
{
  union { int8x16x2_t __i; __builtin_csky_oi __o;} __cu = { __c};
  __builtin_csky_vstmru128x2v16qi(__cu.__o, (int32_t)__a, __b);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vst2ru_s16 (const int16_t* __a, int32_t __b, int16x8x2_t __c)
{
  union { int16x8x2_t __i; __builtin_csky_oi __o;} __cu = { __c};
  __builtin_csky_vstmru128x2v8hi(__cu.__o, (int32_t)__a, __b);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vst2ru_s32 (const int32_t* __a, int32_t __b, int32x4x2_t __c)
{
  union { int32x4x2_t __i; __builtin_csky_oi __o;} __cu = { __c};
  __builtin_csky_vstmru128x2v4si(__cu.__o, (int32_t)__a, __b);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vst2ru_u8 (const uint8_t* __a, uint32_t __b, uint8x16x2_t __c)
{
  union { uint8x16x2_t __i; __builtin_csky_oi __o;} __cu = { __c};
  __builtin_csky_vstmru128x2v16qi(__cu.__o, (int32_t)__a, (int32_t)__b);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vst2ru_u16 (const uint16_t* __a, uint32_t __b, uint16x8x2_t __c)
{
  union { uint16x8x2_t __i; __builtin_csky_oi __o;} __cu = { __c};
  __builtin_csky_vstmru128x2v8hi(__cu.__o, (int32_t)__a, (int32_t)__b);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vst2ru_u32 (const uint32_t* __a, uint32_t __b, uint32x4x2_t __c)
{
  union { uint32x4x2_t __i; __builtin_csky_oi __o;} __cu = { __c};
  __builtin_csky_vstmru128x2v4si(__cu.__o, (int32_t)__a, (int32_t)__b);
}

#if defined (__CSKY_VDSPV2_F__)

__extension__ static __inline void __attribute__ ((__always_inline__))
vst2ru_f16 (const float16_t* __a, int32_t __b, float16x8x2_t __c)
{
  union { float16x8x2_t __i; __builtin_csky_oi __o;} __cu = { __c};
  __builtin_csky_vstmru128x2v8hf(__cu.__o, (int32_t)__a, __b);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vst2ru_f32 (const float32_t* __a, int32_t __b, float32x4x2_t __c)
{
  union { float32x4x2_t __i; __builtin_csky_oi __o;} __cu = { __c};
  __builtin_csky_vstmru128x2v4sf(__cu.__o, (int32_t)__a, __b);
}

#endif // __CSKY_VDSPV2_F__

__extension__ static __inline void __attribute__ ((__always_inline__))
vst3ru_s8 (const int8_t* __a, int32_t __b, int8x16x3_t __c)
{
  union { int8x16x3_t __i; __builtin_csky_ci __o;} __cu = { __c};
  __builtin_csky_vstmru128x3v16qi(__cu.__o, (int32_t)__a, __b);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vst3ru_s16 (const int16_t* __a, int32_t __b, int16x8x3_t __c)
{
  union { int16x8x3_t __i; __builtin_csky_ci __o;} __cu = { __c};
  __builtin_csky_vstmru128x3v8hi(__cu.__o, (int32_t)__a, __b);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vst3ru_s32 (const int32_t* __a, int32_t __b, int32x4x3_t __c)
{
  union { int32x4x3_t __i; __builtin_csky_ci __o;} __cu = { __c};
  __builtin_csky_vstmru128x3v4si(__cu.__o, (int32_t)__a, __b);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vst3ru_u8 (const uint8_t* __a, uint32_t __b, uint8x16x3_t __c)
{
  union { uint8x16x3_t __i; __builtin_csky_ci __o;} __cu = { __c};
  __builtin_csky_vstmru128x3v16qi(__cu.__o, (int32_t)__a, (int32_t)__b);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vst3ru_u16 (const uint16_t* __a, uint32_t __b, uint16x8x3_t __c)
{
  union { uint16x8x3_t __i; __builtin_csky_ci __o;} __cu = { __c};
  __builtin_csky_vstmru128x3v8hi(__cu.__o, (int32_t)__a, (int32_t)__b);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vst3ru_u32 (const uint32_t* __a, uint32_t __b, uint32x4x3_t __c)
{
  union { uint32x4x3_t __i; __builtin_csky_ci __o;} __cu = { __c};
  __builtin_csky_vstmru128x3v4si(__cu.__o, (int32_t)__a, (int32_t)__b);
}

#if defined (__CSKY_VDSPV2_F__)

__extension__ static __inline void __attribute__ ((__always_inline__))
vst3ru_f16 (const float16_t* __a, int32_t __b, float16x8x3_t __c)
{
  union { float16x8x3_t __i; __builtin_csky_ci __o;} __cu = { __c};
  __builtin_csky_vstmru128x3v8hf(__cu.__o, (int32_t)__a, __b);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vst3ru_f32 (const float32_t* __a, int32_t __b, float32x4x3_t __c)
{
  union { float32x4x3_t __i; __builtin_csky_ci __o;} __cu = { __c};
  __builtin_csky_vstmru128x3v4sf(__cu.__o, (int32_t)__a, __b);
}

#endif // __CSKY_VDSPV2_F__

__extension__ static __inline void __attribute__ ((__always_inline__))
vst4ru_s8 (const int8_t* __a, int32_t __b, int8x16x4_t __c)
{
  union { int8x16x4_t __i; __builtin_csky_xi __o;} __cu = { __c};
  __builtin_csky_vstmru128x4v16qi(__cu.__o, (int32_t)__a, __b);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vst4ru_s16 (const int16_t* __a, int32_t __b, int16x8x4_t __c)
{
  union { int16x8x4_t __i; __builtin_csky_xi __o;} __cu = { __c};
  __builtin_csky_vstmru128x4v8hi(__cu.__o, (int32_t)__a, __b);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vst4ru_s32 (const int32_t* __a, int32_t __b, int32x4x4_t __c)
{
  union { int32x4x4_t __i; __builtin_csky_xi __o;} __cu = { __c};
  __builtin_csky_vstmru128x4v4si(__cu.__o, (int32_t)__a, __b);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vst4ru_u8 (const uint8_t* __a, uint32_t __b, uint8x16x4_t __c)
{
  union { uint8x16x4_t __i; __builtin_csky_xi __o;} __cu = { __c};
  __builtin_csky_vstmru128x4v16qi(__cu.__o, (int32_t)__a, (int32_t)__b);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vst4ru_u16 (const uint16_t* __a, uint32_t __b, uint16x8x4_t __c)
{
  union { uint16x8x4_t __i; __builtin_csky_xi __o;} __cu = { __c};
  __builtin_csky_vstmru128x4v8hi(__cu.__o, (int32_t)__a, (int32_t)__b);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vst4ru_u32 (const uint32_t* __a, uint32_t __b, uint32x4x4_t __c)
{
  union { uint32x4x4_t __i; __builtin_csky_xi __o;} __cu = { __c};
  __builtin_csky_vstmru128x4v4si(__cu.__o, (int32_t)__a, (int32_t)__b);
}

#if defined (__CSKY_VDSPV2_F__)

__extension__ static __inline void __attribute__ ((__always_inline__))
vst4ru_f16 (const float16_t* __a, int32_t __b, float16x8x4_t __c)
{
  union { float16x8x4_t __i; __builtin_csky_xi __o;} __cu = { __c};
  __builtin_csky_vstmru128x4v8hf(__cu.__o, (int32_t)__a, __b);
}

__extension__ static __inline void __attribute__ ((__always_inline__))
vst4ru_f32 (const float32_t* __a, int32_t __b, float32x4x4_t __c)
{
  union { float32x4x4_t __i; __builtin_csky_xi __o;} __cu = { __c};
  __builtin_csky_vstmru128x4v4sf(__cu.__o, (int32_t)__a, __b);
}

#endif // __CSKY_VDSPV2_F__

#if defined (__CSKY_VDSPV2_F__)
/* vector float */

__extension__ static __inline float16x8_t __attribute__ ((__always_inline__))
vadd_f16 (float16x8_t __a, float16x8_t __b)
{
  return __a + __b;
}
__extension__ static __inline float32x4_t __attribute__ ((__always_inline__))
vadd_f32 (float32x4_t __a, float32x4_t __b)
{
  return __a + __b;
}

__extension__ static __inline float16x8_t __attribute__ ((__always_inline__))
vsub_f16 (float16x8_t __a, float16x8_t __b)
{
  return __a - __b;
}
__extension__ static __inline float32x4_t __attribute__ ((__always_inline__))
vsub_f32 (float32x4_t __a, float32x4_t __b)
{
  return __a - __b;
}

__extension__ static __inline float16x8_t __attribute__ ((__always_inline__))
vpadd_f16 (float16x8_t __a, float16x8_t __b)
{
  return __builtin_csky_vpaddv8hf(__a, __b);
}
__extension__ static __inline float32x4_t __attribute__ ((__always_inline__))
vpadd_f32 (float32x4_t __a, float32x4_t __b)
{
  return __builtin_csky_vpaddv4sf(__a, __b);
}

__extension__ static __inline float16x8_t __attribute__ ((__always_inline__))
vasx_f16 (float16x8_t __a, float16x8_t __b)
{
  return __builtin_csky_vasxv8hf(__a, __b);
}
__extension__ static __inline float32x4_t __attribute__ ((__always_inline__))
vasx_f32 (float32x4_t __a, float32x4_t __b)
{
  return __builtin_csky_vasxv4sf(__a, __b);
}

__extension__ static __inline float16x8_t __attribute__ ((__always_inline__))
vsax_f16 (float16x8_t __a, float16x8_t __b)
{
  return __builtin_csky_vsaxv8hf(__a, __b);
}
__extension__ static __inline float32x4_t __attribute__ ((__always_inline__))
vsax_f32 (float32x4_t __a, float32x4_t __b)
{
  return __builtin_csky_vsaxv4sf(__a, __b);
}

__extension__ static __inline float16x8_t __attribute__ ((__always_inline__))
vabs_f16 (float16x8_t __a)
{
  return __builtin_csky_vabsv8hf(__a);
}
__extension__ static __inline float32x4_t __attribute__ ((__always_inline__))
vabs_f32 (float32x4_t __a)
{
  return __builtin_csky_vabsv4sf(__a);
}

__extension__ static __inline float16x8_t __attribute__ ((__always_inline__))
vsabs_f16 (float16x8_t __a, float16x8_t __b)
{
  return __builtin_csky_vsabsv8hf(__a, __b);
}
__extension__ static __inline float32x4_t __attribute__ ((__always_inline__))
vsabs_f32 (float32x4_t __a, float32x4_t __b)
{
  return __builtin_csky_vsabsv4sf(__a, __b);
}

__extension__ static __inline float16x8_t __attribute__ ((__always_inline__))
vneg_f16 (float16x8_t __a)
{
  return __builtin_csky_vnegv8hf(__a);
}
__extension__ static __inline float32x4_t __attribute__ ((__always_inline__))
vneg_f32 (float32x4_t __a)
{
  return __builtin_csky_vnegv4sf(__a);
}

__extension__ static __inline float16x8_t __attribute__ ((__always_inline__))
vmax_f16 (float16x8_t __a, float16x8_t __b)
{
  return __builtin_csky_vmaxv8hf(__a, __b);
}
__extension__ static __inline float32x4_t __attribute__ ((__always_inline__))
vmax_f32 (float32x4_t __a, float32x4_t __b)
{
  return __builtin_csky_vmaxv4sf(__a, __b);
}

__extension__ static __inline float16x8_t __attribute__ ((__always_inline__))
vmin_f16 (float16x8_t __a, float16x8_t __b)
{
  return __builtin_csky_vminv8hf(__a, __b);
}
__extension__ static __inline float32x4_t __attribute__ ((__always_inline__))
vmin_f32 (float32x4_t __a, float32x4_t __b)
{
  return __builtin_csky_vminv4sf(__a, __b);
}

__extension__ static __inline float16x8_t __attribute__ ((__always_inline__))
vmaxnm_f16 (float16x8_t __a, float16x8_t __b)
{
  return __builtin_csky_vmaxnmv8hf(__a, __b);
}
__extension__ static __inline float32x4_t __attribute__ ((__always_inline__))
vmaxnm_f32 (float32x4_t __a, float32x4_t __b)
{
  return __builtin_csky_vmaxnmv4sf(__a, __b);
}

__extension__ static __inline float16x8_t __attribute__ ((__always_inline__))
vminnm_f16 (float16x8_t __a, float16x8_t __b)
{
  return __builtin_csky_vminnmv8hf(__a, __b);
}
__extension__ static __inline float32x4_t __attribute__ ((__always_inline__))
vminnm_f32 (float32x4_t __a, float32x4_t __b)
{
  return __builtin_csky_vminnmv4sf(__a, __b);
}

__extension__ static __inline float16x8_t __attribute__ ((__always_inline__))
vpmax_f16 (float16x8_t __a, float16x8_t __b)
{
  return __builtin_csky_vpmaxv8hf(__a, __b);
}
__extension__ static __inline float32x4_t __attribute__ ((__always_inline__))
vpmax_f32 (float32x4_t __a, float32x4_t __b)
{
  return __builtin_csky_vpmaxv4sf(__a, __b);
}

__extension__ static __inline float16x8_t __attribute__ ((__always_inline__))
vpmin_f16 (float16x8_t __a, float16x8_t __b)
{
  return __builtin_csky_vpminv8hf(__a, __b);
}
__extension__ static __inline float32x4_t __attribute__ ((__always_inline__))
vpmin_f32 (float32x4_t __a, float32x4_t __b)
{
  return __builtin_csky_vpminv4sf(__a, __b);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vcmpnez_f16 (float16x8_t __a)
{
  return __builtin_csky_vcmpnezv8hf(__a);
}
__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vcmpnez_f32 (float32x4_t __a)
{
  return __builtin_csky_vcmpnezv4sf(__a);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vcmpne_f16 (float16x8_t __a, float16x8_t __b)
{
  return __builtin_csky_vcmpnev8hf(__a, __b);
}
__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vcmpne_f32 (float32x4_t __a, float32x4_t __b)
{
  return __builtin_csky_vcmpnev4sf(__a, __b);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vcmphsz_f16 (float16x8_t __a)
{
  return __builtin_csky_vcmphszv8hf(__a);
}
__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vcmphsz_f32 (float32x4_t __a)
{
  return __builtin_csky_vcmphszv4sf(__a);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vcmphs_f16 (float16x8_t __a, float16x8_t __b)
{
  return __builtin_csky_vcmphsv8hf(__a, __b);
}
__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vcmphs_f32 (float32x4_t __a, float32x4_t __b)
{
  return __builtin_csky_vcmphsv4sf(__a, __b);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vcmpltz_f16 (float16x8_t __a)
{
  return __builtin_csky_vcmpltzv8hf(__a);
}
__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vcmpltz_f32 (float32x4_t __a)
{
  return __builtin_csky_vcmpltzv4sf(__a);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vcmplt_f16 (float16x8_t __a, float16x8_t __b)
{
  return __builtin_csky_vcmpltv8hf(__a, __b);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vcmplt_f32 (float32x4_t __a, float32x4_t __b)
{
  return __builtin_csky_vcmpltv4sf(__a, __b);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vcmphz_f16 (float16x8_t __a)
{
  return __builtin_csky_vcmphzv8hf(__a);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vcmphz_f32 (float32x4_t __a)
{
  return __builtin_csky_vcmphzv4sf(__a);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vcmplsz_f16 (float16x8_t __a)
{
  return __builtin_csky_vcmplszv8hf(__a);
}
__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vcmplsz_f32 (float32x4_t __a)
{
  return __builtin_csky_vcmplszv4sf(__a);
}

__extension__ static __inline float16x8_t __attribute__ ((__always_inline__))
vrecpe_f16 (float16x8_t __a)
{
  return __builtin_csky_vrecpev8hf(__a);
}

__extension__ static __inline float32x4_t __attribute__ ((__always_inline__))
vrecpe_f32 (float32x4_t __a)
{
  return __builtin_csky_vrecpev4sf(__a);
}

__extension__ static __inline float16x8_t __attribute__ ((__always_inline__))
vrecps_f16 (float16x8_t __a, float16x8_t __b)
{
  return __builtin_csky_vrecpsv8hf(__a, __b);
}
__extension__ static __inline float32x4_t __attribute__ ((__always_inline__))
vrecps_f32 (float32x4_t __a, float32x4_t __b)
{
  return __builtin_csky_vrecpsv4sf(__a, __b);
}

__extension__ static __inline float16x8_t __attribute__ ((__always_inline__))
vrsqrte_f16 (float16x8_t __a)
{
  return __builtin_csky_vrsqrtev8hf(__a);
}
__extension__ static __inline float32x4_t __attribute__ ((__always_inline__))
vrsqrte_f32 (float32x4_t __a)
{
  return __builtin_csky_vrsqrtev4sf(__a);
}

__extension__ static __inline float16x8_t __attribute__ ((__always_inline__))
vrsqrts_f16 (float16x8_t __a, float16x8_t __b)
{
  return __builtin_csky_vrsqrtsv8hf(__a, __b);
}
__extension__ static __inline float32x4_t __attribute__ ((__always_inline__))
vrsqrts_f32 (float32x4_t __a, float32x4_t __b)
{
  return __builtin_csky_vrsqrtsv4sf(__a, __b);
}

__extension__ static __inline float16x8_t __attribute__ ((__always_inline__))
vexpe_f16 (float16x8_t __a)
{
  return __builtin_csky_vexpev8hf(__a);
}
__extension__ static __inline float32x4_t __attribute__ ((__always_inline__))
vexpe_f32 (float32x4_t __a)
{
  return __builtin_csky_vexpev4sf(__a);
}

__extension__ static __inline float32x4x2_t __attribute__ ((__always_inline__))
vhtos_f16 (float16x8_t __a)
{
  union { float32x4x2_t __i; __builtin_csky_oi __o;} __rv;
  __rv.__o =  __builtin_csky_vhtosv8hf(__a);
  return __rv.__i;
}

__extension__ static __inline float16x8_t __attribute__ ((__always_inline__))
vstoh_f32 (float32x4_t __a)
{
  return __builtin_csky_vstohv4sf(__a);
}

__extension__ static __inline float32x4_t __attribute__ ((__always_inline__))
vdtos_f64 (float64x2_t __a)
{
  return __builtin_csky_vdtosv2df(__a);
}


/* Control the fcr register */

__extension__ static __inline uint32_t __attribute__ ((__always_inline__))
csky_get_fcr()
{
  return __builtin_csky_getfcrsi();
}

__extension__ static __inline void __attribute__ ((__always_inline__))
csky_set_fcr(uint32_t __a)
{
  __builtin_csky_setfcrsi(__a);
}

/* The following argument (__a) is binary point,
   ranging from 1 to 16 (or 32) */

__extension__ static __inline void __attribute__ ((__always_inline__))
csky_set_bp(const int32_t __a)
{
  __builtin_csky_insfcrsi(__a, 5, 16);;
}

/* The following argument (__a) is rounding mode:
     "0": round to nearest
     "1": round towards zero
     "2": round towards +inf
     "3": round towards -inf
*/

__extension__ static __inline void __attribute__ ((__always_inline__))
csky_set_rm(const int32_t __a)
{
  __builtin_csky_insfcrsi(__a, 2, 24);;
}

/* vftox/vxtof with default binary point32_t */

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vftox_f16_s16 (float16x8_t __a)
{
  return __builtin_csky_vftoxv8hf(__a);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vftox_f16_u16 (float16x8_t __a)
{
  return __builtin_csky_vftoxuv8hf(__a);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vftox_f32_s32 (float32x4_t __a)
{
  return __builtin_csky_vftoxv4sf(__a);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vftox_f32_u32 (float32x4_t __a)
{
  return __builtin_csky_vftoxuv4sf(__a);
}

__extension__ static __inline int32x4x2_t __attribute__ ((__always_inline__))
vftox_f16_s32 (float16x8_t __a)
{
  union { int32x4x2_t __i; __builtin_csky_oi __o;} __rv;
  __rv.__o = __builtin_csky_vftoxqv8hf(__a);
  return __rv.__i;
}

__extension__ static __inline uint32x4x2_t __attribute__ ((__always_inline__))
vftox_f16_u32 (float16x8_t __a)
{
  union { uint32x4x2_t __i; __builtin_csky_oi __o;} __rv;
  __rv.__o = __builtin_csky_vftoxquv8hf(__a);
  return __rv.__i;
}

__extension__ static __inline float16x8_t __attribute__ ((__always_inline__))
vxtof_s16_f16 (int16x8_t __a)
{
  return __builtin_csky_vxtofv8hi(__a);
}

__extension__ static __inline float16x8_t __attribute__ ((__always_inline__))
vxtof_u16_f16 (uint16x8_t __a)
{
  return __builtin_csky_vxtofuv8hi(__a);
}

__extension__ static __inline float32x4_t __attribute__ ((__always_inline__))
vxtof_s32_f32 (int32x4_t __a)
{
  return __builtin_csky_vxtofv4si(__a);
}

__extension__ static __inline float32x4_t __attribute__ ((__always_inline__))
vxtof_u32_f32 (uint32x4_t __a)
{
  return __builtin_csky_vxtofuv4si(__a);
}

__extension__ static __inline float16x8_t __attribute__ ((__always_inline__))
vxtof_s32_f16 (int32x4_t __a)
{
  return __builtin_csky_vxtofdv4si(__a);
}

__extension__ static __inline float16x8_t __attribute__ ((__always_inline__))
vxtof_u32_f16 (uint32x4_t __a)
{
  return __builtin_csky_vxtofduv4si(__a);
}

/*
   vftox/vxtof:
   The following second argument (__b) is binary point,
   ranging from 1 to 16 (or 32) */

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vftox_f16_s16_bp (float16x8_t __a, const int32_t __b)
{
  __builtin_csky_insfcrsi(__b, 5, 16);
  return __builtin_csky_vftoxv8hf(__a);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vftox_f16_u16_bp (float16x8_t __a, const int32_t __b)
{
  __builtin_csky_insfcrsi(__b, 5, 16);
  return __builtin_csky_vftoxuv8hf(__a);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vftox_f32_s32_bp (float32x4_t __a, const int32_t __b)
{
  __builtin_csky_insfcrsi(__b, 5, 16);
  return __builtin_csky_vftoxv4sf(__a);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vftox_f32_u32_bp (float32x4_t __a, const int32_t __b)
{
  __builtin_csky_insfcrsi(__b, 5, 16);
  return __builtin_csky_vftoxuv4sf(__a);
}

__extension__ static __inline int32x4x2_t __attribute__ ((__always_inline__))
vftox_f16_s32_bp (float16x8_t __a, const int32_t __b)
{
  union { int32x4x2_t __i; __builtin_csky_oi __o;} __rv;
  __builtin_csky_insfcrsi(__b, 5, 16);
  __rv.__o = __builtin_csky_vftoxqv8hf(__a);
  return __rv.__i;
}

__extension__ static __inline uint32x4x2_t __attribute__ ((__always_inline__))
vftox_f16_u32_bp (float16x8_t __a, const int32_t __b)
{
  union { uint32x4x2_t __i; __builtin_csky_oi __o;} __rv;
  __builtin_csky_insfcrsi(__b, 5, 16);
  __rv.__o = __builtin_csky_vftoxquv8hf(__a);
  return __rv.__i;
}

__extension__ static __inline float16x8_t __attribute__ ((__always_inline__))
vxtof_s16_f16_bp (int16x8_t __a, const int32_t __b)
{
  __builtin_csky_insfcrsi(__b, 5, 16);
  return __builtin_csky_vxtofv8hi(__a);
}

__extension__ static __inline float16x8_t __attribute__ ((__always_inline__))
vxtof_u16_f16_bp (uint16x8_t __a, const int32_t __b)
{
  __builtin_csky_insfcrsi(__b, 5, 16);
  return __builtin_csky_vxtofuv8hi(__a);
}

__extension__ static __inline float32x4_t __attribute__ ((__always_inline__))
vxtof_s32_f32_bp (int32x4_t __a, const int32_t __b)
{
  __builtin_csky_insfcrsi(__b, 5, 16);
  return __builtin_csky_vxtofv4si(__a);
}

__extension__ static __inline float32x4_t __attribute__ ((__always_inline__))
vxtof_u32_f32_bp (uint32x4_t __a, const int32_t __b)
{
  __builtin_csky_insfcrsi(__b, 5, 16);
  return __builtin_csky_vxtofuv4si(__a);
}

__extension__ static __inline float16x8_t __attribute__ ((__always_inline__))
vxtof_s32_f16_bp (int32x4_t __a, const int32_t __b)
{
  __builtin_csky_insfcrsi(__b, 5, 16);
  return __builtin_csky_vxtofdv4si(__a);
}

__extension__ static __inline float16x8_t __attribute__ ((__always_inline__))
vxtof_u32_f16_bp (uint32x4_t __a, const int32_t __b)
{
  __builtin_csky_insfcrsi(__b, 5, 16);
  return __builtin_csky_vxtofduv4si(__a);
}

__extension__ static __inline int16x8_t __attribute__ ((__always_inline__))
vftoi_f16_s16 (float16x8_t __a)
{
  return __builtin_csky_vftoiv8hf(__a);
}

__extension__ static __inline uint16x8_t __attribute__ ((__always_inline__))
vftoi_f16_u16 (float16x8_t __a)
{
  return __builtin_csky_vftoiuv8hf(__a);
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vftoi_f32_s32 (float32x4_t __a)
{
  return __builtin_csky_vftoiv4sf(__a);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vftoi_f32_u32 (float32x4_t __a)
{
  return __builtin_csky_vftoiuv4sf(__a);
}

__extension__ static __inline int32x4x2_t __attribute__ ((__always_inline__))
vftoi_f16_s32 (float16x8_t __a)
{
  union { int32x4x2_t __i; __builtin_csky_oi __o;} __rv;
  __rv.__o = __builtin_csky_vftoiqv8hf(__a);
  return __rv.__i;
}

__extension__ static __inline uint32x4x2_t __attribute__ ((__always_inline__))
vftoi_f16_u32 (float16x8_t __a)
{
  union { uint32x4x2_t __i; __builtin_csky_oi __o;} __rv;
  __rv.__o = __builtin_csky_vftoiquv8hf(__a);
  return __rv.__i;
}

__extension__ static __inline float16x8_t __attribute__ ((__always_inline__))
vitof_s16_f16 (int16x8_t __a)
{
  return __builtin_csky_vitofv8hi(__a);
}

__extension__ static __inline float16x8_t __attribute__ ((__always_inline__))
vitof_u16_f16 (uint16x8_t __a)
{
  return __builtin_csky_vitofuv8hi(__a);
}

__extension__ static __inline float32x4_t __attribute__ ((__always_inline__))
vitof_s32_f32 (int32x4_t __a)
{
  return __builtin_csky_vitofv4si(__a);
}

__extension__ static __inline float32x4_t __attribute__ ((__always_inline__))
vitof_u32_f32 (uint32x4_t __a)
{
  return __builtin_csky_vitofuv4si(__a);
}

__extension__ static __inline float16x8_t __attribute__ ((__always_inline__))
vitof_s32_f16 (int32x4_t __a)
{
  return __builtin_csky_vitofdv4si(__a);
}

__extension__ static __inline float16x8_t __attribute__ ((__always_inline__))
vitof_u32_f16 (uint32x4_t __a)
{
  return __builtin_csky_vitofduv4si(__a);
}

/* conversion with special rounding mode
   between floating point32_t and integer */
__extension__ static __inline int32x4x2_t __attribute__ ((__always_inline__))
vftoi_f16_s32_rn (float16x8_t __a)
{
  union { int32x4x2_t __i; __builtin_csky_oi __o;} __rv;
  __rv.__o = __builtin_csky_vftoilrnv8hf(__a);
  return __rv.__i;
}

__extension__ static __inline uint32x4x2_t __attribute__ ((__always_inline__))
vftoi_f16_u32_rn (float16x8_t __a)
{
  union { uint32x4x2_t __i; __builtin_csky_oi __o;} __rv;
  __rv.__o = __builtin_csky_vftoilrnuv8hf(__a);
  return __rv.__i;
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vftoi_f32_s32_rn (float32x4_t __a)
{
  return __builtin_csky_vftoilrnv4sf(__a);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vftoi_f32_u32_rn (float32x4_t __a)
{
  return __builtin_csky_vftoilrnuv4sf(__a);
}

__extension__ static __inline int32x4x2_t __attribute__ ((__always_inline__))
vftoi_f16_s32_rz (float16x8_t __a)
{
  union { int32x4x2_t __i; __builtin_csky_oi __o;} __rv;
  __rv.__o = __builtin_csky_vftoilrzv8hf(__a);
  return __rv.__i;
}

__extension__ static __inline uint32x4x2_t __attribute__ ((__always_inline__))
vftoi_f16_u32_rz (float16x8_t __a)
{
  union { uint32x4x2_t __i; __builtin_csky_oi __o;} __rv;
  __rv.__o = __builtin_csky_vftoilrzuv8hf(__a);
  return __rv.__i;
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vftoi_f32_s32_rz (float32x4_t __a)
{
  return __builtin_csky_vftoilrzv4sf(__a);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vftoi_f32_u32_rz (float32x4_t __a)
{
  return __builtin_csky_vftoilrzuv4sf(__a);
}

__extension__ static __inline int32x4x2_t __attribute__ ((__always_inline__))
vftoi_f16_s32_rpi (float16x8_t __a)
{
  union { int32x4x2_t __i; __builtin_csky_oi __o;} __rv;
  __rv.__o = __builtin_csky_vftoilrpiv8hf(__a);
  return __rv.__i;
}

__extension__ static __inline uint32x4x2_t __attribute__ ((__always_inline__))
vftoi_f16_u32_rpi (float16x8_t __a)
{
  union { uint32x4x2_t __i; __builtin_csky_oi __o;} __rv;
  __rv.__o = __builtin_csky_vftoilrpiuv8hf(__a);
  return __rv.__i;
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vftoi_f32_s32_rpi (float32x4_t __a)
{
  return __builtin_csky_vftoilrpiv4sf(__a);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vftoi_f32_u32_rpi (float32x4_t __a)
{
  return __builtin_csky_vftoilrpiuv4sf(__a);
}

__extension__ static __inline int32x4x2_t __attribute__ ((__always_inline__))
vftoi_f16_s32_rni (float16x8_t __a)
{
  union { int32x4x2_t __i; __builtin_csky_oi __o;} __rv;
  __rv.__o = __builtin_csky_vftoilrniv8hf(__a);
  return __rv.__i;
}

__extension__ static __inline uint32x4x2_t __attribute__ ((__always_inline__))
vftoi_f16_u32_rni (float16x8_t __a)
{
  union { uint32x4x2_t __i; __builtin_csky_oi __o;} __rv;
  __rv.__o = __builtin_csky_vftoilrniuv8hf(__a);
  return __rv.__i;
}

__extension__ static __inline int32x4_t __attribute__ ((__always_inline__))
vftoi_f32_s32_rni (float32x4_t __a)
{
  return __builtin_csky_vftoilrniv4sf(__a);
}

__extension__ static __inline uint32x4_t __attribute__ ((__always_inline__))
vftoi_f32_u32_rni (float32x4_t __a)
{
  return __builtin_csky_vftoilrniuv4sf(__a);
}

__extension__ static __inline float16x8_t __attribute__ ((__always_inline__))
vftofi_f16_rn (float16x8_t __a)
{
  return __builtin_csky_vftofirnv8hf(__a);
}

__extension__ static __inline float32x4_t __attribute__ ((__always_inline__))
vftofi_f32_rn (float32x4_t __a)
{
  return __builtin_csky_vftofirnv4sf(__a);
}

__extension__ static __inline float16x8_t __attribute__ ((__always_inline__))
vftofi_f16_rz (float16x8_t __a)
{
  return __builtin_csky_vftofirzv8hf(__a);
}

__extension__ static __inline float32x4_t __attribute__ ((__always_inline__))
vftofi_f32_rz (float32x4_t __a)
{
  return __builtin_csky_vftofirzv4sf(__a);
}

__extension__ static __inline float16x8_t __attribute__ ((__always_inline__))
vftofi_f16_rpi (float16x8_t __a)
{
  return __builtin_csky_vftofirpiv8hf(__a);
}

__extension__ static __inline float32x4_t __attribute__ ((__always_inline__))
vftofi_f32_rpi (float32x4_t __a)
{
  return __builtin_csky_vftofirpiv4sf(__a);
}

__extension__ static __inline float16x8_t __attribute__ ((__always_inline__))
vftofi_f16_rni (float16x8_t __a)
{
  return __builtin_csky_vftofirniv8hf(__a);
}

__extension__ static __inline float32x4_t __attribute__ ((__always_inline__))
vftofi_f32_rni (float32x4_t __a)
{
  return __builtin_csky_vftofirniv4sf(__a);
}

__extension__ static __inline float16x8_t __attribute__ ((__always_inline__))
vmul_f16 (float16x8_t __a, float16x8_t __b)
{
  return __a * __b;
}

__extension__ static __inline float32x4_t __attribute__ ((__always_inline__))
vmul_f32 (float32x4_t __a, float32x4_t __b)
{
  return __a * __b;
}

__extension__ static __inline float16x8_t __attribute__ ((__always_inline__))
vmuli_f16 (float16x8_t __a, float16x8_t __b, const int32_t __c)
{
  return __builtin_csky_vmuliv8hf(__a, __b, __c);
}

__extension__ static __inline float32x4_t __attribute__ ((__always_inline__))
vmuli_f32 (float32x4_t __a, float32x4_t __b, const int32_t __c)
{
  return __builtin_csky_vmuliv4sf(__a, __b, __c);
}

__extension__ static __inline float16x8_t __attribute__ ((__always_inline__))
vmula_f16 (float16x8_t __a, float16x8_t __b, float16x8_t __c)
{
  return __builtin_csky_vmulav8hf(__a, __b, __c);
}

__extension__ static __inline float32x4_t __attribute__ ((__always_inline__))
vmula_f32 (float32x4_t __a, float32x4_t __b, float32x4_t __c)
{
  return __builtin_csky_vmulav4sf(__a, __b, __c);
}

__extension__ static __inline float16x8_t __attribute__ ((__always_inline__))
vmulai_f16 (float16x8_t __a, float16x8_t __b, float16x8_t __c, const int32_t __d)
{
  return __builtin_csky_vmulaiv8hf(__a, __b, __c, __d);
}

__extension__ static __inline float32x4_t __attribute__ ((__always_inline__))
vmulai_f32 (float32x4_t __a, float32x4_t __b, float32x4_t __c, const int32_t __d)
{
  return __builtin_csky_vmulaiv4sf(__a, __b, __c, __d);
}

__extension__ static __inline float16x8_t __attribute__ ((__always_inline__))
vmuls_f16 (float16x8_t __a, float16x8_t __b, float16x8_t __c)
{
  return __builtin_csky_vmulsv8hf(__a, __b, __c);
}

__extension__ static __inline float32x4_t __attribute__ ((__always_inline__))
vmuls_f32 (float32x4_t __a, float32x4_t __b, float32x4_t __c)
{
  return __builtin_csky_vmulsv4sf(__a, __b, __c);
}

__extension__ static __inline float16x8_t __attribute__ ((__always_inline__))
vmulsi_f16 (float16x8_t __a, float16x8_t __b, float16x8_t __c, const int32_t __d)
{
  return __builtin_csky_vmulsiv8hf(__a, __b, __c, __d);
}

__extension__ static __inline float32x4_t __attribute__ ((__always_inline__))
vmulsi_f32 (float32x4_t __a, float32x4_t __b, float32x4_t __c, const int32_t __d)
{
  return __builtin_csky_vmulsiv4sf(__a, __b, __c, __d);
}

__extension__ static __inline float16x8_t __attribute__ ((__always_inline__))
vfmula_f16 (float16x8_t __a, float16x8_t __b, float16x8_t __c)
{
  return __a + __b * __c;
}

__extension__ static __inline float32x4_t __attribute__ ((__always_inline__))
vfmula_f32 (float32x4_t __a, float32x4_t __b, float32x4_t __c)
{
  return __a + __b * __c;
}

__extension__ static __inline float16x8_t __attribute__ ((__always_inline__))
vfmuls_f16 (float16x8_t __a, float16x8_t __b, float16x8_t __c)
{
  return __builtin_csky_vfmulsv8hf(__a, __b, __c);
}

__extension__ static __inline float32x4_t __attribute__ ((__always_inline__))
vfmuls_f32 (float32x4_t __a, float32x4_t __b, float32x4_t __c)
{
  return __builtin_csky_vfmulsv4sf(__a, __b, __c);
}

__extension__ static __inline float16x8_t __attribute__ ((__always_inline__))
vfnmula_f16 (float16x8_t __a, float16x8_t __b, float16x8_t __c)
{
  return __builtin_csky_vfnmulav8hf(__a, __b, __c);
}

__extension__ static __inline float32x4_t __attribute__ ((__always_inline__))
vfnmula_f32 (float32x4_t __a, float32x4_t __b, float32x4_t __c)
{
  return __builtin_csky_vfnmulav4sf(__a, __b, __c);
}

__extension__ static __inline float16x8_t __attribute__ ((__always_inline__))
vfnmuls_f16 (float16x8_t __a, float16x8_t __b, float16x8_t __c)
{
  return __builtin_csky_vfnmulsv8hf(__a, __b, __c);
}

__extension__ static __inline float32x4_t __attribute__ ((__always_inline__))
vfnmuls_f32 (float32x4_t __a, float32x4_t __b, float32x4_t __c)
{
  return __builtin_csky_vfnmulsv4sf(__a, __b, __c);
}

__extension__ static __inline float32x4x2_t __attribute__ ((__always_inline__))
vfmula_f16_e (float32x4x2_t __a, float16x8_t __b, float16x8_t __c)
{
  union { float32x4x2_t __i; __builtin_csky_oi __o;} __rv;
  union { float32x4x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  __rv.__o =  __builtin_csky_vfmulaev8hf(__au.__o, __b, __c);
  return __rv.__i;
}

__extension__ static __inline float32x4x2_t __attribute__ ((__always_inline__))
vfmuls_f16_e (float32x4x2_t __a, float16x8_t __b, float16x8_t __c)
{
  union { float32x4x2_t __i; __builtin_csky_oi __o;} __rv;
  union { float32x4x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  __rv.__o =  __builtin_csky_vfmulsev8hf(__au.__o, __b, __c);
  return __rv.__i;
}

__extension__ static __inline float32x4x2_t __attribute__ ((__always_inline__))
vfmulai_f16_e (float32x4x2_t __a, float16x8_t __b, float16x8_t __c, const int32_t __d)
{
  union { float32x4x2_t __i; __builtin_csky_oi __o;} __rv;
  union { float32x4x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  __rv.__o =  __builtin_csky_vfmulaiev8hf(__au.__o, __b, __c, __d);
  return __rv.__i;
}

__extension__ static __inline float32x4x2_t __attribute__ ((__always_inline__))
vfmulsi_f16_e (float32x4x2_t __a, float16x8_t __b, float16x8_t __c, const int32_t __d)
{
  union { float32x4x2_t __i; __builtin_csky_oi __o;} __rv;
  union { float32x4x2_t __i; __builtin_csky_oi __o;} __au = { __a};
  __rv.__o =  __builtin_csky_vfmulsiev8hf(__au.__o, __b, __c, __d);
  return __rv.__i;
}

__extension__ static __inline float16x8_t __attribute__ ((__always_inline__))
vfmulxaa_f16 (float16x8_t __a, float16x8_t __b, float16x8_t __c)
{
  return __builtin_csky_vfmulxaav8hf(__a, __b, __c);
}

__extension__ static __inline float32x4_t __attribute__ ((__always_inline__))
vfmulxaa_f32 (float32x4_t __a, float32x4_t __b, float32x4_t __c)
{
  return __builtin_csky_vfmulxaav4sf(__a, __b, __c);
}

__extension__ static __inline float16x8_t __attribute__ ((__always_inline__))
vfmulxas_f16 (float16x8_t __a, float16x8_t __b, float16x8_t __c)
{
  return __builtin_csky_vfmulxasv8hf(__a, __b, __c);
}

__extension__ static __inline float32x4_t __attribute__ ((__always_inline__))
vfmulxas_f32 (float32x4_t __a, float32x4_t __b, float32x4_t __c)
{
  return __builtin_csky_vfmulxasv4sf(__a, __b, __c);
}

__extension__ static __inline float16x8_t __attribute__ ((__always_inline__))
vfmulxsa_f16 (float16x8_t __a, float16x8_t __b, float16x8_t __c)
{
  return __builtin_csky_vfmulxsav8hf(__a, __b, __c);
}

__extension__ static __inline float32x4_t __attribute__ ((__always_inline__))
vfmulxsa_f32 (float32x4_t __a, float32x4_t __b, float32x4_t __c)
{
  return __builtin_csky_vfmulxsav4sf(__a, __b, __c);
}

__extension__ static __inline float16x8_t __attribute__ ((__always_inline__))
vfmulxss_f16 (float16x8_t __a, float16x8_t __b, float16x8_t __c)
{
  return __builtin_csky_vfmulxssv8hf(__a, __b, __c);
}

__extension__ static __inline float32x4_t __attribute__ ((__always_inline__))
vfmulxss_f32 (float32x4_t __a, float32x4_t __b, float32x4_t __c)
{
  return __builtin_csky_vfmulxssv4sf(__a, __b, __c);
}

__extension__ static __inline float16x8_t __attribute__ ((__always_inline__))
vfmulxaai_f16 (float16x8_t __a, float16x8_t __b, float16x8_t __c, const int32_t __d)
{
  return __builtin_csky_vfmulxaaiv8hf(__a, __b, __c, __d);
}

__extension__ static __inline float32x4_t __attribute__ ((__always_inline__))
vfmulxaai_f32 (float32x4_t __a, float32x4_t __b, float32x4_t __c, const int32_t __d)
{
  return __builtin_csky_vfmulxaaiv4sf(__a, __b, __c, __d);
}

__extension__ static __inline float16x8_t __attribute__ ((__always_inline__))
vfmulxasi_f16 (float16x8_t __a, float16x8_t __b, float16x8_t __c, const int32_t __d)
{
  return __builtin_csky_vfmulxasiv8hf(__a, __b, __c, __d);
}

__extension__ static __inline float32x4_t __attribute__ ((__always_inline__))
vfmulxasi_f32 (float32x4_t __a, float32x4_t __b, float32x4_t __c, const int32_t __d)
{
  return __builtin_csky_vfmulxasiv4sf(__a, __b, __c, __d);
}

__extension__ static __inline float16x8_t __attribute__ ((__always_inline__))
vfmulxsai_f16 (float16x8_t __a, float16x8_t __b, float16x8_t __c, const int32_t __d)
{
  return __builtin_csky_vfmulxsaiv8hf(__a, __b, __c, __d);
}

__extension__ static __inline float32x4_t __attribute__ ((__always_inline__))
vfmulxsai_f32 (float32x4_t __a, float32x4_t __b, float32x4_t __c, const int32_t __d)
{
  return __builtin_csky_vfmulxsaiv4sf(__a, __b, __c, __d);
}

__extension__ static __inline float16x8_t __attribute__ ((__always_inline__))
vfmulxssi_f16 (float16x8_t __a, float16x8_t __b, float16x8_t __c, const int32_t __d)
{
  return __builtin_csky_vfmulxssiv8hf(__a, __b, __c, __d);
}

__extension__ static __inline float32x4_t __attribute__ ((__always_inline__))
vfmulxssi_f32 (float32x4_t __a, float32x4_t __b, float32x4_t __c, const int32_t __d)
{
  return __builtin_csky_vfmulxssiv4sf(__a, __b, __c, __d);
}

__extension__ static __inline float16x8_t __attribute__ ((__always_inline__))
vfcmul_f16 (float16x8_t __a, float16x8_t __b)
{
  return __builtin_csky_vfcmulv8hf(__a, __b);
}

__extension__ static __inline float32x4_t __attribute__ ((__always_inline__))
vfcmul_f32 (float32x4_t __a, float32x4_t __b)
{
  return __builtin_csky_vfcmulv4sf(__a, __b);
}

__extension__ static __inline float16x8_t __attribute__ ((__always_inline__))
vfcmula_f16 (float16x8_t __a, float16x8_t __b, float16x8_t __c)
{
  return __builtin_csky_vfcmulav8hf(__a, __b, __c);
}

__extension__ static __inline float32x4_t __attribute__ ((__always_inline__))
vfcmula_f32 (float32x4_t __a, float32x4_t __b, float32x4_t __c)
{
  return __builtin_csky_vfcmulav4sf(__a, __b, __c);
}

__extension__ static __inline float16x8_t __attribute__ ((__always_inline__))
vfcmulc_f16 (float16x8_t __a, float16x8_t __b)
{
  return __builtin_csky_vfcmulcv8hf(__a, __b);
}

__extension__ static __inline float32x4_t __attribute__ ((__always_inline__))
vfcmulc_f32 (float32x4_t __a, float32x4_t __b)
{
  return __builtin_csky_vfcmulcv4sf(__a, __b);
}

__extension__ static __inline float16x8_t __attribute__ ((__always_inline__))
vfcmulca_f16 (float16x8_t __a, float16x8_t __b, float16x8_t __c)
{
  return __builtin_csky_vfcmulcav8hf(__a, __b, __c);
}

__extension__ static __inline float32x4_t __attribute__ ((__always_inline__))
vfcmulca_f32 (float32x4_t __a, float32x4_t __b, float32x4_t __c)
{
  return __builtin_csky_vfcmulcav4sf(__a, __b, __c);
}

__extension__ static __inline float16x8_t __attribute__ ((__always_inline__))
vfcmuln_f16 (float16x8_t __a, float16x8_t __b)
{
  return __builtin_csky_vfcmulnv8hf(__a, __b);
}

__extension__ static __inline float32x4_t __attribute__ ((__always_inline__))
vfcmuln_f32 (float32x4_t __a, float32x4_t __b)
{
  return __builtin_csky_vfcmulnv4sf(__a, __b);
}

__extension__ static __inline float16x8_t __attribute__ ((__always_inline__))
vfcmulna_f16 (float16x8_t __a, float16x8_t __b, float16x8_t __c)
{
  return __builtin_csky_vfcmulnav8hf(__a, __b, __c);
}

__extension__ static __inline float32x4_t __attribute__ ((__always_inline__))
vfcmulna_f32 (float32x4_t __a, float32x4_t __b, float32x4_t __c)
{
  return __builtin_csky_vfcmulnav4sf(__a, __b, __c);
}

__extension__ static __inline float16x8_t __attribute__ ((__always_inline__))
vfcmulcn_f16 (float16x8_t __a, float16x8_t __b)
{
  return __builtin_csky_vfcmulcnv8hf(__a, __b);
}

__extension__ static __inline float32x4_t __attribute__ ((__always_inline__))
vfcmulcn_f32 (float32x4_t __a, float32x4_t __b)
{
  return __builtin_csky_vfcmulcnv4sf(__a, __b);
}

__extension__ static __inline float16x8_t __attribute__ ((__always_inline__))
vfcmulcna_f16 (float16x8_t __a, float16x8_t __b, float16x8_t __c)
{
  return __builtin_csky_vfcmulcnav8hf(__a, __b, __c);
}

__extension__ static __inline float32x4_t __attribute__ ((__always_inline__))
vfcmulcna_f32 (float32x4_t __a, float32x4_t __b, float32x4_t __c)
{
  return __builtin_csky_vfcmulcnav4sf(__a, __b, __c);
}

__extension__ static __inline float16x8_t __attribute__ ((__always_inline__))
vmovi_f16 (const float16_t __a)
{
  return __builtin_csky_vmovihf(__a);
}

__extension__ static __inline float32x4_t __attribute__ ((__always_inline__))
vmovi_f32 (const float __a)
{
  return __builtin_csky_vmovisf(__a);
}
#endif // __CSKY_VDSPV2_F__
#endif // __CSKY_VDSPV2__
#endif

