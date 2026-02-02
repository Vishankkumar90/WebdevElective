# in python, we can raise custom errors by using the raise keyword.
# However, sometimes we may need to create our own custom exceptions that serve our purpose.
# This is useful because sometimes we might want to do something when a particular exception is raised. 
# For example, sending an error report to the admin, calling an api, etc.

a= int(input("enter any no. between 5 and 9"))

if (a<5 or a>9):
    raise ValueError("value should be between 5 and 9") # use " raise " function to raise any type of error