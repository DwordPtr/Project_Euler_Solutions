/* Calculate all of the even fibonaci numbers under 4 million */
#include <stdio.h>
main(){
  int fibNumMinusOne = 0;
  int fibNum = 1;
  int sum = 0;
  int temp= 0;
  while(fibNum<4000000){ // its a magic number but its a small problem
    if(fibNum%2==0){
      sum+=fibNum;
    }
    //here's the loop method to get fib of n+1
    temp = fibNumMinusOne;
    fibNumMinusOne = fibNum;
    fibNum+=temp;
  }
  printf("%d \n",sum);
}
