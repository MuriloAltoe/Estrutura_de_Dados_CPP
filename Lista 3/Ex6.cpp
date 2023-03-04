#include <iostream>
#include <locale>
#include <cstring>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main(){
    int x; int*p;
    float y; float *l;  
    char z[5] ; char *m;

    p = &x;
    l = &y;
    m = &z[5];
    
    cout << "Digite 5 numeros inteiros "  << endl;
    cin >> *p;
    cin >> *p;
    cin >> *p;
    cin >> *p;
    cin >> *p;
      
    cout << "Digite 5 decimais " << endl;
    cin >> *l;
	cin >> *l;
	cin >> *l;
	cin >> *l;
	cin >> *l;
  
	cout << "Digite 5 letras " << endl;
	cin >> *m;
	cin >> *m;
	cin >> *m;
	cin >> *m;
	cin >> *m;
	

    *p = 100;
    *l = 1.99;
    *m =  'W'; 

	cout << "Apos a troca de valores inteiros ficou " << *p <<" " << *p <<" " << *p <<" " << *p <<" " << *p << endl;
   	cout << "Apos a troca de valores decimais ficou " << *l <<" " << *l <<" " << *l <<" " << *l <<" " << *l << endl;
  	cout << "Apos a troca de caracteres ficou "       << *m <<" " << *m <<" " << *m <<" " << *m <<" " << *m << endl;


    return 0;
}
