#include <iostream>

using namespace std;

int main() {
	
	float nota1;
	float nota2;
	float media;
	char conceito;
	
	cout << "Digite a primeira nota: ";
	cin >> nota1;
	
	cout << "Digite a segunda nota: ";
	cin >> nota2;
	
	media = (nota1 + nota2) / 2;
	
	if(media >= 9 && media <= 10) {
		conceito = 'A';
	}else if(media >= 7.5 && media < 9) {
		conceito = 'B';
	}else if(media >= 6 && media < 7.5) {
		conceito = 'C';
	}else if(media >= 4 && media < 6) {
		conceito = 'D';
	}else if (media >= 0 && media < 4) {
		conceito = 'E';
	}else {
		cout << "Media invalida";
	}
	
	cout << "\n" << "Nota 1: " << nota1 << "\n";
	cout << "Nota 2: " << nota2 << "\n";
	cout << "Media: " << media << "\n";
	cout << "Conceito: " << conceito << "\n"; 
	
	if(conceito == 'A' or conceito == 'B' or conceito == 'C') {
		cout << "Aprovado!";
	}else {
		cout << "Reprovado!";
	}
		
	return 0;
}
