#include <iostream>
#include <math.h>
#include <vector>
using std::vector;



    
class Polynomial {
    private:
    vector<double> coef;
        
    public:
        Polynomial(vector<double> v2){
            coef = v2;
            int n;
            n = v2.size();
            try{
            for(int i = 0;i < v2.size();++i){
                if(v2[i] != 0 ){
                    break;
                }
                if(i == v2.size()){
                    throw i; //
                }
                
            }
       
            }
            catch(int i) {
             v2.resize(0);
            }


        }
        
        void setCoef(int j,double y);
        int degree();
        vector<double> getCoef(){return coef;};

        
        

        // weitere Übungen
        void print();
        Polynomial diff();
        double eval(double y);
    };


    int main(){
       
        int myints[] = {4,0,2,3};
        
        vector<double> v1 (myints, myints+8);
         Polynomial p1(v1);
         p1.setCoef(4,3);
         p1.degree();
         p1.diff();
         Polynomial r(v1);
         Polynomial P3(v1);
         r = p1.diff();
        //  std::cout << "eval\n" << p1.eval(3)<<std::endl;
        // r.print();
        Polynomial addPolynomials(Polynomial p, Polynomial q);
        P3 = addPolynomials(r,p1);
        P3.print();


        return 0;
    }
    void Polynomial::print() {
    
        for(int k = 0;k < coef.size();++k){
        std::cout << k<< " " << coef[k] << "\n";
    }

    }

    
    void Polynomial::setCoef(int j,double y) {
        
        coef[j] = y;

    }
// • Eine Methode int degree(), um den Grad n ∈ N0 auszulesen.
    int Polynomial::degree(){
        int m = 0;
        for(int i = 0;i < coef.size();++i){
            if(coef[i] != 0){
                m = i;
            }
            
        }
        return m;
    }
    
    Polynomial Polynomial::diff(){
        vector<double> var;
        var = coef;
        var.pop_back();

        for(int i = 0;i < var.size();++i){
            var[i] =( i + 1) * coef[i +1];
            
        }
        Polynomial q(var);

        return q;
    }
    // }
//     Aufgabe 9.7. Implementieren Sie fur die Klasse ¨ Polynomial aus Aufgabe 9.3 die Methode double
// eval(double x), die den Funktionswert p(x) an einer gegebener Stelle x ∈ R berechnet und zuruckgibt. ¨
// Testen Sie Ihre Implementierung entsprechend!

    double Polynomial::eval(double y){
        double sum;
        for(double k;k <= coef.size();++k){
            sum += pow(y,k) * coef[k];
        }
        return sum;
    }
    // Aufgabe 9.8
    Polynomial addPolynomials(Polynomial p, Polynomial q){
        int m = p.degree();
        int k = q.degree();
        vector<double> v1,v2;
        v1 = p.getCoef();
        v2 = q.getCoef();
       
        if(m  > k ){
            Polynomial sum(v1);
            for(int i = 0;i < k;++i){
                sum.setCoef(i,v1[i] + v2[i]);
            }
            return sum;
        }else{
            Polynomial sum(v2);
            for(int i = 0;i < m;++i){
                sum.setCoef(i,v1[i] + v2[i]);
            }
            return sum;
        }
        
 }


    double max(double a, double b) {
    if (a < b) {
    return b;
    }
    else {
    return a;
    }
    }





// Fur ¨ k ≥ 0 ist die k-te Ableitung p
// (k)
// eines Polynoms p wieder ein Polynom. Implementieren Sie fur die Klasse ¨ Polynomial aus Aufgabe 9.3 die Methode Polynomial diff(int k), die die
// k-te Ableitung p
// (k)
// eines Polynom p berechnet und zuruckgibt. Das Polynom ¨ p soll nicht uberschrieben, ¨
// sondern ein neues Polynom p erstellt werden. Testen Sie Ihre Implementierung entsprechend!

// Aufgabe 9.3. Schreiben Sie die Klassendefinition zu einer Klasse Polynomial zur Speicherung von
// Polynomen vom Grad n ∈ N0, die bezuglich der Monombasis dargestellt sind, d.h. ¨

// In der Klasse soll neben dem Vektor (a0, . . . , an) ∈ R
// n+1 der Koeffizienten (std::vector<double>) auch
// der Grad n ∈ N gespeichert werden. Implementieren Sie die folgenden Funktionalit¨aten:
// • Konstruktor zum Allokieren des Null-Polynoms mit Grad n ∈ N0. Verwenden Sie try,throw,catch
// um sicherzustellen, dass n ≥ 0.
// • Eine Methode int degree(), um den Grad n ∈ N0 auszulesen.
// • Zugriffsmethoden fur die Koeffizienten ¨ aj des Polynoms.