#include <iostream>
using namespace std;

int mcd(int a, int b) {
	int aux = b;
	if (a < b) {
		b = a;
		a = aux;
	}
	if (b == 0) return a;
	else {
		int r = a%b;
		while (r != 0) {
			a = b;
			b = r;
			r = a%r;
	}	
	return b;
	}	
}

int main() {
	int x, y;
	while (cin >> x >> y) {
		int suma = 0;
		int aux = x
		while (
		cout << suma << endl;
	}
}
