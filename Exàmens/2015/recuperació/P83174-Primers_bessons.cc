#include <iostream>
#include <vector>
using namespace std;


int main() {
	int n; cin >> n;
	vector<bool> garbell(n+1, true);
	for (int i = 2; i < n+1; i++) {
		if (garbell[i]) {
			for (int j = i+i; j < n+1; j += i) garbell[j] = false;
		}
	}
	for (int i = 2; i < n-1; i++) {
		if (garbell[i] and garbell[i+2]) cout << i << ' ' << i+2 << endl;
	}
}
