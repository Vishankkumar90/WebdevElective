import os 
folders=os.listdir("data") # it is used to print all the folders name
print(folders)

# if we create a file in an y of the folders in data folder we can also check which folders 
# have  data in all the 100 folders

for folder in folders:
  print(folder)
  print(os.listdir(f"data/{folder}"))