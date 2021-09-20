//operadores de asignacion
#include <iostream>
using namespace std;
int main(){

    int a, b, edad;

    a = 8;
    b = 7;
    edad = a;

    cout << "edad es: " << edad << endl;
    a += b; //a = a + b
    cout << "a = " << a;

    return 0;
}