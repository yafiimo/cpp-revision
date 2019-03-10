
CC=g++
CFLAGS=-c -g -Wall -Iheaders/

output: main.o
	$(CC) -o a.out main.o person.o

main.o: main.cpp person.o
	$(CC) $(CFLAGS) main.cpp

person.o: person.cpp headers/Person.h
	$(CC) $(CFLAGS) person.cpp

clean:
	rm -rf *o a.out