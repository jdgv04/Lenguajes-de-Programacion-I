/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<iostream>

using namespace std;

int main(){
    float Numero1, Numero2;
    cout << "Favor de ingresar el primer numero: ";
    cin >> Numero1;
    
    cout << "Favor de ingresar el segundo numero: ";
    cin >> Numero2;
    
    float suma = Numero1 + Numero2;
    float resta = Numero1 - Numero2;
    float multiplicacion = Numero1 * Numero2;
    float division = Numero1 / Numero2;
    
    cout << "El resultado de la suma es: "<< suma <<endl;
    cout << "El resultado de la resta es: "<< resta <<endl;
    cout << "El resultado de la multiplicación es: "<< multiplicacion <<endl;
    cout << "El resultado de la división es: "<< division <<endl;

  
    return 0;
}