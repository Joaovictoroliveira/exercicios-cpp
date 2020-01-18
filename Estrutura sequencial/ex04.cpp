#include <iostream>

using namespace std;

int main() {
	
	float nota1;
	float nota2;
	float nota3;
	float nota4;
	float media;
	
	cout << "Digite a primeira nota: ";
	cin >> nota1;
	
	cout << "Digite a segunda nota: ";
	cin >> nota2;
	
	cout << "Digite a terceira nota: ";
	cin >> nota3;
	
	cout << "Digite a quarta nota: ";
	cin >> nota4;
	
	media = (nota1 + nota2 + nota3 + nota4) / 4;
	
	cout << "\n" << "A media eh: " << media;
	
	return 0;
}
