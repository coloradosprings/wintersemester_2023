#include <stdio.h>


int main(){
    double x;
    printf("x = ");
    scanf("%lf",&x);
    int k = (int)(x);
    // printf("%d",(int)(x));

    double a = (x - k);

    if(x >= 0){
    if( (x - k) >= 0.5){
        printf("%d",k + 1);
    }else{
        printf("%d",k);
    }}
    else{
        if( (x - k) <= -0.5){
        printf("%d",k - 1);
    }else{
        printf("%d",k);

}}
}
// Aufgabe 2.6. Schreiben Sie ein Programm, welches eine Zahl x ∈ R einliest, und die ganze Zahl n ∈ Z
// ausgibt, die x am n¨achsten liegt. Falls x genau in der Mitte zwischen zwei ganzen Zahlen liegt, werde die
// gr¨oßere zuruckgeliefert. Speichern Sie den Source-Code unter ¨ rundung.c in das Verzeichnis serie02.