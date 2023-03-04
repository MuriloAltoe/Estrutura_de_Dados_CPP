#include <iostream>
#include <locale>
#include <cstdlib>
#include <ctime>

using namespace std; 

int main() {

	int n, k=1;
	clock_t t;
	t=clock();
	
	cout << "Digite o numero: ";
	cin >> n;
	
	for(int i=1; i<=n; i++){
		k = k*i;
	}
	
	t=clock()-t;
	
	cout << "Seu fatorial é: " << k << endl;
	cout << "Tempo de uso: " << (float)t/CLOCKS_PER_SEC << " segundos";
	
	return 0;
}
