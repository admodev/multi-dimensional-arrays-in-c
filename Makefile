all: create_dirs compile run

create_dirs:
	mkdir -p bin

compile:
	gcc --std=c99 -o bin/main src/main.c

run:
	bin/main

