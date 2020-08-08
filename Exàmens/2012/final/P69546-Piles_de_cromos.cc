#include <iostream>
#include <vector>
using namespace std;
using pila = vector<string>;
using piles = vector<pila>;

int main() {
	int n;
	while (cin >> n) {
		piles cromos(n);
		vector<int> caramels(n, 0);
		for (int i = 0; i < n; i++) {
			string cromo;
			while (cin >> cromo and cromo != "FI") cromos[i].push_back(cromo);
		}
		int dona, rep, cromo;
		while (cin >> rep >> dona >> cromo and not (dona == 0 and rep == 0 and cromo == 0)) {
			rep--; dona--;
			int compt = 0;
			while (compt < cromo and cromos[dona].size() != 0) {
				cromos[rep].push_back( cromos[dona][cromos[dona].size()-1] );
				cromos[dona].pop_back();
				compt++;
			}
			caramels[dona] += cromo-compt;
		}
		for (int i = 0; i < n; i++) {
			cout << caramels[i];
			for (int j = cromos[i].size()-1; j >= 0; j--) {
				cout << ' ' << cromos[i][j];
			}
			cout << endl;
		}
		cout << "----------" << endl;
	}
}
