#include <iostream>
#include "Utility.h"

using namespace std;

int main()
{
    int x = 5, y = 11;
    int numberToChange = 10;
    long largeNumber = 5'000'000'000;

    cout << "Enter a number greater than 1:" << endl;
    // cin >> x;

    if(isPrime(x))
    {
        cout << "Your number is prime!" << endl;
    }
    else
    {
        cout << "Your number is not prime!" << endl;
    }

    cout << "Enter another positive number:" << endl;
    // cin >> y;

    if (isEven(y))
    {
        cout << "Your number is even!" << endl;
    }
    else
    {
        cout << "Your number is not even!" << endl;
    }

    cout << "Enter another positive number:" << endl;
    // cin >> numberToChange;

    addFive(numberToChange);
    cout << "Adding 5 to your number gives " << numberToChange << endl;

    printLargeValue(largeNumber);

    return 0;

}