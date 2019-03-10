#include "Person.h"
#include <iostream>

using std::cout;
using std::endl;

int main()
{
    Person p1("Mo", "Yafii", 25);
    Person p2("Hussein", "Yafii", 21);

    cout << "p1 (25) + 10 = " << p1 + 10 << endl;
    cout << "p1 (25) + p2 (21) = " << p1 + p2 << endl;
    cout << "12 + p2 (21) = " << 12 + p2 << endl;

    return 0;
}