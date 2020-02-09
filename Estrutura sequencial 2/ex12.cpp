#include <iostream>

using namespace std;

int main() {
	
	float altura;
	float peso_ideal;
	
	cout << "Digite a sua altura: ";
	cin >> altura;
	
	peso_ideal = (72.7 * altura) - 58;
	cout << "\n" << "Seu peso ideal eh: " << peso_ideal;
	
	return 0;
}
