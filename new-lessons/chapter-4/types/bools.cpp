#include <iostream>

bool isEqual(int x, int y)
{
    return x == y;
}

int main()
{

    bool x{ false };

    bool y{ !x };

    std::cout << "x is false (" << x << ')' << '\n';
    std::cout << "y is true  (" << y << ')' << '\n';

    std::cout << "Using boolalpha...\n" << std::boolalpha;

    std::cout << "x is false (" << x << ')' << '\n';
    std::cout << "y is true  (" << y << ')' << '\n';

    // bool x1{ 2 }; // Using brace initialisation with non true|false|1|0 value produces error

    bool y1 = 5;
    bool y2 = 0;

    std::cout << "y1 is (" << y1 << ')' << '\n';
    std::cout << "y2 is (" << y2 << ')' << "\n\n\n\n";

    bool z{};

    std::cout << "Enter true or false: ";

    // std::cin only expects 0 or 1 for bool input, any other value will silently fail and return 0;
    std::cin >> z;

    std::cout << "You entered " << z << '\n';

    if(0) 
    {
        std::cout << "condition == true" << '\n'; 
    }


    return 0;
}