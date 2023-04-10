#include <iostream>

// The cmath library in C++ is a library used to perform mathematical operations. \
This library contains a header file where many mathematical functions such as trigonometric functions, \
logarithmic functions, square root, and exponentiation are defined.
#include <cmath>
using namespace std;

int main() {
    int a = 4;
    int b = 3;

    cout<<-b<<endl;
    // Output: -3
    cout<<a + b<<endl;
    // Output: 7
    cout<<double(a) / double(b)<<endl;
    // Output: 1.33333
    cout<<a % b<<endl;
    // Output: 1

    // The pow() function in C++ is used to calculate the power of a number. \
    The call pow(x,y) calculates the y to the power of the base x and returns the result.
    cout<<pow(a, b)<<endl;
    // Output: 64
    cout<<11.0 / 5.0<<endl;
    // Output: 2.2
    cout<<2 * 25 + 30<<endl;
    // Output: 80

    return 0;
}

/*

Operator        Example        Meaning             Result

+ (unary)       +a             Unary Positive      a
                                                   In other words, it doesnt
                                                   really do anything. It mostly
                                                   exists for the sake of
                                                   completeness, to complement
                                                   Unary Negation

+ (binary)      a + b          Addition            Sum of a and b

- (unary)       -a             Unary Negation      Value equal to a but opposite in sign

- (binary)      a - b          Subtraction         b subtracted from a

*               a * b          Multiplication      Product of a and b

/               a / b          Division            Quotient when a is divided by b.
                                                   The result always has type float.

%               a % b          Modulo              Remainder when a is divided by b

++              ++a            Increment(Prefix)   the value of "a" is first incremented and 
                                                   then used in the expression

++              a++            Increment(Postfix)  the current value of "a" is used in the expression,
                                                   and then it is incremented

--              --a            Decrement(Prefix)   the value of "a" is first decremented and
                                                   then used in the expression

--              a--            Decrement(Postfix)  the current value of "a" is used in the expression,
                                                   and then it is decremented

*/