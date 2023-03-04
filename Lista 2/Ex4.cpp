#include <locale>
#include <iostream>
#include <cstdlib>

using namespace std;

struct triangulo {
	int a=0, b=0, c=0, d=0, e=0, f=0;
};

triangulo func(triangulo x) {
	cout << "Digite os 3 lados do primeiro triangulo" << endl;

	cin >> x.a;
	cin >> x.b;
	cin >> x.c;

	cout << "Digite os 3 lados do segundo triangulo" << endl;

	cin >> x.d;
	cin >> x.e;
	cin >> x.f;

	return x;
}


int main() {

	triangulo triangulos;

	triangulos = func(triangulos);

	if(triangulos.a == triangulos.b && triangulos.b == triangulos.c) {
		cout << "é equilatero" << endl;
	} else if(triangulos.a != triangulos.b && triangulos.b != triangulos.c) {
		cout << "é escaleno" << endl;
	} else {
		cout << "é isóceles" << endl;
	}

	return 0;
}
