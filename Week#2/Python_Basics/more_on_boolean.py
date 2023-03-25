print(bool(0), bool(0.0), bool(0.0 + 0j))
# Output: False False False because all of them zero or other values detected as zero

print(bool(-3), bool(3.14159), bool(1.0 + 1j))
# Output: True True True because all of them are nonzero

print(type(''))
# Output: <class 'str'>

print(type(""))
# Output: <class 'str'>

print(bool(''), bool(""))
# Output: False False because all of them are empty

print(bool('foo'), bool("fooooo"))
# Output: True True because all of them are not empty

print(type([]))
# Output: <class 'list'>

print(bool([]))
# Output: False because this list is empty

print(type([1, 2, 3]))
# Output: <class 'list'>

print(bool([1, 2, 3]))
# Output: True because this list is not empty