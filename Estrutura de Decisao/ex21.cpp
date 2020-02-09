#include <iostream>

using namespace std;

int main() {
	
	int saque;
	int nota_100;
	int nota_50;
	int nota_10;
	int nota_5;
	int nota_1;
	
	cout << "Digite o valor a ser sacado: ";
	cin >> saque;
	
	nota_100 = (saque / 100);
	nota_50 = ((saque - (nota_100 * 100)) / 50);
	nota_10 = ((saque - (nota_100 * 100) - (nota_50 * 50)) / 10);
	nota_5 = ((saque - (nota_100 * 100) - (nota_50 * 50) - (nota_10 * 10)) / 5);
	nota_1 = (saque - ((nota_100 * 100) + (nota_50 * 50) + (nota_10 * 10) + (nota_5 * 5)));
	
	if(saque < 10 || saque > 600) {
		cout << "Operacao invalida";
	}else {
		if(nota_100 >= 1 && nota_50 >= 1 && nota_10 >= 1 && nota_5 >= 1 && nota_1 >= 1) {
			cout << "Serao fornecidas " << nota_100 << " notas de 100 reais, " << nota_50 << " notas de 50 reais, " << nota_10 << " notas de 10 reais," << nota_5 << " notas de 5 reais e " << nota_1 << " notas de um real"; 
		}else if(nota_100 >= 1 && nota_50 >= 1 && nota_10 >= 1 && nota_5 >= 1) {
			cout << "Serao fornecidas " << nota_100 << " notas de 100 reais, " << nota_50 << " notas de 50 reais, " << nota_10 << " notas de 10 reais e " << nota_5 << " notas de 5 reais";
		}else if(nota_100 >= 1 && nota_50 >= 1 && nota_10 >= 1 && nota_1) {
			cout << "Serao fornecidas " << nota_100 << " notas de 100 reais, " << nota_50 << " notas de 50 reais, " << nota_10 << " notas de 10 reais e " << nota_1 << " notas de 1 real";
		}else if(nota_100 >= 1 && nota_50 >= 1 && nota_10 >= 1) {
			cout << "Serao fornecidas " << nota_100 << " notas de 100 reais, " << nota_50 << " notas de 50 reais e " << nota_10 << " notas de 10 reais";
		}else if(nota_100 >= 1 && nota_50 >= 1 && nota_5 >= 1) {
			cout << "Serao fornecidas " << nota_100 << " notas de 100 reais, " << nota_50 << " notas de 50 reais e " << nota_5 << " notas de 5 reais";
		}else if(nota_100 >= 1 && nota_50 >= 1 && nota_1 >= 1) {
			cout << "Serao fornecidas " << nota_100 << " notas de 100 reais, " << nota_50 << " notas de 50 reais e " << nota_1 << " notas de 1 real";
		}else if(nota_100 >= 1 && nota_50 >= 1) {
			cout << "Serao fornecidas " << nota_100 << " notas de 100 reais e " << nota_50 << " notas de 50 reais";
		}else if(nota_100 >= 1 && nota_10 >= 1 && nota_5 >= 1 && nota_1 >= 1) {
			cout << "Serao fornecidas " << nota_100 << " notas de 100 reais, " << nota_10 << " notas de 10 reais, " << nota_5 << " notas de 5 reais e" << nota_1 << " notas de 1 real";
		}else if(nota_100 >= 1 && nota_10 >= 1 && nota_5 >= 1) {
			cout << "Serao fornecidas " << nota_100 << " notas de 100 reais, " << nota_10 << " notas de 10 reais e " << nota_5 << " notas de 5 reais";
		}else if(nota_100 >= 1 && nota_10 >= 1 && nota_1 >= 1) {
			cout << "Serao fornecidas " << nota_100 << " notas de 100 reais, " << nota_10 << " notas de 10 reais e " << nota_1 << " notas de 1 real";
		}else if(nota_100 >= 1 && nota_5 >= 1 && nota_1 >= 1) {
			cout << "Serao fornecidas " << nota_100 << " notas de 100 reais, " << nota_5 << " notas de 5 reais e " << nota_1 << " notas de 1 real";
		}else if(nota_100 >= 1 && nota_1 >= 1) {
			cout << "Serao fornecidas " << nota_100 << " notas de 100 reais e " << nota_1 << " notas de 1 real";
		}else if(nota_100 >= 1) {
			cout << "Serao fornecidas " << nota_100 << " notas de 100 reais";
 		}else if(nota_50 >= 1 && nota_10 >= 1 && nota_5 >= 1 && nota_1 >= 1) {
 			cout << "Serao fornecidas " << nota_50 << " notas de 50 reais, " << nota_10 << " notas de 10 reais, " << nota_5 << " notas de 5 reais e " << nota_1 << " notas de 1 real";
		}else if(nota_50 >= 1 && nota_10 >= 1 && nota_5 >= 1) {
			cout << "Serao fornecidas " << nota_50 << " notas de 50 reais, " << nota_10 << " notas de 10 reais e " << nota_5 << " notas de 5 reais";
		}else if(nota_50 >= 1 && nota_10 >= 1) {
			cout << "Serao fornecidas " << nota_50 << " notas de 50 reais e " << nota_10 << " notas de 10 reais";
		}else if(nota_50 >= 1 && nota_5 >= 1 && nota_1 >= 1) {
			cout << "Serao fornecidas " << nota_50 << " nota de 50 reais, " << nota_5 << " nota de 5 reais e " << nota_1 << " notas de 1 real";	
		}else if(nota_50 >= 1 && nota_1 >= 1) {
			cout << "Serao fornecidas " << nota_50 << " nota de 50 reais e " << nota_1 << " notas de 1 real";
		}else if(nota_50 >= 1) {
			cout << "Serao fornecidas " << nota_50 << " notas de 50 reais";
		}else if(nota_10 >= 1 && nota_5 >= 1 && nota_1 >= 1) {
			cout << "Serao fornecidas " << nota_10 << " notas de 10 reais, " << nota_5 << " notas de 5 reais e " << nota_1 << " notas de 1 real";
		}else if(nota_10 >= 1 && nota_5 >= 1) {
			cout << "Serao oferecidas " << nota_10 << " notas de 10 reais e " << nota_5 << " notas de 5 reais";
		}else if(nota_10 >= 1 && nota_1 >= 1) {
			cout << "Serao oferecidas " << nota_10 << " notas de 10 reais e " << nota_1 << " notas de 1 real";	
		}else if(nota_10 >= 1) {
			cout << "Serao oferecidas " << nota_10 << " notas de 10 reais";
		}
	}
	
	return 0;
}
