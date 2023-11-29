#include <stdio.h>
#include <math.h>
// 1d array
double  zeilensummennorm(double A[], int n, int m) {

    int i,j;
    double current_sum = 0;
    double sum = 0;
    for (j = 0; j < m ;j++){
        current_sum = 0;
        for (i = 0;i < n;i++) {
             
            current_sum += fabs((A[j * m + i]));

        }


        if(current_sum > sum){
            sum = current_sum;
        }
    
    }
//   '  printf("summe %f",current_sum);'
    return sum;
}
int main(){
    double p;
    int i,j;
    int m = 2;
    int n = 2;
    double A[m * n];

    for (j = 0; j < m ;j++){
        for (i = 0;i < n;i++) {
            printf("%d -te  zeile, %d - te spale \n",j,i);
            scanf("%lf",&A[j * m + i]);
        }
    }
    
    zeilensummennorm(A,n,m);
    printf("summe %f",zeilensummennorm(A,n,m));  
    return 0;
    
}






// Aufgabe 5.2. * Fur eine Matrix ¨ A ∈ R
// m×n ist die Zeilensummennorm durch --
// gegeben. Schreiben Sie eine Funktion zeilensummennorm, die die Zeilensummennorm einer als 2D-Array
// gespeicherten Matrix A berechnet und zuruckgibt. Schreiben Sie ein aufrufendes Hauptprogramm, in dem ¨
// A eingelesen und kAk ausgegeben wird. Die Dimensionen m, n ∈ N sollen zwei Konstanten im Hauptprogramm sein, die Funktion zeilensummennorm ist aber fur beliebige Dimensionen zu programmieren. ¨
// Speichern Sie den Source-Code unter zeilensummennorm.c in das Verzeichnis serie05