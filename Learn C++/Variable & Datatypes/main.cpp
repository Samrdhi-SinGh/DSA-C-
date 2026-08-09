#include <iostream>
using namespace std;

int main(){

  // Declaration:
  int rat;

  // Defining Variables:
  int age = 34; //Global variable
  cout << "My age is: " << age << endl;
  

  // Datatypes:
  int work = 10;
  cout << work << endl;
  char alph = 'a';
  cout << alph << endl;
  float dev = 3.5;
  cout << dev << endl;
  double ratio = 98.78675; //98.7867
  cout << ratio << endl;

  //Scope:
  // Defining same variables in different scopes: 
  { 
    int age = 23;//Local variable
    cout << age << endl;
  }
  {
    int age = 98;
    cout << age << endl;
  }

  // Defining same variables in nested scopes:
  {
    int age = 45;
    cout << age << endl;
    {
      int age =67;
      cout << age << endl;
    }
  }

  // What will give error:
  // {
  //   int age = 89;
  //   cout << age << endl;
  //   int age = 54;
  //   cout << age << endl;
  // }
  /* Output:
   error: redeclaration of 'int age'
     int age = 54;
         ^~~
   note: 'int age' previously declared here
     int age = 89;
         ^~~
*/

  return 0;
}