b={1: "mac",  2: "andrew",3:"mark",4: "john" ,4: "phillip"}
a={"computer" : "machine",  "spoon" : "object" , "trees" : "green"}

a.update(b) # used to add dictionary b to a
print(a) 

a.clear() # used to clear dictionary
print(a)

b.pop(2) # used to remove key value
print(b)

b.popitem() # used to remove last element of dictionary
print(b)


