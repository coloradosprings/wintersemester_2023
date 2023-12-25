#include <stdio.h>
#include <math.h>
int* dec2float(double N,int M,int* vector){
    // while 
    double e_1;
    double e = 2;
    int i;
    while(0){
        e_1 = e * 2;
        if(e_1 > N & e < N){
            e = 1/2 * e;
            M = 0;
            break;
        }
        e = e_1;
    
    }
    // z  = pow(2,e);
    double product = 1;
    double sum = 0;
    double z;
    z = N - e;

    for(i = 1;i < M;i++){
        e *= 1./2;

        if (z - e  >= 0){
            vector[i]= 1;
            z -= e;

        }
        else{
            vector[i] = 0;
        }
        
    }
    return vector;
}


int main()
{   
    double N;
    int M;
    
    printf("N");
    scanf("%lf",&N);
    printf("M");
    scanf("%d",&M);
    int vector[M];
    dec2float(N,M,vector);

}



// Aufgabe 8.3. Schreiben Sie eine Funktion dec2float, die fur eine gegebene Dezimalzahl ¨ x ∈ R>0 und
// eine Mantissenl¨ange M ∈ N die Ziffern a1, . . . , aM ∈ {0, 1} und den Exponenten e ∈ Z der normalisierten
// Gleitkommadarstellung (d.h. a1 = 1) berechnet und zuruckgibt. Schreiben Sie ein aufrufendes Haupt- ¨
// programm, in dem x eingelesen und die Gleitkommadarstellung von x ausgegeben wird. Speichern Sie
// den Source-Code unter dec2float.c in das Verzeichnis serie08.