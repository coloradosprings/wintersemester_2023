#include <iostream>
#include <vector>
#include <cmath>
using std::vector;
class Vector {
private:
 vector<double> coeff;
 
public:
 Vector(int dim=0, double init=0);
 double& get(int k);
 int size();
 void set(int k, double val); 
//  double norm();
};
Vector::Vector(int dim, double init): coeff(dim,init){}
double& Vector::get(int k){
 return coeff[k];
}

int Vector::size(){
 return coeff.size();
}
void Vector::set(int k, double val) {
 double tmp;
 try{
 if(k<0 || k>coeff.size()){ 
 throw k;
 }else{
 coeff[k] = val;
 }
 }
 catch(int n){

 } 
}