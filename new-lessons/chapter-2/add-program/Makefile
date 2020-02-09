
CC=g++
CFLAGS=-c -g -Wall -Wextra

main: main.o add.o
	$(CC) -o main.out main.o add.o

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

add.o: add.cpp
	$(CC) $(CFLAGS) add.cpp
clean:
	rm -rf *.o
