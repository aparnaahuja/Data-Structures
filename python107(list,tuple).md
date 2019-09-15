# Lists
A single list may contain DataTypes like Integers, Strings, as well as Objects. Lists are also very useful for implementing stacks and queues. Lists are mutable, and hence, they can be altered even after their creation.
>
    List = []  // empty list
    List = ['string', 12, 0.87, [1, 2, 3]]

### Adding elements to the list

- **List.append("value")**  add single element to the end of the list
- **List.insert(position,"value")** add single element at a particular position
- **List.extend([val1, val2,..])**  add multiple values at the end of the list

### Removing last element from the list

- **List.remove("value")** removed a single value from the list, gives an error if the passed value is not in the list
- **List.pop()** removes last element of the list
- **List.pop(index)** removes element from a particular index

**Note** - Remove method in List will only remove the first occurrence of the searched element.

## List methods:

- append(): add value to end of the list
- extend(): add multiple values to the end of the list
- insert(): add value at particular index
- remove(): Element to be deleted is mentioned using list name and element.
- pop(): pop last element or element at particular index from the list
- del(): Element to be deleted is mentioned using list name and index.
- clear(): remove all the elements from the list
- index(): returns index of first matched item
- count(): returns the count of number of items passed as an argument
- sort(): sort the list items in ascending order
- reverse(): reverse the order of items in list
- sum(): sums up the numbers in list
- cmp(lst1,lst2): returns 1 if first list1 is greater than second list (string is considered to be greater than integer)
- max(): return maximunu element of given list
- min(): return minimun element of given list
- all(): return True if all the elements are true
- any(): return True if any of the element is true
- len(): return length of list

#### "in" and "not in" operator
> 
    if value in List:
        execute statement
    if value not in List:
        execute this statement    

#### Union of two or more lists
>
    final_list = list1 + list2   [with repitition]
    final_list = sorted(list1 + list2)  [sorted, with repitition]
    final_list = list(set(list1) + set(list2))  [without repititiono]

#### Intersection of two or more lists
>
    final_list = list(set(lst1) & set(lst2))

### Lists as Stack and Queue

**Stack** works on the principle of "Last-in, first-out". To add an item to the top of the list, i.e., to push an item, we use append() function and to pop out an element we use pop() function.
**Queue** works on the principle of "First-in, first-out". We use deque property of collection module. .append() function to add at the end of queue and .popleft() function to pop from the front of the queue.

# Tuples

Tuple is a collection of Python objects much like a list. The sequence of values stored in a tuple can be of any type, and they are indexed by integers. The important difference between a list and a tuple is that tuples are immutable.
Tuples can contain any number of elements and of any datatype (like strings, integers, list, etc.).
>
    Tuple1 = ()  // empty tuple
>    
    list1 = [1, 2, 4, 5, 6]
    print(tuple(list1))  // converting list into a tuple
>
    Tuple1 = (5, 'Hey', 'Dishant')  // tuple with mixed data type
>
    Tuple1 = (0, 1, 2, 3)
    Tuple2 = ('python', 'geek')
    Tuple3 = (Tuple1, Tuple2)  // nested tuples

## Tuple methods

- all(): Returns true if all element are true or if tuple is empty
- any(): Return true if any element of the tuple is true. if tuple is empty, return false
- len(): Returns length of the tuple
- enumerate(): Returns enumerate object of tuple
- max(): Return maximum element of given tuple
- min(): Return minimum element of given tuple
- sum(): Sums up the numbers in the tuple
- sorted(): input elements in the tuple and return a new sorted list
- tuple(): Convert an iterable to a tuple.