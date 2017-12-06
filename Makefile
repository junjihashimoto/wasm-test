all: main.js
	node main.js

main.js:test.c libhello.wasm pre.js
	emcc -o $@ $< -s MAIN_MODULE=1 -s WASM=1 \
          --pre-js pre.js \
          --embed-file libhello.wasm@/lib/libhello.wasm 

libhello.wasm:hello.c
	emcc -o $@ $< -s SIDE_MODULE=1 -s WASM=1

