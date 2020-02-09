#define MY_NAME "MYafii"
/*
 * Generally should not be used to replace text - better ways to do this
 * From this point on, any reference to MY_NAME will be replaced with "MYafii"
   except in other preprocessor commands
 */

#define SHOULD_PRINT_AGE
/*
 * Generally considered acceptable to use.
 * From this point on, any reference to MY_NAME will be replaced with nothing - not common use
 * Rather, used in conditional compilation directives e.g #ifdef
 */

#include <iostream>

int main()
{

#ifdef MY_NAME
    std::cout << "Hello from " << MY_NAME << '\n';
#endif

    int age{};
    std::cout << "Enter your age: ";
    std::cin >> age;

#ifdef SHOULD_PRINT_AGE
    std::cout << "Your age is " << age << '\n';
#endif

#ifndef SHOULD_PRINT_AGE
    std::cout << "SHOULD_PRINT_AGE is not defined so age will not be printed." << '\n';
#endif


#if 0  // Do not compile anything from here
    std::cout << "Will not compile" << '\n';
#endif // Until here

    return 0;
}