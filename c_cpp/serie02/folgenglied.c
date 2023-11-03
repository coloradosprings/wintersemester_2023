#include <stdio.h>
#include <math.h>
int main(){
    int n;
    printf("n = ");
    scanf("%d",&n);
    double a_n = pow(-1, n) / (n + 2);
    printf("%f",a_n);
}



// * Schreiben Sie ein Programm, welches fur gegebenes ¨ n ∈ N (von der Tastatur einzulesen)
// das Folgenglied an := (−1)n/(n+2) bestimmt und am Bildschirm ausgibt. Speichern Sie den Source-Code
// unter folgenglied.c in das Verzeichnis serie02.
