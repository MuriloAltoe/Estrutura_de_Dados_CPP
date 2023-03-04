#include <bits/stdc++.h>
#include <locale>
#include <iostream>
#include <cstdlib>

using namespace std;

int num_digitos(int n1)
{
    int cont=0;

    if(n1!=0){
        cont++;
        num_digitos(n1/10);
    }

    return cont;
}

int main(){
	
	int num, contador;
  
    cout << "Programa para contar o numero de digitos: ";
    cout << "Insira o numero: ";
    cin >> num;

    contador = num_digitos(num);

    cout << "Quantidade de digitos =" << contador;
 return 0; 
}
