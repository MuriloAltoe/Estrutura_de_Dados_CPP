#include <iostream>
#include <locale>
#include <cstdlib>

using namespace std;

int main(){
	for(int n=1 ; n<=10 ; n++){
		for(int t=1 ; t<=10 ; t++){
			cout << n <<"x" << t << "=" << n*t << endl;
		}
	}
}
