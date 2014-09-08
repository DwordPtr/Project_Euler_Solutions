#include <iostream>
#include <vector>
using namespace std;

/* This method returns true if argument n is prime */

bool isPrime(unsigned long int n){
    if(n<=1){
        return false;
    }
    if(n==2){
        return true;
    }
    if(n%2==0){
        return false;
    }
    unsigned long int divInt = (n-1);
    while(divInt>1){
        if(n%divInt==0){
            return false;
        }
        divInt-=1;
    }
    return true;
}
// Find the biggest prime factor of a really big number
int main() {
    unsigned long int n = 600851475143;
    vector<unsigned long int> factors;
    for(unsigned int i = (n-1); i>0; i--){ //put all the factors of the integer in a vector
        if(n%i==0){
            factors.push_back(i);
        }
    }
    vector<unsigned long int>primeFactors;
    for(int i =0; i<factors.size();i++){ // put factors[i]-> primeFactors if isPrime(factors[i])
        if(isPrime(factors[i])){
            primeFactors.push_back(factors[i]);
        }

    }
    // O(n) time algorithm to find index of the largest primeFactor 
    // also could've used sort
    int maxIndex = 0;
    for( int i=0; i<primeFactors.size(); i++){
        if(primeFactors[i]>primeFactors[maxIndex]){
            maxIndex=i;
        }
    }
    cout << primeFactors[maxIndex] << endl;

    return 0;
}
