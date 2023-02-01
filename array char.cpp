//Uso de arreglos de caracteres en C++
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
//prototipo de funcion que recibe un arreglo de char y devuelve int
int cuentaCaracteres(char []);
int main()
{
  //Arreglo char de 10 elementos, inicializados con el caracter nulo
  char arregloCadena[10] = {'/0'};
  char arregloCadena1[] = "";
  cout << "Introduzca palabra"<< endl;
  cin >> arregloCadena;
  cout << "Elementos individuales" << endl;
  for (int i = 0 ; i < 10 ; i++) //Notar el menor estricto(<) para ir desde 0 hasta 9
    cout <<"arregloCadena["<<i<<"]="<<arregloCadena[i]
  << endl;
  cout << "" << cuentaCaracteres(arregloCadena)<< "" << endl;
  return 0;
}//fin de main

//funcion que recibe un arreglo char, para contar sus caracteres.
int cuentaCaracteres(char cadena[])
{
  int i;
  for (i = 0; cadena[i] != '\0';i++)
    {
	}
  return i;
}
