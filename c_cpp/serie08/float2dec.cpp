#include <iostream>
#include <stdlib.h>


#include <math.h>
#include <cassert>
double float2dec(int M,double e,double* a){
    // printf("T%d",M);
    int i = 0;
    double product = 1;
    double sum = 0;
    for(i = 0;i < M;i++){
        printf("%f",a[i]);
        product *= 1./2;
        sum += product * *(a + i);
    }
    // printf("T%f",sum);
    return sum * pow(2,e);

}
// double* scanVector(int n) {
//     int j = 0;
//     double* vector = malloc((n)*sizeof(int));

//     assert(vector != NULL);
    
//     for (j=0; j<n; ++j) {
//     printf("vector[%d] = ",j);
//     scanf("%lf",&vector[j]);
//     }
//     return vector;
// }
int main(){
    int M = 3;
    double e = 4;
    int j = 0;
    double vector[M];
    
    for (j=0; j<M; ++j) {
    printf("vector[%d] = ",j);
    scanf("%lf",&vector[j]);
    }

    printf("%f",float2dec(M,e,vector));


}

// Aufgabe 8.4. Schreiben Sie eine Funktion float2dec, die fur eine gegebene Mantissenl ¨ ¨ange M ∈ N,
// Ziffern a1, . . . , aM ∈ {0, 1} und einen Exponenten e ∈ Z den Dezimalwert x =
//  berechnet
// und zuruckgibt. Schreiben Sie ein aufrufendes Hauptprogramm, in dem ¨ M, aj und e eingelesen und der
// Wert x ausgegeben wird. Realisieren die Potenzen 2−k m¨oglichst rechen¨okonomisch. Speichern Sie den
// Source-Code unter float2dec.c in das Verzeichnis serie08.
