#include <iostream>
#include <locale>
#include <cstdlib>

using namespace std;

struct produtos{
        char nome[10][50];
    };
    
produtos produtos;

int main() {

 int i;
 float vet[10], vet1[10], *p_vet;

 for(i=0; i<=9; i++) {
	 cout << "Informe o valor do produto: " << i+1 << " :";
	 cin >> vet[i];
	 cout << "Informe o nome do produto: " << i+1 << " :";
	 cin >> produtos.nome[i];
	 cout << endl;
 }

 for(i=0; i<=9; i++) {
	 p_vet = &vet[i];
	 *p_vet = *p_vet+(*p_vet * 0.0478);
	 vet1[i] = *p_vet;
	 cout <<   produtos.nome[i] << " --- Preco reajustado do produto: "  << vet1[i] << endl ;

 }
 
 	return 0;
 }
	


