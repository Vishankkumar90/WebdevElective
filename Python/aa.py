# a="Hello the best "
# b="to you"
# print(a+b)

# print(a[10])
# print(a[0:8])
# print(a[1:8:2])
# print(a[::-1])
# print(a[:6])
# print(a[6:])
# print(a[:])

# print(a[0:-3]) # len -3
# print(a[-6:-2])

# print(a.upper())
# print(a.lower())
# print(a.rstrip("l"))
# print(a.split(" "))
# print(a.capitalize())

# print(3* a)

# print(a.replace("the","is"))

# print(a.find("l")) #index of string

# print(f"best {b} and {a}")




# a=[1,3,5,7,9]

# a.insert(3,'c')
# print(a)
# a.remove(5)
# print(a)

# a.extend([10,11])
# print(a)

# a.append([13,14])
# print(a)


# y=[4,9,5,7]

# y.sort()
# print(y)

# y.reverse()
# print(y)

# y.remove(5)
# print(y)

# y.count(5)
# print(y)


# import pandas as pd

# data={
#     "Name": ["john","mark","jack"],
#     "age":[31,30,43],
#     "city":['X','Y','Z'],
# }

# df=pd.DataFrame(data)
# print(df)


# df=pd.read_csv("name")
# df.head(5)
# df.tail(5) #give last  records

import matplotlib.pyplot as plt

x=[1,2,3,4,5]
y=[7,8,9,10,11]

plt.plot(x,y)


a=open("filename.txt","r")
b=a.read(10)
c=a.redlines(5)
