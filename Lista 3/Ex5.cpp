#include <iostream>
#include <locale>
#include <cstdlib>

using namespace std;

int main(){
		
	int count = 30, *temp, sum = 2;
	temp = &count;
	*temp = 20;
	temp = &sum;
	*temp = count;
	cout <<  " count = " << count << "*temp = " << *temp << "sum = " << sum;
	
	// 	count = 20
	// 	*temp = 20
	// 	sum = 20

}




