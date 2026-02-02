# The readline() method reads a single line from the file. If we want to read multiple lines, we can use
# a loop.

# BASIC SYNTAX:

# f = open('myfile.txt', 'r')
# while True:
#     line = f.readline()
#     if not line:
#         break
#     print(line)


f = open('........marks file .txt', 'r') 
i = 0
while True:
  i = i + 1
  line = f.readline() # this will real data from other file (i.e ........marks file .txt) 
  if not line:
    break
  m1 = int(line.split(",")[0]) # this will spilt the data in pertivular lines for representation in line by line
  m2 = int(line.split(",")[1])
  m3 = int(line.split(",")[2])
  print(f"Marks of student {i} in Maths is: {m1}")
  print(f"Marks of student {i} in English is: {m2}")
  print(f"Marks of student {i} in SST is: {m3}")  
  print(line)