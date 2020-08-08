#include <iostream>
using namespace std;

int gcd(int a, int b) {
	while (a != 0 and b != 0) {
		if (a > b) a = a%b;
		else b = b%a;
	}
	return a + b;
}

int main() {
	int f, c;
	while (cin >> f >> c) {
		int a = gcd(f-1, c-1);
		for (int i = 0; i < c+2; i++) cout << '#';
		cout << endl;
		for (int i = 0; i < f; i++) {
			cout << '#';
			for (int j = 0; j < c; j++) {
				int b = i + j;
				int d = i - j;
				if (b %(2*a) == 0) {
					cout << '0';
				}
				else if (d % (2*a) == 0) cout << '0';
				else cout << ' ';
			}
			cout << '#' << endl;
		}
		for (int i = 0; i < c+2; i++) cout << '#';
		cout << endl << endl;
	}
}
