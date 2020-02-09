CC=g++
CFLAGS=-c -g -Wall -Wextra

main: main.o
	$(CC) -o main.out main.o functions.o

main.o: main.cpp functions.o
	$(CC) ${CFLAGS} -o main.o main.cpp

functions.o: functions.cpp functions.h
	$(CC) ${CFLAGS} -o functions.o functions.cpp

clean:
	rm -rf *.o *.out
