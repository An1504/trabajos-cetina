//Pedir 3 numeros y mostrarlos de mayor a menor
#include<iostream>
#include<string>

using namespace std;
int a,b,c;

int main(){
 cout<<"Ingresa numero 1:"<<endl;
 cin>>a;
 
 cout<<"Ingresa numero 2:"<<endl;
 cin>>b;
 
 cout<<"Ingresa numero 3:"<<endl;
 cin>>c;
 
 if(a>b && b>c)
 cout<<a<<", "<<b<<", "<<c;
 else{
 if(a>c && c>b)
 cout<<a<<", "<<c<<", "<<b;
 else{
 if(b>a && a>c)
 cout<<b<<", "<<a<<", "<<c;
 else{
 if(b>c && c>a)
 cout<<b<<", "<<c<<", "<<a;
 else{
 if(c>a && a>b)
 cout<<c<<", "<<a<<", "<<b;
 else{
 if(c>b && b>a)
 cout<<c<<", "<<b<<", "<<a;
}
}
}
}
}

 return 0;
}
