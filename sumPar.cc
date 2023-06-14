//Escribe un programa que solicite al usuario una serie de números enteros separados por espacios. 
//El programa debe calcular y mostrar la suma de los números pares y la multiplicación de los números impares.
//JESUS CHAVEZ ARIAS
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string numero = "";
    string ayuda = "";

    unsigned int num = 0;
    unsigned int par = 0;
    unsigned int ipar = 1;

    cout<<"Ingresa una cadena de numeros separados por espacios: ";
    getline(cin, numero);

    for(int i=0;i<=numero.length();i++){
        //XOR: si no hay espacio en blanco XOR i == la longitud del string
        if(numero[i] != ' ' ^ i == numero.length())
        {
            ayuda = ayuda + numero[i];
        }
        else
        {   //Cast  de string --> int
            num = stoi(ayuda);
            if(num % 2 == 0)
            {
                par = par + num;
            }
            else
            {
                ipar = ipar * num;
            }
            num = 0;
            ayuda = "";
        }
        
    }
    cout<<"Suma de Numeros Pares: "<<par<<endl;
    cout<<"Multiplicacion de Numeros Impares: "<<ipar<<endl;
}