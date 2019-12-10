#include <iostream>
using std::cout;
using std::endl;

#include "Utility.h"

bool isPrime(int x)
{
    bool prime = true;
    for (int i=2; i<=x/2; i++)
    {
        if(x%i == 0)
        {
            prime = false;
            break;
        }
    }
    return prime;
}

bool isEven(int x)
{
    return x%2 == 0;
}

int addFive(int& x)
{   
    x+=5;
    return x;
}

void printLargeValue(const long& x)
{
    cout << "Printing out large value: " << x << endl;
}