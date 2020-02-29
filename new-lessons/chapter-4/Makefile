CC=g++
LIBS=../libraries
INC_PATH=-I$(LIBS)
CFLAGS=-c -g -Wall -Wextra -Wsign-conversion

main: main.o
	$(CC) -o main.out main.o

main.o: main.cpp
	$(CC) $(CFLAGS) $(INC_PATH) -o main.o main.cpp

clean:
	rm -rf *.o *.out
