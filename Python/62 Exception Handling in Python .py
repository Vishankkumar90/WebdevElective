# Exception handling is the process of responding to unwanted or unexpected events when a computer program runs. 
# Exception handling deals with these events to avoid the program or system crashing, and without this process,
# exceptions would disrupt the normal operation of a program.

# it is used when we dont want to stop the entire running of code due to one error

# try….. except blocks are used in python to handle errors and exceptions. The code in try block runs when there
#  is no error. If the try block catches the error, then the except block is executed.

a = input("Enter the number: ")
print(f"Multiplication table of {a} is: ")

try:
  
  for i in range(1, 11):
     print(f"{int(a)} X {i} = {int(a)*i}") # program to pring a table 
except: # if there is an error in input ( like using a string value) then Invalid  Input will be printed instead of an error 
   
   print("Invalid  Input!")

print("Some imp lines of code")
print("End of program")


# we can make multiple exception values depending upon the errors

try:
    num = int(input("Enter an integer: "))
    a = [6, 3]
    print(a[num])
except ValueError: # if there is integer error then this statement will be used
    print("Number entered is not an integer.")
    
except IndexError: # if there is an index error this statement eill be used
  print("Index Error")