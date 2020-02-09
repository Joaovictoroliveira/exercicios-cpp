#include <iostream>

using namespace std;

int main() {
	
	float num;
	
	cout << "Digite um numero: ";
	cin >> num;
	
	if(num == int(num)) {
		cout << num << " eh um numero inteiro: ";
	}else {
		cout << num << " eh um numero decimal";
	}
	
	return 0;
}
