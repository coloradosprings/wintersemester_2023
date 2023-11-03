#include <stdio.h>
double pythagoras(int k) {
    printf("%d",k);
    double a,b,c;
    int m,n;
    m = 0;
    n = 0;
    // m > n > 0
    while(++m < k){
        while(++n < m){
            a = m*m - n * n;
            b = 2 *m*n;
            c = m*m + n*n;
            if(c > k){
                break;
            }
            printf("(%f,%f,%f)",a,b,c);
        }
        n = 0;
    }
}
int main(){
    int k;
    printf("k\n");
    scanf("%d",&k);
    printf("%d",pythagoras(k));  
    
}






// Aufgabe 4.7. Ein Tripel (x, y, z) ∈ N
// 3 naturlicher Zahlen heißt ¨ pythagor¨aisches Zahlentripel, falls
//  gilt. Das wohl bekannteste Beispiel ist (3, 4, 5). Offensichtlich gelten z > max{x, y} sowie x 6=
// y und ohne Beschr¨ankung der Allgemeinheit ferner x < y. Schreiben Sie eine void-Funktion pythagoras,
// die zu gegebener Schranke n ∈ N alle pythagor¨aischen Zahlentripel mit x < y < z ≤ n bestimmt und
// ausgibt. Schreiben Sie ferner ein aufrufendes Hauptprogramm, in dem die Schranke n eingelesen und
// pythagoras aufgerufen wird. Speichern Sie den Source-Code unter pythagoras.c in das Verzeichnis
// serie04.