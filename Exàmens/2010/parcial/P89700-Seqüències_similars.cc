#include <iostream>
using namespace std;



int main() {
	int n;
	int compt = 1;
	int suma = 0;
	int ultim = 0;
	while (cin >> n and n != 0) {
		suma += n;
		ultim = n;
	}
	while (cin >> n and n != 0) {
		int sumaact = n;
		int ultim2 = n;
		while (cin >> n and n != 0) {
			sumaact += n;
			ultim2 = n;
		}
		if (sumaact == suma and ultim2 == ultim) compt++;
	}
	cout << compt << endl;
}
	
