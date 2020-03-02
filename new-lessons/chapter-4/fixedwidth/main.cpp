#include <iostream>
#include <cstdint>

int main()
{
/* ---------- The following fixed width ints are not guaranteed to be defined ---------- */
    std::cout << "Fixed 8:  " << sizeof(std::int8_t) * 8 << " bits." << '\n';
    std::cout << "Fixed u8:  " << sizeof(std::uint8_t) * 8 << " bits." << '\n';
    std::cout << "Fixed 16:  " << sizeof(std::int16_t) * 8 << " bits." << '\n';
    std::cout << "Fixed u16:  " << sizeof(std::uint16_t) * 8 << " bits." << '\n';
    std::cout << "Fixed 32:  " << sizeof(std::int32_t) * 8 << " bits." << '\n';
    std::cout << "Fixed u32:  " << sizeof(std::uint32_t) * 8 << " bits." << '\n';
    std::cout << "Fixed 64:  " << sizeof(std::int64_t) * 8 << " bits." << '\n';
    std::cout << "Fixed u64:  " << sizeof(std::uint64_t) * 8 << " bits." << '\n';
/* ------------------------------------------------------------------------------------- */

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

/*
    * Favor the std::int_fast#_t and std::int_least#_t integers when you need an 
      integer guaranteed to be at least a certain minimum size.

    * Avoid the 8-bit fixed-width integer types. If you do use them, note that 
      they are often treated like chars.
*/