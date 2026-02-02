s1={1,2,5,6}
s2={3,6,7}
print(s1.union(s2)) # it is used to take union of two sets
print(s1.intersection(s2))   #  it is used to take intersection of two sets
print(s1.symmetric_difference(s2)) # elemnets that are not common in both sets
print(s1.isdisjoint(s2)) # it is used to check if a and b has some intersection value or not a and b has intersen
# if intersection  value is present it will print false otheriwse zero
print(s1.issuperset(s2)) # it is used to check if all the values of of set b are present in set a 
print(s1.issubset(s2)) #  it is used to check if all the values of of set b are not present in set a
print(s1, s2) # used to print both sets


s3={1,2,5,6}
s4={3,6,7}
s3.update(s4) # it used to update value of s3 by adding elements of s4 in s3
print(s3,s4)

