# Lambda functions are often used in situations where a small function is required for a short period of time.
# They are commonly used as arguments to higher-order functions, such as map, filter, and reduce

# lambda function are used whwn we want to write in function in one line

# there are two ways to write function :

# NORMAL METHOD :

def a (x):
 return x*2

print(a(5))

#   OR

# BY LAMBDA FUNCTION

b= lambda y: y*2
 
print(b(8))

# EXAMPLES

cube= lambda z : z*z*z #cube root using lambda function
print(cube(5))

average= lambda p,q,r: (p+q+r)/3  #we can assign multiple variables by using commas
print(average(2,5,9))


# Lambda functions can also include multiple statements, but they are limited to a single expression. For example:

# Lambda function to calculate the product of two numbers,
# with additional print statement

lambda x, y: print(f'{x} * {y} = {x * y}')