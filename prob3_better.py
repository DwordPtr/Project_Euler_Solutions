import math as m
"""this is just a standard helper method"""
def is_prime(n):
    if n == 1:
        return False
    elif n == 2:
        return True
    elif n % 2 == 0:
        return False
    else:
        i = 3
        while i * i <= n:
            if n % i == 0:
                return False
            i += 2
        return True

"""looks at every pair of factors of n for primes
    append all prime factors to a list and sort to grab the highest"""
def find_greatest_prime_factor(n):
    if is_prime(n):
        print(n)
    else:
        prime_factors = []
        upper_bound = m.floor(m.sqrt(n))
        if n% 2 == 0:
            prime_factors.append(2)
            other_factor = n//2
            if is_prime(other_factor):
                prime_factors.append(other_factor)
        for i in range(3,upper_bound+1,2):
            if n%i == 0:
                other_factor = n//i
                if is_prime(i):
                    prime_factors.append(i)
                if is_prime(other_factor):
                    prime_factors.append(other_factor)
        if prime_factors:
            prime_factors.sort() #not expensive because this array is small
            print(prime_factors[len(prime_factors)-1])





n = 600851475143
find_greatest_prime_factor(n)
