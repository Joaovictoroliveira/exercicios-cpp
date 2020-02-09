#include <iostream>

using namespace std;

int main() {
	
	float salario_atual;
	float novo_salario;
	float valor_aumento;
	float percentual_aumento;
	
	cout << "Digite o salario atual: R$";
	cin >> salario_atual;
	
	if(salario_atual <= 280) {
		novo_salario = salario_atual + (salario_atual * 0.2);
	}else if(salario_atual > 280 && salario_atual <= 700) {
		novo_salario = salario_atual + (salario_atual * 0.15);
	}else if(salario_atual > 700 && salario_atual <= 1500) {
		novo_salario = salario_atual + (salario_atual * 0.1);
	}else if(salario_atual > 1500) {
		novo_salario = salario_atual + (salario_atual * 0.05);
	}
	
	valor_aumento = novo_salario - salario_atual;
	percentual_aumento = (valor_aumento / salario_atual) * 100;
	
	cout << "\n" << "Salario atual: R$" << salario_atual << "\n";
	cout << "Percentual de aumento: " << percentual_aumento << "%" << "\n";
	cout << "Valor do aumento: R$" << valor_aumento << "\n";
	cout << "Novo salario: R$" << novo_salario << "\n";
	
	return 0;
}
