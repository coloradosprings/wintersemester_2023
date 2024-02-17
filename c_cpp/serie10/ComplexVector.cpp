#include <iostream>
#include <math.h>
#include "Complex.cpp"
#include <vector>
#include "Vector.cpp"
using std::vector;






class ComplexVector{
    private:
    vector<Complex> coef;
    public:
    ComplexVector(int n , Complex z);
    ComplexVector::ComplexVector(const ComplexVector& input);
    // {
    //     std::cout << z.re() <<"a" <<  std::endl;
    // for(int i = 0; i <= n; i++){
    //     coef[i] = z;
    //     std::cout << "z " <<  z.re() <<  std::endl;

    // }}

    void printRe();
    int size() const;
    void setEntry(int i, const Complex& z);
    Complex getEntry(int i) const;
    Vector realPart();
    Vector imaginaryPart();
    
    
};

ComplexVector::ComplexVector(const ComplexVector& input){coef = input.coef();}
ComplexVector::ComplexVector(int n , Complex z) : coef(n , z) {}

Complex scalarProduct(const ComplexVector& u,const ComplexVector& v);

void ComplexVector::printRe(){
        std::cout << "A" <<  std::endl;
        for(int i = 0; i <= coef.size(); i++){
        std::cout << "\n" << coef[i].re() <<  std::endl;

    }
}
int main(){
    Complex a(1,2);
    std::cout << "a" << a.re() <<  std::endl;
    Complex z = a * a;
        std::cout << "z" << z.re() <<  std::endl;

    ComplexVector b(8,a); 

    // b.setEntry(1, a);
    b.printRe();
    b.imaginaryPart();
    //<< 
    
     std::cout << "z" << scalarProduct(b,b).re() <<  std::endl;
       
       return true ;

}


Complex scalarProduct(ComplexVector u, ComplexVector v);

int ComplexVector::size() const {
     
    return coef.size();
}
void ComplexVector::setEntry(int i, const Complex& z){
    coef[i] = z;
    return;
}
Complex ComplexVector::getEntry(int i) const {
    return coef[i];
}


Complex scalarProduct(const ComplexVector& u,const ComplexVector& v){
    Complex sum(0,0);
    std::cout << "sc" << u.size() <<  std::endl;
    // double sum_1 = 0;
    // double sum_2 = 0;
    for(int i = 0; i < u.size(); i++){
        sum = sum +  u.getEntry(i) * v.getEntry(i) ;
        std::cout << "sc" << sum.re() <<  std::endl;

    }
    std::cout << "a" << "\n" <<  std::endl;
    return sum;
}

Complex sum(ComplexVector u, ComplexVector v){
    Complex sum(0,0);
    std::cout << "sc" << u.size() <<  std::endl;
    // double sum_1 = 0;
    // double sum_2 = 0;
    for(int i = 0; i < u.size(); i++){
        sum = sum +  u.getEntry(i) + v.getEntry(i);


    }

    return sum;
}

 Vector ComplexVector::imaginaryPart(){
    Vector result(size(),0);
       for(int i = 0; i < size(); i++){
         result.set(i, coef[i].im()) ;


    }
    return result;
 };

Vector ComplexVector::realPart(){
    Vector result(size(),0);
       for(int i = 0; i < size(); i++){
         result.set(i, coef[i].re()) ;


    }
    return result;
 };



// Aufgabe 10.1. * Schreiben Sie eine Klasse ComplexVector zur Speicherung von Vektoren v = (v1, . . . , vn) ∈
// C
// n fur ¨ n ∈ N. Implementieren Sie folgende Methoden:
// • Konstruktor ComplexVector(int n, Complex z)
// • size(), welche die L¨ange n zuruckgibt ¨
// • Zugriffsmethoden void setEntry(int i, Complex z) und Comlpex getEntry(int i)
// Sie durfen die Klasse ¨ Complex (Skriptum, Folie 56) verwenden. Verwenden Sie const und Referenzen wo
// n¨otig. Implementieren Sie außerdem folgende Funktionen
// • Complex scalarProduct(ComplexVector u, ComplexVector v), welche das Skalarprodukt
// u · v =
// Xn
// i=1
// aibi ∈ C
// berechnet
// • ComplexVector sum(ComplexVector u, ComplexVector, v), welche die Summe von zwei Vektoren berechnet.
// Verwenden Sie (read-only) Referenzen wo es sinnvoll ist!
// Das Produkt zweier komplexer Zahlen a = ar + iai
// , b = br + ibi ∈ C ist durch
// ab = arbr − aibi + i(arbi + aibr)