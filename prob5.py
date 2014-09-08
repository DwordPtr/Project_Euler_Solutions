def isEvenlyDivisible(n):
  """This method determmines if argument n is evenly divisible by any of the integers in the checks list"""
  checks = [11,12,13,14,15,16,17,18,19,20] #some pen and paper factoring magic shows only these ints are needed
  for i in checks:
      if n%i !=0:
        return False

  return True

num = 1
#This loop goes until the current number checked is divisible by everything
while(True):
    if(isEvenlyDivisible(num)):
            print(num)
            exit() # loop and a half
    num+=1
