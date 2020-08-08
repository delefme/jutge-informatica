#include <iostream>
#include <vector>
using namespace std; 


using filac = vector<char>;
using matriuc = vector<filac>;
using filai = vector<int>;
using matriui = vector<filai>;

int main() {
	int f, c;
	while (cin >> f >> c) {
		matriuc ac(f, filac(c));
		for (int i = 0; i < f; i++) {
			for (int j = 0; j < c; j++) cin >> ac[i][j];
		}
		matriui ai(f, filai(c));
		for (int i = 0; i < f; i++) {
			for (int j = 0; j < c; j++) cin >> ai[i][j];
		}
		int n; cin >> n;
		for (int l = 0; l < n; l++) {
			string s;
			cin >> s;
			int m = s.size();
			int max = 0;
			bool found = false;
			for (int i = 0; i < f; i++) {
				for (int j = 0; j < c - m + 1; j++) {
					bool pattern = true;
					int suma = 0;
					for (int k = j; k < j+m and pattern; k++) {
						if (ac[i][k] != s[k-j]) pattern = false;
						else suma += ai[i][k];
					}
					if (pattern and suma >= max) {max = suma; found = true;}
				}
			}
			for (int j = 0; j < c; j++) {
				for (int i = 0; i < f - m + 1; i++) {
					bool pattern = true;
					int suma = 0;
					for (int k = i; k < i+m and pattern; k++) {
						if (ac[k][j] != s[k-i]) pattern = false;
						else suma += ai[k][j];
					}
					if (pattern and suma >= max) {max = suma; found = true;}
				}
			}
			if (not found) cout << "no";
			else cout << max;
			cout << endl;
		}
	}
}
		
				
