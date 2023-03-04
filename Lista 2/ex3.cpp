#include <iostream>
#include <locale>
#include <cstdlib>
#include <math.h>

using namespace std;

struct pontos{
	double a, b;
};

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	pontos cord1, cord2;
	float resp;
	
	cout << "digite o valor da cordenada 1: " << endl;
	cin >> cord1.a;
	cin >> cord1.b;
	
	cout << "digite o valor da cordenada 2: " << endl;
	cin >> cord2.a;
	cin >> cord2.b;
	
	resp = sqrt(pow((cord2.a - cord1.a),2) + pow((cord2.b - cord1.b),2));
	
	cout << "Resposta: " << resp;
	
	
}
