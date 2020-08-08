#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



int main() {
	int n, c;
	while (cin >> c >> n) {
		vector<int> cromos(n+2);
		cromos[0] = 0;
		cromos[n+1] = c+1;
		for (int i = 0; i < n; i++) cin >> cromos[i+1];
		sort(cromos.begin(), cromos.end());
		int minim = c;
		for (int i = 0; i < n+1; i++) {
			if (cromos[i] + (c+1 - cromos[i+1]) < minim) minim = cromos[i] + (c+1 - cromos[i+1]);
		}
		cout << minim << endl;
	}
}

			
