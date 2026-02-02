# The os module in Python is a built-in library that provides functions for interacting with the 
# operating system. It allows you to perform a wide variety of tasks, such as reading and writing files, 
# interacting with the file system, and running system commands.

import os 

if (not os.path.exists("data")): 
 os.mkdir("data") # it has created a new folder in vscode
 
for i in range(0,100):
  os.mkdir(f"data/number{i+1}")  # this function  has created 100 folders in file each named with number 1 , number 2 ....

# for renaming all the folders use this function:
    # os.rename(f"data/tutorial{i+1}",f"data/tutorial{i+1}") 