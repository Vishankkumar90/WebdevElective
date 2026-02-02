# A class is a blueprint or a template for creating objects, providing initial values for state
# (member variables or attributes), and implementations of behavior (member functions or methods). 
# The user-defined objects are created using the class keyword.

class Person: # here we are creating a list of variables in a class
              # first letter of class name should be capital
    name= "Vishank Kumar" 
    occupation= "Software engineer" 
    net_worth="250000$"

# Object is the instance of the class used to access the properties of the class Now lets create an object
# of the class.

a=Person() # here we creating an object from class

print(f"Name is {a.name} occupation is {a.occupation} and net woth is {a.net_worth}") # here we we are putting class variables ny an object
