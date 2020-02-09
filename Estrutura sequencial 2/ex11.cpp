#include <iostream>
#include <cmath>

using namespace std;

int main() {
	
	float num1;
	float num2;
	float num3;
	float dobro;
	float soma;
	float cubo;
	
	cout << "Digite o primeiro numero inteiro: ";
	cin >> num1;
	
	cout << "Digite o segundo numero inteiro: ";
	cin >> num2;
	
	cout << "Digite um numero real: ";
	cin >> num3;
	
	dobro = (num1 * 2) * (num2 / 2);
	cout << "\n" << "O produto do dobro do primeiro com metado do segundo eh: " << dobro << "\n";
	
	soma = (num1 * 3) + num3;
	cout << "A soma do triplo do primeiro com o terceiro eh: " << soma << "\n";
	
	cubo = pow(num3, 3);
	cout << "O terceiro elevado ao cubo eh: " << cubo;
	
	return 0;
}
