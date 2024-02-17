// 1
 Vector MultiplyvectorRight(Vector x);
//  2;
const Vector& getColumn(int i);
// 3;
Vector  MultiplyvectorLeft(Vector  x);


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

Matrix :: Matrix(int n, int m, double init){coeff(n,Vector(m, init))};

Matrix :: const Vector& getColumn(int i){
    vector v(coeff.size());
    for (int i; i < coeff.size();i++){
        v[i] = getRowNonConst(int i)[i];
    }
    return const v
};

Matrix ::  Vector MultiplyvectorRight(Vector x){
    vector v(x.size());
        for (int i; i < coeff.size();i++){
        v[i] = scalarProd(getRow(int i),x);
    }
    return v
};//Ax = [vx_1,vx_2]

Matrix :: Vector MultiplyvectorLeft(Vector x){
    vector v(x.size())
        for (int i; i < coeff.size();i++){
        v[i] = scalarProd(getColumn(int i),x);
    }
    return v
};//Ax = [vx_1,vx_2]

double& Vector::get(int k){
 return coeff[k];
}


double scalarProd(Vector x, Vector y){
 double tmp=0;
 for(int i=0;i<x.size();++i){
 tmp += x[i]*y[i];
 }
 return tmp;
}
