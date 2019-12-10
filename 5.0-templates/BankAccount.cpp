#include <string>
#include <iostream>
#include "BankAccount.h"

BankAccount::BankAccount(std::string first, std::string last, 
    int value) : firstname(first), lastname(last), balance(value)
{
    getAccountSummary();
}

// BankAccount main functions:

void BankAccount::getAccountSummary()
{
    std::cout << "Account Holder: " << getAccountHolder() << std::endl;
    std::cout << "Balance: £" << balance << std::endl;
    std::cout << "Savings: £" << savings << "\n" << std::endl;
}

std::string BankAccount::getAccountHolder() const
{
    return firstname + " " + lastname;
}

void BankAccount::deposit(int value)
{
    balance += value;
    std::cout << getAccountHolder() << " deposited £" << value << std::endl;
    getAccountSummary();
}

void BankAccount::withdraw(int value)
{
    if(balance >= value)
    {
        balance -= value;
        std::cout << getAccountHolder() << " withdrew £" << value << std::endl;
        getAccountSummary();
    }
    else
    {
        std::cout << "You do not have sufficient funds in your account.\n" << std::endl;
    }
    
}

void BankAccount::transferToBalance(int value)
{
    if(savings >= value)
    {
        balance += value;
        savings -= value;

        std::cout << getAccountHolder() << " transferred £" << value << " to main account." << std::endl;
        getAccountSummary();
    }
    else
    {
        std::cout << "You do not have sufficient funds in your savings account. \n" << std::endl;
    }
}

void BankAccount::transferToSavings(int value)
{
    if(balance >= value)
    {
        balance -= value;
        savings += value;

        std::cout << getAccountHolder() << " transferred £" << value << " to savings." << std::endl;
        getAccountSummary();
    }
    else
    {
        std::cout << "You do not have sufficient funds in your account. \n" << std::endl;
    }
}

// BankAccount operators:

int BankAccount::operator+(int value) const
{
    return balance + value;
}

int BankAccount::operator+(BankAccount const &b) const
{
    return balance + b.balance;
}

int BankAccount::operator-(int value) const
{
    return balance - value;
}

int BankAccount::operator-(BankAccount const &b) const
{
    return balance - b.balance;
}

bool BankAccount::operator<(int value) const
{
    return balance < value;
}

bool BankAccount::operator<(BankAccount const& b) const
{
    return balance < b.balance;
}

bool BankAccount::operator>(int value) const
{
    return balance > value;
}

bool BankAccount::operator>(BankAccount const& b) const
{
    return balance > b.balance;
}

int operator+(int value, BankAccount const &b)
{
    return value + b.getBalance();
}

int operator-(int value, BankAccount const &b)
{
    return value - b.getBalance();
}

bool operator<(int value, BankAccount const& b)
{
    return value < b.getBalance();
}

bool operator>(int value, BankAccount const& b)
{
    return value > b.getBalance();
}