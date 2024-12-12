#include <iostream>
#include <string>

int main()
{
  int age = 17;
  double price = 19.99;
  bool isRaining = false;
  // "\n" and "std::endl" = a new line
  // "std::cout" computer output
  std::cout << age << "\n" << price << std::endl << isRaining <<"\n";

  int grade = 11;
  std::cout << "I am an" << " " << grade << "th grader." <<"\n";

  // "std::string" string
  std::string name = "Katie";
  std::cout << "My name is " << name << "\n";

  // exercise 1
  int x = 25;
  int y = 3;
  int add_xy = x+y;
  int sub_xy = x-y;
  int mult_xy = x*y;
  int div_xy = x/y;
  int mod_xy = x%y;
  std::cout << add_xy <<"\n"
            << sub_xy <<"\n"
            << mult_xy << "\n"
            << div_xy << "\n"
            << mod_xy << "\n";
  return 0;
}
