/*ALMACENAR EN UN ARREGLO UNIDIMENSIONAL 30 REGISTROS*/
#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numeros[30],n;

	for(int i=0;i<30;i++){
		cout<<"Digite un numero:";
		cin>>numeros[i]; //Guardando todos los elementos del vector
}

//Ahora, vamos a mostrar los elementos con sus índices asociados

for(int i=0;i<30;i++){
	cout<<i<<" -> "<<numeros[i]<<endl;
}

	getch();
	return 0;
}
/*ASA*/
