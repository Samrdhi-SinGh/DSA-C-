#include <iostream>
using namespace std;

int main()
{

  // Decision making :-

  // 1. if statement:

  int petrol;
  cout << "Enter your petrol: " << endl;
  cin >> petrol;

  if (petrol > 1000)
  {
    cout << "You can buy petrol" << endl;
  }

  // 2.if-else statement:

  int age;
  cout << "Enter your age: " << endl;
  cin >> age;

  if (age >= 18)
  {
    cout << "You are eligible" << endl;
  }
  else
  {
    cout << "You are not eligible" << endl;
  }

  // 3. if-else if statement:

  // int flow;
  // cout << "Enter the range of flow: " << endl;
  // cin >> flow;

  // if (flow > 30)
  // {
  //   cout << "The flow is of good range" << endl;
  // }
  // else if (flow > 50)
  // {
  //   cout << "The flow is of medium range" << endl;
  // }
  // else if (flow > 20)
  // {
  //   cout << "The flow is of low range" << endl;
  // }

  // 4. if- else if-else statement:

  int flow;
  cout << "Enter the range of flow: " << endl;
  cin >> flow;

  if (flow > 30)
  {
    cout << "The flow is of good range" << endl;
  }
  else if (flow > 50)
  {
    cout << "The flow is of medium range" << endl;
  }
  else if (flow > 20)
  {
    cout << "The flow is of low range" << endl;
  }
  else
  {
    cout << "The flow is invalid" << endl;
  }

  // 5. Nested if statement:

  int height;
  cout << "Enter your height: " << endl;
  cin >> height;

  int weight;
  cout << "Enter your weight: " << endl;
  cin >> weight;

  if(height > 5){
    if(weight > 70){
      cout << "Overweight" << endl;
    }
    else{
      cout << "Underweight" << endl;
    }
  }
  else{
    cout << "Height is less then 5 feet" <<  endl;
  }

  return 0;
}