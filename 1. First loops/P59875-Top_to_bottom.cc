#include <iostream>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	if (a < b) {
		int i = b;
		while (i >= a) {
			cout << i << endl;
			i = i-1;
		}
	}
	if (a > b) {
		int i = a;
		while (i >= b) {
			cout << i << endl;
			i = i-1;
		}
	}
	
	if (a == b) cout << a << endl;
}
