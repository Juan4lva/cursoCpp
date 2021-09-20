//condicionales
#include <iostream>
using namespace std;
int main(){
    //numero es positivo
    int numero;

    cout << "ingrese un numero: ";
    cin >> numero;

    if (numero > 0)
    {
        cout << "el numero es positivo";
    }

    else if (numero == 0)
    {
        cout << "el numero es neutro";
    }
    
    else
    {
        cout << "el numero es negativo";
    }

    return 0;
}