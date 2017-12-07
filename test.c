#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dlfcn.h>
#include <emscripten.h>

extern void em_asm_0(char* str);
extern void em_asm_1(char* str,void* arg1);
extern void em_asm_2(char* str,void* arg1,void* arg2);


int
main()
{
  void *h;
  void (*f) ();

  h = dlopen ("libhello.wasm", RTLD_NOW);
  f = dlsym (h, "hello");
  f();
  dlclose (h);
  return 0;
}
