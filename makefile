.DEFAULT_GOAL := build

build:
	gcc -o bin/sample main.c
	bin/sample
.PHONY:build

debug:
	gcc -g -O0 -o bin/debug main.c
.PHONY:debug
