# Dict
Dictionary in Python is an unordered collection of data values, used to store data values. Dictionary holds **key:value** pair.
Note - Keys in a dictionary doesn't allows Polymorphism.
>
    Dict = {} // empty dictionary
>
    Dict = {1: 'Dishant', 2: 'Sethi', 3: 'Blog'}   // with integers
>
    Dict = {'Name': 'Dishant', 1: [1, 2, 3, 4]}   // with mixed keys
>
    Dict = dict([(1, 'Geeks'), (2, 'For')])   // using dict()
>
    Dict = {1: 'abc', 2: 'def', 
        3:{'A' : 'Welcome', 'B' : 'To', 'C' : 'Portal'}}  // nested dictionary

### Adding elements to dictionary
>
    dictname[key] = value1, value2, ..

### Accessing elements from a Dictionary
>
    dictname.get(key)

### Removing Elements from Dictionary
>
    del dictname[key]
    del dictname[key][key]  // deleting a key from nested dictionary
    dictname.pop(key)
    dictname.clear()  // remove all the keys form dictionary
    del dictname  // delete entire dictionary

## Dictionary Methods

- clear(): The clear() method removes all items from the dictionary.
- dict1.update(dict2): This function is used to update the dictionary to add other dictionary keys.
- pop(): Removes and returns an element from a dictionary having the given key.
- popitem(): Removes the arbitrary key-value pair from the dictionary and returns it as tuple.
- get(): It is a conventional method to access a value for a key.
- dictname.values(): returns a list of all the values available in a given dictionary.
- str(): Produces a printable string representation of a dictionary.
- setdefault(): Set dict[key]=default if key is not already in dict.
- keys(): Returns list of dictionary dict’s keys
- items(): Returns a list of dict’s (key, value) tuple pairs
- has_key(): Returns true if key in dictionary dict, false otherwise
- type(): Returns the type of the passed variable.
- cmp(): Compares elements of both dict.