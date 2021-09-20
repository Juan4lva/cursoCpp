//area de un triangulo
#include <iostream>
using namespace std;
int main(){

    double base, altura, area;

    cout << "ingrese la base del triangulo: ";
    cin >> base;

    cout << "ingrese la altura del triangulo: ";
    cin >> altura;

    area = base * altura / 2;
    cout << "el area del triangulo es: " << area;
    return 0;
}