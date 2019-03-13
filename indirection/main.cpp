#include <iostream>
#include <string>
#include "Person.h"

using std::cout;
using std::endl;
using std::string;

int addFive(int const& number)
{
    return number + 5;
}

int main()
{   
    // Declaring a pointer and dereferencing. Pointer to an int must be int * etc.

    int i1 = 20;
    int* i1p = &i1;
    cout << "i1 = " << *i1p << endl; // should be 20

    // Declaring a reference to a variable and changing the value it references

    string s1 = "hello";
    string s2 = "helloooo";
    string& s1r = s1;
    s1r = "world";
    cout << "s1 = " << s1 << endl;   // should be "world".

    // References can't be changed to reference another address, unlike pointers.
    // References must always be initialised.
    int i2 = 25;
    // int& i2r;                    // will return an error for being uninitialised
    int& i2r = i2;
    i2r = 10;
    cout << "i2 = " << i2 << endl;  // should be 10.
    // i2r = &i1;                   // Will return an error when trying to change reference to another location

    // Dereferencing a pointer to an object
    Person p1("Mo", "Yafii", 25);
    Person* p1p = &p1;
    cout << "p1's name is " << (*p1p).getName() << endl;
    cout << "p1's name is " << p1p->getName() << endl;

    /* 
        Uninitialised pointers should be assigned nullptr, otherwise will point to 
        a random location in memory. If you attempt to dereference this and assign a
        value to it, it may corrupt memory in the case its a random location, or just
        fail in the case its a nullptr.
     */

    // int* i3p;
    // *i3p = 200; // Do not run this line of code

    // Can initialise to a nullpointer before assigning it to a real location
    int* i3p = nullptr;
    i3p = &i2;
    *i3p = 500;
    cout << "i2 is now = " << i2 << endl;
    cout << "i2r has also changed to " << i2r << " since it is a reference to i2." << endl;

    /*
        // NON-COMPILING CODE: Using const pointers

        int i4 = 225;
        int const* i4p = &i4;           // cannot change value of i4 by dereferencing const ptr i4p;
        *i4p = 3;                       // produces error "expression must be modifiable lvalue"

        int* const i4p2 = &i4;          // cannot change const ptr to point to something else;
        i4p2 = &i1;                     // produces error "expression must be modifiable lvalue"

        int const * const i4p3 = &i4;   // both value of i4 and i4p3 cannot be changed through ptr;
        
        // produces same errors as above "expression must be modifiable lvalue"
        *i4p3 = 55;
        i4p3 = &i1;

        // A pointer to a const variable can only be initialised as a const pointer;
        int const i5 = 800;
        int const * i5p = &i5;
    */

    /* 
        A literal can only be passed into a function which takes a value by reference if
        the value is taken by const reference. If addFive function is changed to remove
        the const from the parameter, line below will fail. If a function takes a const
        parameter, it cannot be changed within the function scope.
    */
    int fourPlusFive = addFive(4);

    cout << "4 + 5 = " << fourPlusFive << endl;

    return 0;
}