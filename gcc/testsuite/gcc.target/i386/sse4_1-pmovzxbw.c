/* APPLE LOCAL file 5612787 mainline sse4 */
/* { dg-do run { target i?86-*-* x86_64-*-* } } */
/* { dg-require-effective-target sse4 } */
/* { dg-options "-O2 -msse4.1" } */

#include "sse4_1-check.h"

#include <smmintrin.h>

#define NUM 128

static void
sse4_1_test (void)
{
  union
    {
      __m128i x[NUM / 8];
      unsigned short s[NUM];
      unsigned char c[NUM * 2];
    } dst, src;
  int i;

  for (i = 0; i < NUM; i++)
    {
      src.c[(i % 8) + (i / 8) * 16] = i * i;
      if ((i % 4))
	src.c[(i % 8) + (i / 8) * 16] |= 0x80;
    }

  for (i = 0; i < NUM; i += 8)
    dst.x [i / 8] = _mm_cvtepu8_epi16 (src.x [i / 8]);

  for (i = 0; i < NUM; i++)
    if (src.c[(i % 8) + (i / 8) * 16] != dst.s[i])
      abort ();
}
