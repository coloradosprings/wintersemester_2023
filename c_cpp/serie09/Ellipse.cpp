#include <iostream>
#include <math.h>
class Ellipse {
    private:
        double center[2] ={0,0};
        double a;
        double b;
        
    public:
        Ellipse(double c[2],double x,double y){
            center[0] = c[0];
            center[1] = c[1];
            a = x;
            b = y;
        }
        bool isInside(double x, double y);
        void printFocalPoints();
    };

bool Ellipse::isInside(double x, double y){
    double z;
    z = (x - center[0])/(a * a) + (y - center[1])/(b * b);
    if(z <= 1){
        if(z == 1){printf("Punkt liegt am Ramd");};

        return true;}
    else{
        return false;
    }
    // bool isInside(double x, double y), welche fur einen gegebenen Punkt in der Ebene ¨ uberpr ¨ uft, ¨
    // ob er von der Ellipse umschlossen wird. Falls der Punkt genau auf der Ellipse liegt, soll ebenfalls
    // true zuruckgegeben werden. In diesem Fall soll jedoch zus ¨ ¨atzlich eine Mitteilung mit der Information, dass der Punkt genau auf der Ellipse liegt, am Bildschirm ausgegeben werden,
}

void Ellipse::printFocalPoints(){
    double c;
    if(a > b){

        c = sqrt(a * a  - b * b);
        std::cout << "( " << center[0] - c << "," << center[1]  << ")";
    }else{
        c = sqrt(b * b  - a * a);
        std::cout << "( " << center[0] << "," << center[1] - c  << ")";
    }

}
// void printFocalPoints(), welche die Positionen der Brennpunkte berechnet und diese am Bildschirm ausgibt. Beachten Sie, dass fur ¨ a > b die Brennpunkte auf der zur x-Achse parallelen Achse
// der Ellipse liegen und deren Koordinaten durch (x0 ± c, y0) gegeben sind, wobei 
// Adaptieren Sie diese Formeln geeignet fur die ¨ ubrigen F ¨ ¨alle a ≤ b. Wo liegen die Brennpunkte
// eines Kreises?

int main(){
    return 0;
}