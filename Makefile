
CC = gcc
all: hello

default: all

hello:
	$(CC) -Wall -Os -g -c sample2.c
	$(CC) -Wall -Os -g -c sample3.c

clean:
	rm -f *.o

.PHONY:
	clean
