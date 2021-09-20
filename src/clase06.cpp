//promedio de 3 notas
#include <iostream>
using namespace std;
int main(){
    int n1, n2, n3;
    double prom;
    cout << "ingrese nota 1: ";
    cin >> n1;
    cout << "ingrese nota 2: ";
    cin >> n2;
    cout << "ingrese nota 3: ";
    cin >> n3;
    prom = (n1 + n2 + n3)/3;
    cout << "el promedio es: " << prom;
    return 0;
}