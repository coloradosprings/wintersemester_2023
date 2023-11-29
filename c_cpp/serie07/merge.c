#include <stdio.h>
#include <stdlib.h>
void printVector(double* v,int n ) {
 int j = 0;
 for (j=0; j<n; j++) {
 printf("%f ",*(v + j));
 }
 printf("\n");
}

double* merge(double* a, int m, double* b, int n){
    int i;
    double* array = malloc((m+n)*sizeof(int));
    
    for(i = 0; i <= ( n + m + 1);i ++){
        if(*a > *b){
            printf("b%f ",*b);
            // printf("a%f ",*a);
            array[i] = *b;
            b += 1;
        }
        else{
            //             printf("b%f ",*b);
            // printf("a%f ",*a);
            array[i] = *a;
            a += 1;
        }
             
    }
    return array;
}

int main()
{
     double a[5] = {1, 3, 3, 4, 7};
    //  printVector(a,5);
     double b[4] = {1, 2, 3, 8};
     double* k = merge(&a[0],5,&b[0],4);
     printVector(k,5+4);
    return 0;
}




// Aufgabe 7.1. * Schreiben Sie eine Funktion double* merge(double* a, int m, double* b, int
// n), die zwei aufsteigend sortierte Vektoren a ∈ R
// m und b ∈ R
// n so vereinigt, dass der resultierende
// Vektor c ∈ R
// m+n ebenfalls aufsteigend sortiert ist, z.B. soll a = (1, 3, 3, 4, 7) und b = (1, 2, 3, 8) als
// Ergebnis c = (1, 1, 2, 3, 3, 3, 4, 7, 8) liefern. Dabei soll ausgenutzt werden, dass die Vektoren a und b
// bereits sortiert sind. Schreiben Sie ein aufrufendes Hauptprogramm, in dem m, n ∈ N sowie a ∈ R
// m und
// b ∈ R
// n eingelesen werden und c ∈ R
// m+n ausgegeben wird. Verwenden Sie dynamische Arrays. Welchen
// Aufwand hat die Funktion? Testen Sie ihr Programm mit entsprechenden Beispielen! Speichern Sie den
// Source-Code unter merge.c in das Verzeichnis serie07.