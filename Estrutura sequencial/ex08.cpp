#include <iostream>

using namespace std;

int main() {
	
	float salario_hora;
	float hora_mes;
	float salario;
	
	cout << "Digite quanto voce ganha por hora: ";
	cin >> salario_hora;
	
	cout << "Digite quantas horas voce trabalha por mes: ";
	cin >> hora_mes;
	
	salario = (salario_hora * hora_mes);
	cout << "\n" <<"Seu salario eh de: R$" << salario;
	
	return 0;
}
