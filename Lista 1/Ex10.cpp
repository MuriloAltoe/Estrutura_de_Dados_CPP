#include <iostream>
#include <locale>
#include <cstdlib>

using namespace std;

int func(int x){
	
	int cont;
	
	for(int i=1 ; i <= x ; i++){
		if(x%i==0){
			cont++;
		}
	}
	
	
	if(cont == 2){
		cout << "� primo";
	}
	
	else if(x%2 == 0){
		cout << "� par";
	}
	else{
		cout << "� impar";
	}
	
	
}

int main(){
	
	setlocale(LC_ALL, "Portuguese");

	int num;

	cout << "Digite o n�mero: ";
	cin >> num;
	
	func(num);
	
}
