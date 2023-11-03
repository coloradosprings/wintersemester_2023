#include <stdio.h>

// The function factorial computes the factorial
// of a nonnegative integer n recursively

int factorial(int n) {
  if (n <= -1) {
    // factorial not defined for n <= -1
    return -1;
  } 
  else {
    if (n > 1) {
      // recursive step n! = n*(n-1)!
      return n*factorial(n-1);
    }
    else {
      // stopping criterion 0! = 1 = 1!
      return 1;
    }
  }
}

int binomialdirect(int n,int k){
    return( factorial(n) / (factorial(k)  * factorial(n - k)) );
}

int main(){
    int n,k;
    printf("n\n");
    scanf("%d",&n);
    printf("k\n");
    scanf("%d",&k);
    printf("%d",binomialdirect(n,k));
}

