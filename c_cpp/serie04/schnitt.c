#include <stdio.h>
#include <math.h>
double cauchy(double k) {
    double a2,a1,a,n;
    float b;
    a2 = 1;
    a1 = 1;
    a = a2 + a1;
    b = a / a1 - a1 / a2;
    n = 0;

    while(fabs(b) > 1/k){
        
        a2 = a1;
        a1 = a;
        a = a2 + a1;
        b = a / a1 - a1 / a2;

        n+= 1;
        // printf("%f",n);
        // printf("b%f",b);
    }
    
    return n;
}
int main(){
    double k;
    printf("k\n");
    scanf("%lf",&k);
    printf("%f",cauchy(k));  
}





//      Die Quotientenfolge (an+1/an)n∈N zur Fibonacci-Folge (an)n∈N,
// a0 := 1, a1 := 1, an := an−1 + an−2 fur ¨ n ≥ 2,
// konvergiert gegen den goldenen Schnitt (1 + √
// 5)/2. Insbesondere konvergiert die Differenz


// gegen Null. Schreiben Sie eine nicht-rekursive Funktion cauchy, die zu gegebenem k ∈ N die kleinste
// Zahl n ∈ N mit |bn| ≤ 1/k zuruckgibt. Schreiben Sie ferner ein aufrufendes Hauptprogramm, das die ¨
// Zahl k ∈ N einliest und den zugeh¨origen Index n ∈ N ausgibt. Wie haben Sie Ihren Code auf Korrektheit
// getestet? Speichern Sie den Source-Code unter goldenerSchnitt.c in das Verzeichnis serie04.