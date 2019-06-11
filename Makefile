
CC = gcc
all: hello

default: all

hello:
	$(CC) -Wall -Os -g -c source_101.c

clean:
	rm -f *.o

.PHONY:
	clean
