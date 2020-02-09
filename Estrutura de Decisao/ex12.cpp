#include <iostream>

using namespace std;

int main() {
	
	float valor_hora;
	float horas_mes;
	float salario_bruto;
	float salario_liquido;
	float ir;
	float inss;
	float fgts;
	float descontos;
	
	cout << "Digite o quanto voce ganha por hora: R$";
	cin >> valor_hora;
	
	cout << "Digite quantas horas voce trabalha por mes: ";
	cin >> horas_mes;
	
	salario_bruto = valor_hora * horas_mes;
	
	if(salario_bruto <= 900) {
		ir = 0;
		inss = (salario_bruto * 0.1);
		fgts = (salario_bruto * 0.11);
		descontos = (ir + inss);
	}else if(salario_bruto <= 1500) {
		ir = (salario_bruto * 0.05);
		inss = (salario_bruto * 0.1);
		fgts = (salario_bruto * 0.11);
		descontos = (ir + inss);
	}else if(salario_bruto <= 2500) {
		ir = (salario_bruto * 0.1);
		inss = (salario_bruto * 0.1);
		fgts = (salario_bruto * 0.11);
		descontos = (ir + inss);
	}else if(salario_bruto > 2500) {
		ir = (salario_bruto * 0.2);
		inss = (salario_bruto * 0.1);
		fgts = (salario_bruto * 0.11);
		descontos = (ir + inss);
	}
	
	salario_liquido = salario_bruto - descontos;
	
	cout << "\n" << "Salario bruto: R$" << salario_bruto << "\n";
	cout << "Imposto de renda: R$" << ir << "\n";
	cout << "INSS: R$" << inss << "\n";
	cout << "FGTS: R$" << fgts << "\n";
	cout << "Total de descontos: R$" << descontos << "\n";
	cout << "Salario liquido: R$" << salario_liquido << "\n";
	
	return 0;
}
