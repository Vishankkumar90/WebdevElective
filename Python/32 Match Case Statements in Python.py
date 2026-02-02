a=int(input("enter the number "))

match a:

  case 1 :
    print("no. is equal 1 ")

  case 4: 
    print("no. is equal 4")

  case _ :  # default case (if no is not equal to 0 or 4 then it only the input no. 4 will be printed)
    print(a)

  
