#include <iostream>
using namespace std;  // This line tells the compiler that it should look in the std namespace for any identifier we haven’t defined.
// In C++, identifiers can be defined within a context called a namespace.


int main() {

    // This is the syntax for outputting some piece of text to the screen:
    cout<<"This string will be printed out.";  // Statements end with a semicolon in C++.

    // To access an identifier defined in a namespace,
    // tell the compiler to look for it in that namespace using the scope resolution operator (::):
    // std::cout
    // Example: std::cout<<"This string will be printed out.";
    // A cleaner alternative is to add the following line to the corresponding line as seen above:
    // using namespace std;

    ///////////
    
    // Indentation
    // C++ uses curly braces for blocks
    int x = 1;
    if (x == 1) {
        cout<<"x is 1";
    } else {
        cout<<"x is not 1";
    }
    
    return 0;
}