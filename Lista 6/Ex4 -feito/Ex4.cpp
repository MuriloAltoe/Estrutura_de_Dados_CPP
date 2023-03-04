#include <iostream>
#include <locale>
#include <cstdlib>
#include "fila.h"

using namespace std;

int main(){
	
	int chose, y, maior=0, i;
	Fila F;
	elem x;
	bool erro;
	
	Create(&F);
	

	while(chose != 5){
		
		cout << endl << endl;

		cout << "1- adcionar processo" << endl;
		cout << "2- matar o processo mais longo" << endl;
		cout << "3- excluir processo" << endl;
		cout << "4- imprimir" << endl;
		cout << "5- sair" << endl;
		
		cin >> chose;
		
		switch(chose){
		
			case 1:
				
				cout << "Digite o nome do processo: " << endl;
				cin >> x;
				cout << "Digite a duração do processo: " << endl;
				cin >> y;
				
				Enter(&F, &x, &y, &erro);
				
			break;
			
			case 2:
				

				
				for(i=0; i<F.total; i++){
				
				
				
					if(F.tempo[i] > maior){
						maior = i;
					}
					
				}
				
				cout << maior << endl;
				

				
				Out2(&F, &maior , &erro);
				
				/*
				
				for(int i=0; i<10; i++){
					if(F.tempo[i] = maior){
						Out2(&F, &i, &erro);
					}
				}
				
				*/
				
			break;
			
			case 3:
				Out(&F, &erro);
			break;

			case 4:
				Print(&F);
			break;
				
			case 5:
				return 0;
			break;
		}		
			
	};


	return 0;
}
