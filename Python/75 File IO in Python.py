
# Python provides the open() function to open a file. It takes two arguments: the name of the file and the mode 
# in which the file should be opened. The mode can be 'r' for reading, 'w' for writing, or 'a' for appending.

f = open('IO file.txt', 'r') # it is used to open a file in python 
                             # The mode can be 'r' for reading, 'w' for writing, or 'a' for appending
text = f.read()
print(text)
f.close()

# There are various modes in which we can open files.

# read (r): This mode opens the file for reading only and gives an error if the file does not exist. This is the default mode if no mode is passed as a parameter.

# write (w): This mode opens the file for writing only and creates a new file if the file does not exist.

# append (a): This mode opens the file for appending only and creates a new file if the file does not exist.

# create (x): This mode creates a file and gives an error if the file already exists.

# text (t): Apart from these modes we also need to specify how the file must be handled. t mode is used to handle text files. t refers to the text mode. There is no difference between r and rt or w and wt since text mode is the default. The default mode is 'r' (open for reading text, synonym of 'rt' ).

# binary (b): used to handle binary files (images, pdfs, etc).

f = open('IO file2.txt', 'w') # this is used to create a file "w" is used in end
f = open('IO file.txt', 'a') # this is used to create a file "w" is used in end

f = open('IO file2.txt', 'w')
f.write("hello world") # it is udes to write contents inside a file
f.close()

# if  we use a instead of w in the prevoius method then the string will keep adding in file as many times as
#  we run the program
 

# METHOD 2

with open('IO file2.txt', 'a') as f: # we can use with method if we dont want to write f.close every time in the method 
  f.write("added throgh with method")