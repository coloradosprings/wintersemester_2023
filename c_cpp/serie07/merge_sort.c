#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "merge.c"
#include <assert.h>
double* mergeSort(double* x, int n){
    assert(n > 0);
    double k,j;
    if(n < 2){
        return x;
    }
    k = (int) floor(n/2.);
    j = (int) n - k;
    double arr1[(int)(j)];
    double arr2[(int) (k)];
    int i = 0;
    for(i = 0;i < k;i++){
        arr1[i] = x[i];
    }
    i = 0;
    for(i = j;j < n;i++){
        arr2[i] = x[i];
    }
    double* l;
    double* r;
    l = mergeSort(arr2,k);
    r = mergeSort(arr1,j);

    return merge(&arr1[0],j,&arr2[0],i);

}

double* scanVector(int length) {
    assert(length > 0);
    double vector[length];
    int j = 0;
    for (j=0; j<length; ++j) {
        vector[j] = 0;
        printf("vector[%d] = ",j);
        scanf("%lf",&vector[j]);
    }
    return vector;
    }

int main(){
    int n;
    n = 5;
    double* v = scanVector(n);
    mergeSort(v,n);

    
}








// function merge_sort(list x)
//     if length(x) ≤ 1 then
//         return x      // Kurzes x ist trivialerweise sortiert.
//     var l := empty list
//     var r := empty list
//     var nx := length(x)−1
//     // Teile x in die zwei Hälften l und r ...
//     for i := 0 to floor(nx/2) do
//         append x[i] to l
//     for i := floor(nx/2)+1 to nx do
//         append x[i] to r
//     // ... und sortiere beide (einzeln).
//     l := merge_sort(l)
//     r := merge_sort(r)
//     // Verschmelze die sortierten Hälften.
//     return merge(l, r)