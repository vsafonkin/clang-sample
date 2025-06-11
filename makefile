all: build

build:
	gcc -O3 -o ./bin/sample ./main.c -lm
	gcc -g3 -O0 -o ./bin/debug ./main.c -lm

bclang:
	clang -O3 -o ./bin/sample ./main.c
	clang -g3 -O0 -o ./bin/debug ./main.c
	./bin/sample

run:
	./bin/sample

clean:
	rm -rf ./bin/*

nasm:
	nasm -f elf -g ./hello.asm
	ld -m elf_i386 -o hello hello.o
	./hello
