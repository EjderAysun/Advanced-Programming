# Additional Notes, General, Week 2
#### Basics
- A **statement** is a unit of code that does something _-a basic building  block of a program-._
- An **expression** is a statement that has a value _-for instance, a  number, a string, the sum of two numbers, etc. 4+2, x-1, and "Hello,  universe!" are all expressions-._

---
#### Constants
- Fixed values such as _numbers, letters, and strings_, are called **“constants”** because their value _does not change._

---
#### Data Types
- Every expression has a **type** _-a formal description of what kind of data its value is-._
	- For instance, 0 is an integer, and 3.142 is a floating-point(decimal) number.
	- _All variables, literals, and constants_ must have a “type".

---
#### Comments
- **Describe** what is going to happen in a sequence of code.
- Document who wrote the **code or other ancillary information**.
- **Turn off a line of code** _-perhaps temporarily-._

---
#### Operators
- **Operators** are special symbols _that designate that some sort of computation should be performed._
- _The values that an operator acts on_ are called **operands**.

---
#### Assignment Statements
```
// We assign a value to a variable using the assignment statement (=):
x = 0.6  // A variable is a memory location used to store a value (0.6).
// As above, an assignment statement consists of an expression on the right-hand side and
// a variable to store the result.

x = 3.9 * x * (1 - x)  // The right side is an expression.
			   1 - 0.6 = 0.4
    3.9 * 0.6 * 0.4 = 0.936 (x = 0.936)
    						// Once the expression is evaluated, the result is placed in
    						// (assigned to) the variable on the left side (i.e., x).
// As above, the value stored in a  variable can be updated by replacing
// the old value (0.6) with a new value (0.936).
```