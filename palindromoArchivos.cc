//Programa para encontrar si un string es Palindromo en C++ leyendo un archivo de texto
//JESUS CHAVEZ ARIAS
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;
//Funcion Booleana que verifica si el texto en la linea es Palindromo
bool palindromoCheck(string palindromo){
    string ayuda = "";
    for(int i = palindromo.length()-1;i>=0;i--)
    {
        ayuda = ayuda + palindromo[i];
    }
    
    if(palindromo == ayuda){
        //cout<<"Es un palindromo \n";
        return true;
    }else{
        //cout<<"No es un palindromo \n";
        return false;
    }
}

int main(){
    ifstream archivo("palindromo.txt"); // Nombre del archivo a leer

    if (archivo.is_open()) { // Verificar si el archivo se abrió correctamente
        string linea;
        while (getline(archivo, linea)) {
            
            if(palindromoCheck(linea)){
                cout<<linea<<" Es un palindromo \n";
            }else{
                cout<<linea<<" NO es un palindromo \n";
            }
            
        }
        archivo.close(); // Cerrar el archivo después de leerlo
    } else {
        cout << "No se pudo abrir el archivo." << endl;
    }
    return 0;
}