# The enumerate function is a built-in function in Python that allows you to loop over a sequence 
# (such as a list, tuple, or string) and get the index and value of each element in 
# the sequence at the same time. 

marks = [89, 86, 92, 98, 82,  85, 90, 95]

# PROGRAM WITHOUT ENUMERATE FUNCTION 

# index = 0  (WE have to define index from zero to +=1)
# for mark in marks:
#   print(mark)
#   if(index == 3):
#     print("Harry, awesome!")
#   index +=1

# PROGRAM WITH ENUMERATE FUNCTION

for index, mark in enumerate(marks, start=1): # HERE WE CAN DIRECTLY USE ENUMRATE FUNCTION WITHOUT DEFINING INDEX
  print(mark)
  if(index == 3):
    print("Harry, awesome!")