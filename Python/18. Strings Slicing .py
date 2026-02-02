# if we wnat only some required letters of a string then we use string slicing
a="machine"
print(a[0:4]) # use square brackets and no. start from 0 here
#       ^ ^
#       ^  ^ 
#       ^    ^ 
#       ^     ^
#       ^       ^
#       ^        ^
#       from      to    # for slicing
        
print(a[1:4])

print(a[:4])

print(a[:]) #if we do not put any value then the entire string will be printed