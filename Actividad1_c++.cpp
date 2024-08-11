/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<iostream>

using namespace std;

int main(){
    int edad;
    cout << "Favor de ingresar su edad: ";
    cin >> edad;

    if (edad >= 18)
    {
        cout << "Usted es mayor de edad";
    } else{
        cout << "Usted es menor de edad";
    }
    return 0;
}