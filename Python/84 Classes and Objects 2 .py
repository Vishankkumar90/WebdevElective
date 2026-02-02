# self parameter

# The self parameter is a reference to the current instance of the class, and is used to access variables that
#  belongs to the class.

# It must be provided as the extra parameter inside the method definition.

class Person:
  name = "Harry"
  occupation = "Software Developer"
  def info(self): # this funtion is in the class
    print(f"{self.name} is a {self.occupation}") # self is used to give identity to multiple info 


a = Person()
b = Person()
c = Person() # we can create multilple objects as many as we want 

a.name = "Shubham"
a.occupation = "Accountant"

b.name = "Nitika"
b.occupation = "HR"

# print(a.name, a.occupation)
a.info()
b.info()
c.info()