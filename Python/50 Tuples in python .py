# Tuples are ordered collection of data items. They are similar to list but thier value are fixed , 
# They store multiple items in a single variable. Tuple items are separated by commas and enclosed within 
# round brackets (). Tuples are unchangeable meaning we can not alter them after creation

a=(1,2,4,7,9) # it is a tuple

print(a[0])
print(a[1])
print(a[2])
print(a[3])
print(a[4])
print(a[-2])

if 7 in a:
 print("7 is in tuple")

#  Tuple slicing

b=a[1:4]
print(b)