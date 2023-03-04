#include <iostream>
#include <locale>
#include <cstdlib>
#include <bits/stdc++.h>

using namespace std;

void bubbleSort(int arr[], int n){

    for(int i = 0; i < n - 1; i++){


        for(int j = 0; j < n - i - 1; j++){
			if (arr[j] > arr[j + 1]){
				swap(arr[j], arr[j + 1]);
			}
                
		}
   	}         
}
	
	
	
int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
    int arr[10];
    
    
    for(int i=0 ; i<10 ; i++){
    	cout << "digite o " << i+1 << " numero: ";
    	cin >> arr[i];
	}
	
	
    int N = sizeof(arr) / sizeof(arr[0]);
    
    bubbleSort(arr, N);
    
    cout << "Valores ordenados: " << endl;
    
    for (int i = 0; i < N; i++){
        cout << arr[i] << " " << endl;
	}

    
    return 0;
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
