#include <iostream>
using namespace std;


void print_lines(int n, int b, int i, bool& first, int f, int& rest, int rest0, int numdig) {
	if (n != 0) {
		print_lines(n/b, b, i+1, first, f, rest, rest0, numdig);
		cout << n%b;
		if (first and f == (numdig+1)-i) {
			cout << endl;
			first = false;
		}
		else if (rest == (numdig+1)-i) {
			cout << endl;
			rest += rest0;
		}
	}
}


int main() {
	int n, b, q;
	while (cin >> n >> b >> q) {
		bool first = true;
		int numdig = 1;
		int aux = n;
		while (aux >= b) {
			aux /= b;
			numdig++;
		}
		int rest = q;
		int rest0 = q;
		int f = numdig%q;
		rest += f;
		print_lines(n, b, 1, first, f, rest, rest0, numdig);
		cout << "----------" << endl;
	}
}
