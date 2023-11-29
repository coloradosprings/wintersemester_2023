#include <stdio.h>
#include <math.h>

double frobeniusNorm( int M, int N, int P,double A[][M][P]) {
    int i,j,k;
    double sum = 0;

    for (i = 0;i < N;i++) {
        for (j = 0;j < M;j++) {
            for(k = 0; k < P; k++){
                sum += A[i][j][P] * A[i][j][P];
            }
        }
    }
    return sqrt(sum);
}
int main(){
    int n = 2;
    int m = n;
    int p= 3;
    // double A[2][3] = {{1,2,3},{4,5,6}};
    double A[n][m][p];
    int i,j,k;

    for (i = 0;i < n;i++) {
        for (j = 0;j < m;j++) {
            for(k = 0; k < p; k++){
                A[i][j][k] = i + j + p;
                printf("%d,%d,%d, %d\n",i,j,k,i+j+k);
            }
        }
    }
    
    printf("\n%f",frobeniusNorm(m,n,p,A));  
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
