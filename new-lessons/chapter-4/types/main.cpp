#include <iostream>
#include <climits>

int main()
{
    std::cout << "bool:\t\t" << sizeof(bool) << " bytes\n";
    std::cout << "char:\t\t" << sizeof(char) << " bytes\n";
    std::cout << "wchar_t:\t" << sizeof(wchar_t) << " bytes\n";
    std::cout << "char16_t:\t" << sizeof(char16_t) << " bytes\n";
    std::cout << "char32_t:\t" << sizeof(char32_t) << " bytes\n";
    std::cout << "short:\t\t" << sizeof(short) << " bytes\n";
    std::cout << "int:\t\t" << sizeof(int) << " bytes\n";
    std::cout << "long:\t\t" << sizeof(long) << " bytes\n";
    std::cout << "long long:\t" << sizeof(long long) << " bytes\n";
    std::cout << "float:\t\t" << sizeof(float) << " bytes\n";
    std::cout << "double:\t\t" << sizeof(double) << " bytes\n";
    std::cout << "long double:\t" << sizeof(long double) << " bytes\n";

    short x = 32767; // = max short (2 byte) signed short value

    short y = 32768; // 32678 = 0 1000 0000 0000 0000
                     // which truncates to 1000 0000 0000 0000 = -32678

    std::cout << "x = " << x << '\n';
    std::cout << "y = " << y << '\n';
    std::cout << 10/4 << '\n';
    std::cout << 10/4.0 << '\n';

    unsigned int m{ 3 };
    unsigned int n{ 5 };

    std::cout << m - n << '\n';

    return 0;
}

/*  Signed integers (1 byte)
    0111 =  7
    0110 =  6
    0101 =  5
    0100 =  4
    0011 =  3
    0010 =  2
    0001 =  1
    0000 =  0
    1111 = -1
    1110 = -2
    1101 = -3
    1100 = -4
    1011 = -5
    1010 = -6
    1001 = -7
    1000 = -8
*/