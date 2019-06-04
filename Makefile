
CC = cc
all: hello

default: all

hello:
	cc -Wall -Os -g -c helloWorld.c

clean:
	rm -f *.o

.PHONY:
	clean
