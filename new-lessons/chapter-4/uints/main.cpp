#include <iostream>
#include <cmath>

void calculate_and_print_negative_wrap(long x)
{
    std::cout << "-ve value provided to unsigned variable." << '\n';
    std::cout << "Value provided: \t\t" << x << '\n';
    int size = sizeof(unsigned int);
    long largest = pow(2, size*8);
    unsigned int wrap = largest - ((x * -1) % largest);

    std::cout << "Wrap value \t\t\t" << wrap << '\n';
}

void calculate_and_print_positive_wrap(long x)
{
    std::cout << "Value provided is greater than range." << '\n';
    std::cout << "Value provided: \t\t" << x << '\n';
    int size = sizeof(int);
    long largest = pow(2, size * 8);

    unsigned int wrap = x % largest;

    std::cout << "Wrap value \t\t\t" << wrap << '\n';
}

int main()
{

    std::cout << '\n';

    auto value1 = -12309;
    auto value2 = 289034802938;

    unsigned int y = value1;
    int x = value2;

    calculate_and_print_negative_wrap(value1);
    std::cout << "Actual value stored: \t\t" << y << "\n\n";

    calculate_and_print_positive_wrap(value2);
    std::cout << "Actual value stored: \t\t" << x << "\n\n";

    return 0;
}

/*
________________________________________________________________________________

## To find the binary representation of a negative number:

- Find positive binary representation, including all big endian bits
  e.g all 16 bits for a 2 byte integer
- Flip all bits
- Add 1

## Overflow:
Attempting to store 280 as 8 bit signed value:

 280 = 256
        16
         8
        16
       ---
       242  = 0 1 0 0 0 1 1 0 0 0 

However, this exceeds the 8 bit allocation. The value is truncated to:

                  0 0 0 1 1 0 0 0  = +24

Attempting to store -242 as 8 bit signed value:

+242 = 128
        64
        32
        16
      +  2
       ---
       242  = 0 1 1 1 1 0 0 1 0

flipped     = 1 0 0 0 0 1 1 0 1
+ 1         = 1 0 0 0 0 1 1 1 0

However, this exceeds the 8 bit allocation. The value is truncated to:

              0 0 0 0 1 1 1 0 = +14

These are examples of overflow.
Note: for signed integers, which bits are lost is not well defined, 
thus signed integer overflow may lead to undefined behavior.

________________________________________________________________________________

## Unsigned (+ve) values

Examples given for 8 bit values

Powers            7  6  5  4  3  2  1  0
Binary            0  0  0  0  0  0  0  0

Max value =       1  1  1  1  1  1  1  1   = (2^8) - 1 = 255 


Attemting to store numbers above range e.g 280, will return the value
represented by the first 8 little endian bits of the value

e.g 280 = 1 0 0 0 1 1 0 0 0
            0 0 0 1 1 0 0 0 = 24

Attempting to store negative (signed) values in an unsigned 8 bit
value will convert the value to its unsigned equivalent:

-10 = 1 1 1 1 0 1 1 0

As a signed value, this equals to:
128 + 64 + 32 + 16 + 4 + 2 = 246

Another way to calculate this is using wrap around:

  % is the modulo operator
  n is the number of bits available

+ve wrap around -> for numbers above range (greater than 255 for 8 bit values) 
    = (value) % (2^n)

-ve wrap around -> for numbers below range ie negative numbers
    = (2^n) - [ (value * -1) % (2^n) ]

________________________________________________________________________________




*/