#include <iostream>
#include <locale>
#include <cstdlib>
#include "estrutura_pilha.h"

using namespace std; 

void inverte(Pilha *p){

	Pilha p2;
	int j = 1;

	for(int i=p->topo ; i>0 ; i--){
		p2.itens[j] = p->itens[i];
		j++;
	}

	for(int i=0; i<5; i++){
		cout << p2.itens[i] << endl;
	}

}

int main() {

	Pilha p1;
	bool erro;
	elem val[5]={ 1 , 2 , 3 , 4 , 5 };
	
	Create(&p1);

	for(int i=0; i<5; i++){
		Push(&p1, &val[i], &erro);
	}
	
	inverte(&p1);
	
	for(int i=0; i<5; i++){
		cout << p1.itens[i] << endl;
	}

	return 0;
}
