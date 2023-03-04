#include <iostream>
#include <cstdlib>
#include <locale.h>
#include <sstream>

using namespace std;


int main(){

	char f1[30], f2[30];
	char *ptr;
	
	ptr = f1;
	
	cout << "digite a frase 1: ";
	cin >> f1;
	cout << "digite a frase 2: ";
	cin >> f2;
	
	cout << *ptr;
	
	
	

	return 0;
}
