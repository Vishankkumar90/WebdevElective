# We can provide a default value while creating a function. 
# This way the function assumes a default value even if a value is not provided in the function call for that 
# argument.

def average (a=23,b=12):
    print("the average is " , (a+b)/2)

average() # if we write nothing in the brackets the the deafult vlaue 23 and 12 will  be printed 

average(a=1) # if we only define a in bracket the that value will be taken and b will be the deault value

average(6,8)

average(6) # if we write only one value them it is the value of a 

average(b=8, a=6) # we can even chang3 the order of arguments