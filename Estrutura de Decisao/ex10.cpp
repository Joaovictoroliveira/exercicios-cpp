#include <iostream>

using namespace std;

int main() {
	
	char turno;
	
	cout << "M - Matutino" << "\n";
	cout << "V - Vespertino" << "\n";
	cout << "N - Noturno" << "\n";
	
	cout << "Em que turno voce estuda? ";
	cin >> turno;
	
	if(turno == 'm' or turno == 'M') {
		cout << "Matutino";
	}else if(turno == 'v' or turno == 'V') {
		cout << "Vespertino";
	}else if(turno == 'n' or turno == 'N') {
		cout << "Noturno";
	}else {
		cout << "Invalido";
	}
	
	return 0;
}
