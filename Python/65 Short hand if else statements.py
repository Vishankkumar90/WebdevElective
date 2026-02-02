# If ... Else in One Line
# There is also a shorthand syntax for the if-else statement that can be used when the condition being tested 
# is simple and the code blocks to be executed are short

a=10
b=9
print(a) if a>b else print(b)

# we can also have multiple else statements on the same line:

a = 330
b = 330
print("A") if a > b else print("=") if a == b else print("B")