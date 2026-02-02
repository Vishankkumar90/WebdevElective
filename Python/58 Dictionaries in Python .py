# Dictionaries are ordered collection of data items. They store multiple items in a single variable. 
# Dictionary items are key-value pairs that are separated by commas and enclosed within curly brackets {}.

a={"computer" : "machine",  "spoon" : "object" , "trees" : "green"} 
print(a["computer"]) # prints value which is  after semicolon
print(a.get("computer")) # if we use .get then none will be printed if string is not in set
print(a.get("ma"))
print(a["spoon"])
print(a["trees"])

print(a)

# example

b={1: "mac",
   2: "andrew",
   3:"mark",
   4: "john",
   456: "phillip"}
print(b[3])
print(b[456])
print(b.keys()) # used to print words
print(b.values()) # used to pring values
print(b.items()) # used to print word and its values in pair

for keys in b.keys():
    print(b[keys]) # loop to print corresponding values of words

for keys in b.keys(): # loop to print every value corresponding to keys
    print(f"the value corresponding to the key {keys} is {b[keys]}" )
