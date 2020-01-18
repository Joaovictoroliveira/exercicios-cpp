#include <iostream>

using namespace std;

int main() {
	
	float num1;
	float num2;
	float soma;
	
	cout << "Digite o primeiro numero: ";
	cin >> num1;
	
	cout << "Digite o segundo numero: ";
	cin >> num2;
	
	soma = (num1 + num2);
	
	cout << "A soma de " << num1 << " com " << num2 << " eh: " << soma;
	
	return 0;
}
