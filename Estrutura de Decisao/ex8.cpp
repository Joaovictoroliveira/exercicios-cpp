#include <iostream>

using namespace std;

int main() {
	
	float produto1;
	float produto2;
	float produto3;
	
	cout << "Digite o preco do primero produto: ";
	cin >> produto1;
	
	cout << "Digite o preco do segundo produto: ";
	cin >> produto2;
	
	cout << "Digite o preco do terceiro produto: ";
	cin >> produto3;
	
	if(produto1 < produto2 and produto1 < produto3) {
		cout << "Voce deve comprar o produto 1";
	}else if(produto2 < produto1 and produto2 < produto3) {
		cout << "Voce deve comprar o produto 2";
	}else {
		cout << "Voce deve comprar o produto 3";
	}
	
	return 0;
}
