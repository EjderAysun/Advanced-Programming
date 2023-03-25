#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int b = 20;
    cout<<bool(a == b)<<endl;
    // Output: 0

    // C++ manipulator boolalpha function is used to set the output stream\
    to display bool values as the strings "true" or "false".
    
    cout<<boolalpha<<bool(a == b)<<endl;
    // Output: false
    cout<<boolalpha<<bool(a != b)<<endl;
    // Output: true
    cout<<boolalpha<<bool(a <= b)<<endl;
    // Output: true
    cout<<boolalpha<<bool(a >= b)<<endl;
    // Output: false

    a = 10;
    b = 10;
    cout<<boolalpha<<bool(a == b)<<endl;
    // Output: true
    
    return 0;
}

/*

Operator     Example     Meaning                    Result

==           a == b      Equal to                   True if the value of a is equal to the value of b
                                                    False otherwise

!=           a != b      Not equal to               True if a is not equal to b
                                                    False otherwise

<            a < b       Less than                  True if a is less than b
                                                    False otherwise

<=           a <= b      Less than or equal to      True if a is less than or equal to b
                                                    False otherwise

>            a > b       Greater than               True if a is greater than b
                                                    False otherwise

>=           a >= b      Greater than or equal to   True if a is greater than or equal to b
                                                    False otherwise

<=>          a <=> b     Greater than or            This operator is called the "three-way comparison operator"
                         equal to or                and was introduced with the C++20 standard.
                         less than                  Returns -1 if a is less than b,
                                                    returns 0 if a equal b,
                                                    returns 1 if a greater than b.

*/