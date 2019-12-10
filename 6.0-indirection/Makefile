CC=g++
CFLAGS=-c -g -Wall -Iheaders/

output: main.o
	$(CC) -o a.out main.o

main.o: main.cpp headers/Person.h
	$(CC) $(CFLAGS) main.cpp

clean:
	rm -rf *o a.out