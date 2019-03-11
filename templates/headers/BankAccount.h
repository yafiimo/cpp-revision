#pragma once

#include <string>

class BankAccount
{
    private:
        std::string firstname;
        std::string lastname;
        int balance;
        int savings = 0;

    public:
      BankAccount(std::string first, std::string last, int value);
      
      std::string getAccountHolder() const;
      int getBalance() const { return balance; };
      int getSavings() const { return savings; };
      void getAccountSummary();
      void deposit(int value);
      void withdraw(int value);
      void transferToBalance(int value);
      void transferToSavings(int value);

      int operator+(int value) const;
      int operator+(BankAccount const &b) const;

      int operator+=(int value) const { return balance + value; };

      int operator-(int value) const;
      int operator-(BankAccount const &b) const;

      bool operator<(int value) const;
      bool operator<(BankAccount const& b) const;

      bool operator>(int value) const;
      bool operator>(BankAccount const& b) const;
};

int operator+(int value, BankAccount const& b);
int operator-(int value, BankAccount const& b);
bool operator<(int value, BankAccount const& b);
bool operator>(int value, BankAccount const& b);