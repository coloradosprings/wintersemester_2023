#include <stdio.h>
#include <math.h>

double energy(double x[], int n) {
    int i;
    double sum = 0;
    for (i = 0;i < n;i++) {
        sum += x[i] * x[i] ; //1 zuweisung + 1 operation
    }
    return sum;
}
int main(){
    double p;
    int i;
    int k = 3;
    double x[k];

    for (i = 0;i < k;i++) {

        printf("%d komponente\n",i);
        scanf("%lf",&x[i]); //k zuweisungen

    }
    
    printf("%f",energy(x,k));  
    return 0;
    
}

// Aufgabe 6.1. * Schreiben Sie eine Funktion double energy(double x[], int n), die fur einen ge- ¨
// gebenen Vektor x ∈ R
// j berechnet und zuruckgibt. Schreiben Sie ferner ein ¨
// aufrufendes Hauptprogramm, das den Vektor x einliest und die Energie ausgibt. Die Dimension n ∈ N
// soll eine Konstante im Hauptprogramm sein, die Funktion energy ist fur beliebige Dimension zu pro- ¨
// grammieren. Die Mathematikbibliothek darf nicht verwendet werden. Wie groß ist der Aufwand bei der
// Berechnung von en? Begrunden Sie Ihre Antwort. Falls die Funktion f ¨ ur ¨ n = 103
// eine Laufzeit von 3 Sekunden hat, welche Laufzeit erwarten Sie aufgrund des Aufwands fur ¨ n = 104
// ? Wie haben Sie Ihren Code
// auf Korrektheit getestet? Speichern Sie den Source-Code unter energy.c in das Verzeichnis serie06.