#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct wordfreq {
	string word;
	int freq;
	bool operator<(const wordfreq& b) {
		if (freq == b.freq) return word < b.word;
		return freq > b.freq;
	}
};


int main() {
	int n, k;
	while (cin >> n >> k) {
		vector<string> v(n);
		for (int i = 0; i < n; i++) cin >> v[i];
		sort(v.begin(), v.end());
		vector<wordfreq> u(n);
		u.push_back({v[0], 1});
		for (int i = 1; i < n; i++) {
			while (i < n and v[i] == u[u.size()-1].word) {i++; u[u.size()-1].freq++;}
			if (i < n) u.push_back({v[i], 1});
		}
		sort(u.begin(), u.end());
		for (int i = 0; i < k; i++) cout << u[i].word << endl;
		cout << "----------" << endl;
	}
}
