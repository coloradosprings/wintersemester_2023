#include <stdio.h>
#include <math.h>
double Folgenglied(int k) {
    double a_k;
    a_k = pow(-1,k) / (sqrt(k) + 2);
    return a_k;
}
int main(){
    int k;
    printf("k\n");
    scanf("%d",&k);
    printf("%d",Folgenglied(k));  
}



// Aufgabe 4.3. Schreiben Sie eine Funktion double folgenglied(int n), die fur gegebenes ¨ n ∈ N das
// Folgenglied an := (−1)n/(
// √
// n + 2) berechnet und zuruckgibt. Schreiben Sie ferner ein Programm, das ¨
// n ∈ N von der Tastatur einliest, die Funktion aufruft und das Folgenglied an am Bildschirm ausgibt.
// Sie durfen die Bibliotek ¨ math.h verwended. Speichern Sie den Source-Code unter folgenglied.c in das
// Verzeichnis serie04.
