
#include <iostream>

int& getUserNumber(int& x)
{
  std::cout << "Enter a number: ";
  std::cin >> x;
  return x;
}

int main()
{

  int num1{};
  int num2{};

  getUserNumber(num1);
  getUserNumber(num2);

  std::cout << num1 << " + " << num2 << " = " << num1 + num2 << '\n';

  return 0;
}