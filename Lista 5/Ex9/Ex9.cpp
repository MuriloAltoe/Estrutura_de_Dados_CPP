#include <iostream>
#include <locale>
#include <cstdlib>
#include "estrutura_pilha.h"

using namespace std; 

int main(){

	Pilha p1;
	bool erro;
	elem val;
	
	Create(&p1);
	
	cin >> val;
	
	Push(&p1, &val, &erro);
	
	cin >> val;
	
	Push(&p1, &val, &erro);
	
	cin >> val;
	
	Push(&p1, &val, &erro);
	
	cin >> val;
	
	Push(&p1, &val, &erro);
	
	Pop(&p1, &erro);
	
	Pop(&p1, &erro);
	
	cin >> val;
	
	Push(&p1, &val, &erro);
	
	cin >> val;
	
	Push(&p1, &val, &erro);
	
	Pop(&p1, &erro);
	
	cout << endl << "Resultado: " << endl;
	
	for(int i=4; i>0 ;i--){
		cout << p1.itens[i] << endl;
	}
	
	
	return 0;
}
