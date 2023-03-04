#include <iostream>
#include <locale>
#include <cstdlib>
#include "estrutura_pilha.h"
using namespace std; 

void func(Pilha p1, Pilha p2){
	
	bool erro, erro2;
	int y;
	
	while(y == 0){
		Pop(&p1, &erro);
		Pop(&p2, &erro2);
		
		if(erro==true && erro2==false){
			cout << "A segunda pilha é maior";
			y=1;
			
		}
		if(erro==false && erro2==true){
			cout << "A Primeira pilha é maior";
			y=1;
		}
		else{
			cout << "A São iguais";
			y=1;
		}
	}
	
}

int main() {

	Pilha p1, p2;
	elem val;
	bool erro;
	
	cout << "Primeira pilha" << endl;
	
		for(int i=0; i<5; i++){
		cout << "Digite um numero: ";
		
		cin >> val;
		
		Push(&p1, &val, &erro);
	}
	
	cout << "Segunda pilha" << endl;
		
		for(int i=0; i<2; i++){
		cout << "Digite um numero: ";
		
		cin >> val;
		
		Push(&p2, &val, &erro);
	}
	
	func(p1, p2);	
	
	return 0;
}
