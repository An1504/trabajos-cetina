
#include <iostream>
#include <math.h>
#include<conio.h>
using namespace std;

int main() {
	int a, b, c;
	cout <<"Ingrese a: ";  cin >>a;
	cout <<"Ingrese b: ";  cin >>b;
	cout <<"Ingrese c: ";  cin >>c;
	
	int discriminante = pow(b, 2) - 4 * a * c;
	if (discriminante >= 0) {
		double x1 = (-b + sqrt(discriminante)) / (2 * a);
		double x2 = (-b - sqrt(discriminante)) / (2 * a);
		cout << "Raíces reales: " << x1 << " y " << x2 << endl;
	} else {
		cout << "No existen raíces reales." << endl;
	}
	
	return 0;
}
