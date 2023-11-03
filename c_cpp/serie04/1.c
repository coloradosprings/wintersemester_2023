#include <stdio.h>
double quadrant(double x, double y) {
    while(){

    }
}
int main(){
    double x;
    double y;
    printf("x\n");
    scanf("%lf",&x);
    printf("y\n");
    scanf("%lf",&y);
    
}





//      Die Quotientenfolge (an+1/an)n∈N zur Fibonacci-Folge (an)n∈N,
// a0 := 1, a1 := 1, an := an−1 + an−2 fur ¨ n ≥ 2,
// konvergiert gegen den goldenen Schnitt (1 + √
// 5)/2. Insbesondere konvergiert die Differenz
// bn :=
// an+1
// an
// −
// an
// an−1
// gegen Null. Schreiben Sie eine nicht-rekursive Funktion cauchy, die zu gegebenem k ∈ N die kleinste
// Zahl n ∈ N mit |bn| ≤ 1/k zuruckgibt. Schreiben Sie ferner ein aufrufendes Hauptprogramm, das die ¨
// Zahl k ∈ N einliest und den zugeh¨origen Index n ∈ N ausgibt. Wie haben Sie Ihren Code auf Korrektheit
// getestet? Speichern Sie den Source-Code unter goldenerSchnitt.c in das Verzeichnis serie04.