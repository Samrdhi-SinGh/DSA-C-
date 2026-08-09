// Namaste Duniya!

#include <iostream>//Header file
using namespace std;

int main(){
  cout << "Namaste Duniya!" << endl;
  return 0;
}

/*

1. include:
This is preprocessor directive that tells the compilor to include Statndard input output stream library.

2. using namespace std;
"Standard namespace where every object is defined in the header file ."
This declaration aids (helps) in avoiding repeated use of std:: prefix before standard library objects. It makes the code cleaner and more readable.

3. int main():
This is the entry point in C++ programming. The code execution starts from here.
The function always returns integer. Typically, the function returns 0 at the end of int main() that indicates that its successfully executed.

4. cout << "Namaste Duniya!" << endl;
1. cout: It is "Character Output" used to print the standard output.

2. <<: It is an operator used to insert subsequent string in stream output.

3. "Namaste Duniya!": It the output to be dsplayed on the screen.

4. endl;: 
This manipulator is used to add newlines effectively moving the cursor to next line in the console.

5. return 0:
return 0 inidcates the end of the main() function and tells the system that the program is executed successfully.
non-zero return means unsuccessful execution.
return 1: General error
return 2: File not found
return 101: Custom error defined by your program.

6. ; (Semicolon): Used for termination.
*/