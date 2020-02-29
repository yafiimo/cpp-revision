#include <iostream>
#include <cstdint>

int main()
{

    std::cout << "Fast 8:  " << sizeof(std::int_fast8_t) * 8 << " bits." << '\n';
    std::cout << "Fast 16: " << sizeof(std::int_fast16_t) * 8 << " bits." << '\n';
    std::cout << "Fast 32: " << sizeof(std::int_fast32_t) * 8 << " bits." << '\n';
    std::cout << "Fast 64: " << sizeof(std::int_fast64_t) * 8 << " bits." << '\n';

    std::cout << "Least 8:  " << sizeof(std::int_least8_t) * 8 << " bits." << '\n';
    std::cout << "Least 16: " << sizeof(std::int_least16_t) * 8 << " bits." << '\n';
    std::cout << "Least 32: " << sizeof(std::int_least32_t) * 8 << " bits." << '\n';
    std::cout << "Least 64: " << sizeof(std::int_least64_t) * 8 << " bits." << '\n';

    size_t x = sizeof(size_t);
    std::cout << "size_t of size_t = " << x << '\n';
    
    return 0;
}