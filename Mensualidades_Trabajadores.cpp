/*programa de las mensualidades de los trabajadore*/
#include<iostream>
 #include<conio.h>
 using namespace std;
int main(){
	float m1;
		float m2;
			float m3;
				float m4;
					float m5;
						float m6;
						    string clave;
							     float total;
								     float promedio;   
	cout<<"ingrese la clave del trabajador"<<endl;
    	cin>>clave;					
	    cout<<"ingrese el valor de la mensualidad 1"<<endl;
    	    cin>>m1;
	        cout<<"ingrese el valor de la mensualidad 2"<<endl;
	    	    cin>>m2;
	            cout<<"ingrese el valor de la mensualidad 3"<<endl;
	       	   cin>>m3;
		       cout<<"ingrese el valor de la mensualidad 4"<<endl;
		       	  cin>>m4;
			         cout<<"ingrese el valor de la mensualidad 5"<<endl;
			       	     cin>>m5;
				            cout<<"ingrese el valor de la mensualidad 6"<<endl;
					   	       cin>>m6;  
	total=m1+m2+m3+m4+m5+m6;
	promedio=total/6;
	cout<<"El trabajagor: "<<clave<<endl;
	cout<<"su ingreso total de lo 6 meses es: "<<total<<endl;
	cout<<"el promedio mensual del trabajador es: "<<promedio<<endl;
		getch();			
	return 0;
}

