#include <iostream>
#include <locale>
#include <cstdlib>
#include "fila.h"
#include "estrutura_pilha.h"

using namespace std;

int main(){
	
	Fila F;
	Pilha P;
	elem x;
	bool erro;
	
	Create(&F);
	
	Create(&P);
	
	for(int i=0; i<10; i++){
		cout << "Digite um numero: ";
		cin >> x;
		Enter(&F, &x, &erro);
	}
		
	for(int i=0; i<10; i++){
		x = Out(&F, &erro);
		Push(&P, &x, &erro);
	}
	
	for(int i=10 ; i>0 ; i--){
		x = P.itens[i];
		Enter(&F, &x, &erro);
	}
	
	for(int i=0; i<10; i++){
		cout << F.itens[i] << ", ";
	}
	
	return 0;
}
