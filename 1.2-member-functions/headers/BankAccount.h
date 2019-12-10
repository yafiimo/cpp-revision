#pragma once

#include <string>
#include "Bankdetails.h"

class BankAccount
{
    private:
        BankDetails account;
        void SetBalance(int b) { account.balance = b; }

      public:
        BankAccount(std::string first, std::string last, int an, int sc);
        void PrintDetails();
        void Deposit(int value);
        void Withdraw(int value);
        void SetName(std::string first, std::string last);

        int GetAccountNumber() const { return account.accountnumber; }
        int GetSortCode() const { return account.sortcode; }
        int GetBalance() const { return account.balance; }
        std::string GetName() const { return account.firstname + " " + account.lastname; }
};