#include <iostream>
#include <vector>
using namespace std;


int main() {
	vector<int> garbell(1e6 + 1, 0);
	int m = 1e6 + 1;
	for (int i = 1; i < m; i++) {
		for (int j = i; j < m; j += i) garbell[j]++;
	}
	int n;
	while (cin >> n) cout << garbell[n] << endl;
}
