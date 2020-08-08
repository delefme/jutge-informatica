#include <iostream>
#include <vector>
using namespace std;
using fila = vector<bool>;
using matriu = vector<fila>;


int main() {
	string s;
	while (cin >> s) {
		int l = s.size();
		matriu obstacles(2*l+1, fila(2*l+1, false));
		int i = l;
		int j = l;
		int n;
		cin >> n;
		int a, b;
		for (int p = 0; p < n; p++) {
			cin >> a >> b;
			if (a <= l and a >= -l and b <= l and b >= -l) {
				obstacles[b+l][a+l] = true;
			}
		}
		for (int k = 0; k < l; k++) {
			if (s[k] == 'N') {
				if (not obstacles[i+1][j]) i++;
			}
			else if (s[k] == 'S') {
				if (not obstacles[i-1][j]) i--;
			}
			else if (s[k] == 'E') {
				if (not obstacles[i][j+1]) j++;
			}
			else {
				if (not obstacles[i][j-1]) j--;
			}
		}
		cout << '(' << j-l << ", " << i-l << ')' << endl;
	}
}
