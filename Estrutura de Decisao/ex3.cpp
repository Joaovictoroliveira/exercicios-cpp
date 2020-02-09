#include <iostream>

using namespace std;

int main() {
	
	char letra;
	
	cout << "Digite uma letra: ";
	cin >> letra;
	
	if(letra == 'f' or letra == 'F') {
		cout << "Feminino";
	}else if(letra == 'm' or letra == 'M') {
		cout << "Masculino";
	}else {
		cout << "Sexo invalido";
	}
	
	return 0;
}
