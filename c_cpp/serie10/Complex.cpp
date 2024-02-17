
#include <iostream>
class Complex {
private:
 double real;
 double imag;
 
public:
 Complex(double real, double imag);
 Complex(const Complex& input); //Copy-constructor

 double re(){return real;};
 double im(){return imag;};
 
};

Complex::Complex(double real, double imag){
 this->real = real;
 this->imag = imag;}

 

Complex::Complex(const Complex& input){
 real = input.real;
 imag = input.imag;
//  std::cout << "Copy-Constructor" << std::endl;
}

Complex operator*(Complex x,Complex y){
 
 double real = x.re() * y.re() - x.im() * y.im();
 double imag = x.re() * y.im() + x.im() * y.re();
    return Complex(real,imag);
}
Complex operator+(Complex x,Complex y){
 
 double real = x.re() + y.re();
 double imag = x.im() + y.im();
    return Complex(real,imag);
}
