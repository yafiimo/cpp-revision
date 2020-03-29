#include <iostream>

int main()
{
    bool a1{ false };
    bool b1{ true };

    std::cout << "a1 = " << a1 << '\n';
    std::cout << "b1 = " << b1 << '\n';

    std::cout << std::boolalpha;

    std::cout << "a1 = " << a1 << '\n';
    std::cout << "b1 = " << b1 << '\n';

    // bool b2{ 5 };                            // won't work
    bool b2 = 5;                              // Any non-zero evaluates to true

    std::cout << "b2 = " << b2 << '\n';

    bool c1{};

    std::cout << "Enter a boolean value: ";
    std::cin >> c1;

    std::cout << "You entered " << c1 << '\n';

    std::cout << std::noboolalpha;

    return 0;
}