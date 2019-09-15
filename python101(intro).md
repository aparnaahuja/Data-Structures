# Python Language Introduction

## Reason for increasing popularity and Language Features

- code readability, shorter codes, ease of writing
- inbuilt functions of almost all frequently used concepts
- Interpreted
  - Internally, Python converts the source code into an intermediate form called bytecodes which is then translated into native language of specific computer to run it.
- Platform(operating system) independent
- Free and Open Source
- Embeddable
  - Python can be used within C/C++ program to give scripting capabilities for the program's users.
- Rich Library support

# Python3 basic syntax

- ```print("hello world")``` 

- In python you donot need to declare the type of variable, it will automatically know whether the value given would be a int, float or char or even a String.

  - ```num = 3```
  - ```ch = "helloworld"```

- List is most basic data structure in python. It is mutable ie items can be added to list later after the list creation.

  - ```num = []``` empty list
  - ```num.append(21)```
  - ```num.append(35)```
  - ```num.append("string")```
  - ```print(num)```
  - [21,35,string]

- ## input/output

  - ```name = input("Enter your name: ")```
  - ```num1 = int(input("Enter num1: "))```
  - ```num2 = int(input("Enter num2: "))```

- ## if/elif/else selection

  - ```num1 = 34``` <br>
  - ```if(num1>12):``` <br>
    - ```print("Num1 is good")``` <br>
  - ```elif(num1>35):``` <br>
    - ```print("Num2 is not gooooo....")```<br>
  - ```else:``` <br>
    - ```print("Num2 is great")```

- ## Functions

  - You can think of functions like a bunch of code that is intended to do a particular task in the whole Python script. Python used the keyword 'def' to define a function.

  - ```def hello():```
    - ```print("hello")```
    - ```print("hello2")```
  - ```hello()``` // calling of function 
  - ### Output
    - hello
    - hello2 

- ## Iteration(Looping)

  - As the name suggests it calls repeating things again and again. We will use the most popular 'for' loop here
  
  - ```for i in range(5):```

    - ```print(i)```

  - ### Output

    - 0
    - 1
    - 2
    - 3
    - 4
    - 5
