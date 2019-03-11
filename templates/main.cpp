#include <iostream>
#include <string>
#include "BankAccount.h"
#include "Person.h"

using std::cout;
using std::endl;
using std::string;

template <class T>
T customMax(T const& t1, T const& t2)
{ 
    // Returns maximum value. If values are equal, returns first argument;
    return t1 < t2 ? t2 : t1;
}

int main()
{
    BankAccount b1("Mo", "Yafii", 10000);
    BankAccount b2("Hussein", "Yafii", 5000);

    string s1 = "hello";
    string s2 = "bye";

    cout << "customMax(\"hello\", \"bye\"): " << customMax(s1, s2) << endl;
    cout << "customMax(200, 500): " << customMax(200, 500) << endl;

    // Since BankAccount class has operator overload for " < ", it can apply the customMax function.
    cout << "customMax(b1, b2) ie highest balance: " << customMax(b1, b2).getAccountHolder() << endl;

    // Since Person class has operator no overload for " < ", it can't apply the customMax function.
    // Person p1("Mo", "Yafii", 25);
    // Person p2("Hussein", "Yafii", 21);
    // cout << "customMax(p1, p2) ie highest age: " << customMax(p1, p2).getName() << endl;

    /*
        Functionality below for testing class and class operators.
    */

    // b1.deposit(10000);
    // b1.transferToSavings(3000);
    // b1.withdraw(2000);

    // b2.deposit(6000);
    // b2.transferToSavings(4000);
    // b2.transferToBalance(2000);
    // b2.withdraw(3000);

    // bool val1 = b1 > b2;
    // bool val2 = b1 < b2;
    // int val3 = b1 + b2;
    // int val4 = b1 - b2;

    // cout << "b1 > b2: " << val1 << endl;
    // cout << "b1 < b2: " << val2 << endl;
    // cout << "b1 + b2 = " << val3 << endl;
    // cout << "b1 - b2 = " << val4 << endl;

    // bool val5 = b1 > 1000;
    // bool val6 = 3000 > b1;
    // bool val7 = b1 < 6000;
    // bool val8 = 4000 < b1;

    // cout << "b1 > 1000: " << val5 << endl;
    // cout << "3000 > b1: " << val6 << endl;
    // cout << "b1 < 6000: " << val7 << endl;
    // cout << "4000 < b1: " << val8 << endl;

    // int val9 = b1 + 5000;
    // int val10 = 4000 + b1;
    // int val11 = b1 - 6000;
    // int val12 = 15000 - b1;

    // cout << "b1 + 5000 = " << val9 << endl;
    // cout << "4000 + b1 = " << val10 << endl;
    // cout << "b1 - 6000 = " << val11 << endl;
    // cout << "15000 - b1 = " << val12 << endl;

    return 0;
}
