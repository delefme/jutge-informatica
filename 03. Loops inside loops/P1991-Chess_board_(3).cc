#include <iostream>
using namespace std;

int main() {
	int a;
	cin >> a;
	int suma = 0;
	int aux1 = 1;
	int aux2 = a;
	for (int i = 1; i <= a; i++) {
		for (int j = 1; j <= a; j++) {
			if (j == aux1 or j == aux2) {
				char n;
				cin >> n;
				int x = n - '0';
				suma = suma + x;
			}
			else {
				char n;
				cin >> n;
			}
		}
		aux1 = aux1+1;
		aux2 = aux2-1;
	}
	cout << suma << endl;
}
