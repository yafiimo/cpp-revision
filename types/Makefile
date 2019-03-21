CC=g++
CFLAGS=-c -g -Wall


all: main.o
	$(CC) main.o -o types.out

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

clean:
	rm -rf *o types.out
