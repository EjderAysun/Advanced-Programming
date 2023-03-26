# Additional Notes, CPP, Week 2
## C++ Compilation
![C++ Compilation](https://user-images.githubusercontent.com/71559273/227747171-2d769167-caf6-4f68-a733-f57cd391c7f7.png)

---
## Reserved Words
|||||
|:----:|:----:|:----:|:----:|
|asm|double|new|switch|
|auto|else|operator|template|
|break|enum|private|this|
|case|extern|protected|throw|
|catch|float|public|try|
|char|for|register|typedef|
|class|friend|return|union|
|const|goto|short|unsigned|
|continue|if|signed|virtual|
|default|inline|sizeof|void|
|delete|int|static|volatile|
|do|long|struct|while|
|||||

---
## Data Types in C/C++
|Primary|Derived|User Defined|
|:----:|:----:|:----|
|Integer|Function|Class|
|Character|Array|Structure|
|Boolean|Pointer|Union|
|Floating Point|Reference|Enum|
|Double Floating Point||Typedef|
|Void|||
|Wide Character|||

---
## C++ Basic Data Types
|Type Names|Description|Size|Range|
|:----:|:----:|:----:|:----:|
|char|Single text character or small integer. Indicated with single quotes ('a', '3').|1 byte|signed: -128 to 127 <br> unsigned: 0 to 255|
|int|Larger integer.|4 bytes|signed: -2147483648 to 2147483647 <br> unsigned: 0 to 4294967295|
|bool|Boolean (true/false). Indicated with the keywords true and false.|1 byte|Just true (1) or false (0).|
|double|"Doubly" precise floating point number.|8 bytes|+/-&nbsp;1.7e +/-&nbsp;308 (15 digits)|

---
## Operators in C/C++
||Operator|Type|
|:----:|:----|:----:|
|Unary Operator|`++, --`|Unary operator|
|Binary Operator|`+, -, *, /, %`|Arithmetic operator|
|Binary Operator|`<, <=, >, >=, ==, !=`|Relational operator|
|Binary Operator|```&&, \|\|, !```|Logical operator|
|Binary Operator|```&, \|, <<, >>, ~, ^```|Bitwise operator|
|Binary Operator|`=, +=, -=, *=, /=, %=`|Assignment operator|
|Ternary Operator|`?:`|Ternary or conditional operator|