# A constructor is a special method in a class used to create and initialize an object of a class. There are
#  different types of constructors. Constructor is invoked automatically when an object of a class is created.

# A constructor is a unique function that gets called automatically when an object is created of a class. The 
# main purpose of a constructor is to initialize or assign values to the data members of that class. It cannot
#  return any value other than None.

# Syntax of Python Constructor
# def __init__(self):


class Student:
    def __init__(self,name, marks): # here we can give multiple paramenters like marks name etc , but self is always included
        self.name=name
        self.marks=marks

s1=Student("karan",98) #here we have to write the information like name and marks 
print(f"name of student is {s1.name} and marks is  {s1.marks}") 

s2=Student("rohit",97)
print(f"name of student is {s2.name} and marks is  {s2.marks}")