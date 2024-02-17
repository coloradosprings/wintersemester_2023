
#include <stdio.h>

double scalarProduct(double x[], double y[], int n) {
    int i,j;
    double sum = 0;
    for(i = 0; i < n; i++){
        sum += (x[i] * y[i]);
    }
    return sum;
}
int main(){
    int i;
    int n = 2;
    double x[n];
    double y[n];

    for (i = 0;i < n;i++) {

        printf("%d komponente x\n",i);
        scanf("%lf",&x[i]);

    }
    for (i = 0;i < n;i++) {

        printf("%d komponente y\n",i);
        scanf("%lf",&y[i]);

    }
    printf("%f",scalarProduct(x,y,n)); 
    return 0;
    
}








// Aufgabe 5.7. Schreiben Sie eine Funktion double scalarProduct(double x[], double y[], int
// n), die zu gegebenen Vektoren x, y ∈ R
// n das Skalarprodukt x·y := Pn
// j=1 xjyj berechnet. Die L¨ange n ∈ N
// soll eine Konstante im Hauptprogramm sein, die Funktion skalarprodukt ist aber fur beliebige L ¨ ¨angen
// zu programmieren. Schreiben Sie ferner ein aufrufendes Hauptprogramm, in dem x, y ∈ R
// n eingelesen
// werden und die Funktion aufgerufen wird. Speichern Sie den Source-Code unter skalarprodukt.c in
// das Verzeichnis serie05.