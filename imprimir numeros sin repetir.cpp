/* alamacenar e imprimir numeros sin repetir
Antonio Soto Acastenco
*/
#include<iostream>
using namespace std;
int main(){
	int numeros[10];
	for(int i=0;i<10;i++){
		cout<<"digiite un numero"<<endl;
		cin>>numeros[i];
	}
		for(int i=0;i<10;i++){
		if(numeros[i]==numeros[i+1]){
		}else{
		cout<<i<<" -> "<<numeros[i]<<endl;
		}
		}

		return 0;
		}
		
		

