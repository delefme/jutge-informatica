#include <iostream>
#include <cmath>
using namespace std;


void printline(int n) {
	for (int i = 0; i < n; i++) cout << 'X';
	cout << endl;
}

void printspace(int n) {
	for (int i = 0; i < n; i++) cout << ' ';
}

int main() {
	int n; 
	while (cin >> n) {
		int j = 0;
		for (int i = 1; i < n; i++) {
			printspace(n-i);
			printline(n + j);
			j += 2;
		}
		for (int i = 0; i < n; i++) {
			printline(n + 2*(n-1));
		}
		j = 2;
		for (int i = n-1; i > 0; i--) {
			printspace(n-i);
			printline(3*n - 2 - j);
			j += 2;
		}
		cout << endl;
	}
}
