#include <iostream>
using namespace std;
//Standard true if n is prime method
bool isPrime(long int n){
    if(n<=1){
        return false;
    }
    if(n==2){
        return true;
    }
    if(n%2==0){
        return false;
    }
    int divInt = (n-1);
    while(divInt>1){
        if(n%divInt==0){
            return false;
        }
        divInt-=1;
    }
    return true;
}
int main(){
  //PrimeNum is the highest nth prime found
  //currentNum is the currentPrime candidate being checked
    long int PrimeNum = 0;
    long int currentNum = 1;
    //This works because once PrimeNum==10001 we exit the loop and print input
    while(PrimeNum<10001){
        if(isPrime(currentNum)){
            PrimeNum+=1;
        }
        currentNum+=1;
    }
    cout << PrimeNum << "\t" << currentNum << endl;
    return 0;
}
