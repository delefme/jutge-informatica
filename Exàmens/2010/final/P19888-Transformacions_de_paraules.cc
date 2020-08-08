#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct parella {
	string first, second;
};

vector<string> parteix_seq(string& s, int len) {
	int m = s.size();
	vector<string> res(m - len + 1);
	for (int j = 0; j < m - len+1; j++) {
		string sub = "";
		for (int k = j; k < j+len; k++) {
			 sub.push_back(s[k]);
		}
		res[j] = sub;
	}
	return res;
}


bool subst_and_stop(string& s, int n, vector<parella>& subst) { 
	for (int i = 0; i < n; i++) {
		int len = subst[i].first.size();
		vector<string> substrings = parteix_seq(s, len);
		int m = substrings.size();
		for (int j = 0; j < m; j++) {
			if (substrings[j] == subst[i].first) {
				for (int k = j; k < j + int((subst[i].first).size()); k++) {
					s[k] = (subst[i].second)[k - j];
				}
				return true;
			}
		}
	}
	return false;
}

	

void printmatriu(vector< vector<string> >& substrings) {
	
	for (auto v : substrings) {
		for (auto s : v) cout << s << ' ';
		cout << endl;
	}
}

int main() {
	string s; cin >> s;
	int n; cin >> n;
	vector<parella> subst(n);
	for (int i = 0; i < n; i++) cin >> subst[i].first >> subst[i].second;
	int r; cin >> r;
	//printmatriu(substrings);
	int i = 0;
	while (subst_and_stop(s, n, subst) and i < r) {cout << s << endl; i++;}
}
	
