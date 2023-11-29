#include <stdio.h>
#include <math.h>

double  pnorm(double x[], int k, double p) {
    int i;
    double product = 1;
    for (i = 0;i < k;i++) {
        product *= x[i];
    }
    return pow(product, 1./p);
}
int main(){
    double p;
    int i;
    int k = 3;
    double x[k];

    printf("p\n");
    scanf("%lf",&p);
    for (i = 0;i < k;i++) {

        printf("%d komponente\n",i);
        scanf("%lf",&x[i]);

    }
    printf("%f",pnorm(x,k,p));  
    return 0;
    
}






// Aufgabe 5.1. * Fur ¨ p ∈ [1, ∞) ist die `p-Norm auf R

// .
// Schreiben Sie eine Funktion double pnorm(double x[], int n, double p), die einen Vektor x ∈ R
// n,
// dessen L¨ange n sowie p ∈ [1, ∞) ubernimmt und ¨ kxkp zuruckgibt. Sie d ¨ urfen die Funktion ¨ pow aus der
// Bibliothek math.h verwenden. Schreiben Sie ferner ein aufrufendes Hauptprogramm, in dem x und p
// eingelesen werden und kxkp ausgegeben wird. Die Dimension n ∈ N soll eine Konstante im Hauptprogramm sein, die Funktion pnorm soll aber beliebige Dimension zulassen. Testen Sie Ihr Programm mit
// verschiedenen Werten fur ¨ p bei festem Vektor x. Was beobachten Sie fur ¨ p → ∞? Speichern Sie den
// Source-Code unter pnorm.c in das Verzeichnis serie05.
