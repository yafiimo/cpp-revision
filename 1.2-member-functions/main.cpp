#include <iostream>
#include <string>
using std::cout;
using std::endl;

#include "BankAccount.h"
#include "BankDetails.h"

int main()
{
    BankAccount YafiiBank("Mo", "Yafii", 12345678, 456789);
    YafiiBank.PrintDetails();
    YafiiBank.Deposit(200'000);
    YafiiBank.Withdraw(50'000);
    YafiiBank.SetName("Mohammed", "Yafii");
    YafiiBank.PrintDetails();

    return 0;
}