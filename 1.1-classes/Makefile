CC=g++
CFLAGS=-c -g -Wall

all: main.o person.o
	$(CC) -o classes.out main.o person.o

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

person.o: Person.cpp
	$(CC) $(CFLAGS) Person.cpp

clean:
	rm -rf *.o classes.out
