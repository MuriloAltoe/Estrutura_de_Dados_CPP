#include <iostream>
#include <locale>
#include <cstdlib>

using namespace std;

int func(int x){
	return x;
}

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int a=1, b=0 ,c;
	
	for(int i=0 ; i<15 ; i++){
		
		
		
		a = b;
		b = c;
		
		c = a + b;
		
	}
	
	cout << func(c) << endl;
	
}
