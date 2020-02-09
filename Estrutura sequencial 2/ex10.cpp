#include <iostream>

using namespace std;

int main() {
	
	float celsius;
	float fahrenheit;
	
	cout << "Digite a temperatura em graus celsius: ";
	cin >> celsius;
	
	fahrenheit = (celsius * 9/5) + 32;
	
	cout << "\n" << celsius << " graus celsius sao " << fahrenheit << " graus fahrenheit";
	
	return 0;
}
