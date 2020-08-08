#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


bool es_primer(int n) {
	if (n == 0 or n == 1) return false;
	for (int i = 2; i*i <= n; i++) {
		if (n%i == 0) return false;
	}
	return true;
}

struct numero {
	int n;
	bool primer;
	int freq;
	bool operator<(const numero& b) {
		if (freq == b.freq and primer == b.primer) return n > b.n;
		else if (freq == b.freq) return primer;
		return freq > b.freq;
	}
};



int main() {
	int n;
	while (cin >> n) {
		vector<int> v(n);
		for (int i = 0; i < n; i++) cin >> v[i];
		sort(v.begin(), v.end());
		if (n != 0) {
			vector<numero> u;
			u.push_back({v[0], es_primer(v[0]), 1});
			for (int i = 1; i < n; i++) {
				while (i < n and v[i] == u[u.size()-1].n) {i++; u[u.size()-1].freq++;}
				if (i < n) u.push_back({v[i], es_primer(v[i]), 1});
			}
			sort(u.begin(), u.end());
			for (numero a : u) cout << a.n << endl;
		}
		cout << "----------" << endl;
	}
}
