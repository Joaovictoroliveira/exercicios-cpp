#include <iostream>

using namespace std;

int main() {
	
	float tamanho_arquivo;
	float velocidade_internet;
	float tempo_download;
	
	cout << "Digite o tamanho do arquivo(MB): ";
	cin >> tamanho_arquivo;
	
	cout << "Digite a velocidade da internet(Mbps): ";
	cin >> velocidade_internet;
	
	tempo_download = (tamanho_arquivo / 8) / velocidade_internet;
	cout << "\n" << "O tempo total de download eh de " << tempo_download << " minutos"; 
	
	return 0;
}
