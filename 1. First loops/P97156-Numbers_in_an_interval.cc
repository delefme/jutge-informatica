#include <iostream>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	if (a < b) {
		int i = a;
		while (i <= (b-1)) {
			cout << i << ",";
			i = i+1;
		}
	cout << b << endl;
	}
	
	if (a == b) cout << a << endl;
	
	if (a > b) cout << endl;
}
