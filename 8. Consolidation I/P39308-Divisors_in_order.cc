#include <iostream>
using namespace std;


void divisorsorder(int n, int i) {
	bool found = false;
	while (not found and i*i <= n) {
		if (n%i == 0) {
			cout << ' ' << i;
			divisorsorder(n, i+1);
			if (i*i != n) cout << ' ' << n/i;
			found = true;
		}
		i++;
	}
}

int main() {
	int n; 
	while (cin >> n) {
		int i = 1;
		cout << "divisors of " << n << ":";
		divisorsorder(n, i);
		cout << endl;
	}
}
