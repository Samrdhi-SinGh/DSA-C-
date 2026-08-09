// If we remove 'using namespace std;' from the code then it'll give error with all the built-in functions we use like 'cout', 'cin', end. Then we use 'std::' with every objects.

#include <iostream>

int main()
{

  int height;
  std::cout << "Enter your height: " << std::endl;
  std::cin >> height;
  std::cout << "Your height is: " << height << std::endl;
  return 0;
}
