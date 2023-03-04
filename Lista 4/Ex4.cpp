#include <iostream>
#include <locale>
#include <cstdlib>

using namespace std; 

int main() {

    int **vet, lin;
    clock_t t;
	t=clock();

    cout << "digite o numero de linhas";
    cin >> lin;

    vet = (int **)calloc(lin, sizeof(int *));
    
    for (int i = 0; i < lin; i++){
         vet[i] = (int *)calloc(lin, sizeof(int));
    }
    
    /*
    
    for(int i=0; i<lin; i++){
        for(int j=0; j<lin; j++){
            cin >> vet[i][j];
        }
    }
    
    */
    
    for(int i=0; i<lin; i++){
        
        cout << endl;
        
        for(int j=0; j<lin; j++){
            
            cout << " | " << vet[i][j] << " | ";
            
        }
    }
    
    cout << "Tempo de uso: " << (float)t << " milisegundos";
	
	return 0;
}
