#include <iostream>
#include <cmath>

using namespace std;

#define pi 3.1415

int main() {
	
	float raio;
	float area;
	
	cout << "Digite o valor do raio: ";
	cin >> raio;
	
	area = pi * pow(raio, 2);
	
	cout << "\n" << "A area eh de: " << area;
	
	return 0;
}
