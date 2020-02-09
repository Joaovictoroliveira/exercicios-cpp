#include <iostream>

using namespace std;

int main() {
	
	float salario_hora;
	float horas_trabalhadas;
	float ir;
	float inss;
	float sindicato;
	float salario_bruto;
	float salario_liquido;
	float descontos;
	
	cout << "Digite quanto voce ganha por hora: ";
	cin >> salario_hora;
	
	cout << "Digite quantas horas voce trabalha por mes: ";
	cin >> horas_trabalhadas;
	
	salario_bruto = (salario_hora * horas_trabalhadas);
	cout << "\n" << "Salario bruto: R$" << salario_bruto << "\n";
	
	ir = (salario_bruto * 0.11);
	cout << "Imposto de Renda: R$" << ir << "\n";
	
	inss = (salario_bruto * 0.08);
	cout << "INSS: R$" << inss << "\n";
	
	sindicato = (salario_bruto * 0.05);
	cout << "Sindicato: R$" << sindicato << "\n";
	
	descontos = (ir + inss + sindicato);
	
	salario_liquido = (salario_bruto - descontos);
	cout << "Salario liquido: R$" << salario_liquido;	
		
	return 0;
}
