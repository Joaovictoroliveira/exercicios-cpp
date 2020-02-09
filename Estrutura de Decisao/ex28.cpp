#include <iostream>

using namespace std;

int main() {
	
	float tipo_carne;
	float quantidade;
	float tipo_pagamento;
	float preco_file = 4.90;
	float preco_alcatra = 5.90;
	float preco_picanha = 6.90;
	float desconto;
	float preco_total;
	float valor_pagar;
	
	cout << "Escolha o tipo de carne" << "\n";
	cout << "[1] - File Duplo" << "\n";
	cout << "[2] - Alcatra" << "\n";
	cout << "[3] - Picanha" << "\n";
	cin >> tipo_carne;
	
	cout << "\n" << "Digite a quantidade que deseja em quilos: ";
	cin >> quantidade;
	
	cout << "\n" << "Escolha o tipo de pagamento" << "\n";
	cout << "[1] - Pagamento em dinheiro" << "\n";
	cout << "[2] - Pagamento em cartao" << "\n";
	cin >> tipo_pagamento;
	
	if(tipo_carne == 1) {
		if(quantidade <= 5 && tipo_pagamento == 1) {
			preco_total = preco_file * quantidade;
			valor_pagar = preco_file * quantidade;
		}else if(quantidade > 5 && tipo_pagamento == 1) {
			preco_file = 5.80;
			preco_total = preco_file * quantidade;
			valor_pagar = preco_file * quantidade;
		}else if(quantidade <= 5 && tipo_pagamento == 2) {
			desconto = (preco_file * quantidade) * 0.05;
			preco_total = preco_file * quantidade;
			valor_pagar = preco_total - desconto;
		}else if(quantidade > 5 && tipo_pagamento == 2) {
			preco_file = 5.80;
			desconto = (preco_file * quantidade) * 0.05;
			preco_total = preco_file * quantidade;
			valor_pagar = preco_total - desconto;
		}
	}
	
	if(tipo_carne == 2) {
		if(quantidade <= 5 && tipo_pagamento == 1) {
			preco_total = preco_alcatra * quantidade;
			valor_pagar = preco_alcatra * quantidade;
		}else if(quantidade > 5 && tipo_pagamento == 1) {
			preco_alcatra = 6.80;
			preco_total = preco_alcatra * quantidade;
			valor_pagar = preco_alcatra * quantidade;
		}else if(quantidade <= 5 && tipo_pagamento == 2) {
			desconto = (preco_alcatra * quantidade) * 0.05;
			preco_total = preco_alcatra * quantidade;
			valor_pagar = preco_total  - desconto;
		}else if(quantidade > 5 && tipo_pagamento == 2) {
			preco_alcatra = 6.80;
			desconto = (preco_alcatra * quantidade) * 0.05;
			preco_total = preco_alcatra * quantidade;
			valor_pagar = preco_total  - desconto;
		}
	}
	
	if(tipo_carne == 3) {
		if(quantidade <= 5 && tipo_pagamento == 1) {
			preco_total = preco_picanha * quantidade;
			valor_pagar = preco_picanha * quantidade;
		}else if(quantidade > 5 && tipo_pagamento == 1) {
			preco_picanha = 7.80;
			preco_total = preco_picanha * quantidade;
			valor_pagar = preco_picanha * quantidade;
		}else if(quantidade <= 5 && tipo_pagamento == 2) {
			desconto = (preco_picanha * quantidade) * 0.05;
			preco_total = preco_picanha * quantidade;
			valor_pagar = preco_total - desconto;
		}else if(quantidade > 5 && tipo_pagamento == 2) {
			preco_picanha = 7.80;
			desconto = (preco_picanha * quantidade) * 0.05;
			preco_total = preco_picanha * quantidade;
			valor_pagar = preco_total - desconto;
		}
	}
	
	cout << "\n" << "Tipo de carne: " << tipo_carne << "\n";
	cout << "Quantidade: " << quantidade << "Kg" << "\n";
	cout << "Preco total: R$" << preco_total << "\n";
	cout << "Tipo de pagamento: " << tipo_pagamento << "\n";
	cout << "Valor do desconto: R$" << desconto << "\n";
	cout << "Valor a pagar: R$" << valor_pagar;
	
	return 0;
}
