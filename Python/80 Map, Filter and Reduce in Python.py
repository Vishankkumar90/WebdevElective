# In Python, the map, filter, and reduce functions are built-in functions that allow you to apply a function to 
# a sequence of elements and return a new sequence. These functions are known as higher-order functions, as they
# take other functions as arguments.

# MAP

# The map function applies a function to each element in a sequence and returns a new sequence containing 
# the transformed elements

a= [2,4,6,8,9] # it is a list and we want to cube root all the elements of the list 

def cube(x): # first we have to define a funtion ( we can also use lambda funtion to define)
    return x*x*x  

b= list(map(cube,a)) # we have used list data type to return the elements in list form AND we are mapping list a to cube function so we have to write those too
print(b)

# FILTER :

# The filter function filters a sequence of elements based on a given predicate (a function that returns a boolean value) 
# and returns a new sequence containing only the elements that meet the predicate.

# Example if we want to filter the elements which a greater than 4 in a list

b=[1,2,3,5,6,8,9]

def number (c):
    return c>4

g = list(filter(number, b))
print(g)


# The reduce function is a higher-order function that applies a function to a sequence and returns a 
# single value

# The function argument is a function that takes in two arguments and returns a single value. 
# The iterable argument is a sequence of elements, such as a list or tuple.

# The reduce function applies the function to the first two elements in the iterable and then applies the
# function to the result and the next element, and so on. The reduce function returns the final result.

from functools import reduce  # we need to import this funtion
# List of numbers
numbers = [1, 2, 3, 4, 5]  


# Calculate the sum of the numbers using the reduce function
sum = reduce(lambda x, y: x + y, numbers) 
# if we use multiply instead of plus in above statemet then the factorial of the last numbers  will be printed

# calculation method
# [1,2,3,4,5] #add fist two elements
# [3,3,4,5]
# [6,4,5]
# [10,15]
# [15]

# Print the sum
print(sum)

