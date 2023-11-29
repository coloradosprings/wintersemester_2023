#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
 double diff(double (*f)(double), double x, double h0, double tau){

        double h_k;
        int k = 0;
        double h_k_1; 
        h_k_1 = ( f(x + h0) - f(x) ) / h0;
        double r;
        double h;
        do{
        k += 1;
        h = 1./(pow(2,k)) * h0; 
        printf("h%f",h);
        h_k = ( f(x + h) - f(x) ) / h;
        printf("h_k%f",h_k_1);

        
        if ( fabs(h_k_1) < tau){
            r =  tau;
        }else{
            r = tau * fabs(h_k_1);
        }
        if ( fabs( f(h_k_1) - f(h_k) ) <= r){
            break;
        }


       
        }while(0);
        return h_k;
 }
double f(double x) {
    return x*x + exp(x);
}

int main(){
    double h0,x,tau,h_k;
    printf("h0\n");
    scanf("%f",&h0);
    printf("x\n");
    scanf("%f",&x);
    printf("tau\n");
    scanf("%f",&tau);
    h_k = diff(f,x,h0,tau);
    printf("%f %f",h_k);
}