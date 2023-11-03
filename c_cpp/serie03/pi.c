#include <stdio.h>
double P(int n)  {

    if(n <= 0){
        return 4;
    }else{
        double k = 1;
        if(n % 2 == 0){
            k = 1;
        }else{
            k = -1;
        }
        return (4*k/(2*n+1) + P(n -1));
    }


}
int main(){
    int n;
    printf("n\n");
    scanf("%d",&n);
    printf("%f",P(n));
    return 0;
}