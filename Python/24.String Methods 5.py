#ENDSWITH() FUNCTION
# it tells weather a string is ending witha  perticular world or no

a= "machines makes our life easy"

print(a.endswith("easy")) # true because it is ending with easy
print(a.endswith("ok"))   # false 



# FIND:
# it a tells about the position number of  fisrt occurence letter in a string
b="machine is good for is work"
print(b.find("is" ))  
print(b.find("ai")) # gives output as -1 if sting is not present



#INDEX: 
# it is same as find but itgives error if string is not present
print(b.index("ai"))


