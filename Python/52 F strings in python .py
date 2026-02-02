a="my name is {} and i like {}"
b="vishank"
c="coding"
print((a.format(b,c))) # it is used to add perticular values or strings in a string

d="my name is {0} and i like {1}" # we can write position values in brackets to fix the sequence
e="coding"
f="vishank"
print(d.format(f,e))

  # now we will use F strings

print(f"my name is {b} and i like {c}") # use f before putting string in print statement

