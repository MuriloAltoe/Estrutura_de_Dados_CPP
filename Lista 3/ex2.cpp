#include <iostream>
#include <cstdlib>
#include <locale>

using namespace std;

struct Produto {
	char nome[30]; /* Nome do produto */
	int *codigo; /* Codigo do produto */
	double *preco; /* Preco do produto */
	char fornecedor[50] /* Fornecedor do produto*/
};

int main(){
	
	produto produtos[5];
	
	for(int i=0 ; i<3 ; i++){
		cout << "--- " << i+1 << " pessoa ---" << endl;
		
		cout << "Insira o nome" << endl;
		cin >> produtos[i].nome;
		cout << "Insira o código" << endl;
		cin >> produtos[i].*codigo;
		*codigo++
}
