CC=g++
CFLAGS=-c -g -Wall

output: main.o functions.o
	$(CC) -o hello.out main.o functions.o

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

functions.o: functions.cpp
	$(CC) $(CFLAGS) functions.cpp

clean:
	rm -rf *o hello.out
