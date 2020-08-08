#include <iostream>
using namespace std;

bool primes2(int n) {
	int compt = 0;
	int prod = 1;
	if (n == 1) return false;
	for (int i = 2; i*i <= n and compt < 3; i++) {
		if (n%i == 0) {
			compt++;
			n /= i;
			prod *= i;
		}
		if (compt >= 3 or n%i == 0) return false;
	}
	if (n != 1 and compt == 1) return true;
	if (compt < 2) return false;
	return false;
}

int main() {
	int n;
	while (cin >> n) {
		cout << n << ": ";
		if (primes2(n)) cout << "yes";
		else cout << "no";
		cout << endl;
	}
}
