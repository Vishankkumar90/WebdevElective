# Tuples are immutable, hence if you want to add, remove or change tuple items, then first you must convert 
# the tuple to a list. Then perform operation on that list and convert it back to tuple.

countries = ("Spain", "Italy", "India", "England", "Germany")
temp = list(countries)
temp.append("Russia")       #add item 
temp.pop(3)                 #remove item
temp[2] = "Finland"         #change item
countries = tuple(temp)
print(countries)


a=(1,1,2,3,3,3,3,3,3,34)
b=a.count(3) # it is used to count the no. of times an element is occuring
print(b)

b=a.index(3,2,4) # occurence of 3 in words from 2 to 4
print(b)

b=len(a) # length of tuple
print(b)
