#include <iostream>
#include <cmath>

using namespace std;

int main() {
	
	float metros;
	float cobertura_tinta;
	float lata_tinta;
	float preco_lata;
	float galao_tinta;
	float preco_galao;
	
	cout << "Informe a quantidade de metros a serem pintados: ";
	cin >> metros;
	
	cobertura_tinta = (metros / 6);
	cout << "\n" << "Serao necessarios " << cobertura_tinta << " litros de tinta" << "\n";
	
	lata_tinta = ceil(cobertura_tinta / 18);
	preco_lata = (lata_tinta * 80);
	cout << "Em " << lata_tinta << " latas de tinta de 18 litros por R$" << preco_lata << "\n";
	
	galao_tinta = ceil(cobertura_tinta / 3.6);
	preco_galao = (galao_tinta * 25);
	cout << "Ou " << galao_tinta << " galoes de tinta de 3,6 litros por R$" << preco_galao;
	
	return 0;
}
