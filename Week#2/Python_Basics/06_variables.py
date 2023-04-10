# In Python, variables must be declared but types are not given.
x = 8
print(x)

###########
# Type Matters #

# Python knows what “type”  everything is.

# Note: If you want to run the code, convert to comment on lines 14, 110, 133, and 142 using the '#' sign!

# Some operations are prohibited, you can not “add 1” to a string: #
eee = 'hello ' + 'there'
eee = eee + 1  # This will throw an error: \
'''
Traceback (most recent call last):
File "<stdin>", line 14(n), in <module>
    eee = eee + 1
    ~~~~~~~~~~^~~
TypeError: can only concatenate str (not "int") to str
'''

###########
# We can ask Python what type something is by using the type() function:
print(type(eee))
# Output: <class 'str'>

eee = 18  # We can convert the string variable into an integer in this way.
print(eee)
# Output: 18

# This way we can do a direct type query: #

print(type('hello'))
# Output: <class 'str'>

print(type(1))
# Output: <class 'int'>

###########
# Several Types of Numbers #

# Numbers have two main types: integer and float.
# Integers are whole numbers: -14, -2, 0, 1, 100, 401233, ...
# Floating Point Numbers have decimal parts: -2.5, 0.0, 98.6, 14.0, ...
# There are other number types - they are variations on float and integer.

xx = 1
print(type(xx))
# Output: <class 'int'>

temp = 98.6
print(type(temp))
# Output: <class 'float'>

print(type(1))
# Output: <class 'int'>

print(type(1.0))
# Output: <class 'float'>

###########
# Type Conversions #

# When you put an integer and a floating point in an expression, the integer is implicitly converted to a float:
print(11.4 + 10)
# Output: 21.4

# You can control this with the built-in functions int() and float(). #

# float(): #
print(float(99) + 100)
# Output: 199.0

i = 42
print(type(i))
# Output: <class 'int'>
f = float(i)
print(f)
# Output: 42.0
print(type(f))
# Output: <class 'float'>


# double(): #
# There is no double type in Python.


# int(): #
print(int(34.6) + 100)
# Output: 134

i = 42.3
print(type(i))
# Output: <class 'float'>
f = int(i)
print(f)
# Output: 42
print(type(f))
# Output: <class 'int'>

###########
# String Conversions #

# You can also use int() and float() to convert between strings and integers. #

sval = '123'
print(type(sval))
# Output: <class 'str'>

# If you try to add a number to a string, you will get an error: #
print(sval + 1)  # This will throw an error: \
'''
Traceback (most recent call last):
File "<stdin>", line 110(n), in <module>
    print(sval + 1)
    ~~~~~~~~~~~^~~
TypeError: can only concatenate str (not "int") to str
'''

ival = int(sval)
print(type(ival))
# Output: <class 'int'>

print(ival + 1)
# Output: 124

ival = float(sval)
print(type(ival))
# Output: <class 'float'>

print(ival + 1)
# Output: 124.0

# You will get an error if the string does not contain numeric characters: #
nsv = 'hello'
niv = int(nsv)  # This will throw an error: \
'''
Traceback (most recent call last):
File "<stdin>", line 133(n), in <module>
    niv = int(nsv)
          ^^^^^^^^
ValueError: invalid literal for int() with base 10: 'hello'(x)
'''

# You will get an error if the string does not contain just numeric characters: #
nsv = 'hello123'
niv = int(nsv)  # This will throw an error: \
'''
Traceback (most recent call last):
File "<stdin>", line 142(n), in <module>
    niv = int(nsv)
          ^^^^^^^^
ValueError: invalid literal for int() with base 10: 'hello'(x)
'''

# You will also get these two errors for float() conversion as well.