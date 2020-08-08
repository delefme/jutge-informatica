#include <iostream>
using namespace std;

int main() {
	char x;
	bool a = false;
	while (cin >> x and x!= '.') {
		if (x == 'a') a = true;
	}
	if (a) cout << "yes";
	else cout << "no";
	cout << endl;
}
