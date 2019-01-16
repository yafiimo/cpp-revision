#include <iostream>
#include <string>
#include "functions.h"

int main() {
  std::string name = getName();
  int age = getAge();
  std::cout << "Hello, " << name << ". You are " << age << " years old!" << std::endl;
  
  return 0;
}
