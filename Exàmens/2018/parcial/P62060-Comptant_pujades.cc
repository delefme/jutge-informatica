#include <iostream>
using namespace std;

int main() {
	int x;
	int aux_x = -1;
	int aux_pujada = 0;
	int pujada = 0; 
	while (cin >> x) {
		if (x <= aux_x) pujada = 1;
		else if (x > aux_x) pujada++;
		if (pujada > aux_pujada) aux_pujada = pujada;
		aux_x = x;
	}
	cout << aux_pujada << endl;
}
	
	
	
