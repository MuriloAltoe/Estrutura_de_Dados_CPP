#include <iostream>
#include <locale>
#include <cstdlib>
#include "estrutura_pilha.h"

using namespace std; 

int main() {

	Pilha p1;
	bool erro;
	elem val;
	int menval=0, maival=0, total=0;
	
	Create(&p1);
	
	for(int i=0; i<5; i++){
		cout << "Digite um numero: ";
		
		cin >> val;
		
		Push(&p1, &val, &erro);
	}
	
	menval = p1.itens[0];
	maival = p1.itens[0];
	
	cout << "-------------------------------------" << endl;
	
	for(int i=0; i<p1.topo+1; i++){
		cout << p1.itens[i] << ", ";
	}
	
	cout << endl << "-------------------------------------" << endl;
	
	for(int i=0; i<5; i++){
		
		if(p1.itens[i] < menval){
			menval = p1.itens[i];
		}
		if(p1.itens[i] > maival){
			maival = p1.itens[i];
		}
		
		total = total+p1.itens[i];
	
	}
	
	total = total/5;
	
	cout << "Menor: " << menval << endl;
	cout << "Maior: " << maival << endl;
	cout << "Media: " << total << endl;
	
	return 0;
	
	
}
