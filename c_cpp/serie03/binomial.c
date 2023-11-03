

#include <stdio.h>
int binomial(int n, int k) {
    if(n == k || k == 0){
        return 1;
    }
    // else if(k > n){
    //     return 0;
    // }
    else{
        return (binomial(n - 1,k) + binomial(n - 1,k - 1));
    }
}
int main(){
    int n,k;
    printf("n\n");
    scanf("%d",&n);
    printf("k\n");
    scanf("%d",&k);
    printf("%d",binomial(n,k));
}