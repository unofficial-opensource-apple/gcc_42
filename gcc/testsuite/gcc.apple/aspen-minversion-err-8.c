/* APPLE LOCAL file ARM 5683689 */

/* Verify that an error message is given for an invalid
   -maspen-version-min argument.  */

/* { dg-do compile { target *-*-darwin* } } */
/* { dg-options "-maspen-version-min=" } */
/* { dg-skip-if "Not valid with -mmacosx-version-min" { *-*-darwin* } { "-mmacosx-version-min=*" } { "" } } */

int main(void)
{
  return 0;
}

/* { dg-error "missing argument" "" {target *-*-* } 0 } */
