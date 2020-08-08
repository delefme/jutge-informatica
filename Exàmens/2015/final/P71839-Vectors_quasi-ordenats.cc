#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


void posicions(const vector<int>& V, int& e, int& d) {
	int n = V.size();
	e = -1;
	d = -1;
	for (int i = n-1; i >= 0 and d == -1; i--) {
		if (V[i] < V[i-1]) d = i;
	}
	for (int i = 0; i < n and e == -1; i++) {
		if (V[i] > V[i+1]) e = i;
	}
}

int main() {
  int n;
  while (cin >> n) {
    vector<int> V(n);
    int e, d;
    for (int i = 0; i < n; ++i) cin >> V[i];
    posicions(V, e, d);
    cout << e << ' ' << d << endl;
  }
}
