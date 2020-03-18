#include <iostream>
#include <iomanip>

bool isEqual(double x, double y)
{
    return x == y;
}

int main()
{
    std::cout << "\n\nUsing doubles:" << '\n';
    // By default std::cout displays floating point types to 6 s.f
    std::cout << "12345678.9 = " << 12345678.9 << '\n';
    std::cout << "0.0000123456778899 = " << 0.0000123456778899 << '\n';

    std::cout << "\n\nSetting precision to 16...\n" << '\n';
    std::cout << std::setprecision(16);

    std::cout << "12345678.9 = " << 12345678.9 << '\n';
    std::cout << "0.0000123456778899 = " << 0.0000123456778899 << '\n';

    // Even when setting precision of std::cout, floats will still truncate to between 6-9 s.f
    std::cout << "\n\nUsing floats:" << '\n';
    std::cout << "12345678.9f = " << 12345678.9f << '\n';
    std::cout << "0.0000123456778899f = " << 0.0000123456778899f << '\n';

    // 0.1 is an irrational number in the binary system.
    // To what precision is 0.1 stored?

    long double value{0.1};
    std::cout << "\n\n" << std::setprecision(20);
    std::cout << "0.1 is " << value << '\n';

    // Compounding error
    std::cout << std::setprecision(17);
    std::cout << std::boolalpha;

    double d1(1.0);
    std::cout << d1 << '\n';
    double d2(0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1); // should equal 1.0
    std::cout << "1.0 added 10 times = " << d2 << "\n\n\n";
    std::cout << "Is 1.0 === 0.1 * 10? " << isEqual(d1, d2)  << '\n';

    // 0.5 is a rational binary number --> 0.1
    double d3{5.0};
    std::cout << "5.0 = " << d3 << '\n';

    double d4(0.5 + 0.5 + 0.5 + 0.5 + 0.5 + 0.5 + 0.5 + 0.5 + 0.5 + 0.5); // should equal 5.0
    std::cout << "0.5 added 10 times = " << d4 << '\n';
    std::cout << "Is 5.0 === 0.5 * 10? " << isEqual(d3, d4) << '\n';

    std::cout << std::noboolalpha;
    std::cout << "\n\n\nNaN and Inf" << '\n';

    double posinf{5.0 / 0.0}; // +ve infinity
    std::cout << " 5 / 0 =  " << posinf << '\n';

    double neginf{-5.0 / 0.0}; // -ve infinity
    std::cout << "-5 / 0 = " << neginf << '\n';

    double nan{0.0 / 0.0}; // mathematically invalid
    std::cout << " 0 / 0 =  " << nan << "\n\n";
    
    return 0;
}