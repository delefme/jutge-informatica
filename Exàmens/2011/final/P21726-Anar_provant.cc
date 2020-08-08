#include <iostream>
using namespace std;


int power(int x, int n) {
	if (n == 1) return x;
	if (n%2 == 0) {
		int y = power(x, n/2);
		return y*y;
	}
	int z = power(x, n/2);
	return x*z*z;
}


int main() {
	int b, c;
	while (cin >> b >> c) {
		int a = 2;
		int n = 2;
		bool found = false;
		while (not found) {
			int baux = b*b;
			int aaux = a*a;
			while (aaux + baux < c) {
				aaux *= a;
				baux *= b;
				n++;
			}
			if (aaux + baux == c) {
				cout << a << '^' << n << " + " << b << '^' << n << " = " << c << endl;  
				found = true;
			}
			else if (n == 2) {
				cout << "sense solucio per a " << b << ' ' << c << endl;
				found = true;
			}
			n = 2;
			a++;
		}
	}
}
}
