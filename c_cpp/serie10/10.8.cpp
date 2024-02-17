#include <iostream>

class Test{
private:
int N;
public:
    void setN(int N_in) { N = N_in; };
    int getN(){ return N; };
    int* getptrN(){ return &N; };
};
int main(){
    Test A;
    A.setN(5);
    int* ptr = A.getptrN();
    std::cout << A.getN() << std::endl; // 5
    *ptr = 10; 
    std::cout << ptr << std::endl; 
    std::cout << A.getN() << std::endl;
    return 0;
}