#include <iostream>
using namespace std;


int main() {
	int a, b;
	cin >> a >> b;
	int suma = 0;
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
		char n;
		cin >> n;
		int x = n - '0';
		suma = suma + x;
		}
	}
	cout << suma << endl;;
}
