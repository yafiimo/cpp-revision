#include "Accumulator.h"
#include "Person.h"
#include "BankAccount.h"
#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main()
{

    Accumulator<int> integers(0);
    Accumulator<string> strings("Hello");

    // C++17 Allows some compilers to deduce the types for the template as below:
    // Accumulator integers(0);
    // Accumulator strings(string("Hello"));

    cout << "Initial Total: " << integers.getTotal() << endl;
    cout << "Adding 2..." << endl;
    integers += 2;
    cout << "New Total: " << integers.getTotal() << endl;

    cout << "Initial Total: " << strings.getTotal() << endl;
    cout << "Adding \" World\"..." << endl;
    strings += " World";
    cout << "Total: " << strings.getTotal() << endl;

    
    Person p1("Mo", "Yafii", 25);
    Person p2("Hussein", "Yafii", 21);

    Accumulator<Person> people(0);
    cout << "Initial Total: " << people.getTotal() << endl;
    cout << "Adding Mo of age 25" << endl;
    people += p1;
    cout << "Total: " << people.getTotal() << endl;
    cout << "Adding Hussein of age 21" << endl;
    people += p2;
    cout << "Total: " << people.getTotal() << endl;
    
    BankAccount b1("Mo", "Yafii", 2500);
    BankAccount b2("Hussein", "Yafii", 4000);

    Accumulator<BankAccount> accounts(0);
    cout << "Initial Total: " << accounts.getTotal() << endl;
    cout << "Adding Mo of age 25" << endl;
    accounts += b1;
    cout << "Total: " << accounts.getTotal() << endl;
    cout << "Adding Hussein of age 21" << endl;
    accounts += b2;
    cout << "Total: " << accounts.getTotal() << endl;

    return 0;
}