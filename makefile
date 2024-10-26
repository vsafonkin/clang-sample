all: build

build:
	gcc -O3 -o ./bin/sample ./main.c
	gcc -g3 -O0 -o ./bin/debug ./main.c
	./bin/sample

bclang:
	clang -O3 -o ./bin/sample ./main.c
	clang -g3 -O0 -o ./bin/debug ./main.c
	./bin/sample

run: build
	./bin/sample

clean:
	rm -rf ./bin/*