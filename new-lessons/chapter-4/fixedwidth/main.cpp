#include <iostream>
#include <cstdint>

int main()
{

    std::int_least16_t x(65538);

    std::cout << "My int is " << x << '\n';
    return 0;
}