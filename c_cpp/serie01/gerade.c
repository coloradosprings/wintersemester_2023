#include <stdio.h>

int main(){
    double p = 0;
    double a = 0;
    printf("koeffizienten in  y = mx + q\nm =");
    scanf("%lf",&a);
    printf("p = ");
    scanf( "%lf" ,&p);
    
    double x = (-p/a);

    printf("%lf",x);

}
// Wir betrachten das ebene (2-dimensionale) kartesische Koordinatensystem. Eine Gerade,
// die nicht parallel zu den Koordinatenachsen x = 0 und y = 0 ist, kann durch die Gleichung y = mx + q
// mit m ∈ R\{0} und q ∈ R dargestellt werden. Schreiben Sie ein Programm, das m und q von der Tastatur
// einliest, die Schnittstelle der Gerade mit der x-Achse berechnet und die Koordinaten der Schnittstelle
// am Bildschirm ausgibt. Speichern Sie den Source-Code unter gerade.c in das Verzeichnis serie01.
//     0 = mx + p ; -p/m = x
// %m
    