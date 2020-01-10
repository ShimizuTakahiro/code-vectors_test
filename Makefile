
CC = gcc
all: hello

default: all

hello:
	$(CC) -Wall -Os -g -c sourceC.c

clean:
	rm -f *.o

.PHONY:
	clean
