
CC=g++ -std=c++17
CFLAGS=-c -g -Wall -Iheaders


floats: floats.o
	${CC} -o floats.out floats.o

floats.o: floats.cpp
	${CC} ${CFLAGS} -o floats.o floats.cpp

bools: bools.o
	${CC} -o bools.out bools.o

bools.o: bools.cpp
	${CC} ${CFLAGS} -o bools.o bools.cpp

clean: 
	rm -rf *.o *.out