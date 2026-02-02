print("enter first no.")
print("enter second no.")

a=int(input())
b=int(input())

print("select operator")
print("1. +")
print("2. -")
print("3. x")
print("4. /")

c=int(input())

if c==1:
    print(a+b)

elif c==2:
 print(a-b)

elif c==3:
   print(a*b)

elif c==4:
   
   if b==0:
      print("cant devide by zero")
   else:
      print(a/b)


else:
   print("invalid operator")