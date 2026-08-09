#include<iostream>
using namespace std;

int main(){
/*
Ternary Operator:
"Ternary operator is not a control flow statement, it's an operator which contains conditions and give expressions as per 'true' and 'false'.

Syntax:
(Condition) ? expression 1 if true : expression 2 if false;
*/

int age;
cout << "Ente age: " << endl;
cin >> age;

(age > 18) ? cout << "Eligible" : cout << "Not eligible" << endl;

return 0;
}
