all: build

build:
	mkdir ./bin
	gcc -O3 -o ./bin/sample ./main.c
	gcc -g3 -O0 -o ./bin/debug ./main.c

bclang:
	mkdir ./bin
	clang -O3 -o ./bin/sample ./main.c
	clang -g3 -O0 -o ./bin/debug ./main.c

run:
	./bin/sample

clean:
	rm -rf ./bin/*

