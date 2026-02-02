# in python , we know that a function can call other function. It is even possible for the function 
# to call itself. These types of construct are terms as recursive functions.

# making a program to calculate factorial (!)

def factorial (n):
    if(n==0 or n==1):
     return 1
    else:
       return n*factorial(n-1) # here we are calling the function in a function (n-1)
    
print(factorial(1))
print(factorial(5))
print(factorial(6))