//volumen de una esfera V = 4/3*pi*r^3
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    
    int radio;
    const float pi = 3.14159;
    double volumen;

    cout << "ingrese el radio de la esfera: ";
    cin >> radio;
    
    volumen = (4 * pi * pow(radio,3))/3;
    cout << "el volumen de la esfera es: " << volumen;

    return 0;
}