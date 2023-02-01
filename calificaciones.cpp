/*
ejercicio de calificaciones

Antonio Soto Acastenco
*/
#include<iostream>

using namespace std;

int main(){
	string matricula;
	float c1;
		float c2;
			float c3;
				float c4;
					float c5;
						float suma;
							float promedio;
	cout<<"ingresa tu matricula"<<endl;
	cin>>matricula;
	cout<<"ingresa la calificacion 1"<<endl;
	cin>>c1;
	cout<<"ingresa la calificacion 2"<<endl;
	cin>>c2;
	cout<<"ingresa la calificacion 3"<<endl;
	cin>>c3;
	cout<<"ingresa la calificacion 4"<<endl;
	cin>>c4;
	cout<<"ingresa la calificacion 5"<<endl;
	cin>>c5;
	suma=c1+c2+c3+c4+c5;
	promedio=suma/5;
	cout<<"el alumno: "<<matricula<<endl;
	cout<<"su promedio final es: "<<promedio;
}
