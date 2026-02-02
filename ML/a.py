import math
a=[0.6,2.6,1.9,5.8,9.2,5.9,7.4]
w=[3,5,7,5,9,3,6]
b=3.7

n=a[0]*w[0]+a[1]+w[1]+a[2]*w[2]+a[3]+w[3]+a[4]*w[4]+a[5]+w[5]+a[6]*w[6]+b
sig=1/(1+math.exp(-n))
print(f"the neural network output is {n} and after sigmoid activation is {sig}")

