#include <iostream>
using namespace std;

bool is_hamm(int n) {
	while (n%2 == 0) n = n/2;
	while (n%3 == 0) n = n/3;
	while (n%5 == 0) n = n/5;
	if (n == 1) return true;
	return false;
}

int main() {
	int n;
	bool found = false;
	while (cin >> n and not found) {
		if (is_hamm(n)) {cout << n << endl; found = true;}
	}
	if (not found) cout << 0 << endl;
}
