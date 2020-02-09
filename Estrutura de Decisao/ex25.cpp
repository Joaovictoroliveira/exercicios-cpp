#include <iostream>

using namespace std;

int main() {
	
	int primeira_pergunta;
	int segunda_pergunta;
	int terceira_pergunta;
	int quarta_pergunta;
	int quinta_pergunta;
	int participacao;
	
	cout << "Responda [1] para sim e [2] para nao" << "\n";
	
	cout << "Telefonou para a vitima? ";
	cin >> primeira_pergunta;
	
	cout << "Esteve no local do crime? ";
	cin >> segunda_pergunta;
	
	cout << "Mora perto da vitima? ";
	cin >> terceira_pergunta;
	
	cout << "Devia para a vitima? ";
	cin >> quarta_pergunta;
	
	cout << "Ja trabalhou com a vitima? ";
	cin >> quinta_pergunta;
	
	participacao = (primeira_pergunta + segunda_pergunta + terceira_pergunta + quarta_pergunta + quinta_pergunta);
	
	if(participacao == 5) {
		cout << "\n" << "Assassino";
	}else if(participacao >= 3 && participacao <= 4) {
		cout << "\n" << "Cumplice";
	}else if(participacao == 2) {
		cout << "\n" << "Suspeito";
	}else {
		cout << "\n" << "Inocente";
	}
	
	return 0;
}
