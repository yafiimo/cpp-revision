CC=g++
CFLAGS=-c -g -Wall -Iheaders/

output: main.o bankaccount.o
	$(CC) -o a.out main.o bankaccount.o

main.o: main.cpp bankaccount.o
	$(CC) $(CFLAGS) main.cpp

bankaccount.o: BankAccount.cpp headers/BankAccount.h
	$(CC) $(CFLAGS) BankAccount.cpp

clean:
	rm -rf *o a.out