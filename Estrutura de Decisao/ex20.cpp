#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	
	float nota1;
	float nota2;
	float nota3;
	float media;
	
	cout << "Digite a primeira nota: ";
	cin >> nota1;
	
	cout << "Digite a segunda nota: ";
	cin >> nota2;
	
	cout << "Digite a terceira nota: ";
	cin >> nota3;
	
	media = (nota1 + nota2 + nota3) / 3;
	
	if(media == 10) {
		cout << "\n" << fixed << setprecision(2) << "Media: " << media << " Aprovado com distincao!!";
	}else if(media >= 7) {
		cout << "\n" << fixed << setprecision(2) << "Media: " << media << " Aprovado!";
	}else {
		cout << "\n" << fixed << setprecision(2) << "Media: " << media << " Reprovado!!";
	}
	
		
	return 0;
}
