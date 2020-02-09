CC=g++
LIBS=../libraries
INC_PATH=-I$(LIBS)/plog-1.1.4/include
CFLAGS=-c -g -Wall

main: main.o
	$(CC) -o main.out main.o

main.o: main.cpp
	$(CC) $(CFLAGS) $(INC_PATH) -o main.o main.cpp

clean:
	rm -rf *.o *.out
