#include <iostream>

using namespace std;

int main() {
	
	int num;
	
	cout << "Digite um numero correspondente a um dia da semana: ";
	cin >> num;
	
	if(num == 1) {
		cout << "Domingo";
	}else if(num == 2){
		cout << "Segunda-feira";
	}else if(num == 3) {
		cout << "Terca-feira";
	}else if(num == 4) {
		cout << "Quarta-feira";
	}else if(num == 5) {
		cout << "Quinta-feira";
	}else if(num == 6) {
		cout << "Sexta-feira";
	}else if(num == 7) {
		cout << "Sabado";
	}else {
		cout << "Numero invalido";
	}
	
	return 0;
}
