#This program finds the difference between the sum of the squares of the first 100 natural numbers and the square of the sum of the first 100 natural numbers
SquareSum = 0
for i in range(1,101):
    SquareSum+=i**2 # sum the values of 1^2 - 100^2
n = 100
SumSquare = int((n*(n+1)/2)**2) # take the sum of 1-100 with calc magic then square it
difference = SumSquare - SquareSum
print(difference)
