#include <stdio.h>
void square(double* x){

}

int main(){
double x=2.1;
double* y = &(&x);
printf("%f\n",x);
printf("%f",y);
return 0;
}