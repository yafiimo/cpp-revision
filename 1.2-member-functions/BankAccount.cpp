#include <iostream>
#include <string>

#include "BankAccount.h"

BankAccount::BankAccount(std::string first, std::string last, int an, int sc)
{
    account.InitialiseDetails(first, last, an, sc, 0);
    std::cout << "Opening bank account for " << GetName() << std::endl;
}

void BankAccount::SetName(std::string first, std::string last)
{
    account.firstname = first;
    account.lastname = last;
    std::cout << "Changing bank account holder name to: " << GetName() << std::endl;
}

void BankAccount::Withdraw(int value)
{
    SetBalance(account.balance - value);
    std::cout << "Withdrawing £" << value << std::endl;
    std::cout << "New Balance: £" << GetBalance() << std::endl;
}

void BankAccount::Deposit(int value)
{
    SetBalance(account.balance + value);
    std::cout << "Depositing £" << value << std::endl;
    std::cout << "New Balance: £" << GetBalance() << std::endl;
}

void BankAccount::PrintDetails()
{
    std::cout << "\nYour details:" << std::endl;
    std::cout << "Name:\t\t\t" << GetName() << std::endl;
    std::cout << "Account Number:\t\t" << GetAccountNumber() << std::endl;
    std::cout << "Sort Code:\t\t" << GetSortCode() << std::endl;
    std::cout << "Balance (£):\t\t" << GetBalance() << "\n" << std::endl;
}


void SetBalance(int bal);