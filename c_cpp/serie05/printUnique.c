#include <stdio.h>
#include <math.h>

double printUnique(double x[], int k) {
    int j,i;
    double M = 0;
    for (i = 0;i < k;i++) {
        for (j = 0;j < k;j++) {
            
            if(x[i] == x[j] & i != j){

                break;}
            // printf("%d,%d",i,j);
            if(j == (k - 1)){
                printf("%f\n",x[i]);}    
        }
        }
        
        
    
    return M;
}
int main(){
    int i;
    int k = 4;
    double x[k];

    printf("printUnique\n");

    for (i = 0;i < k;i++) {

        printf("%d komponente\n",i);
        scanf("%lf",&x[i]);

    }
    printf("%f",printUnique(x,k));  
    return 0;
    
}






// Aufgabe 5.5. Schreiben Sie eine void-Funktion printUnique, die von einem gegebenem Vektor x ∈ R
// n
// alle Elemente, die nur einmal im Vektor vorkommen, am Bildschirm ausgibt. Ferner schreibe man ein
// aufrufendes Hauptprogramm, das den Vektor x einliest und die Funktion aufruft. Die Laenge des Vektors
// soll eine Konstante im Hauptprogramm sein, die Funktion printUnique ist fur beliebige Laenge n zu
// programmieren. Speichern Sie den Source-Code unter printUnique.c in das Verzeichnis serie05.
