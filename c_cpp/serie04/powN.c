#include <stdio.h>
double powN(double x, int k) {
    if(x == 0){
        if(k>= 0){
            return 0;
        }else{
            return 0.0/0.0;
        }
    }
    if(k== 0){
        return 1;
    }else if(k > 0 )
    while(--k > 0){
        x *= x;
        
    }else {
        double y;
        y = 1/x;

        while(++k <= 1){
            x *= y;
        }
    }
    return x;

}
int main(){
    double x;
    int k;
    printf("x\n");
    scanf("%lf",&x);
    printf("k\n");
    scanf("%d",&k);
    printf("%f",powN(x,k));
    return 0;
    
}






// Aufgabe 4.2. * Schreiben Sie eine nicht-rekursive Funktion double powN(double x, int n), welche
// x
// n fur einen ganzzahligen Exponenten ¨ n ∈ Z berechnet. Es gilt x
// 0 = 1 fur alle ¨ x ∈ R \ {0} und fur ¨
// n < 0 gilt x
// n = (1/x)
// −n. Weiters gilt 0n = 0 fur ¨ n > 0. Die Potenz 0n ist fur ¨ n ≤ 0 nicht definiert. Die
// Funktion soll in diesem Fall den Wert 0.0/0.0 zuruckgeben. F ¨ ur diese Aufgabe d ¨ urfen Sie die Funktion ¨
// pow aus der Mathematikbibliothek nicht verwenden. Speichern Sie den Source-Code unter powN.c in das
// Verzeichnis serie04.
