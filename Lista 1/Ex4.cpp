#include <iostream>
#include <locale>
#include <cstdlib>

using namespace std;

int func(string a){
	if(a == "sim" || a == "Sim" || a == "s" || a == "S" ){
		return 1;
	}
	if(a == "n�o" || a == "N�o" ||a == "nao" || a == "Nao" || a == "n" || a == "N" ){
		return 0;
	}
	else{
		return 2;
	}
}

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int i = 1;
	string resp;
	
	
	while(i=1){
		cout << endl << "Digite sim ou n�o" << endl; 
		cin >> resp;
		
		if(func(resp) == 1){
			cout << "Sim";
		}
		else if(func(resp) == 0){
			cout << "N�o";
		}
		else{
			cout << "Inv�lido";
		}
	}

}
