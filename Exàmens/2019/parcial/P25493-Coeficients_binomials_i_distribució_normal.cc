#include <iostream>
using namespace std;

int numdig(int n) {
	if (n < 10) return 1;
	return 1 + numdig(n/10);
}


int sobre(int n, int k) {
	int coef = 1;
	for (int i = k - 1; i >= 0; --i) {
		coef = coef*(n - i);
		coef = coef/(k - i);
	}
	return coef;
}

int main() {
	int n;
	cin >> n;
	int max = sobre(n, n/2);
	int d = (max + 34)/35;
	int dig = numdig(max);
	for (int k = 0; k <= n; k++) {
		int x = sobre(n, k);
		for (int i = 0; i < dig - numdig(x); i++) cout << ' ';
		cout << x << '|';
		for (int i = 0; i < x/d; i++) cout << 'X';
		cout << endl;
	}
}
			
