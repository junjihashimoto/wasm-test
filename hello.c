#include <stdio.h>

extern void em_asm(char*);

void
hello ()
{
  em_asm("console.log('Hello by em_asm')");
  printf ("Hello by printf\n");
  return;
}
