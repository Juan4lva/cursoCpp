//estructuras repetitivas
#include<iostream>
using namespace std;
int main()
{
    //suma de numeros positivos
    int numero, suma = 0;
    cout<<"ingrese un numero: ";
    cin>>numero;
    while (numero >=0)
    {
        suma += numero;
        cout<<"ingrese mas numeros: ";
        cin>>numero;
    }

    cout<<"la suma es: "<<suma;
    return 0;
}