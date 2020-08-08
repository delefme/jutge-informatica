#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct num {
	int n, div, dig;
	bool operator<(const num& b) {
		if (div == b.div and dig == b.dig) return n < b.n;
		else if (div == b.div) return dig > b.dig;
		return div > b.div;
	}
};

int numdig(int n) {
	int dig = 1;
	while (n >= 10) {
		dig++;
		n /= 10;
	}
	return dig;
}


int numdiv(int n) {
	int div = 1;
	if (n == 1) return 1;
	for (int i = 2; i*i <= n; i++) {
		int q = 1;
		while (n%i == 0) {q++; n /= i;}
		div *= q;
	}
	if (n != 1) div *= 2;
	return div;
}
		


int main() {
	int n;
	while (cin >> n) {
		vector<num> v(n);
		for (int i = 0; i < n; i++) {
			cin >> v[i].n;
			v[i].div = numdiv(v[i].n);
			v[i].dig = numdig(v[i].n);
		}
		sort(v.begin(), v.end());
		for (num a : v) cout << a.n << ' ' << a.div << endl;
		cout << "----------" << endl;
	}
}
			
