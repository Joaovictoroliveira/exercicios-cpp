#include <iostream>

using namespace std;

int main() {
	
	int num1;
	int num2; 
	int num3;
	
	cout << "Digite o primeiro numero: ";
	cin >> num1;
	
	cout << "Digite o segundo numero: ";
	cin >> num2;
	
	cout << "Digite o terceiro numero: ";
	cin >> num3;
	
	if(num1 > num2 and num1 > num3) {
		cout << "Maior numero: " << num1;
	}else if(num2 > num1 and num2 > num3) {
		cout << "Maior numero: " << num2;
	}else if(num3 > num1 and num3 > num2) {
		cout << "Maior numero: " << num3;
	}else {
		cout << "Os numeros digitados sao iguais";
	}
	
	
	return 0;
}
