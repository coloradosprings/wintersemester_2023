#include <stdio.h>
double dabs(double x) {
    if(x >= 0){
        return x;
    }else{
        return -x;
    }
}
int main(){
    double y;
    printf("y\n");
    scanf("%lf",&y);
    printf("%f",dabs(y));
    return 0;
}