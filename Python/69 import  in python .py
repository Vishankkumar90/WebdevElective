# Importing in Python is the process of loading code from a Python module into the current script. 
# This allows you to use the functions and variables defined in the module in your current script, 
# as well as any additional modules that the imported module may depend on.

import math
a=math.floor(4.232) # used to give floor value
print(a)

b= math.sqrt(9) # used to print square root
print(b)


# You can also import specific functions or variables from a module using the from keyword. For example
# , to import only the sqrt function from the math module, you would write:

from math import floor , sqrt # here we have imported only two functions from the modules
c= floor(3.3232) # now we dont need to write math. 
print(c)

d=sqrt(25)
print(d)

e=sqrt(9)*floor(7.9302) # we can even multiply functions
print(e)


# It's also possible to import all functions and variables from a module using the * wildcard. However, 
# this is generally not recommended as it can lead to confusion and make it harder to understand where 
# specific functions and variables are coming from.

from math import *
result = sqrt(9)
print(result)  # Output: 3.0
print(pi)  # Output: 3.141592653589793


# The "as" keyword
# Python also allows you to rename imported modules using the as keyword.
# This can be useful if you want to use a shorter or more descriptive name for a module, 
# or if you want to avoid naming conflicts with other modules or variables in your code.\

from math import sqrt as s # now we will be calling sqrt function as s in program
x=s(49) 
print(x)

import math as m    # we can even call math module as m
y= m.sqrt(25)
print(y)

# The dir function

# Python has a built-in function called dir that you can use to view the names of all the functions and 
# variables defined in a module. This can be helpful for exploring and understanding the contents of a new 
# module.
# This will output a list of all the names defined in the math module, including functions like sqrt and 
# pi, as well as other variables and constants.

import math
print(dir(math))
