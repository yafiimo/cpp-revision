CC=g++
CFLAGS=-c -g -Wall -Iheaders/

output: main.o bankaccount.o
	$(CC) -o a.out main.o bankaccount.o

main.o: main.cpp bankaccount.o
	$(CC) $(CFLAGS) main.cpp

bankaccount.o: BankAccount.cpp headers/BankAccount.h
	$(CC) $(CFLAGS) BankAccount.cpp


accum: accum.o bankaccount.o headers/Person.h
	$(CC) -o accum.out accumulator.o bankaccount.o

accum.o: Accumulator.cpp headers/Accumulator.h
	$(CC) $(CFLAGS) Accumulator.cpp

clean:
	rm -rf *o *out