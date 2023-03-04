#include <iostream>
#include <locale>
#include <cstdlib>
#include <cstring>

using namespace std;
	
int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	char nome[30], sobrenome[30], nomecomp[60];
	   
    cout << "Digite o nome: ";
    cin >> nome;
   
    cout << "Digite o sobrenome: ";
    cin >> sobrenome;
    
	
	if(strcmp(nome, sobrenome) == -1){
		cout << strcat(nome, sobrenome);
	}
	else if(strcmp(nome, sobrenome) == 1){
		cout << strcat(sobrenome, nome);
	}
	else{
		cout << "Tamanho concatenado: " << endl;
		cout << strlen(strcat(nome, sobrenome)) << endl;
	}

}
