/* precio producto y cambio

Antonio Soto Acastenco
*/
#include<iostream>
using namespace std;
int main(){
	float cant_Paga;
	float cambio;
	float cant_Producto;
	cout<<"ingrese el precio del producto"<<endl;
	cin>>cant_Producto;
	cout<<"ingrese la cantidad con la que paga"<<endl;
	cin>>cant_Paga;
	if(cant_Paga>=cant_Producto){
		cambio=cant_Paga-cant_Producto;
		cout<<"la cantidad con la que pagaste es: "<<cant_Paga;
		cout<<"tu cambio es de:  "<<cambio;
	}else{
		cout<<"recursos insuficientes";
	}
	return 0;
}
