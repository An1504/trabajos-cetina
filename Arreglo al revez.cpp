#include<iostream> 
#include<conio.h> 
using namespace std;
int main() 
{ 
int a[50],b[50],n,i;  
cout<<"Ingresar limite:"; 
cin>>n; 
cout<<endl; 
cout<<"Elementos del arreglo"<<endl; 
for(i=0;i<n;i++) 
{cout<<"Ingresar ["<<i<<"]"; 
cin>>a[i]; 
} 
for(i=0;i<n;i++) 
b[i]=a[n-(i+1)]; 
cout<<"los numeros ivertidos sera:"; 
for(i=0;i<n;i++) 
cout<<" "<<b[i]; 
getch(); 
}
