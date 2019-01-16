#include <iostream>
#include <climits>

int main() {
    // Various methods of declaring variables
    int i1 = 5;
    int i2;
    i2 = 10;
    int i3(3);
    int i4{ 2 };

    std::cout << "i1 = " << i1 << std::endl;
    std::cout << "i2 = " << i2 << std::endl;
    std::cout << "i3 = " << i3 << std::endl;
    std::cout << "i4 = " << i4 << std::endl;

    double d1 = 2.2;
    double d2 = i1;
    int i5 = d1;

    std::cout << "d1 = " << d1 << std::endl;
    std::cout << "d2 = " << d2 << std::endl;
    std::cout << "i5 = " << i5 << std::endl;

    /* 
       An integer can be stored precisely in a double as a double has more precision.
       However, when trying to store a double in an int variable, the value is
       truncated to just the whole number, as an int has less precision.
    */

    char c1 = 'c';
    std::cout << "c1 = " << c1 << std::endl;

    //  std::cout << "c2 = " << c2 << std::endl;
    //  char *c2 = "b";
    //  Using "char *" is deprecated as of C++11.

    bool flag = true;
    std::cout << "flag = " << flag << std::endl;
    flag = false;
    std::cout << "flag = " << flag << std::endl;
    flag = i1;
    std::cout << "flag = " << flag << std::endl;
    flag = 0;
    std::cout << "flag = " << flag << std::endl;

    // Flag will be true ---> 1 for any non-zero value.

    auto a1 = 2;
    auto a2 = 2.4;
    auto a3 = 'c';
    auto a4 = true;
    auto a5 = 3L;
    auto a6 = 3'000'000'000;
    auto a7 = 0xFF;
    auto a8 = 0b111;

    std::cout << "The maximum int value is " << INT_MAX << std::endl;
    std::cout << "The maximum long value is " << LONG_MAX << std::endl;
    std::cout << "The maximum long long value is " << LLONG_MAX << std::endl;

    unsigned char c3 = 128;
    char c4 = 132;
    char c5 = 72;

    std::cout << "c3 = " << c3 << std::endl;
    std::cout << "c4 = " << c4 << std::endl;
    std::cout << "c5 = " << c5 << std::endl;

    /* 
       Since a signed char can only store 8 bits of memory, the value 132,
       0b010000100, is truncated to its first little-endian 8 bits, 
       0b10000100, which as a signed value = -124. Hence c6 is given the ascii 
       value of -124 instead of 132. This is an example of underflow/overflow.
    */

    /*
      When variables are cast to another type e.g putting a double into an int
      variable, the compiler usually throws a warning. These warnings can be 
      supressed by using an explicit cast.
   */

    double d3 = 2.2;
    int i6 = static_cast<int>(d3);
    std::cout << "d3 = " << d3 << std::endl;
    std::cout << "i5 = " << i5 << std::endl;

    return 0;
}