#include <iostream>

int main()
{
  
    std::cout << "Line 1" << std::endl << "Line 2" << std::endl << "Line 3" << std::endl;
    std::cout << "Line 1\n" << "Line 2" << '\n' << "Line 3\n\n\n";

    std::cout << "Enter a number: ";
    int x{};
    std::cin >> x;
    std::cout << "Your number is " << x << '\n';

    double y; // *UNDEFINED BEHAVIOUR*
    std::cout << y << '\n';

    return 0;
}