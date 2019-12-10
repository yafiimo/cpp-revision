#include <iostream>

using namespace std;

int main()
{   
    int x;
    bool isPrime = true;

    cout << "Enter a number" << endl;
    cin >> x;

    for (int i=2; i<=x/2; i++)
    {
        if(x%i == 0)
        {
            cout << "Your number, " << x << ", is not prime. " << i << " is a factor." << endl;
            isPrime = false;
            break;
        }
    }

    if (isPrime)
    {
        cout << "Your number, " << x << ", is prime. " << endl;
    }

    return 0;
}