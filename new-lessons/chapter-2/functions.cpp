#include <iostream>

// gets a number from the user
int getUserNumber()
{
  std::cout << "Enter a number: ";
  int x{};
  std::cin >> x;
  return x;
}

int main()
{
  int num1{ getUserNumber() };
  int num2{ getUserNumber() };

  std::cout << num1 << " + " << num2 << " = " << num1 + num2 << '\n';

  return 0;
}