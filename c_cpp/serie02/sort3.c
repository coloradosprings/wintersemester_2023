#include <stdio.h>
#include <math.h>
int main(){
    double a,b,c;
    double M,y,m;
    printf("a = ");
    scanf("%lf",&a);
    printf("b = ");
    scanf("%lf",&b);
    printf("c = ");
    scanf("%lf",&c);

    if (b > a && c > a) {
        m = a;
        if(b > c){
            M = b;
            y = c;
        }else{
            M = c;
            y = b;
        }
    }else if (a > b && c > b) {
        
        m = b;
        if(a > c){
            M = a;
            y = c;
        }else{
            M = c;
            y = a;
        }
    } else  {
        m = c;
        if(a > b){
            M = a;
            y = b;
        }else{
            M = b;
            y = a;
        }
    }
    printf("(%f,%f,%f)",M,y,m);
}



// Aufgabe 2.5. Schreiben Sie ein Programm, welches drei Zahlen x, y, z ∈ R von der Tastatur einliest
// und diese Zahlen absteigend sortiert ausgibt, d.h. zuerst das Maximum max{x, y, z} und zuletzt das
// Minimum min{x, y, z}. Speichern Sie den Source-Code unter sort3.c in das Verzeichnis serie02