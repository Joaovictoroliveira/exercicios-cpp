#include <iostream>

using namespace std;

int main() {
	
	float num1;
	float num2;
	float adicao;
	float subtracao;
	float divisao;
	float multiplicacao;
	float operacao1;
	char escolha_operacao;
	char escolha_opcao;
	int aux;
	
	cout << "Digite o primeiro numero: ";
	cin >> num1;
	
	cout << "Digite o segundo numero: ";
	cin >> num2;
	
	cout << "\n" << "Escolha um operacao" << "\n";
	cout << "[1] - adicao" << "\n";
	cout << "[2] - subtracao" << "\n";
	cout << "[3] - divisao" << "\n";
	cout << "[4] - multiplicacao" << "\n";
	cin >> escolha_operacao;
	
	if(escolha_operacao == '1') {
		operacao1 = num1 + num2;
	}else if(escolha_operacao == '2') {
		operacao1 = num1 - num2;
	}else if(escolha_operacao == '3') {
		operacao1 = num1 / num2;
	}else if(escolha_operacao == '4') {
		operacao1 = num1 * num2;
	}else {
		cout << "Operacao invalida";
	}
	
	cout << "\n" << "Escolha uma opcao" << "\n";
	cout << "[A] - par ou impar" << "\n";
	cout << "[B] - positivo ou negativo" << "\n";
	cout << "[C] - inteiro ou decimal" << "\n";
	cin >> escolha_opcao;
	
	cout << "\n" << "O resultado da operacao eh: " << operacao1 << "\n"; 
	aux = operacao1;
	
	if(escolha_opcao == 'A') {
		if(int(operacao1) % 2 == 0) {
			cout << "O numero eh par";
		}else {
			cout << "O numero eh impar";
		}
	}else if(escolha_opcao == 'B') {
		if(operacao1 >= 0) {
			cout << "O numero eh positivo";
		}else {
			cout << "O numero eh negativo";
		}
	}else if(escolha_opcao == 'C') {
		if(operacao1 == aux) {
			cout << "O numero eh um inteiro";
		}else {
			cout << "O numero eh um decimal";
		}
	}else {
		cout << "Operacao invalida";
	}
	
	return 0;
}
