
/*
    Functions can pass arguments by reference or by value. When passing an argument 
    by value, a copy of the argument is created inside the scope of the function. 
    In cases when an argument is very large in memory, it may be inefficient to make
    a copy, in which case, the argument can be passed by reference. However, passing
    by reference allows the function to change the value of the argument in the
    calling scope. To prevent this, use the const keyword in the function parameter.

    Compiler errors when building your code can indicate undeclared identifiers 
        * forgetting to declare a variable
        * forgetting to include header files
    Linker errors when when building your code can indicate failure to implement
    something declared in your header files.
*/

bool isPrime(int x);
bool isEven(int x);
int addFive(int& x);
void printLargeValue(const long& x);