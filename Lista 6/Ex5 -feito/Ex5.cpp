#include <iostream>
#include <locale>
#include <cstdlib>
#include "fila.h"

using namespace std;

int main(){
	
	int chose,i, y, a, b;
	Fila F;
	elem x;
	bool erro;
	
	Create(&F);
	

	while(chose != 7){
		
		cout << endl << endl;

		cout << "1- adcionar voo" << endl;
		cout << "2- remover voo" << endl;
		cout << "3- listar voos" << endl;
		cout << "4- modelo com maior tempo de voo e tanque cheio" << endl;
		cout << "5- modelo com a maior capacidade" << endl;
		cout << "6- caracteristicas do primeiro voo" << endl;
		cout << "7- sair" << endl;
		
		cin >> chose;
		
		switch(chose){
		
			case 1:
				
				cout << "Digite o nome do modelo: " << endl;
				cin >> x;
				cout << "Digite a duração do voo: " << endl;
				cin >> y;
				cout << "Digite a capacidade do tanque: " << endl;
				cin >> a;
				cout << "Digite a capacidade de pessoas: " << endl;
				cin >> b;
				
				Enter(&F, &x, &y, &a, &b, &erro);
				
			break;
			
			case 2:
				Out(&F, &erro);
			break;

			case 3:
				Print(&F);
			break;
			
			case 4:
				MaiorCapacidadeTan(&F);
			break;
			
			case 5:
			 	MaiorCapacidadePas(&F);
			break;
			
			case 6:
				Print1(&F);
			break;
				
			case 7:
				return 0;
			break;
		}		
			
	};


	return 0;
}
