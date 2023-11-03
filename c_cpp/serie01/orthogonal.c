#include <stdio.h>

int main(){
double a1,a2,b1,b2;
printf("a1 = ");
scanf("%lf,",&a1);
printf("a2 = ");
scanf("%lf,",&a2);
printf("b1 = ");
scanf("%lf,",&b1);
printf("b2 = ");
scanf("%lf,",&b2);

double coordinate1 = ( (a1 * b1 + a2 * b2) * b1 )/(b1 * b1 + b2 * b2);
double coordinate2 = ((a1 * b1 + a2 * b2) * b2)/(b1 * b1 + b2 * b2);

printf("projektion = (%f,%f)",coordinate1,coordinate2);

}

// Aufgabe 1.6. Sei zwei Vektoren a = (a1, a2), b = (b1, b2) ∈ R
// 2 mit (b1, b2) 6= (0, 0) gegeben. Die
// Orthogonalprojektion von a auf b ist der Vektor

// Schreiben Sie ein aufrufendes Hauptprogramm, in dem a1, a2, b1, b2 uber die Tastatur eingelesen wer- ¨
// den und die Orthogonalprojektion von a auf b ausgegeben wird. Speichern Sie den Source-Code unter
// orthogonalprojection.c in das Verzeichnis serie01.