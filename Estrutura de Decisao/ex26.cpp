#include <iostream>

using namespace std;

int main() {
	
	float litros;
	char tipo;
	float alcool = 1.90;
	float gasolina = 2.50;
	float preco_alcool;
	float preco_gasolina;
	float preco_a_pagar;
	float desconto;
	
	cout << "Escolha o tipo de combustivel" << "\n";
	cout << "[A] - Alcool" << "\n";
	cout << "[B] - Gasolina" << "\n";
	cin >> tipo;
	
	cout << "Digite a quantidade de litros: ";
	cin >> litros;
	
	preco_alcool = (litros * alcool);
	preco_gasolina = (litros * gasolina);
	
	if(tipo == 'A') {
		cout << "\n" << "Tipo escolhido: Alcool";
		
		if(litros <= 20) {
			desconto = preco_alcool * 0.03;
			preco_a_pagar = preco_alcool - desconto;
			cout << "\n" << "O preco de " << litros << " litros eh de R$" << preco_a_pagar;
		}else {
			desconto = preco_alcool * 0.05;
			preco_a_pagar = preco_alcool - desconto;
			cout << "\n" << "O preco de " << litros << " litros eh de R$" << preco_a_pagar;
		}
	}else if(tipo == 'B') {
		cout << "\n" << "Tipo escolhido: Gasolina";
		
		if(litros <= 20) {
			desconto = preco_gasolina * 0.04;
			preco_a_pagar = preco_gasolina - desconto;
			cout << "\n" << "O preco de " << litros << " litros eh de R$" << preco_a_pagar;
		}else {
			desconto = preco_gasolina * 0.06;
			preco_a_pagar = preco_gasolina - desconto;
			cout << "\n" << "O preco de " << litros << " litros eh de R$" << preco_a_pagar;
		}
	}
	
	return 0;
}
