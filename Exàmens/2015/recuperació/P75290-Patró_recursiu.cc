#include <iostream>
using namespace std;



void patro_rec(int n) {
	if (n != 0) {
		patro_rec(n-1);
		cout << n;
		for (int i = 1; i < n; i++) cout << ' ' << n;
		cout << endl;
		patro_rec(n-1);
	}
}

int main() {
	int n;
	cin >> n;
	patro_rec(n);
}
