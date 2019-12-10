
#include <iostream>

int main()
{

  /*
      Bitwise operators:
      Compares values bit by bit ---> 3 = 011 and 2 = 010.
      ^ is for XOR.
      Truth table as shown below:

       __________________________________________________
      |         |         |          |         |         |
      |    3    |    2    |   3 & 2  |  3 | 2  |  3 ^ 2  |
      |_________|_________|__________|_________|_________|
      |    0    |    0    |     0    |    0    |    0    |
      |    1    |    1    |     1    |    1    |    0    |
      |    1    |    0    |     0    |    1    |    1    |
      |_________|_________|__________|_________|_________|
      |         |         |          |         |         |
      |    -    |    -    |     2    |    3    |    1    |
      |_________|_________|__________|_________|_________|
  
  */

  int AND = 3 & 2;
  int OR = 3 | 2;
  int XOR = 3 ^ 2;
  std::cout << "3 & 2 = " << AND << std::endl;
  std::cout << "3 | 2 = " << OR << std::endl;
  std::cout << "3 ^ 2 = " << XOR << std::endl;

  /* 
      Bit shift operators.
      Shift individual bits right or left e.g.

      7 = 111; 7 >> 1 = 011 = 3; 7 << 1 = 1110 = 14;
      8 = 1000; 8 >> 2 = 10 = 2; 8 << 2 = 100000 = 32;
  */

  int i1 = 7 >> 1;
  int i2 = 7 << 1;
  int i3 = 8 >> 2;
  int i4 = 8 << 2;

  std::cout << "7 >> 1 = " << i1 << std::endl;
  std::cout << "7 << 1 = " << i2 << std::endl;
  std::cout << "8 >> 2 = " << i3 << std::endl;
  std::cout << "8 << 2 = " << i4 << std::endl;
}