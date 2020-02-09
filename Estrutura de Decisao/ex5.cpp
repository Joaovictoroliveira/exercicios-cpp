#include <iostream>

using namespace std;

int main() {
	
	float nota1;
	float nota2;
	float media;
	
	cout << "Digite a primeira nota: ";
	cin >> nota1;
	
	cout << "Digite a segunda nota: ";
	cin >> nota2;
	
	media = (nota1 + nota2) / 2;
	
	if(media == 10) {
		cout << "Nota:" << media << " Aluno Aprovado com Distincao!!!";
	}else if(media >= 7) {
		cout << "Nota:" << media << " Aluno Aprovado!";
	}else {
		cout << "Nota:" << media << " Aluno Reprovado";
	}
	
	return 0;
}
