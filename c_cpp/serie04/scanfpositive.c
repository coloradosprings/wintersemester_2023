#include <stdio.h>
double scanfpositive() {
    double y;
    // printf("positiven Zahl τ > 0\n");
    // scanf("%lf",&y);
    do{
        printf("τ > 0 τ:");
        scanf("%lf",&y);

    }while(y <= 0);
    return y;
}
int main(){
    scanfpositive();
}






// Aufgabe 4.5. Schreiben Sie eine Funktion double scanfpositive(), die vom Benutzer die Eingabe
// einer positiven Zahl τ > 0 verlangt und diese dann zuruckgibt. Die Eingabe soll solange wiederholt ¨
// werden, bis die eingegebene Zahl τ ∈ R strikt positiv ist, d.h. bei Eingabe einer Zahl τ ≤ 0 wird
// der Benutzer zu erneuter Eingabe aufgefordert. Schreibens Sie weiters ein aufrufendes Hauptprogramm.
// Speichern Sie den Source-Code unter scanfpositive.c in das Verzeichnis serie04.