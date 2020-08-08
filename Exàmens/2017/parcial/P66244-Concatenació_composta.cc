#include <iostream>
using namespace std;

bool is_prime(int n) {
	for (int i = 2; i*i <= n; i++) {
		if (n%i == 0) return false;
	}
	return true;
}

int main() {
	int x;
	int aux = -1;
	int concat = -1;
	while (cin >> x)  {
		if (aux < 0) aux = x;
		else {
			int i = 10;
			while (i < x) i = i*10;
			if (not is_prime(aux*i + x) and concat < 0) concat = aux*i + x; 
			aux = x;		}
	}
	if (concat < 0) cout << "no";
	else cout << concat;
	cout << endl;
}
