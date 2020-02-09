#include <iostream>
#include <plog/Log.h>

int add(int x, int y);
int getNumber();

int main()
{
    plog::init(plog::debug, "debug.txt");
    LOGD << "calling main()";

    int x{ getNumber() };
    int y{ getNumber() };

    std::cout << x << " + " << y << " = " << add(x, y) << '\n';

    return 0;
}

int add(int a, int b)
{
    LOGD << "calling add()";

    return a + b;
}

int getNumber()
{
    LOGD << "calling getNumber()";

    int x{};
    std::cout << "Enter a number: ";
    std::cin >> x;

    return x;
}