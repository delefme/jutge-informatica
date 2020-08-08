#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

	
int main() {
	int n;
	while(cin >> n) {
		vector<int> preus(3*n);
		for (int i = 0; i < 3*n; i++) cin >> preus[i];
		sort(preus.begin(), preus.end());
		int i = 1;
		int j = 2;
		int preutotal = 0;
		while (j < 3*n and i < 3*n) {
			preutotal += preus[i] + preus[j];
			i += 3;
			j += 3;
		}
		cout << preutotal << endl;
	}
}
			
		
		
