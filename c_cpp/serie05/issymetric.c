#include <stdio.h>
#include <math.h>

double  issymmetric(int n,double A[][n]) {
    int i,j;
    double product = 1;
    for (j = 0;j < n;j++) {
        for(i = 0; i < n; i++){
            if (A[i][j] == A[j][i]){
                return 0;
            }
        }
    }
    return 1;
}
int main(){
    int n = 4;
    int m = n;
    double A[n][m];
    int i,j;
    int k = 3;
    double x[k];

    for (j = 0;j < n;j++) {
        for(i = 0; i < m; i++){
        printf("%d -te  zeile, %d - te spale \n",j,i);
        scanf("%lf",&A[j][i]);}

    }
    printf("%f",issymmetric(n,A));  
    return 0;
    
}






// Aufgabe 5.1. * Fur ¨ p ∈ [1, ∞) ist die `p-Norm auf R

// .
// Aufgabe 5.4. Eine Matrix A ∈ R
// n×n ist symmetrisch, falls Ajk = Akj fur alle ¨ j, k = 1, . . . , n gilt.
// Schreiben Sie eine Funktion issymmetric, die eine Matrix A (spaltenweise als Vektor der L¨ange n
// 2
// gespeichert) auf Symmetrie uberpr ¨ uft (R ¨ uckgabewert ¨ 1 bei Symmetrie und 0 bei Nicht-Symmetrie).
// Schreiben Sie ein aufrufendes Hauptprogramm, in dem A eingelesen wird und ausgegeben wird, ob A
// symmetrisch ist oder nicht. Speichern Sie den Source-Code unter issymmetric.c in das Verzeichnis
// serie05.
