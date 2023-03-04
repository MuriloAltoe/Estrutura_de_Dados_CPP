#include <iostream>
#include <cstdlib>
#include <locale>

using namespace std;

struct data{
	int dia = 3000, mes = 3000, ano = 3000;
};

struct pessoa{
	string nome;
	data datanasc;
};

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	pessoa pessoas[3];
	int maisvelho;
	data maior;
	
	for(int i=0 ; i<3 ; i++){
		cout << "--- " << i+1 << " pessoa ---" << endl;
		
		cout << "Insira seu nome" << endl;
		cin >> pessoas[i].nome;
		cout << "Insira sua data de nascimento" << endl;
		cin >> pessoas[i].datanasc.dia;
		cout << " / ";
		cin >> pessoas[i].datanasc.mes;
		cout << " / ";
		cin >> pessoas[i].datanasc.ano;
		
		if(pessoas[i].datanasc.ano < maior.ano){
			maisvelho = i;
			maior.dia = pessoas[i].datanasc.dia;
			maior.mes = pessoas[i].datanasc.mes;
			maior.ano = pessoas[i].datanasc.ano;
			
		}
		else{
			if(pessoas[i].datanasc.mes < maior.mes){
				maisvelho = i;
				maior.dia = pessoas[i].datanasc.dia;
				maior.mes = pessoas[i].datanasc.mes;
				maior.ano = pessoas[i].datanasc.ano;
			}
			else{
				if(pessoas[i].datanasc.dia < maior.dia){
					maisvelho = i;
					maior.dia = pessoas[i].datanasc.dia;
					maior.mes = pessoas[i].datanasc.mes;
					maior.ano = pessoas[i].datanasc.ano;
				}
			}
		}
	}
	
	cout << "Mais velho: " << pessoas[maisvelho].nome << endl << "Datanasc: " << pessoas[maisvelho].datanasc.dia << " / " << pessoas[maisvelho].datanasc.mes << " / " << pessoas[maisvelho].datanasc.ano;
}
