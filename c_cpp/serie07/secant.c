#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double secant(double (*f)(double x), double x0, double x1, double
tau)  {
    double x_k,x_k_1,x_k_2;
    // printf("x_1_k%f  ",(f(x1)));
    // printf("x1%f",x1);
    x_k = x1;
    x_k_1 = x0;
    // double r;
    // r = tau;
    do{
        x_k_2 = x_k_1;
        x_k_1 = x_k;
        // printf("x_k_1I%f  ",(f(x_k_1)));
        // printf("x_k_2I%f  ",(f(x_k_2)));
        double n = f(x_k_2) - f(x_k_1);
        printf("%f i", n );
        x_k = x_k_1 -  f(x_k_1)* (x_k_2 - x_k_1) / n;
       
    
        // printf("%f i",(f(x_k_2) - f(x_k_1)));
        double r;


        if ( fabs(x_k) < tau){
            r =  tau;
        }else{
            r = tau * fabs(x_k_1);
        }



        if ( fabs(f(x_k) - f(x_k_1)) <= tau || ( fabs(x_k) < r && fabs(x_k - x_k_1) <= r)){
            printf("br");
            printf("%f %f",x_k,f(x_k));
            printf("t%f",fabs(x_k - x_k_1) );
            return x_k;
 
        }

        
    }while(1);
    // printf("%f %f",x_k,f(x_k));
    // return x_k;
}

double g(double x) {
        // return  x*4;
        return pow(x,4) - 16;
    }
int main(){
    double x0,x1,tau,x_k;
    printf("x0\n");
    scanf("%lf",&x0);

    printf("x1\n");
    scanf("%lf",&x1);

    printf("tau\n");
    scanf("%lf",&tau);

    // printf("x1%lf  ",(f(x1)));
    x_k = secant(f,x0,x1,tau);
    // printf("%f %f",x_k,f(x_k));
}

// |f(xn) − f(xn−1)| ≤ τ

// oder
// |f(xn)| ≤ τ und |xn − xn−1| ≤ (
// τ fur |xn| ≤ τ,
// τ |xn| sonst)
