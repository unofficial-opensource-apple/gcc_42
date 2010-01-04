/* APPLE LOCAL file v7 merge */
/* Test the `vuzpu32' ARM Neon intrinsic.  */
/* This file was autogenerated by neon-testgen.  */

/* { dg-do assemble } */
/* { dg-require-effective-target arm_neon_ok } */
/* { dg-options "-save-temps -O0 -mfpu=neon -mfloat-abi=softfp" } */

#include "arm_neon.h"

void test_vuzpu32 (void)
{
  uint32x2x2_t out_uint32x2x2_t;
  uint32x2_t arg0_uint32x2_t;
  uint32x2_t arg1_uint32x2_t;

  out_uint32x2x2_t = vuzp_u32 (arg0_uint32x2_t, arg1_uint32x2_t);
}

/* { dg-final { scan-assembler "vuzp\.32\[ 	\]+\[dD\]\[0-9\]+, \[dD\]\[0-9\]+!?\(\[ 	\]+@\[a-zA-Z0-9 \]+\)?\n" } } */
/* { dg-final { cleanup-saved-temps } } */
