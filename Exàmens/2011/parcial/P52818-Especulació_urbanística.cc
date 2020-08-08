#include <iostream>
using namespace std;



int main() {
	int n;
	while (cin >> n) {
		int parceles = 0;
		char c;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cin >> c;
				if (c == 'D' and (i == n-1 or i == 0)) parceles++;
				else if (c == 'D' and (j == n-1 or j == 0)) parceles++;
				else if (c == 'D' and i == j) parceles++;
				else if (c == 'D' and i+j == n-1) parceles++;
			}			
		}
		cout << parceles << endl;
	}
}
