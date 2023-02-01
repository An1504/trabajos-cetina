/* numero positivo cuadrad y cubo

Antonio S oto Acastenco
*/
#include<iostream>

using namespace std;
int main(){
int num;
float cuadrado;
float cubo;
cout<<"ingrese un numero positivo"<<endl;
cin>>num;
if(num>0){
	cuadrado=num*num;
	cubo=cuadrado*num;
	cout<<"el numero al cuadrado es: "<<cuadrado<<endl;
	cout<<"el numero al cubo es: "<<cubo;
}else{
cout<<"ingresa un numero positivo";
}
return 0;
}


