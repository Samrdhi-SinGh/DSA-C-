#include <iostream>
using namespace std;

int main(){

  int age; //age declared with garbage value
  cout << "Enter your age: "<< endl;
  cin >> age; // The execution will be stuck here until it takes the input.
  cout << "Your age is: " << age << endl;

  bool remark;
  cin >> remark; // Always give 1 or 0 as input in boolean datatype variables.
  cout << "Print remark: " << remark << endl;
  return 0;
}

