/* APPLE LOCAL file v7 merge */
/* Test the `vcreates16' ARM Neon intrinsic.  */
/* This file was autogenerated by neon-testgen.  */

/* { dg-do assemble } */
/* { dg-require-effective-target arm_neon_ok } */
/* { dg-options "-save-temps -O0 -mfpu=neon -mfloat-abi=softfp" } */

#include "arm_neon.h"

void test_vcreates16 (void)
{
  int16x4_t out_int16x4_t;
  uint64_t arg0_uint64_t;

  out_int16x4_t = vcreate_s16 (arg0_uint64_t);
}

/* { dg-final { cleanup-saved-temps } } */
