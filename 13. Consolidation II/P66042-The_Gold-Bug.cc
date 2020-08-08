#include <iostream>
#include <vector>
#include <string>
using namespace std;

void convert(vector<char>& v, string& s) {
	int n = s.size();
	for (int i = 0; i < n; i++) {
		if (s[i] == '_') cout << ' ';
		else {
			int j = 0;
			bool found = false;
			while (not found) {
				if (s[i] == v[j]) found = true;
				++j;
			}
			cout << char('a' + j - 1);
		}
	}
	cout << endl;
}


int main() {
	int n;
	string frase;
	vector<char> alfabet('z' - 'a');
	while (cin >> alfabet[0]) {
		for (int i = 1; i < 26; i++) cin >> alfabet[i];
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> frase;
			convert(alfabet, frase);
		}
		cout << endl;
	}
}
