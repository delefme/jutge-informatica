#include <iostream>
#include <vector>
using namespace std;



int main() {
	int n;
	while (cin >> n) {
		vector<int> permu(n+1);
		for (int i = 1; i < n+1; i++) cin >> permu[i];
		int i = 1;
		int max = 0;
		vector<bool> usat(n+1, false);
		while (i < n+1) {
			int compt = 0;
			while (not usat[i]) {
				usat[i] = true;
				i = permu[i];
				compt++;
			}
			if (compt > max) max = compt;
			i++;
		}
		cout << max << endl;
	}
}
		
