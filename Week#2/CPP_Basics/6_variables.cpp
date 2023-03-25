#include <iostream>
#include <string>
using namespace std;

int main() {
    // In C++ variables must be declared and types must be explicitly given.
    int x;
    x = 8;
    cout<<x<<endl;

    ///////////
    // Type Matters

    // C++ doesn't know what the "type" of everything is, types must be declared.

    // Note: If you want to run the code, convert to comment on line 20 using the // sign!

    // Some operations are prohibited, you can not “add 1” to a string:
    string eee = "hello there";
    eee = eee + 1;  // This will throw an error:
    // note:   template argument deduction/substitution failed:
    // "<file path>":20(line):17(char position): note:   mismatched types 'const __gnu_cxx::__normal_iterator<_Iterator, _Container>' and 'int'
    // int eee = eee + 1;
    //                 ^

    ///////////
    // Type Conversions

    // When you put an integer and a floating point in an expression, the integer is implicitly converted to a float:
    cout<<11.4 + 10<<endl;
    // Output: 21.4

    // You can control this with the built-in functions int(), float(), double() and others...

    // float():
    int i = 42;  // assigning an int value to i
    // declaring a float type variable float f and float r:
    float f = i;  // implicit conversion
    float r = float(i);  // explicit conversion


    // double():
    float t = 42;  // assigning an float value to t
    // declaring a double type variable double b and double z:
    double b = t;  // implicit version
    double z = double(t);  // explicit version


    /*
    There are some differences between double and float data types:

    Precision: Double data type provides a higher precision than the float data type.
    The double data type is 64 bits long while the float data type is only 32 bits long.

    Memory usage: Double data type uses twice as much memory as float data type.
    Therefore, providing greater precision by using a double data type comes at a price.

    Performance: The float data type has faster processing than the double data type.
    Therefore, it may be more efficient to use the float data type, especially when performing large numerical calculations.

    Accuracy: Double data type gives more accurate results than a float data type.
    This is an important factor, especially when working with very large or very small numbers.
    */


    // int():
    double j = 42.3;  // assigning an double value to j
    // declaring a int type variable int m and int k:
    int m = j;  // implicit version
    int k = int(j);  // explicit version

    ///////////
    // String Conversions

    // You can use stoi() to convert between strings and integers:
    string str = "123";
    int num;
                
    num = stoi(str);  // using stoi() to store the value of str1 to x

    cout<<num<<endl;

    return 0;
}