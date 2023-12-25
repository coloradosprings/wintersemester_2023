#include <iostream>
#include <math.h>
bool  findZero(int* a, int n, int* p){
    int i = 0;
    for(i=0;i < n;i++){
        if(a[i] == 0){
            p = &a[i];

            return true;
        }
    }
    return false;
}
bool  findZero(double* a, double n, double* p, double Tolerance = 0){
    int i = 0;
    for(i=0;i < n;i++){
        if(a[i] == 0 || fabs(a[i]) < Tolerance){
            p = &a[i];
            
            return true;
        }
    }
    return false;
}
int main(){
    int v[4] = {2,1,0,2};
    int* p;
    findZero(v,4,p);
    std::cout << *p;

}


// Aufgabe 8.6. Schreiben Sie eine Funktion bool findZero(int* a, int n, int* p) welche, fur ein ¨
// gegebenes Array a = (a1, . . . , an) der L¨ange n, nach dem ersten Index 0 ≤ p < n sucht, sodass ap = 0 ist.
// Falls p gefunden wird, soll es durch Call-by-Reference mit dem dritten Parameter zuruckgegeben werden ¨
// und die Funktion selbst soll true zuruckgeben. Andernfalls gibt die Funktion ¨ false zuruck. ¨ Uberladen ¨
// Sie die Funktion, damit sie auch mit double Arrays funktioniert. Die uberladene Funktion hat einen ¨
// zus¨atzlichen optionalen Input double Tolerance und ai gilt als Null, wenn |ai
// | <Tolerance. Schreiben
// Sie ferner ein aufrufendes Hauptprogramm, in dem a uber die Tastatur eingelesen und das Ergebnis ¨
// ausgegeben werden