#include <iostream>
#include <string>
#include <list>
using namespace std;

int main() {

    // Assignment Operator Examples

    // = operator:
    int x = 10;
    cout<<x<<endl;  // Output: 10

    // += operator:
    x += 5;
    cout<<x<<endl;  // Output: 15

    // -= operator:
    x -= 3;
    cout<<x<<endl;  // Output: 12

    // *= operator:
    x *= 2;
    cout<<x<<endl;  // Output: 24

    // /= operator:
    x /= 3;
    cout<<x<<endl;  // Output: 8

    // %= operator:
    x %= 3;
    cout<<x<<endl;  // Output: 2

    // The following operations are done on a bit scale:

    int y = 6;
    
    // &= operator:
    y &= 3;
    cout<<y<<endl;  // Output: 2

    // |= operator:
    y |= 1;
    cout<<y<<endl;  // Output: 3

    // ^= operator:
    y ^= 5;
    cout<<y<<endl;  // Output: 6

    // >>= operator:
    y >>= 1;
    cout<<y<<endl;  // Output: 3

    // <<= operator:
    y <<= 2;
    cout<<y<<endl;  // Output: 12

    return 0;
}

/*

Operator            Syntax                  Description

=                   x = y + z               Assign value of right side of expression to left side operand

+=                  a += b                  Add and Assign: Add right side operand with left side operand
                                            and then assign to left operand

-=                  a -= b                  Subtract AND: Subtract right operand from left operand and then
                                            assign to left operand: True if both operands are equal

*=                  a *= b                  Multiply AND: Multiply right operand with left operand and then
                                            assign to left operand

/=                  a /= b                  Divide AND: Divide left operand with right operand and then assign
                                            to left operand

%=                  a %= b                  Modulus AND: Takes modulus using left and right operands and assign
                                            result to left operand

&=                  a &= b                  Performs Bitwise AND on operands and assign value to left operand

|=                  a |= b                  Performs Bitwise OR on operands and assign value to left operand

^=                  a ^= b                  Performs Bitwise XOR on operands and assign value to left operand

>>=                 a >>= b                 Performs Bitwise right shift on operands and assign value to left operand

<<=                 a <<= b                 Performs Bitwise left shift on operands and assign value to left operand

*/