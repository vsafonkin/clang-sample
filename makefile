all: build

build:
	gcc -O3 -o ./bin/sample ./main.c
	gcc -g3 -O0 -o ./bin/debug ./main.c

bclang:
	clang -O3 -o ./bin/sample ./main.c
	clang -g3 -O0 -o ./bin/debug ./main.c

run:
	./bin/sample

clean:
	rm -rf ./bin/*

