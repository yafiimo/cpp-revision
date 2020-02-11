
CC=g++ -std=c++17
CFLAGS=-c -g -Wall -Iheaders


main: main.o
	${CC} -o main.out main.o

main.o: main.cpp
	${CC} ${CFLAGS} -o main.o main.cpp

clean: 
	rm -rf *.o *.out