//factorial de un numero
#include<iostream>
using namespace std;
int main()
{
    int numero, factorial = 1;
    cout<<"ingrese el numero: ";
    cin>>numero;

    for (int i = 1; i <= numero; i++)
    {
        factorial = factorial * i;
    }
    
    cout<<"el factorial de " << numero << " es: " << factorial;
    return 0;
}