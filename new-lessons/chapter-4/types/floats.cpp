#include <iostream>
#include <iomanip>

int main()
{
    // By default std::cout prints floats to 6 significant digits
    // By default std::cout prints floats ending with .0 as integers
    // By default, floats without the f suffix are doubles

    // float   x1{ 12345.6789f };
    // odouble x2{ 12345678.2898 };

    std::cout << "12345.6789f prints as " << 12345.6789f << '\n';
    std::cout << "12345678.9f prints as " << 12345678.9f << '\n';
    std::cout << "100.0 prints as " << 100.0f << '\n';
    std::cout << "100000000.01f prints as " << 100000000.01f << '\n';

    std::cout << "Setting precision to 16:" << '\n';
    std::cout << std::setprecision(16);

    std::cout << "1.123782324324123f prints as " << 1.123782324324123f << '\n'; // floats are only precise to 6-9 siginifant digits
    std::cout << "1.123782324324123  prints as " << 1.123782324324123 << '\n';  // doubles have more precision

    std::cout << std::setprecision(30);

    double x1{ 1.234567890123456789012345 };
    long double x2{ 1.234567890123456789012345L };

    std::cout << "Printing 1.234567890123456789012345 as a double: \t\t" << x1 << '\n';         // doubles are only precise to 15-18 siginifant digits
    std::cout << "Printing 1.234567890123456789012345 as a long double: \t\t" << x2 << '\n';    // long doubles have more precision

    // 0.1 is an irrational number in binary format, hence is not stored as exactly 0.1
    std::cout << "0.1  = " << 0.1 << '\n';

    std::cout << std::setprecision(17);

    float x3{ 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1
           + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 };

    std::cout << "Adding 0.1 18 times gives " << x3 << '\n';

    return 0;
}

/*
                    Common Size                 Range                                   Precision (signigicant digits)

    Floats          4 bytes                     +/- 1.18e-38   to +/- 3.4e38            6-9, typically 7

    Doubles         8 bytes                     +/- 2.23e-308  to +/- 1.8e308           15-18, typically 16

    Long Double     8 or 12 bytes               +/- 3.36e-4932 to +/- 1.18e4932         18-21

    Long Double     16 bytes                    +/- 3.36e-4932 to +/- 1.18e4932         33-36

*/