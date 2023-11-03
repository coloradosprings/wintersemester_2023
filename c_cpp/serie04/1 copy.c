#include <stdio.h>
double cauchy(int k) {
    int a2,a1,a,b;
    a2 = 1;
    a1 = 1;
    a = a2 + a1;
    b = a / a1 - a1 / a2;
    while(b > 1/k){
        a2 = a1;
        a1 = a;
        a = a2 + a1;
        b = a / a1 - a1 / a2;

    }
    return b;
}
int main(){
    int k;
    printf("k\n");
    scanf("%d",&k);
    printf("%d",cauchy(k));  
}





//      Die Quotientenfolge (an+1/an)n∈N zur Fibonacci-Folge (an)n∈N,
// a0 := 1, a1 := 1, an := an−1 + an−2 fur ¨ n ≥ 2,
// konvergiert gegen den goldenen Schnitt (1 + √
// 5)/2. Insbesondere konvergiert die Differenz


// gegen Null. Schreiben Sie eine nicht-rekursive Funktion cauchy, die zu gegebenem k ∈ N die kleinste
// Zahl n ∈ N mit |bn| ≤ 1/k zuruckgibt. Schreiben Sie ferner ein aufrufendes Hauptprogramm, das die ¨
// Zahl k ∈ N einliest und den zugeh¨origen Index n ∈ N ausgibt. Wie haben Sie Ihren Code auf Korrektheit
// getestet? Speichern Sie den Source-Code unter goldenerSchnitt.c in das Verzeichnis serie04.