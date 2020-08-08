#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<bool> garbell(1000001, false);
	for (int i = 2; i*i <= 1000001; i++) {
		if (not garbell[i]) {
			for (int j = i*i; j <= 1000001; j *= i) {
				if (not garbell[j])	garbell[j] = true;
			}
		}
	}
	int n;
	while(cin >> n) {
		cout << n << ' ';
		if (garbell[n]) cout << "yes";
		else cout << "no";
		cout << endl;
	}	
}
