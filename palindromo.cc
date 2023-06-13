//Programa para encontrar si un string es Palindromo en C++
//JESUS CHAVEZ ARIAS
#include <iostream>

using namespace std;

string palindromo = "";
string ayuda = "";

int main(){
    cout<<"Ingresa una cadena de texto: \n";
    cin>>palindromo;

    for(int i = palindromo.length()-1;i>=0;i--)
    {
        ayuda = ayuda + palindromo[i];
    }
    
    if(palindromo == ayuda)
    {
        cout<<"Es un palindromo \n";
    }
    else
    {
        cout<<"No es un palindromo \n";
    }
    return 0;
}