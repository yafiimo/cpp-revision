#include <iostream>
#include <cassert>

bool isPrime(int x)
{
    assert(x >= 0 && x <= 10);

    if(x == 2)
        return true;
    else if(x == 3)
        return true;
    else if(x == 5)
        return true;
    else if(x == 7)
        return true;

    return false;
}

int main()
{

    int x{};

    std::cout << "Enter a number between 0 and 10: ";
    std::cin >> x;

    while (x < 0 || x > 10)
    {
        std::cout << "Try again. Enter a number between 0 and 9: ";
        std::cin >> x;
    }

    if(isPrime(x))
        std::cout << "The number you entered is prime." << '\n';
    else
        std::cout << "The number you entered is not prime" << '\n';

    return 0;
}
