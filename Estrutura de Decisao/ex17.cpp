#include <iostream>

using namespace std;

int main() {
	
	int ano;
	
	cout << "Digite um ano: ";
	cin >> ano;
	
	if(ano % 400 == 0) {
		cout << "Eh um ano bissexto";
	}else if(ano % 100 != 0 && ano % 4 == 0) { 
		cout << "Eh um ano bissexto";
	}else {
		cout << "Nao eh um ano bissexto";
	}
	
	return 0;
}
