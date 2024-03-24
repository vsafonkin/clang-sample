.DEFAULT_GOAL := build

build:
	gcc -g -o ./bin/sample main.c
	gcc -g -O0 -o ./bin/debug main.c

run:
	./bin/sample

clean:
	rm ./bin/sample ./bin/debug

