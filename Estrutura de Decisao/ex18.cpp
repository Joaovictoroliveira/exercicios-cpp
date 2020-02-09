#include <iostream>

using namespace std;

int main() {
	
	int num;
	int centenas;
	int dezenas;
	int unidades;
	
	cout << "Digite um numero inteiro menor que 1000: ";
	cin >> num;
	
	centenas = (num / 100);
	dezenas = (num - (centenas * 100)) / 10;
	unidades = num - ((centenas * 100) + (dezenas * 10));
	
	if(centenas > 0 && dezenas > 0 && unidades > 0) {
		cout << "O numero " << num << " possui " << centenas << " centenas, " << dezenas << " dezenas e " << unidades << " unidades" << "\n";
	}else if(centenas > 0 && unidades == 0 && dezenas > 0) {
		cout << "O numero " << num << " possui " << centenas << " centenas " << "e " << dezenas << " dezenas";
	}else if(centenas > 0 && dezenas == 0 && unidades > 0) {
		cout << "O numero " << num << " possui " << centenas << " centenas " << "e " << unidades << " unidades";
	}else if(centenas > 0 && num % centenas == 0) {
		cout << "O numero " << num << " possui " << centenas << " centenas";
	}else if(centenas == 0 && dezenas > 0 && unidades > 0) {
		cout << "O numero " << num << " possui " << dezenas << " dezenas e " << unidades << " unidades";
	}else if(centenas == 0 && dezenas > 0 && num % dezenas == 0) {
		cout << "O numero " << num << " possui " << dezenas << " dezenas";
	}else if(centenas == 0 && dezenas == 0) {
		cout << "O numero " << num << " possui " << unidades << " unidades";
	}
	
	return 0;
}
