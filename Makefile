
CC = cc
all: hello

default: all

hello:
	cc -c helloWorld.c

clean:
	rm -f *.out

.PHONY:
	clean
