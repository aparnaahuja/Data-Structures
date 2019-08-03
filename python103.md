## Python | end parameter in print()

By default python's print() function ends with a newline.
Python's print() function comes with a parameter called 'end'.

```print("Python" , end = '@')``` 
```print("DishantSethi")```

### Output

Python@DishantSethi

## Maximum possible value of an integer in Python3

In Python, value of an integer is not restricted by the number of bits and can expand to the limit of the available memory 

Thus we never need any special arrangement for storing large numbers (Imagine doing above arithmetic in C/C++).

## Type conversion

- **int(a,base)**: converts any data type to integer. `base` specifies the base of the string(if the data type is string)

  - ```s = "100100"```<br>
    ```print(s)``` // 100100 <class 'str'> <br>
    ```print(int(s))``` // 100100 <class 'int'><br>
    ```print(int(s,2))``` // 36 <class 'int'>


- **float()**: is used to convert any data type to a floating point number

  - ```print(float(s))``` // 100100.0 <class 'float'>


- **ord()**: convert a character to integer. 

  - ```s = '4'``` <br>
    ```d = 'a'``` <br>
    ```print(ord(s))``` // 52 <class 'int'> <br> 
    ```print(ord(d))``` // 97 <class 'int'>


- **hex()**: convert integer to hexadecimal string.

  - ```print(hex(36))``` // 0x24 <class 'str'> <br>
  - ```print(hex(52))``` // 0x34 <class 'str'>


- **oct()**: convert integer to octal string.

  - ```print(oct(36))``` // 0o44 <class 'str'> <br>
  - ```print(oct(52))``` // 0o64 <class 'str'>


- **tuple()**: used to convert to a tuple

  - ```s = "Dishant"``` <br>
    ```print(tuple(s))```

  - ### Output
    ('D', 'i', 's', 'h', 'a', 'n', 't') <br>
    // <class 'tuple'>


- **set()**: used to convert to a set

  - ```s = "Dishant"``` <br>
    ```print(set(s))```

  - ### Output
    {'i', 'h', 't', 'D', 'n', 'a', 's'} <br>
    // <class 'set'>


- **list()**: used to convert to a list

  - ```s = "Dishant"``` <br>
    ```print(list(s))```

  - ### Output
    ['D', 'i', 's', 'h', 'a', 'n', 't'] <br>
    // <class 'list'>


- **str()**: used to convert integer into string

  - ```a = 1``` <br>
    ```b = 2.0``` <br>
    ```print(str(a))``` <br>
    ```print(str(b))```

  - ### Output
    1 // <class 'str'> <br>
    2.0 // <class 'str'>  


- **complex(real, imag)**: convert an integer to complex number

  - ```c = complex(1,2)``` <br>
    ```print(c)```

  - ### Output
    (1+2j)  // <class 'complex'>

## Taking input from console and Typecasting 

```input()``` // <class 'str'> <br> 
```int(input())``` // <class 'int'> <br>
```float(input())``` // <class 'float'> <br>
```str(input())``` // <class 'str'>