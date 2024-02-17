#include "Complex.cpp"
#include <iostream>
#include <vector>
using std::vector;
int main(){
    // Complex a(2,3);
    // Complex b(3,3);
    // Complex c =  a * b ;
    // std::vector<std::vector<double> > coeff; 

}
// swap(&x, &y);
// void swap(int& rx, int& ry)
double& vector::get(int k){
 return coeff[k];
}


double scalarProd(vector x, vector y){
 double tmp=0;
 for(int i=0;i<x.size();++i){
 tmp += x.get(i)*y.get(i);
 }
 return tmp;
}