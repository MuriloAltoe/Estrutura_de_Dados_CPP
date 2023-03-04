#include <iostream>
#include <locale>
#include <cstdlib>

using namespace std;

struct jogadores{
	string nome, pos;
	int idade;
	double altura;
};

int main(){
	
	jogadores jogador[5];
	
	for(int i=0 ; i<5 ; i++){
		cout << "Digite o nome: ";
		cin >> jogador[i].nome;
		
		cout << "Digite a posição: ";
		cin >> jogador[i].pos;
		
		cout << "Digite a idade: ";
		cin >> jogador[i].idade;
		
		cout << "Digite a altura: ";
		cin >> jogador[i].altura;
	}
	
    int n = 5;
        for (int i=0 ; i<n-1 ; i++){
			for (int j=0 ; j < n-i-1 ; j++){
                if(jogador[j].idade > jogador[j+1].idade){
                    
                    jogadores temp = jogador[j];
                    jogador[j] = jogador[j+1];
                    jogador[j+1] = temp;
                }
			}
		}
		
		for (int i = 0; i < 5; i++){
			cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl << endl;
			cout << "nome da pessoa " << i+1 << ": " << jogador[i].nome << endl;
			cout << "idade da pessoa " << i+1 << ": " << jogador[i].idade << endl << endl;
			
		}
            
	
	
}
