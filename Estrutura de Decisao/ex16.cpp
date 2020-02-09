#include <iostream>
#include <cmath>

using namespace std;

int main() {
	
	float a;
	float b;
	float c;
	float delta;
	float x1;
	float x2;
	
	cout << "Informe o valor de a: ";
	cin >> a;
	
	if(a == 0) {
		cout << "Nao eh uma equacao do 2 grau";
	}else {
		cout << "Informe o valor de b: ";
		cin >> b;
	
		cout << "Informe o valor de c: ";
		cin >> c;
		
		delta = pow(b,2) - 4 * a * c;
		cout << "\n" << "Valor de delta: " << delta << "\n";
		
		if(delta < 0) {
			cout << "Nao existem raizes reais";
		}else {
			x1 = ((-b + sqrt(delta)) / 2 * a);
			x2 = ((-b - sqrt(delta)) / 2 * a);
			
			cout << "x1: " << x1 << "\n";
			cout << "x2: " << x2 << "\n";
		}
	}
	
	return 0;
}
