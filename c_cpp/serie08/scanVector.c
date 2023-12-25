#include <stdio.h>
#include <assert.h>
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
int main() {
 double* x;
 int j = 0;
 int dim = 0;
 
 
 printf("dim = ");
 scanf("%d",&dim);
 
 x = scanVector(dim);
 for (j=0; j<dim; ++j) {
 printf("x[%d] = %f\n",j,x[j]);
 }
}