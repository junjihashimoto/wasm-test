#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dlfcn.h>
#include <emscripten.h>

void
em_asm(char* str){
  EM_ASM_({
      var str=Pointer_stringify($0);
      eval(str);
  },str);
}

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
