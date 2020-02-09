#include <iostream>
#include "functions.h"

int main()
{
    std::cout << "5 + 7 = " << add(5, 7) << '\n';
    std::cout << "5 * 7 = " << multiply(5, 7) << '\n';
    std::cout << "20 - 10 = " << subtract(20, 10) << '\n';

    return 0;
}