#include <iostream>
#include <locale>
#include <cstdlib>

using namespace std;

int main(){
	
	
	int arr[5] = { 10, 80, 40, 30, 20 };
	int *parr = &arr[4];
	int inx = 0;
	inx = *parr++;
	
	cout << inx << endl;
	
	cout << *parr << endl;
	
	//sim
	
	//20
	
	//20, &arr[5]

	
	
}
