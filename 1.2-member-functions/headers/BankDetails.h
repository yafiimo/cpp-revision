#pragma once

#include <string>

struct BankDetails
{
    std::string firstname;
    std::string lastname;
    int sortcode;
    int balance;
    int accountnumber;

    BankDetails()=default;
    void InitialiseDetails(std::string first, std::string last, int an, int sc, int bal);
};