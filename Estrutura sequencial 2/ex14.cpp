#include <iostream>

using namespace std;

int main() {
	
	float peso;
	float excesso;
	float multa;
	
	cout << "Digite o peso dos peixes: ";
	cin >> peso;
	
	if(peso > 50) {
		excesso = peso - 50;
	}else {
		excesso = 0;
	}
	
	if(excesso > 0) {
		multa = excesso * 4;
	}else {
		multa = 0;
	}
	
	cout << "\n" << "Peso dos peixes: " << peso << "Kg" << "\n";
	cout << "Excesso: " << excesso << "Kg" << "\n";
	cout << "Multa: R$" << multa << "\n";
	
	return 0;
}
