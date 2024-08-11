/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>

using namespace std;

char encontrarVocal(string palabra){
    for(int i= 1; i < palabra.length(); ++i){
        char vocal = palabra[i];
        vocal = toupper(vocal);
            if (vocal == 'A' || vocal == 'E' || vocal == 'I' || vocal == 'O' || vocal == 'U')
                return vocal;
    }
    return 'X';
}



string encontrarPalabraProhibida(string r){
    string palabrasProhibidas[5] = {"PENE","PITO","POPO","PICA","PICO"};
    string rfcRevisar = r.substr(0,4);
    for(int i=0; i < 4; ++i){
        if (rfcRevisar == palabrasProhibidas[i])
            r[3] = 'X';
            return r;
    }
    return 0;
}

int main(){
    string nombre, apellidoPaterno, aPellidoMaterno, fechaNacimiento, rfc;
    cout << "Calculo de RFC " << endl;
    
    cout << "Favor de ingresar tu nombre: ";
    cin >> nombre;
    
    cout << "Favor de ingresar tu Apellido Paterno: ";
    cin >> apellidoPaterno;
    
    cout << "Favor de ingresar tu Apellido Materno (Si no tiene favor de oprimir la tecla ENTER: ";
    cin.ignore();
    getline(cin, aPellidoMaterno);
        if (aPellidoMaterno.empty())
            aPellidoMaterno[0] = 'X';
            
    cout << "Favor de ingresar tu Fecha de Nacimiento (En formato DDMMAAAA): ";
    cin >> fechaNacimiento;
    
    char caracter1 = toupper(apellidoPaterno[0]);
    char caracter2 = encontrarVocal(apellidoPaterno);
    char caracter3 = toupper(aPellidoMaterno[0]);
    char caracter4 = toupper(nombre[0]);
    char caracter5 = (fechaNacimiento[6]);
    char caracter6 = (fechaNacimiento[7]);
    char caracter7 = (fechaNacimiento[2]);
    char caracter8 = (fechaNacimiento[3]);
    char caracter9 = (fechaNacimiento[0]);
    char caracter10 = (fechaNacimiento[1]);
    
    rfc = caracter1;
    rfc += caracter2;
    rfc += caracter3;
    rfc += caracter4;
    rfc += caracter5;
    rfc += caracter6;
    rfc += caracter7;
    rfc += caracter8;
    rfc += caracter9;
    rfc += caracter10;
    
    rfc = encontrarPalabraProhibida(rfc);
    
 
    
    
    cout << "Tu RFC sin homoclave es: "<< rfc <<endl;
    
    return 0;
    
}


