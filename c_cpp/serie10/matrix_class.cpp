
#include <iostream>
#include <vector>
#include <cmath>
using std::vector;
#include "Vector.cpp"
class Matrix {
private:
 vector<vector<double> > coeff;
 
public:
 Matrix(int n=0, int m=0, double init=0);
 double get(int i, int j);
 int getN();
 int getM();

};
Matrix::Matrix(int n, int m, double init) : coeff(n,vector<double>(m, init)) {}




int Matrix::getN(){
 return coeff.size();
}

int Matrix::getM(){
 if(getN()==0){
 return 0;
 }
 return coeff[0].size();
}

double Matrix::get(int i,int j) {
 double tmp;
 try{
 if(i<0 || i>getN() || j<0 || j>getM()){ 
 throw i;
 }else{
 return coeff[i][j];
 }
 }
 catch(int n){
 std::cout << "Warning: accessing out of bounds element, returning zero";
 return 0;
 } 
}
Vector matrixVectorProd(Matrix M, Vector x){
 Vector result(M.getN(),0);
 for(int i=0; i<M.getN(); ++i){
 double tmp=0;
 for(int j=0; j<M.getM(); ++j){
 tmp += M.get(i,j)*x.get(j);
 }
 result.set(i,tmp);
 }

 return result;
}

Vector Matrix ::  MultiplyvectorRight(Vector x){
    vector v((int) (x.size()) );
        for (int i = 0; i < coeff.size();i++){
        v[i] = scalarProd(getRow(i),x);
    }
    return v;
};


int main(){
 Matrix M(4,5,1);
 Vector x(5,1);
 Vector y = matrixVectorProd(M,x);
 std::cout << "M(3,3) = " << M.get(3,3) << ", M(3,4) = " << M.get(3,4) <<std::endl;
 for(int i=0;i<y.size();++i){
 std::cout << y.get(i) << " ";
 }
 std::cout << ")" << std::endl;
 return 0;
}
