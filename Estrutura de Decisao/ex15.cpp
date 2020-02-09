#include <iostream>

using namespace std;

int main() {
	
	int lado1;
	int lado2;
	int lado3;
	
	cout << "Digite o primeiro lado: ";
	cin >> lado1;
	
	cout << "Digite o segundo lado: ";
	cin >> lado2;
	
	cout << "Digite o terceiro lado: ";
	cin >> lado3;
	
	if(lado1 + lado2 > lado3 || lado1 + lado3 > lado2 || lado2 + lado3 > lado1) {
		cout << "\n" << "Pode ser um triangulo!";
	}else {
		cout << "Nao pode ser um triangulo!";
	}
	
	if(lado1 == lado2 && lado1 == lado3 && lado2 == lado3) {
		cout << "\n" << "Triangulo Equilatero";
	}else if(lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
		cout << "\n" << "Triangulo Isosceles";
	}else {
		cout << "\n" << "Triangulo escaleno";
	}
	
	return 0;
}
