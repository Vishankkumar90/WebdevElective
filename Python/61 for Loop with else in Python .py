# Python allows the else keyword to be used with the for and while loops too. The else block appears after 
# the body of the loop. The statements in the else block will be executed after all iterations are completed. 
# The program exits the loop only after the else block is executed.

for i in range(5):
    print(i)

else: # when all the values of range will be done then the else statement will be printed
    print("loop done")

for b in range(12):
    print(b)
    if b==5:
     break

else:
   print("loop over") # now the else statement will not be printed because we have used break statement ( thsi same applies for while loops too)