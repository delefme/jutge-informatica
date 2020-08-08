#include <iostream>
#include <vector>
using namespace std;


int main() {
	int m = 1e6 + 1;
	vector<int> garbell(m, 0);
	vector<bool> used(m, false);
	for (int i = 2; i < m; i++) {
		if (not used[i]) {
			for (int j = i; j < m; j += i) {
				garbell[j] += i;
				used[j] = true;
			}
		}
	}
	int n;
	while (cin >> n) cout << garbell[n] << endl;
}
