
CC=g++
CFLAGS=-c -g -Wall -Iheaders


main: main.o functions.o
	${CC} -o main.out main.o functions.o

main.o: main.cpp
	${CC} ${CFLAGS} -o main.o main.cpp

functions.o: functions.cpp headers/functions.h
	${CC} ${CFLAGS} -o functions.o functions.cpp

clean: 
	rm -rf *.o *.out