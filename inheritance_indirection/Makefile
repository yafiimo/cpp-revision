CC=g++
CFLAGS=-c -g -Wall -Iheaders/

main: main.o
	$(CC) -o main.out main.o person.o tweeter.o

main.o: main.cpp person.o tweeter.o
	$(CC) $(CFLAGS) main.cpp

casting: casting.o
	$(CC) -o casting.out casting.o person.o tweeter.o

casting.o: casting.cpp person.o tweeter.o headers/Resource.h
	$(CC) $(CFLAGS) casting.cpp

person.o: person.cpp headers/Person.h
	$(CC) $(CFLAGS) Person.cpp
	
tweeter.o: tweeter.cpp person.o headers/Tweeter.h
	$(CC) $(CFLAGS) Tweeter.cpp

clean:
	rm -rf *o a.out