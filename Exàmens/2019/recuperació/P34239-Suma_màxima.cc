#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int abs(int x) {
	if (x < 0) return -x;
	return x;
}


int main() {
	int n, d;
	while (cin >> n >> d) {
		vector<int> v(n);
		for (int i = 0; i < n; i++) cin >> v[i];
		sort(v.begin(), v.end());
		int suma = v[n-1];
		int ultim = n-1;
		for (int i = n-2; i >= 0; i--) {
			if (abs(v[i] - v[ultim]) >= d) {suma += v[i]; ultim = i;}
		}
		cout << suma << endl;
	}
}
