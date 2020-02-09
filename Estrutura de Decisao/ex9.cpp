#include <iostream>

using namespace std;

int main() {
	
	int num1;
	int num2;
	int num3;
	
	cout << "Digite o primeiro numero: ";
	cin >> num1;
	
	cout << "Digite o segundo numero: ";
	cin >> num2;
	
	cout << "Digite o terceiro numero: ";
	cin >> num3;
	
	if(num1 > num2 and num1 > num3 and num2 > num3) {
		cout << num1 << " " << num2 << " " << num3;
	}else if(num1 > num2 and num1 > num3 and num3 > num2) {
		cout << num1 << " " << num3 << " " << num2;
	}else if(num2 > num1 and num2 > num3 and num1 > num3) {
		cout << num2 << " " << num1 << " " << num3;
	}else if(num2 > num1 and num2 > num3 and num3 > num1) {
		cout << num2 << " " << num3 << " " << num1;
	}else if(num3 > num1 and num3 > num2 and num1 > num2) {
		cout << num3 << " " << num1 << " " << num2;
	}else {
		cout << num3 << " " << num2 << " " << num1;
	}
	
	return 0;
}
