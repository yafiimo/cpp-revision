#include <iostream>
#include <typeinfo>

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

    return 0;
}