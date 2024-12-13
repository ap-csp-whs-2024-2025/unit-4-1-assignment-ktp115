#include <iostream>
#include <string>

int main()
{
  // "\n" and "std::endl" = a new line
  // "std::cout" computer output
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
    int z = 10;
    std::cout << "x > z: " << (x>z) << "\n"
              << "y > x: " << (y<z) << "\n";

  // exercise 2
  bool isSunny = true;
  bool hasUmbrella = false;
  std::cout << "isSunny && hasUmbrella: " << (isSunny && hasUmbrella) << "\n";
  std::cout << "isSunny || hasUmbrella: " << (isSunny || hasUmbrella) << "\n";
  std::cout << "!isSunny: " << (!isSunny) << "\n";
  std::cout << "!isSunny && !hasUmbrella: " << (!isSunny && !hasUmbrella) << "\n";
  
  // exercise 3
  int n = 7;
  double m = 4.0;
  bool hasLicense = false;
  std::cout << "n>m: " << (n>m) << "\n";
  std::cout << "m==4.0: " << (m==4.0) << "\n";
  std::cout << "hasLicense && m<=n: " << (hasLicense && m<=n) << "\n";
  std::cout << "n>5 && !hasLicense: " << (n>5 && !hasLicense) << "\n";

  // exercise 4
  int age = 18;
  double height = 5.9;
  bool isStudent = true;
  std::string city = "New York";
  std::cout << "Birth year: " << 2024 - age << "\n";
  std::cout << "Adult: " << (age>=18) << "\n";
  std::cout << "Over 6 ft: " << (height>6) << "\n";
  std::cout << "student & living in NY: " << (isStudent && city=="New York") << "\n";

  //bonus
  int i = 50;
  double d = 100.5;
  bool flag = false;
  std::cout << "i%5 && d>50: " << (i%5==0 && d>50) << "\n";
  std::cout << "d<=100 || flag: " << (d<=100 && flag) <<"\n";
  std::cout << "!flag && i > 30: " << (!flag && i>30) << "\n";

  return 0;
}
