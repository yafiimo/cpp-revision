CC=g++
CFLAGS=-c -g -Wall -Iheaders/

main: main.o
	$(CC) -o main.out main.o person.o

main.o: main.cpp person.o headers/Resource.h
	$(CC) $(CFLAGS) main.cpp

manual: manual.o
	$(CC) -o manual.out manual.o person.o

manual.o: manual.cpp person.o headers/Resource.h
	$(CC) $(CFLAGS) manual.cpp

person.o: Person.cpp headers/Person.h
	$(CC) $(CFLAGS) Person.cpp

smart: smart.o
	$(CC) -o smart.out smart.o smartperson.o

smart.o: smart.cpp smartperson.o headers/Resource.h
	$(CC) $(CFLAGS) smart.cpp

smartperson.o: SmartPerson.cpp headers/SmartPerson.h
	$(CC) $(CFLAGS) SmartPerson.cpp

clean:
	rm -rf *o *out