CC=g++
CFLAGS=-c -g -Wall -Iheaders

output: main.o bankaccount.o bankdetails.o
	$(CC) -o bank main.o bankaccount.o bankdetails.o

main.o: main.cpp bankaccount.o
	$(CC) $(CFLAGS) main.cpp

bankaccount.o: BankAccount.cpp headers/BankAccount.h bankdetails.o
	$(CC) $(CFLAGS) BankAccount.cpp

bankdetails.o: BankDetails.cpp headers/BankDetails.h
	$(CC) $(CFLAGS) BankDetails.cpp

clean:
	rm -rf *o bank