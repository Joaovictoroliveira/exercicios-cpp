#include <iostream>

using namespace std;

int main() {
	
	float quantidade_morangos;
	float quantidade_macas;
	float quantidade_frutas;
	float preco_morangos = 2.50;
	float preco_macas = 1.80;
	float desconto_compra;
	float preco_compra;
	
	cout << "Digite a quantidade em quilos de morango: ";
	cin >> quantidade_morangos;
	
	cout << "Digite a quantidade em quilos de macas: ";
	cin >> quantidade_macas;
	
	if(quantidade_morangos <= 5) {
		preco_morangos = preco_morangos * quantidade_morangos;
	}else {
		preco_morangos = 2.20;
		preco_morangos = preco_morangos * quantidade_morangos;
	}
	
	if(quantidade_macas <= 5) {
		preco_macas = preco_macas * quantidade_macas;
	} else {
		preco_macas = 1.50;
		preco_macas = preco_macas * quantidade_macas;
	}
	
	quantidade_frutas = quantidade_morangos + quantidade_macas;
	preco_compra = preco_morangos + preco_macas;
	
	if(quantidade_frutas > 8 || preco_compra > 25) {
		desconto_compra = preco_compra * 0.10;
		preco_compra = preco_compra - desconto_compra;
	}
	
	cout << "\n" << quantidade_morangos << "Kg de morango por R$" << preco_morangos << "\n";
	cout << quantidade_macas << "Kg de maca por R$" << preco_macas << "\n"; 
	cout << "\n" << "O valor da compra eh de R$" << preco_compra << "\n";
	
	return 0;
}
