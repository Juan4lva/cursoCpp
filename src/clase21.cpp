//do while
#include<iostream>
using namespace std;
int main()
{
    int numero, i = 0;
    cout<<"ingrese un numero: ";
    cin>> numero;
    do
    {
        numero = numero / 10;
        i++;
    } while (numero != 0);
    
    cout << "la cantidad de digitos es: "<< i << endl;
    return 0;
}