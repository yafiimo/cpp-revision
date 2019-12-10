CC=g++
CFLAGS=-c -g -Wall -Iheaders/

output: main.o
	$(CC) -o a.out main.o sprite.o cyclops.o

main.o: main.cpp sprite.o cyclops.o
	$(CC) $(CFLAGS) main.cpp

sprite.o: Sprite.cpp headers/Sprite.h
	$(CC) $(CFLAGS) Sprite.cpp

cyclops.o: sprite.o Cyclops.cpp headers/Cyclops.h
	$(CC) $(CFLAGS) Cyclops.cpp

clean:
	rm -rf *.o a.out