//array
#include<iostream>
using namespace std;
int main()
{
    int array[8];
    for (int i = 0; i < 8; i++)
    {
        cout << "posicion: " << i <<" : ";
        cin >> array[i];
    }
    cout << "contenido de mi array: ";
    for (int i = 0; i < 8; i++)
    {
        cout << array[i] << " ";
    }
    
    return 0;
}