#include <iostream>
class Test{
private:
int i = 4;
public:
int f()  {return i;};
// const double & operator []( int j ) const ;
const double get(const int& k) {return f();};

};
int main(){
    Test a;
    
 
       
       return true ;

}