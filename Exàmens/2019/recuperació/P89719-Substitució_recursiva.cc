#include <iostream>
using namespace std;

void subst(const string& s, int n, int m) {
	if (n != 0) {
		for (int i = 0; i < m; i++) {
			if (s[i] == 'c') subst(s, n-1, m);
			else cout << s[i];
		}
	}
	else {
		for (int i = 0; i < m; i++) {
			if (s[i] != 'c') cout << s[i];
		}
	}
}

int main() {
	string s;
	int n;
	while (cin >> s >> n) {subst(s, n, s.size()); cout << endl;}
}
