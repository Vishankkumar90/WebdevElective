# Sets are unordered collection of data items. They store multiple items in a single variable. 
# Set items are separated by commas and enclosed within curly brackets {}. Sets are unchangeable, meaning 
# you cannot change items of the set once created. Sets do not contain duplicate items.

s={1,2,2,2,3,3,4,5,6,6} # set does not reapeat any value 
print(s)

# Here we see that the items of set occur in random order and hence they cannot be accessed using index numbers. Also sets do not allow duplicate values.

# how to make empty set
c=set()
print(type(c))


# how to print set items

info = {"Carla", 19, False, 5.9}
for i in info:
    print(i)
