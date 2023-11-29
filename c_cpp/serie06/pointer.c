#include <stdio.h>
void square(double* x)
{
double* y;
x= (*&y)*(*&x);
}
int main(){
double x=2.1;
square(&x);
printf("x^2=%f\n",x);
return 0;
}