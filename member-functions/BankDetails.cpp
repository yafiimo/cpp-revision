#include "BankDetails.h"

void BankDetails::InitialiseDetails(
    std::string first, std::string last, 
    int an, int sc, int bal)
{
    firstname = first;
    lastname = last;
    accountnumber = an;
    sortcode = sc;
    balance = bal;
}