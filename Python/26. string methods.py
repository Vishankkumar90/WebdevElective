
str1 = "We wish you a Merry Christmas\n"
print(str1.isprintable())

str1 = "         "       #using Spacebar
print(str1.isspace())

str2 = "  "       #using Tab
print(str2.isspace())

str1 = "World Health Organization" 
print(str1.istitle())

str2 = "To  a Mocking bird"
print(str2.istitle())

str1 = "Python is a Interpreted Language" 
print(str1.startswith("Python"))

str1 = "Python is a Interpreted Language" 
print(str1.swapcase())

str1 = "His name is Dan. Dan is an honest man."
print(str1.title())