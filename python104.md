# Loops in Python

## 1. While loop

- Used to execute a block of statements repeatedly until a given a condition is satisfied.

- When the condition becomes false, the line immediately after the loop in program is executed.
>
    count = 0
    while (count < 3):    
        count = count + 1
        print("Hello")

- ### Using else with while loop
 >
    while condition:
        # execute these statements
    else:
        # execute these statements

## 2. For loop

For loops are used for sequential traversal. For example: traversing a list or string or tuple etc.

- ### Iterate over a sequence
  ``` for i in list:``` <br>
  ``` for i in tuple:``` <br>
  ``` for i in set:```

- ### Iterate over a sequence by their index
  ``` li = list()``` <br>
  ```for i in range(len(li)):``` <br>
  ```print(li[i])```

- Using else with for loop
>
    for i in range()):
        # execute these statements
    else:
        # execute these statements  

## Loop control statements

  - Continue Statement:  It returns the control to the beginning of the loop.

  - Break Statement: It brings control out of the loop

  - Pass Statement: We use pass statement to write empty loops. Pass is also used for empty control statement, function and classes.


## Enumerate | built-in function

Enumerate is built-in python function that takes input as iterator, list etc and returns a tuple containing index and data at that index in the iterator sequence.
>
    car = ['A','B','C','D']
    for i in enumerate(car):
        print(i)
### Output
(0, 'A') <br>
(1, 'B') <br>
(2, 'C') <br>
(3, 'D')

## zip | built-in function

This function is helpful to combine similar type iterators(list-list or dict- dict etc,) data items at ith position. It uses the shortest length of these input iterators. Other items of larger length iterators are skipped. In case of empty iterators, it returns No output.

>
    cars = ["Aston", "Audi", "McLaren"]
    accessories = ["GPS", "Car Repair Kit","Dolby sound kit"]
    for c, a in zip(cars, accessories):
        print "Car: %s, Accessory required: %s"\%(c, a)

### Output

Car: Aston, Accessory required: GPS <br>
Car: Audi, Accessory required: Car Repair Kit <br>
Car: McLaren, Accessory required: Dolby sound kit

<br>

- The reverse of these iterators from zip function is known as unzipping using “*” operator.


## Imp Points

+ range() - This returns a list of numbers created using range() function.

+ xrange() returns - xrange() object.

+ The **==** operator compares the values of both the operands and checks for value equality. Whereas **is** operator checks whether both the operands refer to the same object or not.

  ```list1 = []``` <br>
  ```list2 = []``` <br>
  ```list3=list1``` <br>
  `list1 == list` is True as both list1 and list2 are empty lists.<br>
  `list1 is list2` is False because two empty lists are at different memory locations. Hence list1 and list2 refer to different objects.<br>
  `list1 is list3` is True as both list1 and list3 are pointing to the same object.