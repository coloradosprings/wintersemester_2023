// Aufgabe 3.1. * Schreiben Sie eine void-Funktion quadrant, die fur einen Punkt ( ¨ x, y) ∈ R
// 2 ausgibt, ob
// (x, y) auf einer der Achsen des Koordinatensystems liegt. Falls nicht, soll ausgegeben werden, in welchem
// Quadranten (x, y) liegt. Schreiben Sie ferner ein Hauptprogramm, in dem x, y ∈ R eingelesen werden.
// Speichern Sie den Source-Code unter quadrant.c in das Verzeichnis serie03.
#include <stdio.h>
void quadrant(double x, double y) {
    if(x > 0){
        if(y < 0){
            printf("zweiter quadrant");
            
        }else{
            printf("erster quadrant");
        }
    }else{
        if(y < 0){
            printf("dritter quadrant");
            
        }else{
            printf("vierter quadrant");
        }
    }
}

int main(){
    double x;
    double y;
    printf("x\n");
    scanf("%lf",&x);
    printf("y\n");
    scanf("%lf",&y);
    quadrant(x,y);

}
    