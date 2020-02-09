#include <iostream>
#include <string>

// Forward declaration - function is declared, but must be defined elsewhere
// in the program.
int add(int x, int y);

// Functions having the same identifier but different parameters are
// considered distinct functions
int add(int x, int y, int z);

int main()
{
    int x{ 5 };
    int y{ 11 };

    std::cout << x <<  " + " << y << " = " << add(x, y) << '\n';
    std::cout << x <<  " + " << y << " + " << y << " = " << add(x, y, y) << '\n';

    return 0;
}

int add(int x, int y)
{
    return x + y;
}

int add(int x, int y, int z)
{
    return x + y + z;
}