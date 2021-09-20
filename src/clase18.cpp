//estructuras repetitivas
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    //generar una tabla de multiplicar
    int n, c = 1, limite;
    cout << "ingrese que tabla quiere mostrar: ";
    cin >> n;
    cout << "introduzca un limite: ";
    cin >> limite;

    while (c <= limite)
    {
        cout << n << " x " << setw(2) << c <<" = " << n * c << endl;
        c++;
    }
    
    return 0;
}