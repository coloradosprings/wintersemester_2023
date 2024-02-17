// Aufgabe 10.2. * Erweitern Sie die Klasse Matrix (Skriptum, Folie 53) um die Methode vector
// MultiplyvectorRight(vector x), welche fur eine gegebene Matrix ¨ A ∈ R
// m×n und einen Vektor x ∈ R
// n
// das Matrix-Vektor-Produkt Ax ∈ R
// m, wo (Ax)i =
// Pn
// j=1 Ai,jxj fur alle ¨ i = 1, . . . , m, berechnet.
// Implementieren Sie die Methode const vector& getColumn(int i), welche die i-te Spalte A zuruckgibt. ¨
// Implementieren Sie die Methode vector MultiplyvectorRight(vector x), welche fur einen gegebenen ¨
// Vektor y ∈ R
// m, das Matrix-Vektor-Produkt y
// T A ∈ R
// n, wo (y
// T A)i =
// Pm
// j=1 yjAj,i fur alle ¨ i = 1, . . . , n,
// berechnet.
// Verwenden Sie const und Referenzen wo notig. Verwenden Sie (read-only) Referenzen wo es sinnvoll ist!


#include <iostream>
#include <vector>
#include <cmath>
#include "Vector.cpp"
using std::vector;

double scalarProd(Vector x, Vector y);

class Matrix {
private:
 vector<Vector > coeff; 
 
public:
 Matrix(int n=0, int m=0, double init=0);
 const Vector& getRow(int i); //Methoden aus dem Skript
 Vector& getRowNonConst(int i);
//  double get(int i, int j);


// 1
 Vector MultiplyvectorRight(Vector x);
//  2;
const Vector& getColumn(int i);
// 3;
Vector  MultiplyvectorLeft(Vector  x);

};



const Vector& Matrix::getRow(int i){
 return coeff[i];
};
Vector& Matrix::getRowNonConst(int i){
 return coeff[i];
};



int main(){
   
    return 0;
};

Matrix::Matrix(int n, int m, double init) : coeff(n,vector<double>(m, init)) {}
 //nochmal nachsehen

const Vector& Matrix ::  getColumn(int i){
    vector v(coeff.size());
    for (int i; i < coeff.size();i++){
        v[i] = getRowNonConst(i)[i];
    }
    return const v
};

Vector Matrix ::  MultiplyvectorRight(Vector x){
    vector v((int) (x.size()) );
        for (int i = 0; i < coeff.size();i++){
        v[i] = scalarProd(getRow(i),x);
    }
    return v;
};//Ax = [vx_1,vx_2]

Vector Matrix ::  MultiplyvectorLeft(Vector x){
    Vector v((int)( x.size()));
        for (int i = 0; i < coeff.size();i++){
        v[i] = scalarProd(getColumn(int i),x);
    }
    return v;
};//Ax = [vx_1,vx_2]

// double& vector::get(int k){
//  return coeff[k];
// }


double scalarProd(Vector x, Vector y){
 double tmp=0;
 for(int i=0;i<x.size();++i){
 tmp += x.get(i)*y.get(i);
 }
 return tmp;
}
