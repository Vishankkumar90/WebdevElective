# Name mangling in Python is a technique used to protect class-private and superclass-private attributes
# from being accidentally overwritten by subclasses. Names of class-private and superclass-private 
# attributes are transformed by the addition of a single leading underscore and a double leading underscore respectively.

class Access:
    def __init__(self):
        self.__name="rohit"

a=Access()
# print a.__name cannot be accesed directly by object now due to two underscores 

# but it can be accesed indirectly by:
print(a._Access__name)
