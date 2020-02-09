#include <iostream>

using namespace std;

int main() {
	
	int num;
	
	cout << "Digite um numero: ";
	cin >> num;
	
	if(num >= 0) {
		cout << "O numero " << num << " eh positivo";
	}else {
		cout << "O numero " << num << " eh negativo";
	}
	
	return 0;
}
