#include <iostream>

#include <math.h>
#include <cassert>
void printVector(int* vector, int n);

int* dec2bin(int* N, int n){
    double r = n;
    int i;
    // double* vector = malloc(n*sizeof(int));

    int* index = N;
    for(i= 15;i>0;i--){
        if ( r / pow(2,i) >= 1 ){
            *(N + i) = 1;
            // std::cout << "k";
            r = r - pow(2,i);
            if(r == 1){
                break;
            }
            

        }else{
            *(N + i) = 0;
        }
        *index += 1;
    }

    return N;
} 

int main(){
    int n;
    int k = 16;
    std::cout << "Please enter an integer value  0 < N < 65535: ";
    std::cin >> n;
    int vector[k];
    dec2bin(vector,n);
    printVector(vector,16);
    return 0;

}
// double* scanVector(int n) {
//  int j = 0;
//  double* vector = NULL;
//  assert(n > 0);
//  vector = malloc(n*sizeof(double));
//  assert(vector != NULL);
 
//  for (j=0; j<n; ++j) {
//  printf("vector[%d] = ",j);
//  scanf("%lf",&vector[j]);
//  }
//  return vector;
// }
void printVector(int* vector, int n) {
 int j = 0;
 assert(vector != NULL);
 assert(n > 0);
 for (j=0; j<n; ++j) {
 printf("%d: %d\n",j,vector[j]);
 }
}

// Aufgabe 8.1. * Schreiben Sie eine Funktion int* dec2bin(int N, int* n), die zu einer naturlichen ¨
// Zahl 0 ≤ N < 65535 die Bin¨ardarstellung berechnet und zuruckgibt. Es sollen die Koeffizienten ¨ ai ∈
// {0, 1} fur ¨ i = 0, . . . , n ermittelt werden, sodass N =
// Pn−1
// i=0 ai2
// i gilt (n ≤ 16). Die Funktion liefere die Bin¨ardarstellung von N ohne fuhrende Nullen. Beachten Sie, dass auch die L ¨ ¨ange des Vektors
// ”
// zuruckgegeben“ werden muss. Beispielsweise gebe die Funktion f ¨ ur ¨ N = 77 den Vektor 1 0 0 1 1 0 1
// zuruck. Schreiben Sie ferner ein aufrufendes Hauptprogramm, in dem ¨ N eingelesen und die entsprechende
// Bin¨ardarstellung ausgegeben wird. Speichern Sie den Source-Code unter dec2bin.c in das Verzeichnis
// serie08.
