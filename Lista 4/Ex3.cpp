#include <iostream>
#include <locale>
#include <cstdlib>

using namespace std; 

struct produto{
	int codigo;
	char nome[20];
	float preco;
};

int main() {
	
	produto *prod, hold;
	float media;

	for(int i=0; i<5; i++){
	
		if(i == 0){
			prod = (produto*)calloc(1 , sizeof(produto));
		} else {
			prod = (produto*)realloc(prod, 1 * sizeof(produto));
		}
		
		cout << "Digite o código: ";
		cin >> prod[i].codigo;
		
		cout << "Digite o nome do produto: ";
		cin >> prod[i].nome;
		
		cout << "Digite o preco: ";
		cin >> prod[i].preco;
	
		media = media + prod[i].preco;
	
	}

	media = (media/5);

	
	cout << "Média: " << media << endl;
	
/*
    for (int i = 0; i < 5 - 1; i++){
    	for (int j = 0; j < 5 - i - 1; j++){
    		 if (prod[i].preco > prod[i+1].preco){                
                hold = prod[i];
			    prod[i] = prod[i+1];
			    prod[i+1] = hold;
			 }
                
		}
           
	}
  */
	
	for(int i=0; i<5; i++){
		
		cout << endl << endl << "Produto" << i+1 << endl;
		
		cout << "Código: " << prod[i].codigo << endl;
	
		cout << "Nome do produto: " << prod[i].nome << endl;
	
		cout << "Preco: " << prod[i].preco << endl;
		
	}

free(prod);

return 0;
}
