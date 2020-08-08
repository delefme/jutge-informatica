#include <iostream>
using namespace std;

int main() {
	int n; //nombre seqüències
	cin >> n;
	char x, y;
	for (int i = 0; i < n; i++) {
		while (cin >> x and x != '.' and cin >> y) {
			int aux = x - '0';
			for (int j = 0; j < aux; j++) cout << y;
		}
	cout << endl;
	}
}
