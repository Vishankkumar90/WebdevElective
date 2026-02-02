a= 10
b=8
c=5
d=11
e=6

print("1: apple")
print("2: banana")
print("3: milk")
print("4: butter")
print("5: bread")

z=int(input("enter choise "))
f=int(input("enter quantity "))

cost1=z*f
item=str(input("Item2: "))
q=int(input("Quantity: "))
if(item=="Apple"):
  price=10
elif(item=="Banana"):
  price=8
elif(item=="Milk"):
  price=5
elif(item=="Butter"):
  price=11
elif(item=="Bread"):
  price=6

if(z==1):
    print(a*f)
elif(z==2):
    print(b*f)
elif(z==3):
    print(c*f)
elif(z==4):
    print(d*f)
elif(z==5):
    print(e*f)




