#include <bits/stdc++.h>
#include <locale>
#include <iostream>
#include <cstdlib>

using namespace std;


int soma_num(int num){

	int resultado;
	
	if (num == 1){
		return (1);
	}
	else{
		resultado = num + soma_num(num - 1);
	}
	return (resultado);
}

int main() 
{
   int num_N;
   int somatorio;
   
   setlocale(LC_ALL,"portuguese");

   cout << "Digite um n�mero: ";
   cin >> num_N; 
   somatorio = soma_num(num_N);
   cout << "O somat�rio dos n�meros de 1 at� " << num_N << " = " << somatorio;

 return 0; 
}

