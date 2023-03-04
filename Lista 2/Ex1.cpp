#include <iostream>
#include <cstdlib>
#include <locale>

using namespace std;

struct pessoa{
	int cpf;
	string nome;
	double saldo;
};


int main(){
	
	pessoa pessoas[5];
	
	for(int i=0 ; i<5 ; i++){
		cout << "Digite o nome: ";
		cin >> pessoas[i].nome;
		
		cout << "Digite o CPF: ";
		cin >> pessoas[i].cpf;
		
		cout << "Digite o Saldo: ";
		cin >> pessoas[i].saldo;
	}
	
    int n = 5;
        for (int i=0 ; i<n-1 ; i++){
			for (int j=0 ; j < n-i-1 ; j++){
                if(pessoas[j].saldo > pessoas[j+1].saldo){
                    
                    pessoa temp = pessoas[j];
                    pessoas[j] = pessoas[j+1];
                    pessoas[j+1] = temp;
                }
			}
		}
		
		for (int i = 0; i < 5; i++){
			cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl << endl;
			cout << "nome da pessoa " << i+1 << ": " << pessoas[i].nome << endl;
			cout << "saldo da pessoa " << i+1 << ": " << pessoas[i].saldo << endl << endl;
			
		}
            
	
	
}
