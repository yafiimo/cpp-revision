
CC=g++ -std=c++17
CFLAGS=-c -g -Wall -Wextra -Iheaders


main: main.o
	${CC} -o main.out main.o

main.o: main.cpp
	${CC} ${CFLAGS} -o main.o main.cpp

floats: floats.o
	${CC} -o floats.out floats.o

floats.o: floats.cpp
	${CC} ${CFLAGS} -o floats.o floats.cpp

bools: bools.o
	${CC} -o bools.out bools.o

bools.o: bools.cpp
	${CC} ${CFLAGS} -o bools.o bools.cpp

chars: chars.o
	${CC} -o chars.out chars.o

chars.o: chars.cpp
	${CC} ${CFLAGS} -o chars.o chars.cpp

clean: 
	rm -rf *.o *.out