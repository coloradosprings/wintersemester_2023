#include <stdio.h>
#include <math.h>

double doubleProduct( int k,double a[], double b[], double A[][k]) {
    int i,j;
    double sum = 0;
    for (i = 0;i < k;i++) {
        for (j = 0;j < k; j ++){
            sum += a[i] * A[i][j] * b[j];
        }
    }
    return sum;
}
int main(){
    double p;
    int i,j;
    int k = 2;
    double a[k],b[k];
    double A[k][k];

    // printf("k\n");
    // scanf("%lf",&k);
    for (i = 0;i < k;i++) {

        printf("%d komponente a\n",i);
        scanf("%lf",&a[i]);

    }
    for (j = 0;j < k;j++) {

        printf("%d komponente b\n",j);
        scanf("%lf",&b[j]);

    }
    for (i = 0;i < k;i++) {

        for (j = 0;j < k;j++) {

        printf("%d %d komponente A\n",i,j);
        scanf("%lf",&A[i][j]);

    }
    }
    printf("%lf",doubleProduct(k,a,b,A));
    
}






// Aufgabe 6.3. Schreiben Sie eine Funktion double doubleProduct(double a[], double b[], double
// A[], int n), welche fur Vektoren ¨ a, b ∈ R
// n und eine Matrix A ∈ R
// n×n das Produkt a
// P
// T Ab =
// n
// i,j=1 aiAi,j bj ∈ R berechnet und Zuruckgibt. Schreiben Sie ferner ein aufrufendes Hauptprogramm,
// welche n, a, b und A einliest und das Produkt a
// T Ab ausgibt. Die Dimension n ∈ N soll eine Konstante
// im Hauptprogramm sein, die Funktion soll aber beliebige Dimension zulassen. Welchen Aufwand hat Ihre
// Funktion? Falls die Funktion fur ¨ n = 104
// eine Laufzeit von 0.1 Sekunden hat, welche Laufzeit erwarten
// Sie fur ¨ n = 3 · 105
// ? Speichern Sie den Source-Code unter doubleProduct.c in das Verzeichnis serie06.

