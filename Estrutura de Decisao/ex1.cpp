#include <iostream>

using namespace std;

int main() {
	
	int num1;
	int num2;
	
	cout << "Digite o primeiro numero: ";
	cin >> num1;
	
	cout << "Digite o segundo numero: ";
	cin >> num2;
	
	if(num1 > num2) {
		cout << "O maior numero eh: " << num1;
	}else if(num2 > num1) {
		cout << "O maior numero eh: " << num2;
	}else {
		cout << "Os numeros digitados sao iguais";
	}
	
	return 0;
}
