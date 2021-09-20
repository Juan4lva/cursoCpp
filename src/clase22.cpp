//switch
#include<iostream>
using namespace std;
int main(){
    //calculador

    char operador;
    int num1, num2;

    cout<<"ingrese un operador: \n + - * /"<<endl;
    cin>> operador;

    cout<<"ingrese dos numeros: "<<endl;
    cin >> num1 >> num2;

    switch (operador)
    {
    case '+':
        cout << num1 << " + "<< num2<<" = "<<num1+num2;
        break;
    case '-':
        cout << num1 << " - "<< num2<<" = "<<num1-num2;
        break;
    case '*':
        cout << num1 << " * "<< num2<<" = "<<num1*num2;
        break;
    case '/':
        cout << num1 << " / "<< num2<<" = "<<num1/num2;
        break;
    
    default:
    cout<<"error, operador incorrecto...";
        break;
    }

    return 0;
}