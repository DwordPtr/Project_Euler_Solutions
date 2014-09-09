def isPrime(n):
    """if isPrime() returns True if n is prime"""
    if n<=1:
        return False
    if n==2:
        return True
    if n%2==0:
        return False
    counter = 3
    while counter**2<=n:
        if n%counter == 0:
            return False
        counter+=1

    return True
#nth prime and the n we're checking
PrimeNum = 0
currentNum = 1
while PrimeNum<10001:
    if(isPrime(currentNum)):
        PrimeNum+=1
    if PrimeNum == 10001:
        break
    currentNum+=1
print(str(PrimeNum) + "\t" + str(currentNum))
