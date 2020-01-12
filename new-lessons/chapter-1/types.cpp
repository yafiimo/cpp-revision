
#include <iostream>
#include <string>

int main()
{
    int x;          // Define a variable
    x = 5;          // Copy assignment

    int y = 7;      // Copy initialisation
    int z(5);       // Direct initialisation

    int m{10};      // Direct brace initialisation - preferred to copy brace
    int n = {22};   // Copy brace initialisation

    std::cout << "x is " << x << std::endl;
    std::cout << "y is " << y << std::endl;
    std::cout << "z is " << z << std::endl;
    std::cout << "m is " << m << std::endl;
    std::cout << "n is " << n << std::endl;

    int o{};         // Zero initialisation - use when it is just a temporary value which will be replaced
    std::cout << "o is " << o << std::endl;
    o = 8;
    std::cout << "o is now " << o << std::endl;

    int a, b = 10;   // 
    std::cout << "a is " << a << " and b is " << b << std::endl;

    std::string name{"Mo"};
    std::cout << "My name is " << name << std::endl;

    int k = 4.5;        // Copy initialisation will not throw an error here; k = 4
    int j(4.5);         // Direct initialisation will not throw an error here; k = 4
    // int s{ 7.8 };       // Direct brace initialisation will throw an error or warning

    std::cout << "k = " << k << std::endl;
    std::cout << "j = " << j << std::endl;

    /*
     * It is best to initialise your variables. Direct brace initialisation is the most preferred
     * and it is also best to initialise each variable in it's own statement.
     */


    int s{ 2 + 5 };

    2 + 3; // a useless expression statement

    std::cout << "s = " << s << std::endl;
}