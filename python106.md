### How to write an empty function/loop
We use pass statement. pass is a special statement in Python that does nothing. It only works as a dummy statement.
>
    def bla():
        pass
    while(a>b):
        pass
    if(a == b):
        pass        

### The dir() function
The dir() built-in function returns a sorted list of strings containing the names defined by a module. The list contains the names of all the modules, variables and functions that are defined in a module.
>
    import math
    print(dir(math))

# Object Oriented Programming(Classes,object and members)

>
    class Test:           
        stream = "cse"    
        def __init__(self,name):
            self.name = name
        def func(self):   
            print(self.name)    
    obj = Test("Dishant") 
    obj.func()

- Self: Class methods must have an extra first parameter in method definition. Self represents the instance of the class. By using the “self” keyword we can access the attributes and methods of the class in python.

- \_\_init__: It make constructor of class. It is run as soon as an object of a class is instantiated. The method is useful to do any initialization you want to do with your object.

### Data Hiding

In Python, we use double underscore (Or __) before the attributes name and those attributes will not be directly visible outside.
>
    class MyClass:
        __hiddenvar = 10
    obj = MyClass()
    print(obj.__hiddenvar) // error, direct call not allowed
    print(obj._MyClass__hiddenvar) // 10

### Inheritance

One of the major advantages of Object Oriented Programming is re-use. Inheritance is one of the mechanisms to achieve the same. In inheritance, a class (usually called superclass) is inherited by another class (usually called subclass). The subclass adds some attributes to superclass.

>
    class Person:
        def __init__(self,name):
            self.name = name
        def isEmp(self):
            return False
    
    class Employee(Person):
        def isEmp(self):
            return True

    emp = Person("Dishant")
    print(emp.isEmp())   // False
    emp = Employee("Unknown")  
    print(emp.isEmp())   // True    

### How to check is a class is subclass of anothet class?

Python provides a function **issubclass()** that directly tells us if a class is subclass of another class.
>
    class Base:
        pass
    class Derived(Base):
        pass

    print(issubclass(Base,Dervied))  // False
    print(issubclass(Derived,Base))  // True

    b = Base()  // obj of Base class
    d = Derived()  // obj of Derived class

    print(isinstance(b,Derived))  // False
    print(isinstance(d,Base))     // True
    print(isinstance(d,Derived))  // True
    print(isinstance(b,Base))     // True

### Access Parent member in subclass

#### Using Base class name
>
    class Base(object):
        def __init__(self,x):
            self.x = x

    class Derived(Base):
        def __init__(self,x,y):
            self.y = y
            Base.x = x
        def printXY(self):
            print(Base.x , self.y) 

    d = Derived(10,20)
    d.printXY()

#### Using super()
>
    class Base:
        def __init__(self,x):
            self.x = x

    class Derived(Base):
        def __init__(self,x,y):
            self.y = y
            super(Derived,self).__init__(x)
        def printXY(self,x,y):
            print(self.x,self.y)
    
    d = Derived(10,20)
    d.printXY()

### Lambda function with filter,map,reduce

    g = lambda x: x*x*x
    print(g(2))  // 8

- Donot have to return
- Function without name(anonymus)

**filter()**: takes a function and a list as arguments.
>
    lst = [1,2,3,4,5,6,7,8,9,10]
    final_lst = list(filter(lambda x:(x%2==0),lst))
    print(final_lst)  // [2,4,6,8,10]

**map()**
**reduce()**