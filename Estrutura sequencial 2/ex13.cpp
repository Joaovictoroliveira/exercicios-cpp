#include <iostream>

using namespace std;

int main() {
	
	float altura;
	float peso_ideal_homem;
	float peso_ideal_mulher;
	
	cout << "Digite a sua altura: ";
	cin >> altura;
	
	peso_ideal_homem = (72.7 * altura) - 58;
	cout << "\n" << "Se for homem, o peso ideal eh: " << peso_ideal_homem << "\n";
	
	peso_ideal_mulher = (62.1 * altura) - 44.7;
	cout << "Se for mulher, o peso ideal eh: " << peso_ideal_mulher << "\n";
	
	return 0;
}
