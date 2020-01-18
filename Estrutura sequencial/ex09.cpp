#include <iostream>

using namespace std;

int main() {
	
	float fahrenheit;
	float celsius;
	
	cout << "Digite a temperatura em fahrenheit: ";
	cin >> fahrenheit;
	
	celsius = (5 * (fahrenheit - 32) / 9);
	cout << fahrenheit << " graus fahrenheit sao " << celsius << " graus celsius";
	
	return 0;
}
