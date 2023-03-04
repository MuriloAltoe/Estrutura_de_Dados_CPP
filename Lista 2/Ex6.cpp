#include <iostream>
#include <locale>
#include <cstdlib>

using namespace std;

struct sorteio{
	string nome;
	int numero;
	
};

int func(int a){
	
	a = rand() % 10 + 1;
	
	return a;
}



int main(){
	
	sorteio pessoas[10];
	int numsort;
	
	for(int i=0 ; i<10 ; i++){
		cout << "Digite o nome:" << endl;
		cin >> pessoas[i].nome;
		
		pessoas[i].numero = i+1;
		cout << "numero:" << pessoas[i].numero << endl;
		
	};
	
	numsort = func(numsort);
	
	cout << "Número sorteado: " << numsort << endl;
	
	for(int i=0 ; i<10 ; i++){
		if(pessoas[i].numero == numsort){
			cout << pessoas[i].nome << " Ganhou!";
		}
	}
	
	
	
	
}
