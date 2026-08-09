#include <iostream>

using namespace std;

int main()
{

  char fruit;
  cout << "Enter name of fruit: " << endl;
  cin >> fruit;

  switch (fruit)
  {
  case 'A':
  {
    cout << "1 kg of Apple costs 180 rs." << endl;
  }
  break;

  case 'B':
  {
    cout << "1 kg of Mango costs 150 rs." << endl;
  }
  break;

  default:
    cout << "Invalid input" << endl;
  }

  return 0;
}