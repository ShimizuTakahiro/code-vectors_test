
CC = gcc
all: hello

default: all

hello:
	$(CC) -Wall -Os -g -c sourceA.c

clean:
	rm -f *.o

.PHONY:
	clean
