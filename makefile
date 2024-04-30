all: build

build:
	gcc-12 -o ./bin/sample ./main.c
	gcc-12 -g -O0 -o ./bin/debug ./main.c

bclang:
	clang -o ./bin/sample ./main.c
	clang -g -O0 -o ./bin/debug ./main.c

run:
	./bin/sample

clean:
	rm ./bin/*

