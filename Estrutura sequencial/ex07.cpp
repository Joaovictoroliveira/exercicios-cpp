#include <iostream>

using namespace std;

int main() {
	
	float lado;
	float area;
	float dobro;
	
	cout << "Digite o valor do lado do quadrado: ";
	cin >> lado;
	
	area = (lado * lado);
	cout << "\n" <<"O valor da area eh: " << area << "\n";
	
	dobro = (area * 2);
	cout << "O valor do dobro da area eh: " << dobro;
	
	return 0;
}

