#include <iostream>
#include <locale>
#include <cstdlib>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int vet[10], cont;
	
	for(int i=0 ; i<10 ; i++){
	
		cout << "Digite um número: ";
		cin >> vet[i];
		
		cont = cont + vet[i];
		
	}
	
	for(int i=0 ; i<10 ; i++){
	
	if(vet[i] == (cont/10)){
		cout << vet[i] << " é a media";
	}

		
	}
	

}
