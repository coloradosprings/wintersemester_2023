

#include <iostream>
#include <vector>
#include <cmath>
using std::vector;
#include "Vector.cpp"
class Matrix {
private:
 std::vector<std::vector<double> > coeff;
 
public:
 Matrix(int n=0, int m=0, double init=0);
 const std::vector<double>& getRow(int i);
 std::vector<double>& getRowNonConst(int i);
 double get(int i, int j);

 Vector MultiplyvectorRight(Vector x);
 Vector MultiplyvectorLeft(Vector x);

 int getN();
 int getM();
  const Vector getColumn(int i);
  double frobeniusNorm(int p, int q);
  
};
Matrix::Matrix(int n, int m, double init) : coeff(n,std::vector<double>(m, init)){}

const Vector Matrix::  getColumn(int i){
 Vector result(getM(),0);
    double tmp=0;
        for(int j=0; j<getM(); ++j){
        tmp = get(j,i);
        result.set(i,tmp);
        }
        

 return result;
}


const std::vector<double>& Matrix::getRow(int i){
 return coeff[i];
}

std::vector<double>& Matrix::getRowNonConst(int i){
 return coeff[i];
}


double Matrix::get(int i,int j) {
 return coeff[i][j];
}

int Matrix::getN(){
 return coeff.size();
}

int Matrix::getM(){
 if(getN()==0){
 return 0;
 }
 return coeff[0].size();
}

Vector Matrix ::  MultiplyvectorRight(Vector x){
 Vector result(getM(),0);
    for(int i=0; i<getN(); ++i){
    double tmp=0;
        for(int j=0; j<getM(); ++j){
        tmp += get(i,j)*x.get(j);
        }
        result.set(i,tmp);
    }

 return result;
};

Vector Matrix ::  MultiplyvectorLeft(Vector x){
 Vector result(getN(),0);
    for(int i=0; i<getN(); ++i){
    double tmp=0;
        for(int j=0; j<getM(); ++j){
        tmp += get(j,i)*x.get(j);
        }
        result.set(i,tmp);
    }

 return result;
};

double Matrix::frobeniusNorm(int p, int q){
 double sum = 0;
 double sum_i ;
 for (int i=0; i<getN(); ++i) {
    sum_i = 0;
    for(int j=0;j<getM(); ++j){

        sum = fabs(get(i,j));
        }
    sum += pow(sum_i,((double) (p))/q);
    }
 return pow(sum,1./p);}

int main(){
 Matrix M(4,4,0);
 //const std::vector<double>& row = getRow(0);
 std::vector<double>& row = M.getRowNonConst(0);
 
 row[2]=5; }