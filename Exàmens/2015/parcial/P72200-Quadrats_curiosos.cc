#include <iostream>
using namespace std;


int main() {
	int n;
	int k = 0;
	while (cin >> n) {
		if (k != 0) cout << endl;
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= i; j++) cout << (n-i)%10;
			for (int j = i+1; j <= n; j++) cout << (n-j)%10;
			cout << endl;
		}
		k++;
	}
}	
