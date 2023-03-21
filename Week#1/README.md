# INTRODUCTION
## Types of Programming Languages
- There are three types of programming languages:
	* Machine language (Low-level language)
	* Assembly language(Low-level language)
	* High-level language

- Low-level languages are closer to the language used by a computer, while high-level languages are closer to human languages.

---
### Machine / High Level
##### Machine Language
```
169 1 160 0 153 0 128 153 0 129 153 130 153 0 131 200 208 241 96
```

##### High Level Language
```
5 FOR I=1 TO 1000: PRINT"A";: NEXT I
```

---
### Machine / Assembly
##### Machine Language
```
10110000 01100001
```
##### Assembly Language
```
mov a1, #061h
```
##### Meaning
- Move the hexadecimal value 61 (97 decimal) into the processor register named "a1".

---
### <mark>High Level Languages</mark>
- **High-level** languages allow us to write computer code using instructions resembling everyday spoken language (for example **print**, **if**, **while**) which are then **translated** into machine language to be executed.
- Programs written in a **high-level** language need to be translated into **machine language** before they can be executed.
- Some programming languages use a **compiler** to perform this translation and others use an **interpreter**.

---
## Programming Domains
### <mark>Scientific Applications</mark>

- In the early 40s computers were invented for scientific applications.
- The applications require large number of floating-point computations.
- Fortran was the first language to develop scientific applications.
- ALGOL 60 was intended for the same use purpose.

#### Fortran →
```fortran
program hellouniverse
	print *, "Hello Universe"
end program hellouniverse
```

---
### <mark>Business Applications</mark>
- The first successful language for business was COBOL.
- Business languages are characterized by facilities for producing elaborate reports, precise ways of describing and storing decimal numbers and character data, and the ability to specify decimal arithmetic operations.
- The arrival of PCs started new ways for businesses to use computers.
- Spreadsheets and database systems were developed for business.

#### COBOL →
```cobol
IDENTIFICATION DIVISION
PROGRAM-ID. Hello-universe.
PROCEDURE DIVISION
	DISPLAY "Hello Universe"..
```

---
### <mark>System Programming</mark>
- The OS and all of the programming support tools are collectively known as its system software.
- Need efficiency because of continuous use.
- A language for this domain must provide fast execution. Furthermore, it must have low-level features that allow the software interfaces to external devices to be written.
- The UNIX operating system is written almost entirely in C.

#### C →
```c
#include <stdio.h>

int main() {
printf("Hello Universe");
return 0;
}
```

---
### <mark>Artificial Intelligence</mark>
- Symbolic rather than numeric computations are manipulated.
- Symbolic computation is more suitably done with linked lists than arrays.
- LISP was the first widely used AI programming language.
- An alternative approach to AI applications: Prolog.
- The Scheme is a dialect of LISP.

#### LISP →
```lisp
print("Hello Universe")
```

---
### <mark>Scripting Languages</mark>
- <mark>Scripting languages are programming languages that are often used to write scripts, which are collections of commands that can be executed as a program or a set of instructions. </mark>
- The language, named sh (for shell), began as a small collection of commands that were interpreted as calls to system subprograms that performed utility functions, such as file management and simple file filtering.
- awk, another scripting language, began as a report-generation language but later became a more general-purpose language.
- The Perl language, developed by Larry Wall, was originally a combination of sh and awk.
- JavaScript (Flanagan, 1998) is a scripting language developed by Netscape.
- JavaScript is used mostly as a client-side scripting language.
- JavaScript is embedded in HTML documents and is interpreted by a browser that finds the code in a document that is being displayed.
- PHP is a scripting language used on Web server systems. Its code is embedded in HTML documents. The code is interpreted on the server before the document is sent to a requesting browser.

#### JavaScript → 
```javascript
console.log("Hello Universe");
```

#### PHP →
```php
echo "Hello Universe";
```

#### Perl →
```perl
#!/usr/bin/perl
print "Hello Universe";
```

---
## <mark>Programming Paradigms[^1][^2]</mark>
[^1]:<mark>**Paradigm**</mark> <br>
&ensp;&ensp;&ensp;&ensp;_A method to solve some problem or do some task._<br/>

[^2]:<mark>**Programming Paradigm**</mark> <br/>
&ensp;&ensp;&ensp;&ensp;_An approach to solve problem using some programming language.<br/>
&ensp;&ensp;&ensp;&ensp;→ Different Programming Languages_

#### Imperative
- Central features in imperative programming paradigm are variables, assignment statements, and iteration.
- Example: **C**, **Pascal**

#### Functional
- The main means of making computations in functional programming paradigm is by applying functions to given parameters.
- Example: **LISP**, **Scheme**

#### Logic
- Logic programming paradigm is rule-based.
- Rules are specified in no special order.
- Example: **Prolog**

#### Object-Oriented
- In object-oriented programming, data and processing are encapsulated together in objects.
- It includes inheritance and dynamic type binding.
- It grew out of imperative languages.
- Example: **C++**, **Java**

---
A general table:
|Imperative Programming Paradigm|Declarative Programming Paradigm|
|:----:|:----:|
|Procedural Programming Paradigms🖤|Logic Programming Paradigm|
|Object Oriented Programming|Functional Programming🖤|
|Parallel Processing Approach|Database Processing Approach|
|Data Oriented Programming+| Data Oriented Programming+++|

---
### Imperative languages
- So called "Procedural".
- <mark>Computation by fully-specified and fully-controlled manipulation of named data is its highlight.</mark>
- <mark>Data or values are stored in variables (memory locations), taken our from memory, manipulated in ALU, then stored back in memory locations. Finally, the values of variables are sent to I/O devices.</mark>

---
### Von Neumann [John von Neumann](https://en.wikipedia.org/wiki/John_von_Neumann)
- **Computer Architecture**: Von Neumann
- We use imperative languages, at least in part, because we use Von Neumann machines.
	- <mark>Data and programs are stored in the same memory.</mark>
    - <mark>Memory is separate from the CPU.</mark>
    - <mark>Instructions and data are piped from memory to the CPU.</mark>
    - <mark>The results of operations in the CPU must be moved back to memory.</mark>
	- The basis for imperative languages:
		- **Variables** are model memory cells.
		- **Assignment statements** are model piping.
		- **Iteration** is efficient.
		
![Von Neumann](https://user-images.githubusercontent.com/71559273/226204448-92f22eb5-f1dc-47b4-bd4d-90fa26315b6d.png)

---
### <mark>Object Oriented Languages</mark>
The program is written as a collection of classes and objects which are meant for communication. The smallest and basic entity is an object and all kind of computation is performed on the objects only. More emphasis is on data rather than procedure. It can handle almost all kinds of real-life problems which are today in scenarios.

- **Advantages:**
	- Data security
	- Inheritance
	- Code reusability
	- Flexibility and abstraction


- **Simula :** first OOP language
- **Java :** developed by James Gosling at Sun Microsystems
- **C++ :** developed by Bjarne Stroustrup
- **Objective-C :** designed by Brad Cox
- **Visual Basic .NET :** developed by Microsoft
- **Python :** developed by Guido van Rossum
- **Ruby :** developed by Yukihiro Matsumoto
- **Smalltalk :** developed by Alan Kay, Dan Ingalls, Adele Goldberg

---
### <mark>Functional Languages</mark>
- The functional programming paradigms have their roots in mathematics and it is language independent.
- The key principle of these paradigms is the execution of a series of  mathematical functions.


- **Haskell :** developed by Lennart Augustsson, Dave Barton
- **Scala :** developed by Martin Odersky
- **Erlang :** developed by Joe Armstrong, Robert Virding
- **Lisp :** developed by John Mccarthy
- **ML :** developed by Robin Milner

##### Lisp Example: #####
```lisp
(defun <f-name><parameter-list><body>)
<body> can be a sequence of function calls, the function returns the value of the last call in the sequence

	>(defun foo(a)
		(setq b (+ a 1))
        (setq c (+ a 2))
        c)
    FOO
    > (foo 2)
    4
```
```lisp
	>(defun abs(a)
		(cond ((> a 0) a)
		(t(* a -1))))
	ABS
	>(abs 2)
	2
	>(abs -3)
	3
```

---
### <mark>Logic Languages</mark>
- There is for solve logical problems like puzzles, series, etc.
- In logic programming we have a knowledge base that we know before and along with the question and knowledge base which is given to machine, it produces results.
- In logical programming, the main emphasis is on the knowledge base and the problem. The execution of the program is very much like proof of a mathematical statement, e.g., Prolog.

##### Prolog Example:
|Syllogism|Prolog|
|:---:|:---:|
|Socrates is a philosopher.|philosopher(socrates)|
|All philosophers are mortal.|mortal(X) :- philosopher(X)|
|Is Socrates mortal?|?- mortal(socrates)|

```prolog
%% ?- like(sam, dahl)
%% ?- likes(sam, chop_suey)
%% ?- likes(sam, pizza)
%% ?- likes(sam, curry)

likes(sam, Food) :- indian(Food), mild(Food)
likes(sam, Food) :- chinese(Food)
likes(sam, Food) :- italian(Food)
indian(curry)
indian(dahl)
indian(tandoori)
indian(kurma)
mild(dahl)
mild(tandoori)
mild(kurma)
chinese(chow_mein)
chinese(chop_suey)
chinese(sweet_and_sour)
italian(pizza)
italian(spaghetti)
```

---
## <mark>Implementation</mark>
- <mark>The major methods of implementing programming languages are compilation, pure interpretation, and hybrid implementation.</mark>
	- <mark>**Compilation:** Programs are translated into machine language.</mark>
	- <mark>**Pure Interpretation:** Programs are interpreted by another program known as an interpreter.</mark>
	- <mark>**Hybrid Implementation Systems:** A compromise between compilers and pure interpreters.</mark>
- <mark>The operating system and language implementation are **layered** over the machine interface of a computer.</mark>
- <mark>These layers can be thought of as **virtual computers**, providing interfaces to the user at higher levels.</mark>

---
### Compilation
- High-level programs (source language) are translated  into **machine code** (machine language).
- Translation is slow, but execution is fast.
- **C, COBOL, and Ada** are by compilers.
- The compilation process has several phases:
	- Lexical analysis: Converts characters in the source program into lexical units.
		- The lexical units of a program are identifiers, special word operators, and punctuation symbols. 	
	- Syntax analysis: Transforms lexical units into parse trees.
		- These parse trees represent the **syntactic structure** of the program.
	- Semantic analysis: Generates intermediate code.
		- Intermediate languages sometimes look very much like assembly languages and in fact, sometimes are actual **assembly language**.
	- Symbol table: The type and attribute information of each **user-defined name** in the program.
	- Optimization: Improves programs by making them smaller or faster or both.
	- Code generation: Machine code is generated.  

![Compilation process](https://user-images.githubusercontent.com/71559273/226598022-7a186328-34b2-46de-98de-968d53d8bbaa.png)

---
### Pure Interpretation
- Programs are interpreted by another program called an interpreter, with **no translation**.
- <mark>Advantage: Easy implementation of many source-level debugging operations, because all **run-time** error messages can refer to **source-level** units.</mark>
- <mark>Disadvantage: Slower execution (**10 to 100 times** slower than compiled programs).</mark>
- **Bottleneck: Statement decoding**, rather than the connection between the processor and memory, is the bottleneck of a pure interpreter.
- There are significant comeback with some Web scripting languages (e.g., JavaScript and PHP).

![Pure Interpretation Process](https://user-images.githubusercontent.com/71559273/226609632-44bd5749-0d95-4e40-808a-aa6564bc900b.png)

---
### Hybrid Interpretation
- <mark>Hybrid interpretation is a compromise between compilers and pure interpreters.</mark>
- <mark>A high-level language program is translated to an **intermediate language** that allows easy interpretation.</mark>
- <mark>It is faster than pure interpretation.</mark>
- **Examples:**
	- **Perl** programs are partially compiled to detect errors before interpretation.
	- **Java** was hybrid: The intermediate form, byte code, provides portability to any machine that has a byte code interpreter and a run-time system [together, these are called Java Virtual Machine(JVM)].

![Hybrid Interpretation Process](https://user-images.githubusercontent.com/71559273/226621302-0d413e70-e22c-46b5-a675-c26d76ce6b8f.png)