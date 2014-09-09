#include <stdio.h>
typedef enum {false = 0, true = 1} bool; //our BCE boolean style type
/* This method returns true if the arg is prime and false if it's composit */
bool isPrime(int n){
  if(n<=1){
    return false;
  }
  if(n==2){
    return true;
  }
  if(n%2==0){
    return false;
  }
  int divisor = 3;
  while(divisor*divisor<=n){
    if(n%divisor==0){
      return false;
    }
    divisor+=1;
  }
  return true;
}
/* This method finds the 10001 prime */
int main(){
  int primeNum = 0; //a counter measuring the number of primes we've found so far
  int n = 1; //n is the current integer being checked
  while(primeNum<10001){
    if(isPrime(n)){
      // if n is prime we increment the counter
      primeNum+=1;
      //if our prime is the 10001th prime exit the loop
      if(primeNum==10001){
        break;
      }
    }
    //if the loop is still iterating the prime hasn't been found yet so look further
    n+=1;
  }
  printf("%d \n",n);
  return 0;
}
