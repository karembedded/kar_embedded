```python
# Note
Creat a file with extension .py to run code snippets
And to compile a python file, move to the directory which contains the python file and write python "file_name.py" 
```
## Python Keywords and Identifiers
Python Keywords
* These keywords are the reserved words in Python.
* We cannot use a keyword as a variable name, function name or any other identifier. They are used to define the syntax and structure of the Python language.
* In Python, keywords are case sensitive.
```python 
False , class ,	finally, is , return , None, continue, for ,lambda , try , True , def , from , nonlocal , while , and , del ,global , not , with , as , elif , if , or , yield , assert ,else  , import , pass , break , except , in , raise.
```
### Python Identifiers
An identifier is a name given to entities like class, functions, variables, etc. It helps to differentiate one entity from another.

### Rules for writing identifiers
* Identifiers can be a combination of letters in lowercase (a to z) or uppercase (A to Z) or digits (0 to 9) or an underscore _. Names like myClass, var_1 and print_this_to_screen, all are valid example.
* An identifier cannot start with a digit. 1variable is invalid, but variable1 is perfectly fine.
* Keywords cannot be used as identifiers
* We cannot use special symbols like !, @, #, $, % etc. in our identifier
* Identifier can be of any length.


## Python Variables, Constants and Literals
### * Python Variables
A variable is a named location used to store data in the memory. It is helpful to think of variables as a container that holds data which can be changed later throughout programming.
```python
# Example:

website = "ngxtechnologies.com"
print(website)
```
### * Constants
A constant is a type of variable whose value cannot be changed. It is helpful to think of constants as containers that hold information which cannot be changed later.
```python
# Example:
# Create a constant.py
PI = 3.14
GRAVITY = 9.8

import constant
PI = 3.14
GRAVITY = 9.8
print(constant.PI)         # output 3.14
print(constant.GRAVITY)    # output 9.8
```
### Rules and Naming Convention for Variables and constants
Constant and variable names should have a combination of letters in lowercase (a to z) or uppercase (A to Z) or digits (0 to 9) or an underscore (_).
For example:
* snake_case
* MACRO_CASE
* camelCase
* CapWords
* Create a name that makes sense.
```python
# Example, vowel makes more sense than v.
 ```
* If you want to create a variable name having two words, use underscore to separate them.
```python
# Example:
my_name
current_salary
```

* Use capital letters possible to declare a constant.
 ```python 
# Example:
PI
MASS
SPEED_OF_LIGHT
TEMP
```
* Never use special symbols like !, @, #, $, %, etc.
* Don't start a variable name with a digit.

## * Literals
Literal is a raw data given in a variable or constant. In Python,there are various types of literals they are as follows:

* Numeric Literals

Numeric Literals are immutable (unchangeable). Numeric literals can belong to 3 different numerical types Integer, Float, and Complex.
```python 
# Example:
a = 0b1010 #Binary Literals
b = 100 #Decimal Literal 
c = 0o310 #Octal Literal
d = 0x12c #Hexadecimal Literal

#Float Literal
float_1 = 10.5 
float_2 = 1.5e2

#Complex Literal 
x = 3.14j

print(a, b, c, d)    # output 10 100 200 300
print(float_1, float_2)  # output 10.5 150.0
print(x, x.imag, x.real)  # output 3.14j 3.14 0.0
```
* String literals

A string literal is a sequence of characters surrounded by quotes. We can use both single, double or triple quotes for a string. And, a character literal is a single character surrounded by single or double quotes.
```python 
# Example

strings = "This is Python"
char = "C"
multiline_str = """This is a multiline string with more than one line code."""
unicode = u"\u00dcnic\u00f6de"
  
print(strings)     # output This is Python
print(char)        # output C
print(multiline_str)  # output This is a multiline string with more than one line code.
print(unicode)  # output Ünicöde
```
### * Boolean literals
A Boolean literal can have any of the two values: True or False.
```python 
# Example:
x = (1 == True)
y = (1 == False)
a = True + 4
b = False + 10

print("x is", x)    # output: x is True
print("y is", y)    # output: y is False
print("a:", a)      # output: a: 5
print("b:", b)      # output: b: 10
```
### * Special literals
Python contains one special literal i.e. None. We use it to specify to that field that is not created.
```python
# Example:

drink = "Available"
food = None

def menu(x):
    if x == drink:
        print(drink)
    else:
        print(food)

menu(drink)     # output: Available
menu(food)      # output: None
```

## Data Types in Python
## * Strings
A string is a series of characters, surrounded by single or double quotes.
```python
# This program prints Hello, world!

print('Hello, world!') # output: Hello, world!
```
```python
# Hello world with a variable 
``
msg = "Hello world!" 
print(msg) # output: Hello, world!

```
```python
# String concatenation

first_name = "NGX"
last_name = "Technologies"
full_name = first_name + ' ' + last_name
print(full_name)  #output: NGX Technologies

```

## * Lists 
A list stores a series of items in a particular order. You access items using an index, or within a loop.
```python
# Make a list

bikes = ['trek', 'redline', 'giant']
```
```python
# Get the first item in a list

first_bike = bikes[0]
print(first_bike)   #output: trek
```
```python
# Get the last item in a list

last_bike = bikes[-1]
print(last_bike)  #output: giant
```
```python
# Convert string uppercase

phrase = "ngxTechnologies"
print(phrase.upper())       #output: NGXTECHNOLOGIES
```
```python
# Capitalize string

phrase = "ngxTechnologies"
print(phrase.capitalize())  #output Ngxtechnologies 
```
```python
# To find length of the given string
phrase = "ngx Technologies"
print(len(phrase))    #output: 16
```
```python
# To get index of the string

phrase = "ngx Technologies"
print(phrase[0])   #output: n
```
```python
# To replace a word in a sentence

phrase = "Ngx Technologies Hubli"
print(phrase.replace("Hubli" , "Banglore")) #output: Ngx Technologies Banglore
```
```python
# Append new item to list

friends = ["Nikhil" , "kalpesh" , "Ranjita"]
friends.append("Sachin")
print(friends)   #output: ['Nikhil', 'kalpesh', 'Ranjita', 'Sachin']
```
```python
# Insert new item to the list

friends = ["Nikhil" , "kalpesh" , "Ranjita"]
friends.insert(0 , "Javeed")
print(friends)   #output: ['Javeed', 'Nikhil', 'kalpesh', 'Ranjita']
```
```python
# To clear the list

friends = ["Nikhil" , "kalpesh" , "Ranjita"]
friends.clear()
print(friends)   #output: []
```
```python
# To sort the list

friends = ["Nikhil" , "Kalpesh" , "Ranjita"]
friends.sort()
print(friends)  #output: ['Kalpesh', 'Nikhil', 'Ranjita']

```
```python
# Create list from string

vowel_string = 'aeiou'
print(list(vowel_string)) #output: ['a', 'e', 'i', 'o', 'u']
```
```python
# Create list from tuple

vowel_tuple = ('a', 'e', 'i', 'o', 'u')
print(list(vowel_tuple))  #output: ['a', 'e', 'i', 'o', 'u']
```
```python
# Count the number of similar items in the list

friends = ["Nikhil" , "Kalpesh" , "Ranjita"]
print(friends.count("Ranjita"))   #output: 1

```
```python
# Remove last item of the list

friends = ["Nikhil" , "Kalpesh" , "Ranjita"]
print(friends.pop())  #output: Ranjita
```
```python
# Delete item from the list

planets = ["pluto","mars","earth"]
del planets[0]
print(planets)  #output: ['mars', 'earth']
```
## *  Sets
Set is an unordered collection of unique items. Set is defined by values separated by comma inside braces { }. Items in a set are not ordered
```python
# Create a set

Num_set = {5,2,3,1,4}
```
```python
# Data type of a set variable 

Num_set = {5,2,3,1,4}
print(type(Num_set))    #output: <class 'set'>
```
```python
# set do not have duplicates

my_set = {1,2,3,4,3,2}
print(my_set)   #output: {1, 2, 3, 4}
```
```python
# Create set from a list

my_set = set([1,2,3,2])
print(my_set)   #output: {1, 2, 3}
```
```python

# Add item to set

my_set = {1,2,3,4}
my_set.add(6)
print(my_set)   #output: {1, 2, 3, 4, 6}
```
```python
# Add multiple items to set 

my_set = {1,2,3,4}
my_set.update([7,8,9])
print(my_set)   #output: {1, 2, 3, 4, 7, 8, 9}
```

```python
# add list and set

my_set = {1,2,3,4}
my_set.update([11], {7,8})
print(my_set)  #output: {1, 2, 3, 4, 7, 8, 11}
```
```python
# Remove an element from set

my_set = {1,2,3,4}
my_set.remove(6)
print(my_set)   #output: KeyError: 6
```
```python
# Using built-in function set, create a set

my_set = set("HelloWorld")
print(my_set)  #output: {'W', 'l', 'o', 'r', 'e', 'H', 'd'}
```
```python
# Test if an item exists in a set or not

my_set = set("apple")
print('a' in my_set)  #output; True
```
```python 
# Iterating Through a Set
for letter in set("apple"):
    print(letter)  
#output: 
p
a
l
e
```
## * Tuple 
* Tuples are similar to lists, but the items in a tuple can't be modified.

* To access values in tuple, use the square brackets for slicing along with the index or indices to obtain value available at that index.
```python
# create  a tuple 

dimensions = (1920, 1080)
print(dimensions)    #output: (1920, 1080)
```

```python
# Accessing Values in Tuples

tup1 = ('physics', 'chemistry', 1997, 2000)
tup2 = (1, 2, 3, 4, 5, 6, 7 )
print ("tup1[0]: ", tup1[0])    #output: tup1[0]:  physics
print ("tup2[1:5]: ", tup2[1:5])   #output: tup2[1:5]:  (2, 3, 4, 5)
```
```python
# To find length of tuple

print (len((1, 2, 3)))  #output: 3
```
```python
# To concatenate two tuples

print((1, 2, 3) + (4, 5, 6))  #output: (1, 2, 3, 4, 5, 6)
```
```python 
# To repeat tuples

print(('Hi!',) * 4)    #output: ('Hi!', 'Hi!', 'Hi!', 'Hi!')
```
```python
# Deleting tuple

tup = ('physics', 'chemistry', 1997, 2000);
print(tup)              #output: ('physics', 'chemistry', 1997, 2000)
del tup
print ("After deleting tup : ")     
print (tup)           #output: After deleting tup :
```
## Dictionary
Dictionary in Python is an unordered collection of data values, used to store data values like a map, which unlike other Data Types that hold only single value as an element, Dictionary holds key:value pair.
```python
# empty dictionary

my_dict = {}
```
```python
# dictionary with integer keys

my_dict = {1: 'apple', 2: 'ball'}
```
```python
# Access elements from a dictionary

my_dict = {'name':'Jack', 'age': 26}
print(my_dict['name'])    #output: Jack
```
```python
# Change or add elements in a dictionary

my_dict = {'name':'Jack', 'age': 26}
# update value
my_dict['age'] = 27
print(my_dict)    #output: {'name': 'Jack', 'age': 27}
```
```python
# Delete or remove elements from a dictionary

squares = {1:1, 2:4, 3:9, 4:16, 5:25}  
# remove a particular item
print(squares.pop(4))  
print(squares)        #output: {1: 1, 2: 4, 3: 9, 5: 25}
```
```python
# Pop an element from the dictionary

sales = { 'apple': 2, 'orange': 3, 'grapes': 4 }
element = sales.pop('apple')
print('The popped element is:', element)  #output: The popped element is: 2
print('The dictionary is:', sales)    #output: The dictionary is: {'orange': 3, 'grapes': 4}
```
```python
# Update dictionary
d = {1: "one", 2: "three"}
d1 = {2: "two"}
# updates the value of key 2
d.update(d1)
print(d)      #output: {1: 'one', 2: 'two'}
d1 = {3: "three"}
# adds element with key 3
d.update(d1)
print(d)    #output: {1: 'one', 2: 'two', 3: 'three'}
```
```python
# Get value from dictionary

person = {'name': 'Phill', 'age': 22}
print('Name: ', person.get('name'))   #output: Name:  Phill
print('Age: ', person.get('age'))     #output: Age:  22
```
```python
# Get all the keys of dictionary

person = {'name': 'Phill', 'age': 22, 'salary': 3500.0}
print(person.keys())   #output: dict_keys(['name', 'age', 'salary'])
```
```python
# Get all the items of dictionary
s
sales = { 'apple': 2, 'orange': 3, 'grapes': 4 }
print(sales.items())  #output: dict_items([('apple', 2), ('orange', 3), ('grapes', 4)])
``` 
## * Number
Python supports integers, floating point numbers and complex numbers. They are defined as int, float and complex class in Python.
```python
# Type of Number
a=5
print(type(a))   #output: <class 'int'>
print(type(5.0))  #output: <class 'float'>
c = 5 + 3j
print(c + 3)   #output: (8+3j)
```
```Python
# Import Decimal module 
Because ((1.1 + 2.2) != 3.3)
print((1.1 + 2.2) == 3.3)
# Output = Flase
So we have to use Decimal Module to overcome this issue
import decimal
print(0.1)     # Output: 0.1
print(decimal.Decimal(0.1))  # Output: Decimal('0.1000000000000000055511151231257827021181583404541015625')
```
# Python Operators
Operators are special symbols in Python that carry out arithmetic or logical computation. The value that the operator operates on is called the operand.
## * Arithmetic operators
* "+"	Add two operands or unary plus	x + y
* "-"	Subtract right operand from the left or unary minus	x - y
* "*"	Multiply two operands	x * y
* "/"	Divide left operand by the right one (always results into float)	x / y
* "%"	Modulus - remainder of the division of left operand by the right	x % y (remainder of x/y)
* "//"	Floor division - division that results into whole number adjusted to the left in the number line	x // y
* **	Exponent - left operand raised to the power of right	x**y (x to the power y)

```Python
# Example:
x = 15
y = 4
print('x + y =',x+y)     # Output: x + y = 19
print('x - y =',x-y)     # Output: x - y = 11
print('x * y =',x*y)     # Output: x * y = 60
print('x / y =',x/y)     # Output: x / y = 3.75
print('x // y =',x//y)   # Output: x // y = 3
print('x ** y =',x**y)   # Output: x ** y = 50625
```
## * Comparison operators

Comparison operators are used to compare values. It either returns True or False according to the condition.

* ">"	Greater than - True if left operand is greater than the right.
* "<"	Less than - True if left operand is less than the right.	
* "=="	Equal to - True if both operands are equal.
* "!="	Not equal to - True if operands are not equal.
* ">="	Greater than or equal to - True if left operand is greater than or equal to the right.
* "<="	Less than or equal to - True if left operand is less than or equal to the right.
```python
# Example:
x = 10
y = 12
print('x > y  is',x>y)      # Output: x > y is False
print('x < y  is',x<y)      # Output: x < y is True
print('x == y is',x==y)     # Output: x == y is False
print('x != y is',x!=y)     # Output: x != y is True
print('x >= y is',x>=y)     # Output: x >= y is False
print('x <= y is',x<=y)     # Output: x <= y is True
```
## *Logical operators
Logical operators are the and, or, not operators.

* and	True, if both the operands are true.
* or	True, if either of the operands is true.
* not	True, if operand is false (complements the operand).
```python
# Example:
x = True
y = False
print('x and y is',x and y)   # Output: x and y is False
print('x or y is',x or y)     # Output: x or y is True
print('not x is',not x)       # Output: not x is False
```
## *Bitwise operators
Bitwise operators act on operands as if they were string of binary digits. It operates bit by bit, hence the name.

* "&"	Bitwise AND	
* "|"   Bitwise OR 
* "~"	Bitwise NOT	
* "^"	Bitwise XOR	
* ">>"	Bitwise right shift	
* "<<"	Bitwise left shift	
```python
# Example:
x = 10
y = 4
print('x & y  is',x&y)      # Output: x& y = 0 (0000 0000)
print('x | y  is',x|y)      # Output: x | y = 14 (0000 1110)
print('~x is',~x)           # Output: ~x = -11 (1111 0101)
print('x ^ y is',x^y)      # Output: x ^ y = 14 (0000 1110)
print('x >> y is',x>>2)     # Output: x>> 2 = 2 (0000 0010)
print('x << y is',x<<2)     # Output: x<< 2 = 40 (0010 1000)
```
## Special operators
Python language offers some special type of operators like the identity operator or the membership operator.
## * Identity operators
is and is not are the identity operators in Python. They are used to check if two values (or variables) are located on the same part of the memory.

* is,	True, if the operands are identical (refer to the same object).
* is not,  True, if the operands are not identical (do not refer to the same object)
```python
# Example:
x1 = 5
y1 = 5
x2 = 'Hello'
y2 = 'Hello'
x3 = [1,2,3]
y3 = [1,2,3]
print(x1 is not y1)     # Output: False
print(x2 is y2)         # Output: True
print(x3 is y3)         # Output: False
```
## * Membership operators
in and not in are the membership operators in Python. They are used to test whether a value or variable is found in a sequence (string, list, tuple, set and dictionary).

* in	True, if value/variable is found in the sequence.
* not in True, if value/variable is not found in the sequence.
```python
# Example:
x = 'Hello world'
y = {1:'a',2:'b'}
print('H' in x)             # Output: True
print('hello' not in x)     # Output: True
print(1 in y)               # Output: True
print('a' in y)             # Output: False
```
# Python Input, Output and Import
Python provides numerous built-in functions that are readily available to us at the Python prompt.
```python
# Python Output Using print() function
print(1,2,3,4)
# Output: 1 2 3 4

print(1,2,3,4,sep='*')
# Output: 1*2*3*4

print(1,2,3,4,sep='#',end='&')
# Output: 1#2#3#4&
```
## Output formatting
```python
# Example:
print('I love {0} and {1}'.format('bread','butter'))
# Output: I love bread and butter

print('I love {1} and {0}'.format('bread','butter'))
# Output: I love butter and bread
```
## Python Input
Up till now, our programs were static. The value of variables were defined or hard coded into the source code.
```python
# The syntax for input() is

input([prompt])
```
```python
# Example:
num = input('Enter a number: ')
```
## Python Import
When our program grows bigger, it is a good idea to break it into different modules.

A module is a file containing Python definitions and statements. Python modules have a filename and end with the extension .py.

Definitions inside a module can be imported to another module or the interactive interpreter in Python. We use the import keyword to do this.
```python
# Example:
import math  
print(math.pi)   #output: 3.141592653589793
```
```python
# Python Fractions

import fractions
print(fractions.Fraction(1.5))  # Output: 3/2
print(fractions.Fraction(5))    # Output: 5
print(fractions.Fraction(1,3))  # Output: 1/3
```
```python
# Math module

import math
print(math.factorial(6))     # Output: 720
print(math.log10(1000))      # Output: 3.0
print(math.pi)               # Output: 3.141592653589793
```
```python
# Random module

import random
print(random.randrange(10,20))    # Output: 16

x = ['a', 'b', 'c', 'd', 'e']
print(random.choice(x))           # Get random choice
random.shuffle(x) 
print(x)                         # Print the shuffled x
print(random.random())           # Print random element
```
# Python Control Flow
Decision making is required when we want to execute a code only if a certain condition is satisfied.
```python
# Python if Statement Syntax

if test expression:
    statement(s)
```
```python
# Example:
num = 3
if num > 0:
    print(num, "is a positive number.")  #output: 3 is a positive number.
```
```python
# Python if...else Statement syntax
if test expression:
    Body of if
else:
    Body of else
```
```python 
# Example:
num = 3
if num >= 0:
    print("Positive or Zero")
else:
    print("Negative number")
#output: Positive or Zero
```
```python
# Python if...elif...else Statement syntax
if test expression:
    Body of if
elif test expression:
    Body of elif
else: 
    Body of else
```
```python
# Example:
# In this program, 
# we check if the number is positive or
# negative or zero and 
# display an appropriate message
num = 3.4
if num > 0:
    print("Positive number")
elif num == 0:
    print("Zero")
else:
    print("Negative number")

#output: Positive number
```
```python 
# Nested if statements 
# Example:

num = float(input("Enter a number: "))
if num >= 0:
    if num == 0:
        print("Zero")
    else:
        print("Positive number")
else:
    print("Negative number")
#output:
# Enter a number: 5
# Positive number
```
## For Loop in Python
The for loop in Python is used to iterate over a sequence (list, tuple, string) or other iterable objects.
```python 
# Syntax of for Loop
for val in sequence:
	Body of for
```
```python
# Example:
# Program to find the sum of all numbers stored in a list

numbers = [6, 5, 3, 8, 4, 2, 5, 4, 11]    # List of numbers
sum = 0                               # variable to store the sum
for val in numbers:                     # iterate over the list
	sum = sum+val
print("The sum is", sum)
```
## range() function in python
```python
# Output: range(0, 10)
print(range(10))

# Output: [0, 1, 2, 3, 4, 5, 6, 7, 8, 9]
print(list(range(10)))

# Output: [2, 3, 4, 5, 6, 7]
print(list(range(2, 8)))

# Output: [2, 5, 8, 11, 14, 17]
print(list(range(2, 20, 3)))
```
```python
# Example : 1 line program to get a odd numbers in a given range

print(list(range(1,10,2)))
```
## While loop in python
The while loop in Python is used to iterate over a block of code as long as the test expression (condition) is true
```python
# Syntax of while Loop in Python

while test_expression:
    Body of while
```
```python
# Program to add natural numbers upto sum = 1+2+3+...+n
n = 10
# initialize sum and counter
sum = 0
i = 1
while i <= n:
    sum = sum + i
    i = i+1                   # update counter
print("The sum is", sum)      # print the sum
#output: The sum is 55
```
## Python break statement
The break statement terminates the loop containing it. Control of the program flows to the statement immediately after the body of the loop.
```python
# Syntax of break
break
```
```python 
# Example:
for val in "string":
    if val == "i":
        break
    print(val)
#output:
s
t
r
```
## Python continue statement
The continue statement is used to skip the rest of the code inside a loop for the current iteration only. Loop does not terminate but continues on with the next iteration
```python
# Syntax of continue
continue
```
```python
# Example 
# Program to show the use of continue statement inside loops

for val in "string":
    if val == "i":
        continue
    print(val)
#output
s
t
r
n
g
```
## Pass statement in Python
```python
# Syntax of pass
pass
```
```python
# Example:
sequence = {'p', 'a', 's', 's'}
for val in sequence:
    pass
```
## Get User Input
Programs can prompt the user for input. All input is stored as a string.
```python 
# Prompting for a value
name = input("What's your name? ") 
print("Hello, " + name + "!") 
#output: 
#What's your name? Ranjita
#Hello, Ranjita!

# Prompting for numerical input 
age = input("How old are you? ") 
age = int(age) 
#output: How old are you? 16
```
## Python Type conversion
The process of converting the value of one data type (integer, string, float, etc.) to another data type is called type conversion. Python has two types of type conversion.

* Implicit Type Conversion
* Explicit Type Conversion
### Implicit Type Conversion
In Implicit type conversion, Python automatically converts one data type to another data type. This process doesn't need any user involvement.
```python
# Example:
num_int = 123
num_flo = 1.23

num_new = num_int + num_flo

print("datatype of num_int:",type(num_int))  #output: datatype of num_int: <class 'int'>
print("datatype of num_flo:",type(num_flo))  #output: datatype of num_flo: <class 'float'>

print("Value of num_new:",num_new) #output: Value of num_new: 124.23
print("datatype of num_new:",type(num_new)) #output: datatype of num_new: <class 'float'>
```
### Explicit Type Conversion:
In Explicit Type Conversion, users convert the data type of an object to required data type. We use the predefined functions like int(), float(), str(), etc to perform explicit type conversion.
```python
# Syntax :
(required_datatype)(expression)
```
```python 
# Example

num_int = 123
num_str = "456"

print("Data type of num_int:",type(num_int))  #output: Data type of num_int: <class 'int'>
print("Data type of num_str before Type Casting:",type(num_str)) #output: Data type of num_str before Type Casting: <class 'str'>

num_str = int(num_str)
print("Data type of num_str after Type Casting:",type(num_str)) #output: Data type of num_str after Type Casting: <class 'int'>
num_sum = num_int + num_str

print("Sum of num_int and num_str:",num_sum) #output: Sum of num_int and num_str: 579
print("Data type of the sum:",type(num_sum)) #output: Data type of the sum: <class 'int'>
```
# Python functions
In Python, function is a group of related statements that perform a specific task.
Functions help break our program into smaller and modular chunks. As our program grows larger and larger, functions make it more organized and manageable.
It avoids repetition and makes code reusable.
```python
# Syntax of Function

def function_name(parameters):
	"""docstring"""          #to describe what the function does.
	statement(s)
```
``` python
# Example:
def greet(name):
	"""This function greets to
	the person passed in as
	parameter"""
	print("Hello, " + name + ". Good morning!")

greet('Paul')
#output: Hello, Paul. Good morning!
```
### The return statement in python
The return statement is used to exit a function and go back to the place from where it was called.
```python
# Syantax of ruturn
return [expression_list]
```
```python
# Example:

def absolute_value(num):
	"""This function returns the absolute
	value of the entered number"""

	if num >= 0:
		return num
	else:
		return -num

# Output: 2
print(absolute_value(2))

# Output: 4
print(absolute_value(-4))
```
### Python Arbitrary Arguments
Sometimes, we do not know in advance the number of arguments that will be passed into a function.Python allows us to handle this kind of situation through function calls with arbitrary number of arguments.

In the function definition we use an asterisk (*) before the parameter name to denote this kind of argument.
```python 
# Example:

def greet(*names):
   """This function greets all
   the person in the names tuple."""

   # names is a tuple with arguments
   for name in names:
       print("Hello",name)

greet("Monica","Luke","Steve","John")
#output:
#Hello Monica
#Hello Luke
#Hello Steve
#Hello John
```
### Lambda functions in Python
In Python, anonymous function is a function that is defined without a name.
While normal functions are defined using the def keyword, in Python anonymous functions are defined using the lambda keyword.
```python
# Syntax of Lambda Function in python

lambda arguments: expression
```
```python
# Example:
# Program to show the use of lambda functions

double = lambda x: x * 2

# Output: 10
print(double(5))
#output: 10
```
### Global Variables
In Python, a variable declared outside of the function or in global scope is known as global variable. This means, global variable can be accessed inside or outside of the function.
```python
# Example:
x = "global"

def func():
    print("x inside :", x)

func()
print("x outside:", x)

#output: 
# x inside : global
# x outside: global
```
### Local Variables
A variable declared inside the function's body or in the local scope is known as local variable.
```python
# Example:

def foo():
    y = "local"
    print(y)

foo()
#output: local
```
### Nonlocal Variables
Nonlocal variable are used in nested function whose local scope is not defined. This means, the variable can be neither in the local nor the global scope.
```python 
# Example:

def outer():
    x = "local"
    
    def inner():
        nonlocal x
        x = "nonlocal"
        print("inner:", x)
    
    inner()
    print("outer:", x)

outer()
#output:
#inner: nonlocal
#outer: nonlocal
```
## Python Modules
Modules refer to a file containing Python statements and definitions.

A file containing Python code, for e.g.: example.py, is called a module and its module name would be example.

We use modules to break down large programs into small manageable and organized files. Furthermore, modules provide reusability of code.

We can define our most used functions in a module and import it,instead of copying their definitions into different programs.

### How to import modules in Python?
We can import the definitions inside a module to another module or the interactive interpreter in Python.

We use the import keyword to do this.
```python
# Syntax to import modules
import module_name
```
### Import with renaming
We can import a module by renaming it as follows.
```python
# Example:
import math as m
print("The value of pi is", m.pi)
#output: The value of pi is 3.141592653589793
```
### Python from...import statement
We can import specific names from a module without importing the module as a whole. Here is an example.
```python
# Example:

from math import pi
print("The value of pi is", pi)
#output: The value of pi is 3.141592653589793
```
### Import all names
We can import all names(definitions) from a module using the following construct.
```python
# Example:
# import all names from the standard module math

from math import *
print("The value of pi is", pi)
#output: The value of pi is 3.141592653589793
```
## Python File I/O
File is a named location on disk to store related information. It is used to permanently store data in a non-volatile memory (e.g. hard disk).
## Python file modes
* 'r'	Open a file for reading. (default)
* 'w'	Open a file for writing. Creates a new file if it does not exist or truncates the file if it exists.
* 'a'	Open for appending at the end of the file without truncating it. Creates a new file if it does not exist.
* 't'	Open in text mode. (default)
* 'b'	Open in binary mode.
* '+'	Open a file for updating (reading and writing)

## How to open a file?
Python has a built-in function open() to open a file. This function returns a file object, also called a handle, as it is used to read or modify the file accordingly.
```python
# Syntax to open a file

f = open("test.txt")    # open file in current directory
f = open("C:/Python33/README.txt")  # specifying full path
```
## How to close a file Using Python?
When we are done with operations to the file, we need to properly close the file.

Closing a file will free up the resources that were tied with the file and is done using Python close() method.
```python
# Syntax to close a file

f = open("test.txt",encoding = 'utf-8')
# perform file operations
f.close()
```
## How to write to File Using Python?
In order to write into a file in Python, we need to open it in write 'w', append 'a' or exclusive creation 'x' mode.

We need to be careful with the 'w' mode as it will overwrite into the file if it already exists. All previous data are erased.

Writing a string or sequence of bytes (for binary files) is done using write() method. This method returns the number of characters written to the file.
```python
# Syntax to write to a file

with open("test.txt",'w',encoding = 'utf-8') as f:
   f.write("my first file\n")
   f.write("This file\n\n")
   f.write("contains three lines\n")
```
## How to read files in Python?
To read a file in Python, we must open the file in reading mode.

There are various methods available for this purpose. We can use the read(size) method to read in size number of data. If size parameter is not specified, it reads and returns up to the end of the file.
```python
# Syntax to read file

f = open("test.txt",'r',encoding = 'utf-8')
print(f.read(4))    # read the first 4 data
print(f.read())     # read in the rest till end of file
```
## Get the current file position
```python
# To get the current file position
print(f.tell())    # get the current file position
```
## Bring file cursor to initial position
```python
# Bring file cursor to initial position
f.seek(0)   # bring file cursor to initial position
``` 
## Python Directory and Files Management
A directory or folder is a collection of files and sub directories. Python has the os module, which provides us with many useful methods to work with directories (and files as well).
### Get Current Directory
```python
# Get current directory
import os
print(os.getcwd())
print(os.getcwdb())
```
### Changing Directory
```python
#  Changing Directory
import os
os.chdir('C:\Ac6')
print(os.getcwd())
```
### List Directories and Files
All files and sub directories inside a directory can be known using the listdir() method.
```python
# List Directories and Files
import os
os.chdir('C:')
print(os.getcwd())
print(os.listdir())
```
### Making a New Directory
We can make a new directory using the mkdir() method.

This method takes in the path of the new directory. If the full path is not specified, the new directory is created in the current working directory.
```python
# Create a new directory
import os
os.mkdir('test')
os.listdir()
print(os.listdir())
```
### Renaming a Directory or a File
The rename() method can rename a directory or a file.

The first argument is the old name and the new name must be supplies as the second argument.
```python
# Renaming a Directory or a File.
import os
os.listdir()
os.rename('test','new_one') # 1st argument is file to be renamed and 2nd argument is new file name 
print(os.listdir())
```
### Removing Directory or File
A file can be removed (deleted) using the remove() method.

Similarly, the rmdir() method removes an empty directory.
```python
# Removing Directory or File
import os
os.listdir()
os.remove('new_one1')
os.listdir()
os.rmdir('new_one1`')
os.listdir()
```
## Python Exception Handling - Try, Except and Finally
In Python, exceptions can be handled using a try statement.

A critical operation which can raise exception is placed inside the try clause and the code that handles exception is written in except clause.
```python 
# Example:
# import module sys to get the type of exception
import sys
randomList = ['a', 0, 2]

for entry in randomList:
    try:
        print("The entry is", entry)
        r = 1/int(entry)
        break
    except:
        print("Oops!",sys.exc_info()[0],"occured.")
        print("Next entry.")
        print()
print("The reciprocal of",entry,"is",r)
#output:
#The entry is a
#Oops! <class 'ValueError'> occured.
#Next entry.

#The entry is 0
#Oops! <class 'ZeroDivisionError'> occured.
#Next entry.

#The entry is 2
#The reciprocal of 2 is 0.5
```
## Introduction to OOPs in Python
One of the popular approach to solve a programming problem is by creating objects. This is known as Object-Oriented Programming (OOP).
An object has two characteristics:
* Attributes
* Behavior
### Python Classes/Objects
Python is an object oriented programming language.
Almost everything in Python is an object, with its properties and methods.
A Class is like an object constructor, or a "blueprint" for creating objects.
```python
# Create a Class
# To create a class, use the keyword class:

# Example
# Create a class named MyClass, with a property named x:

class MyClass:
  Class_strenght = 50
```

### Create Object
Now we can use the class named myClass to create objects:
```python
# Example
# Create an object named p1, and print the value of x:

p1 = MyClass()
print(p1.Class_strenght)
#output: 50
```
## The \_\_init__() Function
To understand the meaning of classes we have to understand the built-in \_\_init__() function.
All classes have a function called \_\_init__(), which is always executed when the class is being initiated.
Use the \_\_init__() function to assign values to object properties, or other operations that are necessary to do when the object is being created.
```python
# Example:

class Person:
  def __init__(self, name, age):
    self.name = name
    self.age = age

p1 = Person("John", 36)

print(p1.name)   #output: John
print(p1.age)    #output: 36
```
### The self Parameter
The self parameter is a reference to the current instance of the class, and is used to access variables that belongs to the class.

It does not have to be named self , you can call it whatever you like, but it has to be the first parameter of any function in the class.

```python
# Example:
# Creating Class and Object in Python

class Parrot:

    # class attribute
    species = "bird"

    # instance attribute
    def __init__(self, name, age):
        self.name = name
        self.age = age

# instantiate the Parrot class
Humming = Parrot("Humming", 10)
Peocock = Parrot("Peocock", 15)

# access the class attributes
print("Humming is a {}".format(Humming.__class__.species)) 
print("Peocock is also a {}".format(Peocock.__class__.species))

# access the instance attributes
print("{} is {} years old".format( Humming.name, Humming.age))
print("{} is {} years old".format( Peocock.name, Peocock.age))

#putput:
# Humming is a bird
# Peocock is also a bird
# Humming is 10 years old
# Peocock is 15 years old
# Note:
we create instances of the Parrot class. Here, blu and woo are references (value) to our new objects.

Then, we access the class attribute using __class __.species. Class attributes are same for all instances of a class. Similarly, we access the instance attributes using blu.name and blu.age. However, instance attributes are different for every instance of a class.
```

## Creating Methods in Python
```python
# Example:

class Parrot:
    
    # instance attributes
    def __init__(self, name, age):
        self.name = name
        self.age = age
    
    # instance method
    def sing(self, song):
        return "{} sings {}".format(self.name, song)

    def dance(self):
        return "{} is now dancing".format(self.name)

# instantiate the object
Humming = Parrot("Humming", 10)

# call our instance methods
print(Humming.sing("'Happy Birthday...!'"))
print(Humming.dance())
#output:
# Humming sings 'Happy Birthday...!'
# Humming is now dancing

# Note:
We define two methods i.e sing() and dance(). These are called instance method because they are called on an instance object i.e Humming.
```
## Inheritance
Inheritance is a way of creating new class for using details of existing class without modifying it. The newly formed class is a derived class (or child class). Similarly, the existing class is a base class (or parent class).

```python
# Use of Inheritance in Python
# parent class
class Bird:
    
    def __init__(self):
        print("Bird is ready")

    def whoisThis(self):
        print("Bird")

    def swim(self):
        print("Swim faster")

# child class
class Penguin(Bird):

    def __init__(self):
        # call super() function
        super().__init__()
        print("Penguin is ready")

    def whoisThis(self):
        print("Penguin")

    def run(self):
        print("Run faster")

peggy = Penguin()
peggy.whoisThis()
peggy.swim()
peggy.run()
#output:
# Bird is ready
# Penguin is ready
# Penguin
# Swim faster
# Run faster
```
## Encapsulation
Using OOP in Python, we can restrict access to methods and variables. This prevent data from direct modification which is called encapsulation. In Python, we denote private attribute using underscore as prefix i.e single “ _ “ or double “ __“.

```python
# Example: 
# Data Encapsulation in Python
class Computer:

    def __init__(self):
        self.__maxprice = 900

    def sell(self):
        print("Selling Price: {}".format(self.__maxprice))

    def setMaxPrice(self, price):
        self.__maxprice = price

c = Computer()
c.sell()

# change the price
c.__maxprice = 1000
c.sell()

# using setter function
c.setMaxPrice(1000)
c.sell()
#output:
# Selling Price: 900
# Selling Price: 900
# Selling Price: 1000
```
## Polymorphism
Polymorphism is an ability (in OOP) to use common interface for multiple form (data types).

Suppose, we need to color a shape, there are multiple shape option (rectangle, square, circle). However we could use same method to color any shape. This concept is called Polymorphism.
```python
# Example: 
# Using Polymorphism in Python
class Parrot:

    def fly(self):
        print("Parrot can fly")
    
    def swim(self):
        print("Parrot can't swim")

class Penguin:

    def fly(self):
        print("Penguin can't fly")
    
    def swim(self):
        print("Penguin can swim")

# common interface
def flying_test(bird):
    bird.fly()

#instantiate objects
blu = Parrot()
peggy = Penguin()

# passing the object
flying_test(blu)
flying_test(peggy)
#output:
# Parrot can fly
# Penguin can't fly
```
