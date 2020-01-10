
CC = gcc
all: hello

default: all

hello:
	$(CC) -Wall -Os -g -c sourceB.c

clean:
	rm -f *.o

.PHONY:
	clean
