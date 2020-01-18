#include <iostream>

using namespace std;

int main() {
	
	float metros;
	float centimetros;
	
	cout << "Digite o numero de metros: ";
	cin >> metros;
	
	centimetros = (metros * 100);
	
	cout << "\n" << metros << " metros sao " << centimetros << " centimetros";
	
	return 0;
}
