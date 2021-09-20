/*encontrar la suma de numeros positivos 
si el usuario ingresa un numero negativo, 
termina el programa
*/
#include<iostream>
using namespace std;
int main()
{
    int numero, suma = 0;

    while (true)
    {
        cout << "ingrese un numero: ";
        cin >> numero;
        if(numero < 0)
        {
            break;
        }
        suma += numero;
    }
    cout << "la suma es: "<<suma;
    
    return 0;
}