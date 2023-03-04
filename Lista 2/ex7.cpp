#include <iostream>
#include <locale>
#include <cstdlib>

using namespace std;

struct voos {
	int cod;
	string dest, origem;
};

struct aeroporto{
	int codigo, qtdsaem, qtdchegam;
	string nome;
};

int main(){
	
	int ver = 1, chose = 0;
	
	aeroporto aeroportos[6], verifica;
	
	aeroportos[0].codigo = 0;
	aeroportos[0].nome = "Tão Tão Distante";
	aeroportos[0].qtdchegam = 0;
	aeroportos[0].qtdsaem = 0;
	
	aeroportos[1].codigo = 1;
	aeroportos[1].nome = "Congonhas";
	aeroportos[1].qtdchegam = 0;
	aeroportos[1].qtdsaem = 0;
	
	aeroportos[2].codigo = 2;
	aeroportos[2].nome = "Guarulhos";
	aeroportos[2].qtdchegam = 0;
	aeroportos[2].qtdsaem = 0;
	
	aeroportos[3].codigo = 3;
	aeroportos[3].nome = "Viracopos";
	aeroportos[3].qtdchegam = 0;
	aeroportos[3].qtdsaem = 0;
	
	aeroportos[4].codigo = 4;
	aeroportos[4].nome = "Espirito Santo";
	aeroportos[4].qtdchegam = 0;
	aeroportos[4].qtdsaem = 0;
	
	aeroportos[5].codigo = 5;
	aeroportos[5].nome = "Copenhagen";
	aeroportos[5].qtdchegam = 0;
	aeroportos[5].qtdsaem = 0;
	
	while(ver != 2){
		
		cout << "Digite a escolha" << endl << "1 - Adicionar voo" << endl << "2 - sair" << endl;
		cin >> ver;
		switch(ver){
			
			case 1:
				cout << "Digite o codigo do aeroporto";
				cin >> verifica.codigo;
				if (verifica.codigo <=5 && verifica.codigo >=0){
					cout << "Quantos voos chegaram?";
					cin >> verifica.qtdchegam;
					if((aeroportos[verifica.codigo].qtdchegam + verifica.qtdchegam) <= 10){
						aeroportos[verifica.codigo].qtdchegam = aeroportos[verifica.codigo].qtdchegam + verifica.qtdchegam;
					}
					else{
						cout << "Voos excedem o valor total de chegada" << endl;
					}
					
					cout << "Quantos voos sairam?";
					cin >> verifica.qtdsaem;
					if((aeroportos[verifica.codigo].qtdsaem + verifica.qtdsaem) <= 10){
						aeroportos[verifica.codigo].qtdsaem = aeroportos[verifica.codigo].qtdsaem + verifica.qtdsaem;
					}
					else{
						cout << "Voos excedem o valor total de saida" << endl;
					}
				}
			break;
			
			case 2:
				cout << "Saindo ...";
			break;
		}
	}
}
