#include <iostream>
#include <locale>
#include <cstdlib>

using namespace std; 

int main() {

    int **vet, lin, col;
    
    
    
    cout << "digite o numero de linhas";
    cin >> lin;
    
    cout << "digite o numero de colunas";
    cin >> col;
    
    vet = (int **)malloc(lin*sizeof(int *));
    
    for (int i = 0; i < lin; i++){
         vet[i] = (int *)malloc(col*sizeof(int));
    }
    
    for(int i=0; i<lin; i++){
        for(int j=0; j<col; j++){
            cin >> vet[i][j];
        }
    }
    
    for(int i=0; i<lin; i++){
        
        cout << endl;
        
        for(int j=0; j<col; j++){
            
            cout << " | " << vet[i][j] << " | ";
            
        }
    }

	
	return 0;
}
