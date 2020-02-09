#include <iostream>

using namespace std;

int main() {
	
	int num;
	
	cout << "Digite um numero inteiro: ";
	cin >> num;
	
	if(num % 2 == 0) {
		cout << num << " eh um numero par";
	}else {
		cout << num << " eh um numero impar";
	}
	
	return 0;
}
