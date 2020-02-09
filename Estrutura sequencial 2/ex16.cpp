#include <iostream>
#include <cmath>

using namespace std;

int main() {
	
	float metros;
	float cobertura_tinta;
	float lata_tinta;
	float preco;
	
	cout << "Informe a quantidade de metros a serem pintados: ";
	cin >> metros;
	
	cobertura_tinta = (metros / 3);
	cout << "\n" << "Serao necessarios " << cobertura_tinta << " litros de tinta" << "\n";
	
	lata_tinta = (cobertura_tinta / 18);
	cout << "Em " << ceil(lata_tinta) << " latas de tinta de 18 litros" << "\n";
	
	preco = ceil(lata_tinta) * 80;
	cout << "Por R$" << preco;
	
	return 0;
}
