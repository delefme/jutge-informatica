#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
	int n;
	while (cin >> n) {
		vector<int> v(n);
		for (int i = 0; i < n; i++) cin >> v[i];
		int q; cin >> q;
		for (int i = 0; i < q; i++) {
			int m; cin >> m;
			if (i != 0) cout << ' ';
			int maxseq = 0;
			int seq = 0;
			for (int j = 0; j < n; j++) {
				 if (v[j] == m) {
					 while (j < n and v[j] == m) {seq++; j++;}
					 if (maxseq < seq) maxseq = seq;
				}
				seq = 0;
			}
			cout << maxseq;
		}
		cout << endl;
	}
}
