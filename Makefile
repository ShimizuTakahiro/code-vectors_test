
CC = gcc
all: hello

default: all

hello:
	gcc -o helloWorld helloWorld.c

clean:
	rm helloWorld

.PHONY:
	clean
