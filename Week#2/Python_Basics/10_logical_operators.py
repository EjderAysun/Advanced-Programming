x = 5
print(not x < 10)
# Output: False

x = 3
y = 4
print(x or y)
# Output: 3 because x is not zero

x = 0.0
y = 4.4
print(x or y)
# Output: 4.4 because x is zero

string = 'here'
s = string or '<default_value>'
print(s)
# Output: here because first value string is not empty

string = ''
s = string or '<default_value>'
print(s)
# Output: <default_value> because first value string is empty

'''

Operator    Example    Meaning

not         not x      True if x is False
                       False if x is True
                       (Logically reverses the sense of x)

or          x or y     True if either x or y is True
                       False otherwise

and         x and y    True if both x and y are True
                       False otherwise

'''