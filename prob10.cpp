/* Prime Number sieve to print the sum of all the primes up to Two Million
    This program makes an array of bools with the value of true
    We step through the array and set index's to false that are not prime using a method called the Sieve of insert Greek guy here
    Bryan Tidwell
*/
#include <iostream>
#include <math.h>
using namespace std;
//This function takes a pointer to the first element of the sieve array, the factor used to pull out nonprimes and the size of the element
//note c++ doesn't have a method for using arrays as function arguments directly so including the size is a nesseacary hack to prevent segfaults and what not
void mark(bool * sieve, int x,int size){
    for(int i=x+x; x<size;i+=x){ //set I as the 2 * the factor searching for... this is the smallest non-prime factor since x will always be prime thanks to the control flow
        sieve[i] = false; // 2x, and 3x ..... are by definition divisible by x and therefore not prime so theres no need for modulus
        if(i+x>size){ // I kept getting segault errors this just extra insurance
            return;
        }
    }
}
int main(){
    int sieveSize = 2000000; //Project Eulers problem needs all the primes up to two million
    bool sieve[sieveSize]; //All the numbers 0-2mil-1 in an array with
    //entire sieve true
    for(int i=0; i<sieveSize;i++){
        sieve[i] = true;
    }
    for(int i=2; i<((int)sqrt(sieveSize)+1);i++){ //Well never need to check higher than the sqrt(num) to see if num is prime
        if(sieve[i]){ //If x is prime we take out numbers with it as a factor all the way to the highest number we need to check sqrt(x)
            mark(sieve,i,sieveSize);
        }
    }
    unsigned long int sum = 0; //insurance against overflow errors
    sieve[1] = false; // While the loop never touches one This is for conceptual integrity because one by definition is not prime
    //a simple sum loop
    for(int i=2; i<sieveSize;i++){ //one is not a prime number I'm an idiot sometimes
        if(sieve[i]){
            sum+=i;
        }
    }
    cout << sum << endl;
    return 0;
}
