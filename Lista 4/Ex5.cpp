#include <cstdlib>
#include <locale>
#include <iostream>


using namespace std;

int main() 
{ 
	int i,j,n,x; 
	int *v; 
	cout << "Digite o tamanho: ";
	cin >> n;
	v = (int *)malloc(n*sizeof(int)); 
	cout << "Digite os numeros: " << endl;
	for (i = 0; i < n; i++){
		cin >> v[i];
	} 
 
	for(int i ; i<n-1 ;){ 
		if (v[i] == v[i+1]){ 
			for (j = i; j < n-1; j++){ 
				v[j] = v[j+1]; 
			} 
			n--; 
			v = (int *)realloc(v,n*sizeof(int)); 
		} else { 
			i++; 
		} 
	} 
	cout << "Vetor" << endl;
	
	for (i = 0; i < n; i++){
		cout << v[i] << ", ";
	}
	
	return 0;
}
