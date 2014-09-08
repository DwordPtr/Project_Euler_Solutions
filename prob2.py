# This calculates the sum of all the even fibonacci numbers less than 4 million
def Sumfib(n):
  """This method takes int n and returns the sum of the fib nums from fib(1) to fib(n) """
    sum = 0 # accumulator pattern
    fibNMinusOne = 0
    fibN = 1
    while fibN < n: #a loop uses way less memory than recusive calls
        if fibN%2==0:
            sum+=fibN
        temp = fibN
        fibN+=fibNMinusOne
        fibNMinusOne = temp
    return sum

print(Sumfib(4000000))
