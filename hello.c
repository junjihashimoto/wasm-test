#include <stdio.h>

extern void em_asm_0(char* str);
extern void em_asm_1(char* str,void* arg1);
extern void em_asm_2(char* str,void* arg1,void* arg2);

void
hello ()
{
  em_asm_0("console.log('Hello by em_asm')");
  em_asm_1("console.log(Pointer_stringify($0))","Hello by em_asm with args.");
  printf ("Hello by printf\n");
  return;
}
