#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int x;
    int i = 2;
    bool isPrime = true;

    cout << "Enter a number" << endl;
    cin >> x;

    while (i <= x / 2)
    {
        if (x % i == 0)
        {
            cout << "Your number, " << x << ", is not prime. " << i << " is a factor" << endl;
            isPrime = false;
            break;
        }
        i++;
    }

    if (isPrime)
    {
        cout << "Your number, " << x << ", is prime." << endl;
    }

    return 0;
}
