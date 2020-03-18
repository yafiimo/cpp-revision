#include <iostream>

int main()
{

    char ch1{ 'x' };
    std::cout << ch1 << " has ASCII code " << static_cast<int>(ch1) << '\n';

    char ch2{ 122 };
    std::cout << static_cast<int>(ch2) << " (ASCII) represents " << ch2 << '\n';

    // char overflow
    char ch3 = 127+1+128+65;        // range from -128 to 127
    std::cout << "My char is " << ch3 << " and my number is " << static_cast<int>(ch3) << '\n';

    unsigned char ch4 = 255+1+65;   // range from 0 to 255
    std::cout << "My char is " << ch4 << " and my number is " << static_cast<int>(ch4) << '\n';

    // escape sequences
    std::cout << "1\t2\t3" << "\v\v";
    std::cout << "0x41 represents ASCII char \x41" << '\n';
    std::cout << "This line will be overwritten...\r";
    std::cout << "This line overwrites the previous line\n";

    char ch5 = 'abcdefg';
    std::cout << "ch5 is " << ch5 << '\n';

    // unicode
    std::cout << "My name is \u062F\u0652\u0645\u064E\u062D\u064E\u0645\u064F"
              << "\n\n";

    return 0;
}