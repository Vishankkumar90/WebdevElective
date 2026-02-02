class Employee:
    def __init__(self,name, id):
        self.name= name
        self.id=id

    def showdetails(self):
     print(f"name of employee {self.id} is {self.name}")

# Imagine if we want to change the class name of the above class then we cannot do this , 
# it will throw error, but we can make another class and use inheritance principle on it it then it 
# will acquire the properties of above class 

class Programmer(Employee):   # here we are creating inheritance class the of the parent class (name of parent class will come in brackets)
   def showlanguage(self):
      print("employees name by id")
                               


e1=Employee("rohan",400) #here we are simply defining an object through a constructor
e1.showdetails()
e2=Programmer("rohit",500) #here we are  defining an object of the inheritance class
e2.showdetails()
e2.showlanguage()

# When a class derives from another class. The child class will inherit all the public and 
# protected properties and methods from the parent class. In addition, it can have its own 
# properties and methods,this is called as inheritance.

# Python Inheritance Syntax
# class BaseClass:
#   Body of base class
# class DerivedClass(BaseClass):
#   Body of derived class
# Derived class inherits features from the base class where new features can be added to it. This results in re-usability of code.

# Types of inheritance:

# Single inheritance
# Multiple inheritance
# Multilevel inheritance
# Hierarchical Inheritance
# Hybrid Inheritance
# We will see the explaination and example of each type of inheritance in the later tutorials

# Single inheritance enables a derived class to inherit properties from a single parent class, 
# thus enabling code reusability and the addition of new features to existing code.

# Example:

class Parent:
    def func1(self):
        print("This function is in parent class.")
 
class Child(Parent):
    def func2(self):
        print("This function is in child class.")
 
object = Child()
object.func1()
object.func2()

        
 