//identificar si es primo o no
#include<iostream>
using namespace std;
int main()
{
    int numero, j = 0;

    cout<<"ingrese un numero: ";
    cin>>numero;

    for (int i = 1; i <= numero; i++)
    {
        if (numero % i == 0)
        {
            j++;
        }
    }
    if(j == 2)
    {
        cout<<"es primo";
    }

    else
    {
        cout<<"no es primo";
    }
    return 0;
}