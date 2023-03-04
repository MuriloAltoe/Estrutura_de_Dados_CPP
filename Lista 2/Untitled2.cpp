#include <iostream>
#include <stdlib.h>
#include <locale>
#include <cstring>

using namespace std;

int main(){
	int *ptr, vet[5];
	
	ptr = vet;
	
	for(int i=0 ; i<5 ; i++){

		cout << "Digite o Valor: ";
		cin >> *ptr;
		ptr++;
	}
	ptr = vet;
	for(int i=0 ; i<5 ; i++){
		*ptr = vet[i];
		
		cout << (*ptr * 2)<< endl;
		
		cout << &vet[i] << endl;

	}
}
