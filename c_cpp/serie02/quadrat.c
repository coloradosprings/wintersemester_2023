#include <stdio.h>
#include <math.h>
int main(){
    double x,y,L;
    printf("L = ");
    scanf("%lf",&L);
    printf("x = ");
    scanf("%lf",&x);
    printf("y = ");
    scanf("%lf",&y);
    double norm = abs((L/2) - x) + abs((L/2) - y);
    if  (norm < L){
        printf("innen");
    }else{
          if  (norm = L){
                printf("Rand");
            }else{
                printf("aussen");
    }
}
}

//     Aufgabe 2.2. * Gegeben sei das Quadrat mit Seitenl¨ange L > 0 und Ecken (0, 0), (L, 0), (L, L) und
// (0, L). Gegeben sei ferner ein Punkt (x, y) ∈ R
// 2
// . Schreiben Sie ein Programm, welches die Zahlen L > 0
// und x, y ∈ R von der Tastatur einliest und danach in der Shell ausgibt, wie der Punkt (x, y) im Verh¨altnis
// zum Quadrat liegt. Ein Punkt kann innerhalb des Quadrats, auf dem Rand oder außerhalb des Quadrats
// liegen. Speichern Sie den Source-Code unter locate.c in das Verzeichnis serie02.

 