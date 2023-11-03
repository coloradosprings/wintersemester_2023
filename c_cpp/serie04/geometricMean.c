#include <stdio.h>
#include <math.h>
double geometricMean(double x[3]) {
    int i;
    i = 0;
    double product = 1;
    while(i ++ < 2){
        product *= x[i];
        // printf("%f",x[i]);
    }
    // printf("%f",pow(9,-3));
    return cbrt(product);
}
int main(){
    double x[3];
    printf("x_0 = ");
    scanf("%lf",&x[0]);

    // read x1
    printf("x_1 = ");
    scanf("%lf",&x[1]);

    // read x2
    printf("x_2 = ");
    scanf("%lf",&x[2]);
    printf("%f",geometricMean(x));

    
}






// Aufgabe 4.8. Schreiben Sie eine Funktion double geometricMean(double x[]), die von einem gegebenem Vektor x ∈ R
// 3
// ≥0 den geometrischen Mittelwert
// xgeom =
// √3 x1x2x3
// berechnet und zuruckgibt. Sie d ¨ urfen die Funktion ¨ pow aus der Bibliothek math.h verwenden. Schreiben
// Sie ferner ein aufrufendes Hauptprogramm, das x ∈ R
// 3 uber die Tastatur einliest und den geometri- ¨
// schen Mittelwert berechnet und ausgibt. Speichern Sie den Source-Code unter geometricMean.c in das
// Verzeichnis serie04.