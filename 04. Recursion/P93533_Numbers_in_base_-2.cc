#include <iostream>
using namespace std;

void baseneg(int n) {
	if (n/-2 != 0 or n == -1) {
		if (n%-2 < 0) baseneg((n/-2)+1);
		else baseneg(n/-2);
	}
	if (n%-2 < 0) cout << -(n%-2);
	else cout << n%-2;
}


int main() {
	int n;
	while (cin >> n) {
		cout << n << ": ";
		baseneg(n);
		cout << endl;
	}
}
