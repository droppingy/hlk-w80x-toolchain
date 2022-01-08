/* Generated automatically by the program 'build/genpreds'
   from the machine description file '/ldhome/software/toolsbuild/slave2/workspace/Toolchain/release-csky-1/source//gcc/gcc/config/csky/abiv2_csky.md'.  */

#ifndef GCC_TM_PREDS_H
#define GCC_TM_PREDS_H

#ifdef HAVE_MACHINE_MODES
extern int general_operand (rtx, machine_mode);
extern int address_operand (rtx, machine_mode);
extern int register_operand (rtx, machine_mode);
extern int pmode_register_operand (rtx, machine_mode);
extern int scratch_operand (rtx, machine_mode);
extern int immediate_operand (rtx, machine_mode);
extern int const_int_operand (rtx, machine_mode);
extern int const_double_operand (rtx, machine_mode);
extern int nonimmediate_operand (rtx, machine_mode);
extern int nonmemory_operand (rtx, machine_mode);
extern int push_operand (rtx, machine_mode);
extern int pop_operand (rtx, machine_mode);
extern int memory_operand (rtx, machine_mode);
extern int indirect_operand (rtx, machine_mode);
extern int ordered_comparison_operator (rtx, machine_mode);
extern int comparison_operator (rtx, machine_mode);
extern int csky_load_multiple_operation (rtx, machine_mode);
extern int csky_store_multiple_operation (rtx, machine_mode);
extern int csky_arith_K_operand (rtx, machine_mode);
extern int csky_arith_J_operand (rtx, machine_mode);
extern int csky_arith_Ut_operand (rtx, machine_mode);
extern int csky_literal_Ut_operand (rtx, machine_mode);
extern int csky_arith_Uu_operand (rtx, machine_mode);
extern int csky_literal_K_operand (rtx, machine_mode);
extern int csky_literal_I_operand (rtx, machine_mode);
extern int csky_literal_J_operand (rtx, machine_mode);
extern int csky_literal_Uk_operand (rtx, machine_mode);
extern int csky_arith_int1_operand (rtx, machine_mode);
extern int csky_call_address_operand (rtx, machine_mode);
extern int csky_compare_operand (rtx, machine_mode);
extern int csky_literal_K_Uh_operand (rtx, machine_mode);
extern int csky_addr_reg_disp (rtx, machine_mode);
extern int csky_addr_reg (rtx, machine_mode);
extern int csky_arith_any_imm_operand (rtx, machine_mode);
extern int csky_arith_O_operand (rtx, machine_mode);
extern int csky_arith_Uf_operand (rtx, machine_mode);
extern int csky_unspec_operand (rtx, machine_mode);
extern int csky_arith_Ue_operand (rtx, machine_mode);
extern int csky_const_float1_operand (rtx, machine_mode);
extern int csky_arith_float1_operand (rtx, machine_mode);
extern int csky_const_float0_operand (rtx, machine_mode);
extern int csky_compare_operand_float (rtx, machine_mode);
extern int registers_push (rtx, machine_mode);
extern int registers_pop (rtx, machine_mode);
extern int push_memory_operand (rtx, machine_mode);
extern int pop_memory_operand (rtx, machine_mode);
extern int csky_float_comparison_operator (rtx, machine_mode);
extern int cc_register (rtx, machine_mode);
extern int const_0_to_3_operand (rtx, machine_mode);
extern int const_0_to_7_operand (rtx, machine_mode);
extern int const_0_to_15_operand (rtx, machine_mode);
extern int const_1_to_16_operand (rtx, machine_mode);
extern int const_0_to_31_operand (rtx, machine_mode);
extern int const_0_to_127_operand (rtx, machine_mode);
extern int const_0_to_127_mult4_operand (rtx, machine_mode);
extern int imm_or_reg_vdsp_operand (rtx, machine_mode);
extern int imm_for_vdspv2_lshift_operand (rtx, machine_mode);
extern int imm_for_vdspv2_rshift_operand (rtx, machine_mode);
extern int imm_for_vdspv2_lshifte_operand (rtx, machine_mode);
extern int imm_lshift_or_reg_vdspv2 (rtx, machine_mode);
extern int imm_rshift_or_reg_vdspv2 (rtx, machine_mode);
extern int zero_operand (rtx, machine_mode);
extern int vectcmp_operand (rtx, machine_mode);
extern int reg_or_zero_operand (rtx, machine_mode);
extern int csky_scond_operator_common (rtx, machine_mode);
extern int csky_ucond_operator_common (rtx, machine_mode);
extern int csky_scond_operator (rtx, machine_mode);
extern int csky_ucond_operator (rtx, machine_mode);
extern int csky_address_index (rtx, machine_mode);
extern int csky_address_index_0 (rtx, machine_mode);
extern int const_double_fcvt_power_of_two_reciprocal_hq (rtx, machine_mode);
extern int const_double_fcvt_power_of_two_reciprocal_sq (rtx, machine_mode);
extern int const_double_fcvt_power_of_two_hq (rtx, machine_mode);
extern int const_double_fcvt_power_of_two_sq (rtx, machine_mode);
extern int g_register_operand (rtx, machine_mode);
#endif /* HAVE_MACHINE_MODES */

#define CONSTRAINT_NUM_DEFINED_P 1
enum constraint_num
{
  CONSTRAINT__UNKNOWN = 0,
  CONSTRAINT_r,
  CONSTRAINT_a,
  CONSTRAINT_b,
  CONSTRAINT_c,
  CONSTRAINT_y,
  CONSTRAINT_l,
  CONSTRAINT_h,
  CONSTRAINT_w,
  CONSTRAINT_v,
  CONSTRAINT_z,
  CONSTRAINT_I,
  CONSTRAINT_N,
  CONSTRAINT_L,
  CONSTRAINT_M,
  CONSTRAINT_P,
  CONSTRAINT_J,
  CONSTRAINT_K,
  CONSTRAINT_O,
  CONSTRAINT_m,
  CONSTRAINT_o,
  CONSTRAINT_Q,
  CONSTRAINT_W,
  CONSTRAINT_Ds,
  CONSTRAINT_Dd,
  CONSTRAINT_Dl,
  CONSTRAINT_Dn,
  CONSTRAINT_p,
  CONSTRAINT_Un,
  CONSTRAINT_Ub,
  CONSTRAINT_Uc,
  CONSTRAINT_Ui,
  CONSTRAINT_Uo,
  CONSTRAINT_Up,
  CONSTRAINT_Uw,
  CONSTRAINT_Uf,
  CONSTRAINT_T,
  CONSTRAINT_Us,
  CONSTRAINT_Um,
  CONSTRAINT_Ua,
  CONSTRAINT_Ug,
  CONSTRAINT_Uj,
  CONSTRAINT_Ul,
  CONSTRAINT_Uq,
  CONSTRAINT_Ur,
  CONSTRAINT_Ux,
  CONSTRAINT_Uk,
  CONSTRAINT_Uh,
  CONSTRAINT_Ue,
  CONSTRAINT_Ut,
  CONSTRAINT_Uu,
  CONSTRAINT_Dv,
  CONSTRAINT_Dt,
  CONSTRAINT_Du,
  CONSTRAINT_V,
  CONSTRAINT__l,
  CONSTRAINT__g,
  CONSTRAINT_R,
  CONSTRAINT_Dp,
  CONSTRAINT_Dm,
  CONSTRAINT_i,
  CONSTRAINT_s,
  CONSTRAINT_n,
  CONSTRAINT_E,
  CONSTRAINT_F,
  CONSTRAINT_X,
  CONSTRAINT_S,
  CONSTRAINT__LIMIT
};

extern enum constraint_num lookup_constraint_1 (const char *);
extern const unsigned char lookup_constraint_array[];

/* Return the constraint at the beginning of P, or CONSTRAINT__UNKNOWN if it
   isn't recognized.  */

static inline enum constraint_num
lookup_constraint (const char *p)
{
  unsigned int index = lookup_constraint_array[(unsigned char) *p];
  return (index == UCHAR_MAX
          ? lookup_constraint_1 (p)
          : (enum constraint_num) index);
}

extern bool (*constraint_satisfied_p_array[]) (rtx);

/* Return true if X satisfies constraint C.  */

static inline bool
constraint_satisfied_p (rtx x, enum constraint_num c)
{
  int i = (int) c - (int) CONSTRAINT_I;
  return i >= 0 && constraint_satisfied_p_array[i] (x);
}

static inline bool
insn_extra_register_constraint (enum constraint_num c)
{
  return c >= CONSTRAINT_r && c <= CONSTRAINT_z;
}

static inline bool
insn_extra_memory_constraint (enum constraint_num c)
{
  return c >= CONSTRAINT_m && c <= CONSTRAINT_Dn;
}

static inline bool
insn_extra_special_memory_constraint (enum constraint_num)
{
  return false;
}

static inline bool
insn_extra_address_constraint (enum constraint_num c)
{
  return c >= CONSTRAINT_p && c <= CONSTRAINT_p;
}

static inline void
insn_extra_constraint_allows_reg_mem (enum constraint_num c,
				      bool *allows_reg, bool *allows_mem)
{
  if (c >= CONSTRAINT_Un && c <= CONSTRAINT_Du)
    return;
  if (c >= CONSTRAINT_V && c <= CONSTRAINT_Dm)
    {
      *allows_mem = true;
      return;
    }
  (void) c;
  *allows_reg = true;
  *allows_mem = true;
}

static inline size_t
insn_constraint_len (char fc, const char *str ATTRIBUTE_UNUSED)
{
  switch (fc)
    {
    case 'D': return 2;
    case 'U': return 2;
    default: break;
    }
  return 1;
}

#define CONSTRAINT_LEN(c_,s_) insn_constraint_len (c_,s_)

extern enum reg_class reg_class_for_constraint_1 (enum constraint_num);

static inline enum reg_class
reg_class_for_constraint (enum constraint_num c)
{
  if (insn_extra_register_constraint (c))
    return reg_class_for_constraint_1 (c);
  return NO_REGS;
}

extern bool insn_const_int_ok_for_constraint (HOST_WIDE_INT, enum constraint_num);
#define CONST_OK_FOR_CONSTRAINT_P(v_,c_,s_) \
    insn_const_int_ok_for_constraint (v_, lookup_constraint (s_))

enum constraint_type
{
  CT_REGISTER,
  CT_CONST_INT,
  CT_MEMORY,
  CT_SPECIAL_MEMORY,
  CT_ADDRESS,
  CT_FIXED_FORM
};

static inline enum constraint_type
get_constraint_type (enum constraint_num c)
{
  if (c >= CONSTRAINT_p)
    {
      if (c >= CONSTRAINT_Un)
        return CT_FIXED_FORM;
      return CT_ADDRESS;
    }
  if (c >= CONSTRAINT_m)
    return CT_MEMORY;
  if (c >= CONSTRAINT_I)
    return CT_CONST_INT;
  return CT_REGISTER;
}
#endif /* tm-preds.h */
