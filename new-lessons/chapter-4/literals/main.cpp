#include <iostream>
#include <typeinfo>
#include <bitset>

int main()
{
    // Suffixes

    auto a{ 100 };
    auto b{ 100L };
    auto c{ 100LL };
    auto d{ 1.2 };
    auto e{ 1.2L };
    auto f{ 1.2f };
    auto g{ 1u };
    auto h{ 1uL };
    auto i{ 1uLL };

    std::cout << "a{100} is of type " << typeid(a).name() << '\n';
    std::cout << "b{100L} is of type " << typeid(b).name() << '\n';
    std::cout << "c{100LL} is of type " << typeid(c).name() << '\n';
    std::cout << "d{1.2} is of type " << typeid(d).name() << '\n';
    std::cout << "e{1.2L} is of type " << typeid(e).name() << '\n';
    std::cout << "f{1.2f} is of type " << typeid(f).name() << '\n';
    std::cout << "g{1u} is of type " << typeid(g).name() << '\n';
    std::cout << "h{1uL} is of type " << typeid(h).name() << '\n';
    std::cout << "i{1uLL} is of type " << typeid(i).name() << '\n';

    // binary, hex and octal literals

    std::cout << "0b110 (binary) = " << 0b110 << " (decimal)" << '\n';
    std::cout << "012 (octal) = " << 012 << " (decimal)" << '\n';
    std::cout << "0x0F (hex) = " << 0x0F << " (decimal)" << '\n';

    std::cout << std::oct << "012 (octal) = " << 012 << " (octal)" << '\n';

    std::cout << std::hex << "0x0F (hex) = " << 0x0F << " (hex)" << '\n';

    std::cout << std::dec; // return to base 10 printing of values

    std::bitset<4> five{ 5 };

    std::cout << "Variable five = " << five <<'\n';

    return 0;
}