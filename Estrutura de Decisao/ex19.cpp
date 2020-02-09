#include <iostream>

using namespace std;

int main() {
	
	int dia;
	int mes;
	int ano;
	
	cout << "Digite o dia: ";
	cin >> dia;
	
	cout << "Digite o mes: ";
	cin >> mes;
	
	cout << "Digite o ano: ";
	cin >> ano;
	
	if(dia >= 1 && dia <= 31 && mes >= 1 && mes <= 12 && ano >= 1900 && ano <= 2100) {
		if((dia == 29 && mes == 2) && ((ano % 4 == 0)) == 0){
			cout << "Eh uma data valida";
		}
		if(dia <= 28 && mes == 2) {
			cout << "Eh uma data valida";		
		}
		if((dia <= 30) && (mes == 4 || mes == 6 || mes == 9 || mes == 11)) {
			cout << "Eh uma data valida";
		}
		if((dia <= 31) && (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)) {
			cout << "Eh uma data valida";
		}else {
			cout << "Nao eh uma data valida";
		}
	}else {
		cout << "Nao eh uma data valida";
	}
	

	
	return 0;
}
