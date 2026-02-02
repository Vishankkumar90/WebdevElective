def average(*numbers):
    sum=0
    for i in numbers:
        sum=sum+i
    print("average=", (sum/len(numbers)))


average(4,8,9,10,7,2,78)

print("RETURN VALUE") # The return statement is used to return the value of the expression back to the calling function.

def average(*numbers):
  # print(type(numbers))
  sum = 0
  for i in numbers:
    sum = sum + i
  # print("Average is: ", sum / len(numbers))
  # return 7
  return sum / len(numbers)


# average(4, 6)
# average(b=9)

c = average(5, 6, 7, 1)
print(c)


# def name(**name):