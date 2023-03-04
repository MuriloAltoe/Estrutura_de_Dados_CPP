#include <iostream>
#include <locale>
#include <cstdlib>

using namespace std;

int main(){
	double vet[10];
	
	for(int i=0 ; i<10 ; i++){
		cout << "Digite um valor: ";
		cin >> vet[i];
	}
	
		cout << "Novos valores:" << endl;

	
	for(int i=0 ; i<10 ; i++){
		cout << (vet[i] * 1.15) << endl;
	}
}
