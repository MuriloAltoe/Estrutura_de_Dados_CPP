#include <iostream>
#include <locale>
#include <cstdlib>

using namespace std;

string func(float x[]){
	
	int maval=0 , meval=x[0];
	
	for(int i=0 ; i<10 ; i++){
		if (x[i] > maval){
			maval=x[i];
		}
		if (x[i] < meval){
			meval=x[i];
		}
	}
	
	cout << "Maior numero:" << maval;
	cout << "Menor numero:" << meval;
	
}

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float vet[10];
	
	for(int i=0 ; i<10 ; i++){
		cout << "Digite um num: ";
		cin >> vet[i];
	};
	
	func(vet);
	
}
