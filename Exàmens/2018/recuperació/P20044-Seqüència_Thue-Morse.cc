#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> seq(1,0);
	int n;
	while (cin >> n) {
		while (int(seq.size()) < n) {
			int m = seq.size();
			for (int i = 0; i < m; i++) {
				if (seq[i] == 0) seq.push_back(1);
				else seq.push_back(0);
			}
		}
		for (int i = 0; i < n; i++) cout << seq[i];
		cout << endl;	
	}
}
	
