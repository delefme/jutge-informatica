#include <iostream>
using namespace std;

void pattern(char x) {
	if (x == 'a') cout << x;
	else {
		cout << x;
		for (int i = 0; i < (x - 'a'); i++) {
			pattern(x - 1);
			cout << x;
		}
	}
}


int main() {
	char x;
	cin >> x;
	pattern(x);
	cout << endl;
}
