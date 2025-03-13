#include <iostream>
#include <string>

int main()
{
  string name;
  std::cout << "Enter your name: ";
  std::cin >> name; //We enter the user name
  std::cout << "Hello world from " << name << "!"
            << std::endl;//we display a greeting with the name
  return 0;
}
