CC=g++
CFLAGS=-c -g -Wall -Iheaders

output: main.o utility.o
	$(CC) -o Functions main.o utility.o

main.o: main.cpp utility.o
	$(CC) $(CFLAGS) main.cpp

utility.o: Utility.cpp headers/Utility.h
	$(CC) $(CFLAGS) Utility.cpp

clean:
	rm -rf *o Functions