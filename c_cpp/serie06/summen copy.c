#include <stdio.h>



int main(){
    double x[2];
    x[0] = 2;
    x[1] = 3;
    int i = 0;
    double b = x[i];
    x[i] = x[i + 1];
    x[i + 1] = b;

    printf("%lf",x[1]);

}