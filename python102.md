## Basic Operations in Python

- **Arithmetic operators**: Arithmetic operators are used to perform mathematical operations like addition, subtraction, multiplication and division.
  
  - **+** : Addition of 2 numbers ( x+y )
  - **-** : Subtraction of 2 numbers ( x-y )
  - **\*** : Multiplication of 2 numbers ( x*y )
  - **/** : Deciman Division of 2 numbers ( x/y )
  - **//** : Integer Division of 2 numbers ( x//y )
  - **%** : Modulus: returns the remainder when first operand is divided by the second ( x%y )

- **Relational operators**: Relational operators compares the values. It either returns **True** or **False** according to the condition. 
  - **>** : Greater than: True if left operand is greater than the right ( x>y )
  - **<** : Smaller than: True if left operand is smaller than the right ( x<y )
  - **==** : Equal to: True if both operands are equal ( x==y )
  - **!=** : Not equal to - True if operands are not equal ( x!=y )
  - **>=** : Greater than or equal to: True if left operand is greater than or equal to the right ( x>=y )
  - **<=** : Less than or equal to: True if left operand is smaller than or equal to the right ( x<=y )

- **Logical Operations**: Logical operators perform **Logical AND**, **Logical OR** and **Logical NOT** operations.

  - **and** : Logical AND: True if both the operands are true ( x and y )
  - **or** : Logical OR: True if either of the operands is true ( x or y )
  - **not** : Logical NOT: True if operand is false ( not x )

- **Bitwise operators**: Bitwise operators acts on bits and performs bit by bit operation.
  - **&** : Bitwise AND ( x&y )
  - **|** : Bitwise OR ( x|y )
  - **~** : Bitwise NOT ( ~x )
  - **^** : Bitwise XOR ( x^y )
  - **>>** : Bitwise right shift ( x>>y )
  - **<<** : Bitwise left shift ( x<<y )

- **Assignmnet Operators**: are used to assign values to the variables.
  - **=** : Assign value of right side of expression to left side operand ( x=y+z )
  - **+=** : Add right side operand with left side operand and then assign to left operand ( a+=b || a=a+b )
  - **-=** : Subtract right operand from left operand and then assign to left operand ( a -= b || a=a-b )
  - __*=__ : Multiply right operand with left operand and then assign to left operand ( a *= b || a=a\*b )
  - **/=** : Divide left operand with right operand and then assign to left operand ( a /= b || a=a/b )
  - **//=** : Divide left operand with right operand and then assign the value(floor) to left operand ( a //= b || a=a//b )
  - __**=__ : Calculate exponent(raise power) value using operands and assign value to left operand ( a \**= b || a=a**b )

- **Special Operators**:

  - __Identity operators__- **is** and **is not** are the identity operators both are used to check if two values are located on the same part of the memory. Two variables that are equal does not imply that they are identical.

    - **is** : True if the operands are identical 
    - **is not** : True if the operands are not identical 

  - __Membership operators__- **in** and **not in** are the membership operators; used to test whether a value or variable is in a sequence.

    - **in** : True if value is found in the sequence
    - **not in** : True if value is not found in the sequence