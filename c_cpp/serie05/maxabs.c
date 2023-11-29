#include <stdio.h>
#include <math.h>

double maxabs(double x[], int k) {
    int i;
    double M = 0;
    for (i = 0;i < k;i++) {
        if(fabs(x[i]) > fabs(M)){
            M = (x[i]);
            printf("%d",i);
        }
    }
    return M;
}
int main(){
    int i;
    int k = 4;
    double x[k];

    printf("maxabs\n");

    for (i = 0;i < k;i++) {

        printf("%d komponente\n",i);
        scanf("%lf",&x[i]);

    }
    printf("%f",maxabs(x,k));  
    return 0;
    
}






// Aufgabe 5.3. Schreiben Sie eine Funktion double maxabs(double[] x, int n), die von einem gegebenem Vektor x ∈ R
// n das erste Element xj mit maximalem Betrag berechnet und zuruckgibt, d.h. ¨
// |xj | = max{|xi
// | : i = 1, . . . , n} und fur alle ¨ xi mit |xi
// | = |xj | gilt i ≥ j. Schreiben Sie ferner ein aufrufendes Hauptprogramm, das den Vektor x einliest und das Ergebnis von maxabs ausgibt. Die L¨ange des
// Vektors soll eine Konstante im Hauptprogramm sein, die Funktion maxabs ist aber fur beliebige L ¨ ¨ange zu
// implementieren. Um den Absolutbetrag einer reellen Zahl zu bestimmen, darf die Funktion fabs aus der
// Mathematikbibliothek verwendet werden. Wie haben Sie Ihren Code auf Korrektheit getestet? Speichern
// Sie den Source-Code unter maxabs.c in das Verzeichnis serie05
