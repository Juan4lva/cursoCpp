//numero par e impar
#include <iostream>
using namespace std;
int main(){
    //numero es positivo
    int numero;

    cout << "ingrese un numero: ";
    cin >> numero;

    if (numero % 2 == 0)
    {
        cout << "el numero es par";
    }

    else
    {
        cout << "el numero es impar";
    }

    return 0;
}