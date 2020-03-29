#include <iostream>

int main()
{
    char c1{ 'a' };
    char c2{ 97 };                              // 97 evaluates to 'a' in ASCII

    std::cout << "c1 = " << c1 << '\n';
    std::cout << "c2 = " << c2 << '\n';

    /* signed char holds values up to 127 */

    // char c3{ 321 };                          // won't work due to narrowing conversion
    
    char c3 = 321;
    /*
     * Evaluation:
     * wrap = 321 - 127 = 194
     * -128 + (194 - 1) = 65 = 'A'
     */

    std::cout << "c3 = " << c3 << '\n';
    
    unsigned char c4 = 350;
    /*
     * Evaluation:
     * wrap = 250 - 255 = 95
     * 0 + (95 - 1) = 94 = '^'
     */

    std::cout << "c4 = " << c4 << '\n';

    // Printing chars

    char c5{ 'B' };
    std::cout << c5 << " has ASCII code " << static_cast<int>(c5) << '\n';

    // Printing octal and hex numbers as chars
    std::cout << "0x41 in hex is char \x41, which has ASCII value " << 0x41 << '\n';
    std::cout << "0101 in octal is char \101, which has ASCII value " << 0101 << '\n';

    // char16_t and char32_t can be used to represent 16 bit and 32 bit unicode characters

    return 0;
}