#include <iostream>
#include <cstdlib>
#include <locale.h>
#include <sstream>

using namespace std;


int main(){
	
	int n, temp, *pi, *ptr, ctrl = 0, num[9], mat[3][3];
	
	for (int i= 0; i < 9; i++){
		
		cout << "Informe o número: " << endl;
		cin >> n;
		
		pi = &n;
		num[i] = *pi;
	}
	

    for(int i=0; i<(9-1); i++)
    {
    	for (int j=0; j<(9-i-1); j++)
    	{
        	if (num[j] > num[j+1])
            {
            	temp = num[j];
            	num[j] = num[j+1];
            	num[j+1] = temp;
            }
        }
    }
    

    for(int i=0; i < 3; i++)
    	for (int j=0; j < 3; j++)
    	{    		
    		mat[i][j] = num[ctrl];
    		ctrl++;
		}
		
	cout << endl << "Números ordenados pela Matriz" << endl;
    for(int i=0; i < 3; i++)
    {
    	for (int j=0; j < 3; j++)
		{
			ptr = &mat[i][j];
			cout << *ptr << ", ";
		}
		cout << endl;
	}
	cout << endl;
	
    
    cout << endl << "Números ordenados:" << endl;
	for (int i = 0; i < 9; i++){
		ptr = &num[i];
		cout << *ptr << ", ";
	}
	
	cout << endl;
	
	
	return 0;
	
}
