l=[1,2,3,3,3,3,3,4,4,6,]

print(l.count(3)) # it is used to count the no. of times element is occuring in the list

m=l.copy() # it is used to copy list into  a new variable
print(m) 
    
l.insert(2,899) # it is used to insert a element at a perticular postion by writing it in the brackets first 
print(l)


m=[1000,3000,5000] 

k=l+m # used to add elements to list 
print(k)

# or 


l.extend(m) # it is used to add elements to some other list
print(l)


