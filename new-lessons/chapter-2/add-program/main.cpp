#include <iostream>
// can include add.cpp - #include "add.cpp" - not recommended

// forwrad declare add() to prevent compiler error
// if add is then not defined elsewhere, linker will cause an error

int add(int x, int y);

int main()
{
    int y{ 20 };
    int x{ 10 };

    std::cout << x << " + " << y << " = " << add(x, y);
    return 0;
}


// Not allowed if add is defined in add.cpp -> violates one definitiion rule
// int add(int x, int y)
// {
//     return x + y;
// }

/*
 * One definition rule:
 * Within a given file, a function, object, type, or template can only have one definition.
 * Within a given program, an object or normal function can only have one definition.
 * Types, templates, and inline functions and variables are allowed to have identical definitions 
   in different files.
*/