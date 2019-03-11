#include "Accumulator.h"
#include "Person.h"
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

    
    Person start("Mo", "Yafii", 24);
    Person p2("Hussein", "Yafii", 21);

    Accumulator<Person> people(start);
    cout << "Initial Total: " << people.getTotal() << endl;
    cout << "Adding Hussein of age 21" << endl;
    people += p2;
    cout << "Total: " << people.getTotal() << endl;

    return 0;
}