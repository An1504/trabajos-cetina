
/*Antonio Soto Acastenco*/
/*5. Estructura un programa que lea de la entrada est?ndar un car?cter e indique en la salida est?ndar si el car?cter es una vocal min?scula o no.*/

#include<iostream>

using namespace std;

int main(){
       char letra;

        cout<<"Digite un caracter: ";
        cin>>letra;

        switch(letra){
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U': cout<<"Es una vocal mayuscula";break;
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u': cout<<"Es una vocal minuscula";break;
        default: cout<<"No es una vocal";break;
                     }
	    }
     /*ASA*/    
