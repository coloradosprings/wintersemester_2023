#include <stdio.h>
#include <math.h>

void printVector(double output[], int dim) {
 int j = 0;
 for (j=0; j<dim; j++) {
 printf("%f ",output[j]);
 }
 printf("\n");
}

double Sort(double x[], int n){
    int i,k;
    printVector(x,n);
    double b = 0;
    int j;
    for (j=0; j<n; j++) {
        k = n - j - 1;
        // printf(" k %d k",k);
    
        for (i = 0;i < k;i++) {
            if(x[i] < x[i + 1]){
                    b = x[i];
                    x[i] = x[i + 1];
                    x[i + 1] = b;
                    
                }
        }
    }
    printVector(x,n);
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
    
    printf("%f",Sort(x,k));  
    return 0;
    
}

// Aufgabe 6.4. Schreiben Sie eine Funktion void bubbleSort(double[] x, int n), die einen Vektor
// x ∈ R
// n mittels des Bubblesort-Algorithmus aufsteigend sortiert: Beginnend mit j = 1 vergleicht man
// aufsteigend jedes Element xj eines Arrays mit seinem Nachfolger xj+1 und – falls notwendig, d.h. falls
// xj > xj+1 – vertauscht die beiden. Nach dem ersten Durchlauf muss zumindest das letzte Element
// bereits am richtigen Platz sein. Der n¨achste Durchlauf muss also nur noch bis zur vorletzten Stelle
// gehen, usw. Wie viele geschachtelte Schleifen braucht dieses Vorgehen? Schreiben Sie ein aufrufendes
// Hauptprogramm, in dem die Vektorl¨ange n und der Vektor x ∈ R
// n eingelesen werden und die zwei
// Vektoren (der Input Vektor und das Ergebnis der Funktion) ausgegeben werden. Speichern Sie den
// Source-Code unter bubblesort.c in das Verzeichnis serie06.
