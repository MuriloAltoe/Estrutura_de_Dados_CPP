#include <iostream>
#include <locale>
#include <cstdlib>

using namespace std;


struct produto{
	int codigo, quantidade;
	double preco;
	char nome;
};

int main(){
	
	produto produtos[5];
	
	produtos[0].codigo = 1;
	produtos[1].codigo = 5;
	produtos[2].codigo = 2;
	produtos[3].codigo = 3;
	produtos[4].codigo = 4;

	produtos[0].nome = "bolos";
	produtos[1].nome = "pizza";
	produtos[2].nome = "maca";
	produtos[3].nome = "limao";
	produtos[4].nome = "carne";
	
	produtos[0].preco = 2.3;
	produtos[1].preco = 3.4;
	produtos[2].preco = 4.5;
	produtos[3].preco = 5.6;
	produtos[4].preco = 6.7;
	
	produtos[0].quantidade = 5;
	produtos[1].quantidade = 5;
	produtos[2].quantidade = 5;
	produtos[3].quantidade = 5;
	produtos[4].quantidade = 5;
	
		
	
	return 0;
}
