" my name is vishank" # it is a doc string

print(__doc__)

# Docstrings in a function:
def square (n): # function to square a number
    "takes no. and squares it"
    print(n**2)

square(5)

print(square.__doc__) # now square will be printed with the above string