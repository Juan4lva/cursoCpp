/*En un estacionamiento cobran $3.50 
determine cuanto de debe pagar un 
cliente por el estacionamiento de su 
vehiculo, conociendo el tiempo de 
estacionamiento en horas y minutos
*/
#include <iostream>
using namespace std;
int main(){

    int horas, minutos;
    double total;

    cout<<"ingrese su hora: ";
    cin>>horas;

    cout<<"ingrese los minutos: ";
    cin>>minutos;

    if (minutos > 0)
    {
        horas++; //horas = horas +1
    }
    
    total = horas*3.50;
    cout<<"el total a pagar es: "<<total;

    return 0;
}