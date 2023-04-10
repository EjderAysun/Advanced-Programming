x = [1, 2, 3]  # list definition
print(x)
# Output: [1, 2, 3]

print(type(x))
# Output: <class 'list'>

x += [1]  # adding to 1 to the last index of the list
print(x)
# Output: [1, 2, 3, 1]

# Assignment Operator Examples #

# = operator:
x = 10
print(x)  # Output: 10

# += operator:
x += 5
print(x)  # Output: 15

# -= operator:
x -= 3
print(x)  # Output: 12

# *= operator:
x *= 2
print(x)  # Output: 24

# /= operator:
x /= 3
print(x)  # Output: 8.0

# %= operator:
x %= 3
print(x)  # Output: 2.0

# //= operator:
x //= 2
print(x)  # Output: 1.0

# **= operator:
x **= 3
print(x)  # Output: 1.0

# The following operations are done on a bit scale: #

# &= operator:
y = 6
y &= 3
print(y)  # Output: 2

# |= operator:
y |= 1
print(y)  # Output: 3

# ^= operator:
y ^= 5
print(y)  # Output: 6

# >>= operator:
y >>= 1
print(y)  # Output: 3

# <<= operator:
y <<= 2
print(y)  # Output: 12

'''

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

//=                 a //= b                 Divide(floor) AND: Divide left operand with right operand and then
                                            assign the value(floor) to left operand

**=                 a **= b                 Exponent AND: Calculate exponent(raise power) value using operands
                                            and assing value to left operand

&=                  a &= b                  Performs Bitwise AND on operands and assign value to left operand

|=                  a |= b                  Performs Bitwise OR on operands and assign value to left operand

^=                  a ^= b                  Performs Bitwise XOR on operands and assign value to left operand

>>=                 a >>= b                 Performs Bitwise right shift on operands and assign value to left operand

<<=                 a <<= b                 Performs Bitwise left shift on operands and assign value to left operand

'''