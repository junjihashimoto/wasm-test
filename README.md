# wasmでdlopenとem_asmの例

下記実行例

```
$ make
emcc -o libhello.wasm hello.c -s SIDE_MODULE=1 -s WASM=1
WARNING:root:BINARYEN_ASYNC_COMPILATION disabled due to user options. This will reduce performance and compatibility (some browsers limit synchronous compilation), see https://github.com/kripken/emscripten/wiki/WebAssembly#codegen-effects
emcc -o main.js test.c -s MAIN_MODULE=1 -s WASM=1 \
          --pre-js pre.js \
          --embed-file libhello.wasm@/lib/libhello.wasm
WARNING:root:BINARYEN_ASYNC_COMPILATION disabled due to user options. This will reduce performance and compatibility (some browsers limit synchronous compilation), see https://github.com/kripken/emscripten/wiki/WebAssembly#codegen-effects
node main.js
Hello by em_asm
Hello by printf
```
